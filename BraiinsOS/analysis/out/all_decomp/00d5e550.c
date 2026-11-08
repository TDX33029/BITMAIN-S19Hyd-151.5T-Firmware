// FUN_00d5e550 @ 00d5e550 size=1064 calls_out=3 calls_in=0
// strings: 

int FUN_00d5e550(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined1 *param_5
                ,undefined1 *param_6,undefined1 *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  double in_d0;
  double local_b8;
  uint local_ac;
  undefined1 *local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined1 *local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_78 [3];
  undefined1 *local_6c;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  uint *local_30;
  code *local_2c;
  undefined1 **local_28;
  code *local_24;
  undefined1 **local_20;
  code *local_1c;
  
  local_a8 = param_5;
  local_9c = 0;
  local_a0 = (int *)&DAT_00000004;
  local_a4 = 0;
  local_ac = param_4;
  if (in_d0 <= 0.96) {
    if (((in_d0 < 0.95) && ((undefined1 *)param_1[7] != (undefined1 *)0x0)) &&
       ((*(byte *)(param_1 + 10) & 1) == 0)) {
      *(undefined1 *)(param_1 + 10) = 1;
      if (*param_1 == 1) {
        local_6c = (undefined1 *)param_1[1];
        local_28 = (undefined1 **)(local_78 + 3);
        local_30 = (uint *)(param_1 + 6);
        *local_30 = (uint)local_6c;
        local_1c = (code *)&LAB_00fac484;
        local_24 = FUN_00f5c9c8;
        local_2c = FUN_00f5c9c8;
        local_20 = (undefined1 **)(param_1 + 7);
        FUN_00600d2c(local_78 + 4,&DAT_00586898,&local_30);
        FUN_015f37b0(&local_a4);
        piVar6 = local_78 + 4;
      }
      else {
        local_30 = (uint *)(param_1 + 6);
        local_2c = FUN_00f5c9c8;
        FUN_00600d2c(local_78 + 8,&DAT_0057768b,&local_30);
        FUN_015f37b0(&local_a4);
        piVar6 = local_78 + 8;
      }
      goto LAB_00d5e818;
    }
    if (0.8 <= in_d0) {
      if (0.9 <= in_d0) {
        if (0.94 <= in_d0) {
          local_48 = (undefined1 *)0x0;
          if (in_d0 < 0.96) {
            local_48 = &DAT_000f4240;
          }
        }
        else {
          local_48 = &DAT_002625a0;
        }
      }
      else {
        local_48 = &DAT_004c4b40;
      }
    }
    else {
      local_48 = (undefined1 *)0x7270e0;
    }
    iVar2 = 0;
    puVar4 = (undefined1 *)param_1[6];
    puVar8 = puVar4 + -(int)local_48;
    if (puVar4 < local_48) {
      puVar8 = (undefined1 *)0x0;
    }
    if (puVar8 <= param_7) {
      puVar8 = param_7;
    }
    local_44 = puVar8;
    if (puVar4 == puVar8) {
      piVar6 = (int *)&DAT_00000004;
      goto LAB_00d5e864;
    }
    local_20 = &local_44;
    local_28 = &local_48;
    local_1c = FUN_00f5c9c8;
    local_24 = FUN_00f5c9c8;
    local_2c = FUN_00f5c9c8;
    local_30 = (uint *)(param_1 + 6);
    FUN_00600d2c(&local_40,&DAT_00583bf3,&local_30);
    FUN_015f37b0(&local_a4);
    *local_a0 = local_40;
    local_a0[1] = iStack_3c;
    local_a0[2] = iStack_38;
    iVar2 = param_1[6];
    param_1[6] = (int)local_44;
    iVar2 = iVar2 - (int)puVar8;
    param_1[9] = param_1[9] + 1;
    iVar5 = 1;
    piVar6 = local_a0;
  }
  else {
    uVar1 = param_1[9];
    bVar9 = uVar1 == 0;
    if (bVar9) {
      uVar1 = (uint)*(byte *)(param_1 + 10);
    }
    if (((bVar9 && (uVar1 & 1) == 0) && (param_4 != 0)) &&
       (puVar7 = (uint *)(param_1 + 6), (uint)param_1[8] <= *puVar7)) {
      local_30 = (uint *)(param_1 + 2);
      local_1c = FUN_00f5c9c8;
      local_24 = (code *)&LAB_00fb1f30;
      local_2c = (code *)&LAB_00fb1f30;
      local_b8 = in_d0;
      local_28 = (undefined1 **)&local_b8;
      local_20 = (undefined1 **)puVar7;
      FUN_00600d2c(&local_98,&DAT_003578d8,&local_30);
      FUN_015f37b0(&local_a4);
      piVar6 = local_a0;
      *local_a0 = local_98;
      local_a0[1] = local_94;
      local_a0[2] = local_90;
      *param_1 = 1;
      param_1[1] = param_1[6];
      local_8c = param_5 + param_1[6];
      if (param_6 < param_5 + param_1[6]) {
        local_8c = param_6;
      }
      *(double *)(param_1 + 2) = local_b8;
      local_20 = &local_8c;
      local_28 = &local_48;
      local_9c = 1;
      local_48 = param_5;
      local_1c = FUN_00f5c9c8;
      local_24 = FUN_00f5c9c8;
      local_2c = FUN_00f5c9c8;
      local_30 = puVar7;
      FUN_00600d2c(&local_88,&DAT_00588741,&local_30);
      if (local_a4 == 1) {
        FUN_015f37b0(&local_a4);
        piVar6 = local_a0;
      }
      piVar6[3] = local_88;
      piVar6[4] = iStack_84;
      piVar6[5] = iStack_80;
      param_1[6] = (int)local_8c;
      param_1[7] = param_1[7] + 1;
      iVar5 = 2;
    }
    else {
      local_30 = &local_ac;
      local_2c = FUN_00d5eaf8;
      FUN_00600d2c(local_78,&DAT_0058d154,&local_30);
      FUN_015f37b0(&local_a4);
      piVar6 = local_78;
LAB_00d5e818:
      iVar2 = piVar6[1];
      iVar3 = piVar6[2];
      iVar5 = 1;
      *local_a0 = *piVar6;
      local_a0[1] = iVar2;
      local_a0[2] = iVar3;
      piVar6 = local_a0;
    }
    iVar2 = 0;
  }
  iVar3 = 0;
  local_9c = iVar5;
  if (*piVar6 != 0) {
    iVar3 = thunk_FUN_016d3fb4(piVar6[1]);
  }
  if (iVar5 != 1) {
    iVar3 = piVar6[3];
  }
  if (iVar5 != 1 && iVar3 != 0) {
    thunk_FUN_016d3fb4(piVar6[4]);
  }
LAB_00d5e864:
  if (local_a4 != 0) {
    thunk_FUN_016d3fb4(piVar6);
  }
  return iVar2;
}

