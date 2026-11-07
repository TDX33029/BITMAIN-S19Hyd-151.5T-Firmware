// FUN_0125fb10 @ 0125fb10 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_0125fb10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return;
  }
  iVar1 = *param_1;
  do {
    iVar2 = iVar2 + -1;
    if (*(short *)(iVar1 + 0x5e) != 0) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    *param_1 = iVar1;
    param_1[1] = iVar2;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    thunk_FUN_01be4678();
  } while (iVar2 != 0);
  return;
}

