// FUN_00f27a6c @ 00f27a6c size=312 calls_out=3 calls_in=2
// strings: 

void FUN_00f27a6c(uint *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  iVar2 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar2 = *param_1 - 3;
  }
  if (iVar2 == 1) {
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    iVar2 = -(uVar5 + (uVar4 >= 4));
    iVar1 = 0;
    if ((uint)(uVar4 < 4) <= -uVar5) {
      iVar1 = uVar4 - 3;
    }
    if (iVar1 == 1) {
      uVar4 = param_1[4];
      puVar7 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar7;
      iVar2 = 0;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar4);
        iVar2 = extraout_r1_02;
      }
      if (puVar7[1] != 0) {
        thunk_FUN_01be4678(uVar4);
        iVar2 = extraout_r1_03;
      }
    }
    else if (iVar1 == 0) {
      uVar6 = param_1[0x26];
      puVar7 = (undefined4 *)param_1[0x27];
      pcVar3 = (code *)*puVar7;
      iVar2 = 0;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar6);
        iVar2 = extraout_r1;
      }
      if (puVar7[1] != 0) {
        thunk_FUN_01be4678(uVar6);
        iVar2 = extraout_r1_00;
      }
      if (uVar4 != 3 || uVar5 != 0) {
        FUN_00ebabdc(param_1 + 2);
        iVar2 = extraout_r1_01;
      }
    }
    if ((9 < (byte)param_1[0x2c]) && (param_1[0x2e] != 0)) {
      thunk_FUN_01be4678(param_1[0x2d],iVar2);
    }
    if (param_1[0x28] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00f27b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x28] + 0x10))(param_1 + 0x2b,param_1[0x29],param_1[0x2a]);
      return;
    }
  }
  else if (iVar2 == 0) {
    FUN_00d31b70(param_1 + 0x2a);
    if (*param_1 == 3 && param_1[1] == 0) {
      return;
    }
    FUN_01839f10(param_1);
    FUN_009d5b68(param_1 + 0x22);
    return;
  }
  return;
}

