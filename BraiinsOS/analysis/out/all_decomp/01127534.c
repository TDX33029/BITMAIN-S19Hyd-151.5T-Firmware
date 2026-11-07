// FUN_01127534 @ 01127534 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_01127534(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (*param_1 != -0x7fffffeb) {
        FUN_01127318(param_1);
        FUN_01127318(param_1 + 4);
      }
      param_1 = param_1 + 8;
    } while (param_2 != iVar1);
  }
  return;
}

