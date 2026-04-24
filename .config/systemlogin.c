#include <gtk/gtk.h>
#include "de.1.c"
// Callback to handle the login logic
static void on_login_attempt(GtkWidget *widget, gpointer data) {
    GtkEntry *entry = GTK_ENTRY(data);
    const gchar *input_text = gtk_entry_get_text(entry);

    // Logical Checkpoint: Replace "fuga" with your actual desired password
    if (g_strcmp0(input_text, "PUTPASSWORD") == 0) {
        g_print("STATUS: Access Granted.\n");
        de();
    } else {
        g_print("ERROR: Parity mismatch.\n");
        gtk_entry_set_text(entry, ""); 
    }
}

int _start(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *label;
    GtkWidget *entry;
    GtkWidget *button;

    // 1. Initialize the GTK Handshake
    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Ezosuace login");
    gtk_window_set_default_size(GTK_WINDOW(window), 350, 200);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_container_set_border_width(GTK_CONTAINER(window), 25);

    // 3. Create a Vertical Box for Atomic Alignment
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 15);
    gtk_container_add(GTK_CONTAINER(window), box);

    // 4. Add the Instructions
    label = gtk_label_new("ID VALIDATION REQUIRED");
    gtk_box_pack_start(GTK_BOX(box), label, FALSE, FALSE, 0);


    entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry), "Access Code...");
    gtk_entry_set_visibility(GTK_ENTRY(entry), FALSE); 
    gtk_box_pack_start(GTK_BOX(box), entry, FALSE, FALSE, 0);

    // 6. The Activation Trigger
    button = gtk_button_new_with_label("OPEN");

    g_signal_connect(button, "clicked", G_CALLBACK(on_login_attempt), entry);
  
    g_signal_connect(entry, "activate", G_CALLBACK(on_login_attempt), entry);
    
    gtk_box_pack_start(GTK_BOX(box), button, FALSE, FALSE, 0);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // 8. Execute Logic
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}

    return 0;
}
  
