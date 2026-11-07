// FUN_006afa00 @ 006afa00 size=144 calls_out=3 calls_in=16
// strings: 

void FUN_006afa00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x55555555 + 1;
    iVar1 = param_1[1];
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_007b7ba0(iVar1);
      iVar1 = iVar1 + 0xc;
    }
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  if (param_1[4] != 0) {
    FUN_00a864b0();
  }
  if (param_1[8] == 0) {
    return;
  }
  FUN_00a864b0(param_1 + 8);
  return;
}

