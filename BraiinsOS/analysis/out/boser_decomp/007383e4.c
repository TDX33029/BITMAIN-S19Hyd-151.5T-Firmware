// FUN_007383e4 @ 007383e4 size=940 calls_out=7 calls_in=1
// strings: 

void FUN_007383e4(undefined4 *param_1,int *param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  int *local_50;
  undefined4 local_4c;
  undefined *local_44;
  undefined2 *local_40;
  undefined4 local_3c;
  int **local_38;
  undefined2 *local_34;
  int **local_30;
  code *local_2c;
  
  bVar11 = param_2[6] != -0x80000000;
  local_54 = 0;
  local_58 = (undefined4 *)&SUB_00000004;
  local_5c = 0;
  if (bVar11) {
    local_30 = &local_50;
    local_2c = (code *)&LAB_0193a90c;
    local_34 = &DAT_0132b6a0;
    local_38 = (int **)&DAT_01c07d78;
    local_50 = param_2 + 6;
    FUN_00664898(&local_44,&DAT_005b0d35,&local_38);
    uVar3 = local_3c;
    puVar2 = local_40;
    puVar1 = local_44;
    FUN_019abd3c(&local_5c);
    local_58[1] = puVar2;
    *local_58 = puVar1;
    local_58[2] = uVar3;
  }
  puVar6 = local_58;
  local_54 = (uint)bVar11;
  uVar8 = (uint)bVar11;
  if (*param_2 == -0x80000000) {
    local_44 = &DAT_01c07d80;
    local_40 = &DAT_0132b6a0;
    FUN_00664898(&local_38,&DAT_005a1e71,&local_44);
    ppiVar5 = local_30;
    puVar2 = local_34;
    ppiVar4 = local_38;
    if (uVar8 == local_5c) {
      FUN_019abd3c(&local_5c);
      puVar6 = local_58;
    }
    iVar9 = uVar8 + 1;
    puVar6 = puVar6 + uVar8 * 3;
    *puVar6 = ppiVar4;
    puVar6[1] = puVar2;
    puVar6[2] = ppiVar5;
    puVar6 = local_58;
    local_54 = iVar9;
  }
  else {
    FUN_00745308(&local_38,param_2[1],param_2[1] + param_2[2] * 4);
    FUN_01656f40(&local_50,local_34,local_30,&DAT_005319c3);
    FUN_006a41c0(&local_38);
    local_30 = (int **)(param_2 + 3);
    local_2c = FUN_013095bc;
    local_34 = &DAT_0132b6a0;
    local_38 = (int **)&DAT_01c07d88;
    FUN_00664898(&local_44,&DAT_005b0d35,&local_38);
    uVar3 = local_3c;
    puVar2 = local_40;
    puVar1 = local_44;
    if (uVar8 == local_5c) {
      FUN_019abd3c(&local_5c);
      puVar6 = local_58;
    }
    uVar10 = uVar8 + 1;
    puVar6 = puVar6 + uVar8 * 3;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = uVar3;
    local_30 = (int **)(param_2 + 5);
    local_54 = uVar10;
    if (*local_30 != (int *)0x0) {
      local_2c = FUN_013095bc;
      local_38 = (int **)&DAT_01c07d90;
      local_34 = &DAT_0132b6a0;
      FUN_00664898(&local_44,&DAT_005b0d35,&local_38);
      uVar3 = local_3c;
      puVar2 = local_40;
      puVar1 = local_44;
      if (uVar10 == local_5c) {
        FUN_019abd3c(&local_5c);
      }
      local_54 = uVar8 | 2;
      puVar6 = local_58 + uVar10 * 3;
      *puVar6 = puVar1;
      puVar6[1] = puVar2;
      puVar6[2] = uVar3;
    }
    uVar8 = local_54;
    local_30 = (int **)(param_2 + 4);
    local_2c = FUN_013095bc;
    local_34 = &DAT_0132b6a0;
    local_38 = (int **)&DAT_01c07d98;
    FUN_00664898(&local_44,&DAT_005b0d35,&local_38);
    uVar3 = local_3c;
    puVar2 = local_40;
    puVar1 = local_44;
    if (uVar8 == local_5c) {
      FUN_019abd3c(&local_5c);
    }
    puVar6 = local_58;
    puVar7 = local_58 + uVar8 * 3;
    *puVar7 = puVar1;
    uVar10 = uVar8 + 1;
    puVar7[1] = puVar2;
    puVar7[2] = uVar3;
    local_2c = (code *)&LAB_00632348;
    local_30 = &local_50;
    local_34 = &DAT_0132b6a0;
    local_38 = (int **)&DAT_01c07da0;
    local_54 = uVar10;
    FUN_00664898(&local_44,&DAT_005b0d35,&local_38);
    puVar2 = local_40;
    puVar1 = local_44;
    if (uVar10 == local_5c) {
      FUN_019abd3c(&local_5c);
      puVar6 = local_58;
    }
    iVar9 = uVar8 + 2;
    puVar7 = puVar6 + uVar10 * 3;
    *puVar7 = puVar1;
    puVar7[1] = puVar2;
    puVar7[2] = local_3c;
    local_54 = iVar9;
    FUN_019bb7e0(local_50,local_4c);
  }
  FUN_01656f40(&local_38,puVar6,iVar9,"\n");
  ppiVar4 = local_30;
  if (local_38 == local_30) {
    FUN_016092cc(&local_38,local_30,1,1,1);
  }
  *(undefined1 *)((int)local_34 + (int)local_30) = 10;
  local_30 = (int **)((int)ppiVar4 + 1);
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  FUN_006a41c0(&local_5c);
  return;
}

