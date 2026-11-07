// FUN_013ba834 @ 013ba834 size=248 calls_out=3 calls_in=0
// strings: 

void FUN_013ba834(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = 0;
  if ((uint)(uVar1 < 4) <= -uVar2) {
    iVar3 = uVar1 - 3;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x013ba87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      return;
    }
    FUN_0142e6dc(param_1 + 2);
    return;
  }
  if (uVar1 == 3 && uVar2 == 0) {
    FUN_0142e6dc(param_1 + 2);
    uVar1 = param_1[0x12];
  }
  else {
    if ((9 < (byte)param_1[0x1b]) && (param_1[0x1d] != 0)) {
      thunk_FUN_01be4678(param_1[0x1c],uVar2,0,-(uVar2 + (uVar1 >= 4)));
    }
    if (1 < (byte)param_1[0x10]) {
      piVar4 = (int *)param_1[0x11];
      (**(code **)(*piVar4 + 0x10))(piVar4 + 3,piVar4[1],piVar4[2]);
      thunk_FUN_01be4678(piVar4);
    }
    (**(code **)(param_1[0x12] + 0x10))(param_1 + 0x15,param_1[0x13],param_1[0x14]);
    (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x19,param_1[0x17],param_1[0x18]);
    FUN_0142e6dc(param_1);
    uVar1 = param_1[0x20];
  }
  FUN_0178e884(uVar1);
  return;
}

