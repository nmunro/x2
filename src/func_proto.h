static GtkWidget *New( GtkWidget *widget, GtkWidget *notebook );
static void Open( GtkWidget *widget, GtkWidget *notebook );
static void SaveAs( GtkWidget *widget, GtkWidget *notebook );
static void Save( GtkWidget *widget, GtkWidget *notebook );
static void Undo( GtkWidget *widget, GtkWidget *notebook );
static void Redo( GtkWidget *widget, GtkWidget *notebook );
static void Cut( GtkWidget *widget, GtkWidget *notebook );
static void Copy( GtkWidget *widget, GtkWidget *notebook );
static void Paste( GtkWidget *widget, GtkWidget *notebook );
static void Jump( GtkWidget *widget, GtkWidget *notebook );
static void Find( GtkWidget *widget, GtkWidget *notebook );
static void Replace( GtkWidget *widget, GtkWidget *notebook );
static void Cmd( GtkWidget *widget, GtkWidget *notebook );
static void close_prefs( GtkWidget *widget, struct prefs *pref );
static void save_prefs( GtkWidget *widget, struct prefs_data *pd );
struct settings *load_prefs( );
static void reload_prefs( struct prefs_data *pd );
static void Enable_Programming_Check_Buttons( GtkWidget *widget, struct prefs *pref );
static void Prefs( GtkWidget *widget, struct prefs_data *pd );
static void Close( GtkWidget *widget, struct str_data *tmp );
static void BufferChanged( GtkWidget *widget, struct node *tmp );
static gboolean destroy( GtkWidget *widget, GdkEvent *event, GtkWidget *notebook );
static void drag_data_received_handler( GtkWidget *widget, GdkDragContext *context, gint x, gint y, GtkSelectionData *selection_data, guint target_type, guint time, GtkWidget *notebook );
static void set_default_prefs( );
static void highlight_code( struct node *tmp );
static void write_file( struct node *tmp );
static void S1( GtkEntry *entry, GtkEntryIconPosition icon_pos, GdkEvent *event, struct search_data *sd );
static void S2( GtkEntry *entry, struct search_data *sd );
static void C1( GtkEntry *entry, GtkEntryIconPosition icon_pos, GdkEvent *event, struct search_data *sd );
static void C2( GtkEntry *entry, struct search_data *sd );
static void G1( GtkEntry *entry, GtkEntryIconPosition icon_pos, GdkEvent *event, struct node *tmp );
static void G2( GtkEntry *entry, struct node *tmp );
static void Search( struct search_data *sd );
static void Change( struct search_data *tmp );
static void go_to_line( struct node *tmp );
static void Set_Title( GtkWidget *notebook, gpointer page, guint page_num, gpointer user_data );
static void Template( GtkWidget *widget, GtkWidget *notebook );
static void Populate_CMB( GtkWidget *cmb );
static void LoadTemplate( );
static void SaveTemplate( GtkWidget *widget, GtkWidget *notebook );
static void Catch_Keypress( GtkWidget *widget, GdkEvent *event, GtkWidget *notebook );