// FUN_007abf70 @ 007abf70 size=88 calls_out=5 calls_in=1
// strings: 

void FUN_007abf70(int param_1)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  bool bVar2;
  
  FUN_007ac02c();
  FUN_007a93e4(param_1);
  FUN_007ac0e8(param_1 + 0x1050);
  iVar1 = extraout_r1;
  if (*(int *)(param_1 + 0x1084) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x1080));
    iVar1 = extraout_r1_00;
  }
  bVar2 = *(int *)(param_1 + 0x10a8) != 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x10ac);
  }
  if (bVar2 && iVar1 != 0) {
    thunk_FUN_01be4678();
    return;
  }
  return;
}

