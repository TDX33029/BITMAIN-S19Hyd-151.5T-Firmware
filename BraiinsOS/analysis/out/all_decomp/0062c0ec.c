// FUN_0062c0ec @ 0062c0ec size=204 calls_out=1 calls_in=1
// strings: 

void FUN_0062c0ec(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = param_1[1];
    if (*(char *)(iVar2 + iVar1 + -1) != '/') {
      if (*param_1 == iVar1) {
        FUN_015bf41c();
        iVar2 = param_1[1];
        iVar1 = param_1[2];
      }
      *(undefined1 *)(iVar2 + iVar1) = 0x2f;
      iVar1 = iVar1 + 1;
      param_1[2] = iVar1;
    }
  }
  if ((uint)(*param_1 - iVar1) < 6) {
    FUN_015bf41c(param_1,iVar1,6,1,1);
    iVar1 = param_1[2];
  }
  iVar2 = param_1[1];
  param_1[2] = iVar1 + 6;
  *(undefined4 *)(iVar2 + iVar1) = 0x6265642e;
  *(undefined2 *)((undefined4 *)(iVar2 + iVar1) + 1) = 0x6775;
  return;
}

