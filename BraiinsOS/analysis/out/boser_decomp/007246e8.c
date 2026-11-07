// FUN_007246e8 @ 007246e8 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_007246e8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 2) {
    if (*param_1 != 0) {
      return;
    }
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      iVar1 = param_1[1];
      iVar2 = iVar1;
      do {
        FUN_007243f0(iVar2);
        iVar2 = iVar2 + 0x28;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      thunk_FUN_01be4678(iVar1);
    }
    if (param_1[4] != 0) {
      thunk_FUN_01be4678(param_1[3]);
      return;
    }
  }
  return;
}

