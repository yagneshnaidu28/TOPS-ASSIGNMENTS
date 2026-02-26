import os

class Playlist:
    def __init__(self, name, songs):
        self.name = name
        self.songs = songs
        self.directory = "playlists"

    def save_to_file(self):
        # Create directory if it doesn't exist
        if not os.path.exists(self.directory):
            os.makedirs(self.directory)
            
        file_path = os.path.join(self.directory, f"playlist_{self.name}.txt")
        
        # Check for duplicates
        if os.path.exists(file_path):
            raise FileExistsError(f"A playlist named '{self.name}' already exists.")

        with open(file_path, "w") as f:
            f.write(self.songs)



import tkinter as tk
from tkinter import messagebox
import os

class MusicBoxApp:
    def __init__(self, root):
        self.root = root
        self.root.title("MusicBox - Manage Your Playlists")
        self.root.geometry("500x500")

        # UI Elements
        tk.Label(root, text="Playlist Name:").pack(pady=5)
        self.name_entry = tk.Entry(root, width=40)
        self.name_entry.pack()

        tk.Label(root, text="Song Titles (one per line):").pack(pady=5)
        self.songs_text = tk.Text(root, height=10, width=40)
        self.songs_text.pack()

        tk.Button(root, text="Save Playlist", command=self.save_playlist).pack(pady=10)

        tk.Label(root, text="Saved Playlists:").pack(pady=5)
        self.playlist_listbox = tk.Listbox(root, width=50)
        self.playlist_listbox.pack()
        self.playlist_listbox.bind('<<ListboxSelect>>', self.view_playlist)

        self.refresh_listbox()

    def save_playlist(self):
        name = self.name_entry.get().strip()
        songs = self.songs_text.get("1.0", tk.END).strip()

        if not name or not songs:
            messagebox.showerror("Error", "Please enter both a name and songs.")
            return

        try:
            new_playlist = Playlist(name, songs)
            new_playlist.save_to_file()
            messagebox.showinfo("Success", f"Playlist '{name}' saved!")
            self.refresh_listbox()
            self.clear_inputs()
        except FileExistsError as e:
            messagebox.showerror("Error", str(e))
        except Exception as e:
            messagebox.showerror("Error", f"An unexpected error occurred: {e}")

    def refresh_listbox(self):
        self.playlist_listbox.delete(0, tk.END)
        if os.path.exists("playlists"):
            files = [f for f in os.listdir("playlists") if f.endswith(".txt")]
            for f in files:
                self.playlist_listbox.insert(tk.END, f)

    def view_playlist(self, event):
        selection = self.playlist_listbox.curselection()
        if selection:
            filename = self.playlist_listbox.get(selection[0])
            try:
                with open(os.path.join("playlists", filename), "r") as f:
                    content = f.read()
                    self.songs_text.delete("1.0", tk.END)
                    self.songs_text.insert(tk.END, content)
                    # Extract name from filename playlist_Name.txt
                    name = filename.replace("playlist_", "").replace(".txt", "")
                    self.name_entry.delete(0, tk.END)
                    self.name_entry.insert(0, name)
            except FileNotFoundError:
                messagebox.showerror("Error", "File not found.")

    def clear_inputs(self):
        self.name_entry.delete(0, tk.END)
        self.songs_text.delete("1.0", tk.END)

if __name__ == "__main__":
    root = tk.Tk()
    app = MusicBoxApp(root)
    root.mainloop()