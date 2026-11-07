// FUN_01ae60f8 @ 01ae60f8 size=208 calls_out=2 calls_in=0
// strings: 

void FUN_01ae60f8(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  int *local_10;
  undefined1 *local_c;
  
  local_18 = (int *)&local_28;
  local_10 = (int *)&local_28;
  if (*param_1 == -0x80000000) {
    if (param_1[1] == -0x80000000) {
      FUN_019a7d7c(param_1 + 4);
      return;
    }
    local_28 = param_1 + 4;
    local_1c = param_1[3];
    local_20 = param_1[2];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_18 = &local_20;
    puVar3 = &DAT_005a0c2d;
    local_c = &LAB_006e1cd8;
  }
  else {
    local_28 = (int *)param_1[4];
    iStack_24 = param_1[5];
    local_1c = param_1[2];
    local_20 = param_1[1];
    local_10 = &local_20;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_005ba441;
    local_c = &LAB_019ba78c;
  }
  local_14 = &LAB_019ba78c;
  FUN_012fa178(uVar1,uVar2,puVar3,&local_18);
  return;
}

