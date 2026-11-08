// FUN_00f3c520 @ 00f3c520 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_00f3c520(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (*param_1 != -0x7fffffeb) {
        FUN_00f3c5bc(param_1);
        FUN_00f3c5bc(param_1 + 4);
      }
      param_1 = param_1 + 8;
    } while (param_2 != iVar1);
  }
  return;
}

