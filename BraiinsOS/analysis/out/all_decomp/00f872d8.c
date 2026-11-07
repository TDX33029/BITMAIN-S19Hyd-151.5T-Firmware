// FUN_00f872d8 @ 00f872d8 size=1416 calls_out=7 calls_in=1
// strings: 

void FUN_00f872d8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 **ppuVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  char **local_b0;
  char *local_ac;
  char **local_a8;
  char *local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 **local_88;
  int *local_84;
  undefined4 **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 **local_68;
  int *local_64;
  undefined4 **local_60;
  undefined4 **local_58;
  int local_54;
  int iStack_50;
  char ***local_48;
  undefined *local_44;
  undefined4 ***pppuStack_40;
  char ***local_38;
  undefined *local_34;
  undefined4 ***local_30;
  code *local_2c;
  
  local_b0 = &local_ac;
  local_ac = (char *)(param_2 + 0x62);
  local_a8 = &local_a4;
  local_a4 = (char *)(param_2 + 0x70);
  if (*(char *)(param_2 + 0x70) == '\x04') {
    local_a4 = local_ac;
  }
  local_38 = &local_b0;
  local_34 = &DAT_00fa02fc;
  FUN_00600d2c(&local_a0,&DAT_0035d79c,&local_38);
  piVar5 = *(int **)(param_3 + 0x30);
  iVar8 = *(int *)(param_3 + 0x34);
  local_8c = 0;
  local_94 = 0;
  iVar1 = iVar8 << 3;
  local_90 = 4;
  piVar9 = piVar5;
  do {
    piVar6 = piVar9;
    if (iVar1 == 0) goto LAB_00f873d0;
    iVar1 = iVar1 + -8;
    piVar9 = piVar6 + 2;
  } while ((char)piVar6[1] != '\x01');
  local_48 = (char ***)*piVar6;
  local_38 = &local_a8;
  local_30 = &local_48;
  local_2c = FUN_00faaf34;
  local_34 = &DAT_00fa02fc;
  FUN_00600d2c(&local_58,&DAT_0035dbcc,&local_38);
  if (local_58 == (undefined4 **)0x80000000) {
LAB_00f873d0:
    local_80 = (undefined4 **)0x0;
    local_84 = (int *)&DAT_00000004;
    local_88 = (undefined4 **)0x0;
  }
  else {
    piVar9 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x30);
    }
    local_60 = (undefined4 **)0x1;
    *piVar9 = (int)local_58;
    piVar9[1] = local_54;
    piVar9[2] = iStack_50;
    local_68 = (undefined4 **)0x4;
    ppuVar4 = (undefined4 **)0x1;
    piVar6 = piVar6 + 2;
    local_64 = piVar9;
    while( true ) {
      piVar7 = piVar6;
      if (piVar7 == piVar5 + iVar8 * 2) break;
      piVar6 = piVar7 + 2;
      if ((char)piVar7[1] == '\x01') {
        local_88 = (undefined4 **)*piVar7;
        local_2c = FUN_00faaf34;
        local_34 = &DAT_00fa02fc;
        local_38 = &local_a8;
        local_30 = &local_88;
        FUN_00600d2c(&local_48,&DAT_0035dbcc,&local_38);
        if (local_48 == (char ***)0x80000000) break;
        if (ppuVar4 == local_68) {
          FUN_00f991dc(&local_68,ppuVar4,1,4,0xc);
          piVar9 = local_64;
        }
        local_60 = (undefined4 **)((int)ppuVar4 + 1);
        piVar3 = piVar9 + (int)ppuVar4 * 3;
        *piVar3 = (int)local_48;
        piVar3[1] = (int)local_44;
        piVar3[2] = (int)pppuStack_40;
        ppuVar4 = local_60;
      }
    }
    local_88 = local_68;
    local_84 = local_64;
    local_80 = local_60;
  }
  piVar9 = (int *)(*(int *)(param_3 + 0x3c) + 4);
  for (iVar1 = *(int *)(param_3 + 0x40) * 0xc; iVar1 != 0; iVar1 = iVar1 + -0xc) {
    if ((char)piVar9[1] != '\0') {
      local_58 = (undefined4 **)piVar9[-1];
      local_54 = *piVar9;
      local_2c = (code *)&DAT_0157d360;
      local_34 = &DAT_00fa02fc;
      local_38 = &local_a8;
      local_30 = &local_58;
      FUN_00600d2c(&local_48,&DAT_0035dbd8,&local_38);
      ppuVar4 = local_80;
      if (local_48 == (char ***)0x80000000) break;
      if (local_80 == local_88) {
        FUN_00f991dc(&local_88,local_80,1,4,0xc);
      }
      piVar5 = local_84 + (int)ppuVar4 * 3;
      *piVar5 = (int)local_48;
      local_80 = (undefined4 **)((int)ppuVar4 + 1);
      piVar5[1] = (int)local_44;
      piVar5[2] = (int)pppuStack_40;
    }
    piVar9 = piVar9 + 3;
  }
  piVar9 = (int *)(*(int *)(param_3 + 0x24) + 4);
  for (iVar1 = *(int *)(param_3 + 0x28) * 0xc; iVar1 != 0; iVar1 = iVar1 + -0xc) {
    if ((char)piVar9[1] != '\0') {
      local_58 = (undefined4 **)piVar9[-1];
      local_54 = *piVar9;
      local_2c = (code *)&DAT_0157d360;
      local_34 = &DAT_00fa02fc;
      local_38 = &local_a8;
      local_30 = &local_58;
      FUN_00600d2c(&local_48,&DAT_0035df67,&local_38);
      ppuVar4 = local_80;
      if (local_48 == (char ***)0x80000000) break;
      if (local_80 == local_88) {
        FUN_00f991dc(&local_88,local_80,1,4,0xc);
      }
      piVar5 = local_84 + (int)ppuVar4 * 3;
      *piVar5 = (int)local_48;
      local_80 = (undefined4 **)((int)ppuVar4 + 1);
      piVar5[1] = (int)local_44;
      piVar5[2] = (int)pppuStack_40;
    }
    piVar9 = piVar9 + 3;
  }
  ppuVar4 = local_80;
  piVar9 = local_84;
  FUN_00f944a8(&local_38,local_84,local_80,local_9c,local_98);
  local_48 = local_38;
  local_44 = local_34;
  pppuStack_40 = local_30;
  if (local_30 != (undefined4 ***)0x0) {
    local_30 = &local_48;
    local_38 = &local_b0;
    local_2c = (code *)&DAT_006043a8;
    local_34 = &DAT_00fa02fc;
    FUN_00600d2c(&local_78,&DAT_0035d7a8,&local_38);
    iVar1 = local_8c;
    if (local_8c == local_94) {
      FUN_015f37b0(&local_94);
    }
    local_8c = iVar1 + 1;
    puVar2 = (undefined4 *)(local_90 + iVar1 * 0xc);
    *puVar2 = local_78;
    puVar2[1] = uStack_74;
    puVar2[2] = uStack_70;
  }
  iVar8 = local_8c;
  iVar1 = local_90;
  FUN_00f944a8(&local_38,local_90,local_8c,&DAT_0041545b,1);
  *param_1 = (int)local_38;
  param_1[1] = (int)local_34;
  param_1[2] = (int)local_30;
  if (local_48 != (char ***)0x0) {
    thunk_FUN_016d3fb4(local_44);
  }
  piVar5 = piVar9 + 1;
  for (; ppuVar4 != (undefined4 **)0x0; ppuVar4 = (undefined4 **)((int)ppuVar4 + -1)) {
    if (piVar5[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar5);
    }
    piVar5 = piVar5 + 3;
  }
  if (local_88 != (undefined4 **)0x0) {
    thunk_FUN_016d3fb4(piVar9);
  }
  puVar2 = (undefined4 *)(iVar1 + 4);
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (puVar2[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar2);
    }
    puVar2 = puVar2 + 3;
  }
  if (local_94 != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  if (local_a0 != 0) {
    thunk_FUN_016d3fb4(local_9c);
  }
  return;
}

