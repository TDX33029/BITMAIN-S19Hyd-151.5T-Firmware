// FUN_0121a0fc @ 0121a0fc size=100 calls_out=5 calls_in=0
// strings: 

void FUN_0121a0fc(int param_1)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  bool bVar2;
  
  FUN_007ac02c(param_1 + 0x38);
  FUN_012032a4(param_1 + 0x38);
  FUN_007ac0e8(param_1 + 0x1088);
  iVar1 = extraout_r1;
  if (*(int *)(param_1 + 0x10bc) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x10b8));
    iVar1 = extraout_r1_00;
  }
  bVar2 = *(int *)(param_1 + 0x10e0) != 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x10e4);
  }
  if (bVar2 && iVar1 != 0) {
    thunk_FUN_01be4678();
    return;
  }
  return;
}

