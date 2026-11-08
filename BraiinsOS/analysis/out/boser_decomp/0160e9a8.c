// FUN_0160e9a8 @ 0160e9a8 size=80 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0160e9a8(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      if (*(char *)(*param_1 + iVar1) != ' ' && *(char *)(*param_1 + iVar1) != '\t') {
        FUN_01283ef4();
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (param_1[1] != iVar1);
  }
  param_1[1] = 0;
  return 0;
}

