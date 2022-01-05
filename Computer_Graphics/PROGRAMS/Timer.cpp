 #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <string.h>
  #include <dos.h>

  int main() {
        int gdriver = DETECT, gmode, err;
        int i, midx, midy;
        char str[64];

        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
        err = graphresult();

        if (err != grOk) {
                printf("Graphics Error: %s\n",
                                grapherrormsg(err));
                return 0;
        }

        midx = getmaxx() / 2;
        midy = getmaxy() / 2;

        /* 60 second counter */
        for (i = 60; i > 0; i--) {
                setcolor(DARKGRAY);
                setfillstyle(SOLID_FILL, DARKGRAY);
                rectangle(midx - 100, midy - 100, midx + 100, midy + 100);
                floodfill(midx, midy, DARKGRAY);

                setcolor(WHITE);
                sprintf(str, "%s", "60 Sec Counter");
                settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
                settextjustify(CENTER_TEXT, CENTER_TEXT);
                moveto(midx, midy - 70);
                outtext(str);

                sprintf(str, "%d", i);
                moveto(midx, midy + 30);
                outtext(str);

                sleep(1);

                cleardevice();
        }

        setcolor(LIGHTRED);
        settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        moveto(midx, midy);
        sprintf(str, "Time's Up");
        outtext(str);

        getch();

        closegraph();
        return 0;
  }
