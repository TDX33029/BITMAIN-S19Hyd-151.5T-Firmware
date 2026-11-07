// FUN_00d318dc @ 00d318dc size=344 calls_out=5 calls_in=2
// strings: 

void FUN_00d318dc(uint *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
  if (iVar1 == 1) {
    uVar2 = param_1[2];
    iVar1 = 0;
    if ((uint)(uVar2 < 4) <= -param_1[3]) {
      iVar1 = uVar2 - 3;
    }
    if (iVar1 == 1) {
      uVar4 = param_1[4];
      puVar5 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar4,pcVar3,-(param_1[3] + (uint)(uVar2 >= 4)),3 - uVar2);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(uVar4);
      }
    }
    else if (iVar1 == 0) {
      uVar2 = param_1[0x26];
      puVar5 = (undefined4 *)param_1[0x27];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar2);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(uVar2);
      }
      FUN_00d31be0(param_1 + 2);
    }
    if ((9 < (byte)param_1[0x2c]) && (param_1[0x2e] != 0)) {
      thunk_FUN_01be4678(param_1[0x2d]);
    }
    if (param_1[0x28] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d31a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x28] + 0x10))(param_1 + 0x2b,param_1[0x29],param_1[0x2a]);
      return;
    }
  }
  else if (iVar1 == 0) {
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

