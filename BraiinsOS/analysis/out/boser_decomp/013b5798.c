// FUN_013b5798 @ 013b5798 size=184 calls_out=5 calls_in=1
// strings: 

void FUN_013b5798(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar1 == 6 && uVar2 == 0) {
    return;
  }
  iVar3 = 0;
  if ((uint)(uVar1 < 4) <= -uVar2) {
    iVar3 = uVar1 - 3;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x013b57ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      return;
    }
    FUN_0142e6dc(param_1 + 2);
    return;
  }
  if (uVar1 == 3 && uVar2 == 0) {
    FUN_0071227c(param_1 + 2);
    return;
  }
  if ((9 < (byte)param_1[0x1b]) && (param_1[0x1d] != 0)) {
    thunk_FUN_01be4678(param_1[0x1c],uVar2,0,-(uVar2 + (uVar1 >= 4)));
  }
  FUN_01a8c248(param_1 + 0x10);
  FUN_0142e6dc(param_1);
  FUN_0178e884(param_1[0x20]);
  return;
}

