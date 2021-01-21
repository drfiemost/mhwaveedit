bin_PROGRAMS = mhwaveedit

mhwaveedit_SOURCES = chunk.c int_box.c sound.c speeddialog.c              \
                     chunkview.c main.c um.c                              \
                     effectdialog.c mainwindow.c ringbuf.c                \
                     volumedialog.c float_box.c player.c                  \
                     sampleratedialog.c gtkfiles.c samplesizedialog.c     \
                     formatselector.c recorddialog.c vu_meter.c inifile.c \
                     configdialog.c combinechannelsdialog.c rawdialog.c   \
		     gotodialog.c pipedialog.c historybox.c viewcache.c   \
		     filetypes.c datasource.c statusbar.c effectbrowser.c \
		     soxdialog.c help.c ladspacore.c ladspadialog.c       \
		     tempfile.c listobject.c documentlist.c combo.c       \
		     rateconv.c dataformat.c rateest.c document.c         \
		     session.c mapchannelsdialog.c mainloop.c             \
		     recordformatcombo.c sandwichdialog.c bitmap.c        \
                     bitmap.h chunk.h chunkview.h combinechannelsdialog.h \
                     combo.h configdialog.h dataformat.h datasource.h     \
                     document.h documentlist.h effectbrowser.h            \
                     effectdialog.h filetypes.h float_box.h               \
                     formatselector.h gettext.h gotodialog.h gtkfiles.h   \
                     help.h historybox.h inifile.h int_box.h ladspacore.h \
                     ladspadialog.h listobject.h main.h mainloop.h        \
                     mainwindow.h mapchannelsdialog.h pipedialog.h        \
                     player.h rateconv.h rateest.h rawdialog.h            \
                     recorddialog.h recordformatcombo.h ringbuf.h         \
                     sampleratedialog.h samplesizedialog.h                \
                     sandwichdialog.h session.h sound.h soxdialog.h       \
                     speeddialog.h statusbar.h tempfile.h um.h            \
                     viewcache.h volumedialog.h vu_meter.h

EXTRA_mhwaveedit_SOURCES = int_box_marsh.c sound-alsalib.c sound-artsc.c  \
                           sound-dummy.c sound-esound.c sound-jack.c      \
                           sound-oss.c sound-portaudio.c sound-pulse.c    \
                           sound-sdl.c sound-sun.c float_box_marsh.c      \
                           convert_inc.c

EXTRA_DIST = button_bounce.xpm button_copy.xpm button_cursorend.xpm       \
             button_cursorstart.xpm button_cut.xpm button_delete.xpm      \
             button_follow.xpm button_loop.xpm button_mixer.xpm           \
             button_open.xpm button_paste.xpm button_pasteover.xpm        \
             button_play.xpm button_playselection.xpm button_record.xpm   \
             button_redo.xpm button_save.xpm button_stop.xpm              \
             button_undo.xpm icon.xpm hzoom.xbm speed.xbm vzoom.xbm

mhwaveedit_CPPFLAGS = @GTK_CFLAGS@ @SDL_CFLAGS@ @SNDFILE_CFLAGS@ @JACK_CFLAGS@ \
                      @ESOUND_CFLAGS@ @LIBSAMPLERATE_CFLAGS@ @ARTSC_CFLAGS@    \
                      @GTHREAD_CFLAGS@ @PULSE_CFLAGS@                          \
                      -DLOCALEDIR=\"$(localedir)\"

LDADD = @GTK_LIBS@ @SDL_LIBS@ @PORTAUDIO_LIBS@ @SNDFILE_LIBS@ @ALSALIB_LIBS@ \
        @JACK_LIBS@ @ESOUND_LIBS@ @LIBSAMPLERATE_LIBS@ @ARTSC_LIBS@ \
        @GTHREAD_LIBS@ @PULSE_LIBS@

localedir = $(datadir)/locale

CLEANFILES = *~ core core.* #*#
DISTCLEANFILES = .deps/*.P
