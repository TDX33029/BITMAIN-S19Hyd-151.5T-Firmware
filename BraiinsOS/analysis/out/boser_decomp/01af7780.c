// FUN_01af7780 @ 01af7780 size=524 calls_out=4 calls_in=0
// strings: 

void FUN_01af7780(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int **ppiVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined1 local_24;
  undefined1 local_23;
  int *local_20;
  undefined *local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  
  ppiVar6 = (int **)&local_30;
  piVar1 = *(int **)*param_1;
  if (*piVar1 != 0) {
    if (*piVar1 == 1) {
      puVar4 = &LAB_01963050;
LAB_01af77b4:
      uVar2 = *param_2;
      uVar7 = param_2[1];
      puVar5 = &DAT_00578c6d;
    }
    else {
      uVar2 = *param_2;
      uVar7 = param_2[1];
      puVar4 = &LAB_01963050;
      puVar5 = &DAT_00590e5f;
    }
    local_20 = piVar1 + 1;
    local_2c = SUB42(puVar4,0);
    uStack_2a = (undefined2)((uint)puVar4 >> 0x10);
    local_30 = &local_20;
    goto LAB_01af7820;
  }
  uVar8 = piVar1[1];
  if (uVar8 == 10) {
    uVar2 = 7;
    puVar5 = &DAT_00533bc3;
LAB_01af783c:
    FUN_012fb940(param_2,puVar5,uVar2);
    return;
  }
  if (uVar8 == 0x60) {
    uVar2 = 3;
    puVar5 = &DAT_00533bca;
    goto LAB_01af783c;
  }
  if ((0x1f < uVar8) && (uVar8 != 0x7f)) {
    puVar4 = &LAB_01961834;
    goto LAB_01af77b4;
  }
  if ((int)uVar8 < 0xd) {
    if (uVar8 == 0) {
      local_30._0_2_ = 0x305c;
    }
    else if (uVar8 == 9) {
      local_30._0_2_ = 0x745c;
    }
    else {
      if (uVar8 != 10) goto LAB_01af78dc;
      local_30._0_2_ = 0x6e5c;
    }
LAB_01af791c:
    local_24 = 0;
    uStack_2a = 0;
    local_28 = 0;
    local_30._2_2_ = 0;
    local_2c = 0;
    local_15 = 2;
  }
  else {
    if (0x26 < (int)uVar8) {
      if (uVar8 == 0x27) {
        local_30._0_2_ = 0x275c;
      }
      else {
        if (uVar8 != 0x5c) goto LAB_01af78dc;
        local_30._0_2_ = 0x5c5c;
      }
      goto LAB_01af791c;
    }
    if (uVar8 == 0xd) {
      local_30._0_2_ = 0x725c;
      goto LAB_01af791c;
    }
    if (uVar8 == 0x22) {
      local_30._0_2_ = 0x225c;
      goto LAB_01af791c;
    }
LAB_01af78dc:
    iVar3 = FUN_012fab74(uVar8);
    if (iVar3 == 0) {
      FUN_01af79b0(&local_20,uVar8);
      local_30._0_2_ = SUB42(local_20,0);
      local_30._2_2_ = (undefined2)((uint)local_20 >> 0x10);
      local_2c = SUB42(local_1c,0);
      uStack_2a = (undefined2)((uint)local_1c >> 0x10);
      local_28 = local_18;
      local_24 = local_16;
    }
    else {
      local_15 = 0x81;
      local_24 = 0x80;
      local_30._0_2_ = (undefined2)uVar8;
      local_30._2_2_ = (undefined2)(uVar8 >> 0x10);
    }
  }
  uVar2 = *param_2;
  uVar7 = param_2[1];
  local_1c = &DAT_01af7a70;
  puVar5 = &DAT_00578c6d;
  ppiVar6 = &local_20;
  local_23 = local_15;
  local_20 = &local_30;
LAB_01af7820:
  FUN_012fa178(uVar2,uVar7,puVar5,ppiVar6);
  return;
}

