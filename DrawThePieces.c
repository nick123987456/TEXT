void DrawThePieces()
{
  //draw the all pieces
  //0:no piece is _
  //1:black piece is X
  //2:white piece is O

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {

      if (Allpiece[i][j] == 0)
      {
        printf("_ ");
      }
      if (Allpiece[i][j] == 1)
      {
        printf("X ");
      }
      if (Allpiece[i][j] == 2)
      {
        printf("O ");
      }
    }
    printf("\n");
  }
}