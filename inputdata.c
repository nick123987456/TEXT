void inputdata()
{ //input the position of x and y
  //0:no piece is _
  //1:black piece is X
  // 2:white piece is O

  // Allpiece[0][0] = 1;
  Allpiece[0][1] = 1;
  Allpiece[0][2] = 1;
  Allpiece[0][3] = 1;
  Allpiece[0][4] = 1;

  piececolor = (piecenumber % 2) + 1;
  piececolor == 1 ? printf("input X position:") : printf("input O position:");
  scanf("%d", &nowX);
  scanf("%d", &nowY);
  if (Allpiece[nowX][nowY] == 0 && !gameover)
  {
    Allpiece[nowX][nowY] = piececolor;
    piecenumber++;
    // if (whowin()!=0) {
    //   gameover=true;
    //   winner=whowin();
    // }
  }
}