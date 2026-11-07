// FUN_0120c038 @ 0120c038 size=156 calls_out=1 calls_in=0
// strings: 

void FUN_0120c038(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *local_14;
  uint **local_10;
  undefined1 *local_c;
  
  uVar3 = 1;
  if ((int)*param_1 < 0) {
    uVar3 = *param_1 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    local_14 = param_1 + 1;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_006e1cd8;
    puVar4 = &DAT_00597c57;
  }
  else if (uVar3 == 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_0121e35c;
    puVar4 = &DAT_005717cd;
    local_14 = param_1;
  }
  else {
    local_14 = param_1 + 1;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_0193a90c;
    puVar4 = &DAT_005a9953;
  }
  local_10 = &local_14;
  FUN_012fa178(uVar1,uVar2,puVar4,&local_10);
  return;
}

