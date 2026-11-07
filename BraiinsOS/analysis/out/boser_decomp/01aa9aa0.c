// FUN_01aa9aa0 @ 01aa9aa0 size=308 calls_out=3 calls_in=7
// strings: 

void FUN_01aa9aa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_30._0_4_ = param_3;
  local_30._4_4_ = param_4;
  if (*(char *)(param_1 + 1) == '\0') {
    puVar5 = (undefined4 *)*param_1;
    local_28 = FUN_01aa9a6c(param_2);
    local_20 = &local_28;
    local_14 = &LAB_01aeb5d0;
    local_1c = &LAB_018a13b8;
    uVar3 = puVar5[1];
    uVar2 = *puVar5;
    puVar4 = &DAT_0059574a;
    local_18 = (undefined1 *)&local_30;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    uVar6 = FUN_01aa9a6c(param_2);
    if (((int)((ulonglong)uVar6 >> 0x20) == 7) &&
       (iVar1 = thunk_FUN_01bed842((int)uVar6,&DAT_005325f1,7), iVar1 == 0)) {
      local_1c = &LAB_01aeb5d0;
      uVar3 = ((undefined4 *)*param_1)[1];
      uVar2 = *(undefined4 *)*param_1;
      puVar4 = &DAT_00590e5f;
      local_20 = &local_30;
    }
    else {
      puVar5 = (undefined4 *)*param_1;
      local_28 = FUN_01aa9a6c(param_2);
      local_14 = &LAB_01aeb5d0;
      local_1c = &LAB_018a13b8;
      uVar3 = puVar5[1];
      uVar2 = *puVar5;
      puVar4 = &DAT_005b0d35;
      local_20 = &local_28;
      local_18 = (undefined1 *)&local_30;
    }
  }
  iVar1 = FUN_012fa178(uVar2,uVar3,puVar4,&local_20);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  return;
}

