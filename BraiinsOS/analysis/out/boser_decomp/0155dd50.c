// FUN_0155dd50 @ 0155dd50 size=1132 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0155dd50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r4;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  int local_c0;
  uint local_bc;
  uint *local_b8;
  uint local_b0;
  uint *local_a0;
  uint *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  uint local_74;
  uint *local_70;
  uint local_6c;
  uint *local_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  
  puVar16 = *(uint **)(param_1 + 4);
  iVar12 = 0;
  local_90 = param_5;
  local_80 = 0;
  puVar13 = puVar16 + *(int *)(param_1 + 8) * 5;
  iVar17 = *(int *)(param_1 + 8) * 0x14;
  local_9c = puVar13;
  local_98 = param_2;
  local_94 = param_3;
  local_8c = param_4;
  while( true ) {
    local_84 = unaff_r4;
    if (iVar12 != 0) {
      uVar5 = (**(code **)(unaff_r4 + 0xc))(iVar12);
      if (uVar5 != 0) {
        local_a0 = puVar16;
        local_88 = iVar12;
        local_38 = uVar5;
        (**(code **)(unaff_r4 + 0x10))(&local_68,iVar12);
        uVar14 = 0;
        puVar8 = &local_30;
        uVar11 = 0;
        if (((uint)(puVar13 == puVar16) & (uint)local_64) != 0) {
          puVar8 = &local_34;
          uVar11 = local_60;
        }
        uVar7 = (int)local_68 + 1;
        if (local_68 == (uint *)0xffffffff) {
          uVar7 = 0xffffffff;
        }
        *puVar8 = uVar11;
        local_74 = uVar7;
        if (uVar7 < 5) {
          local_74 = 4;
        }
        bVar20 = 0x3ffffffe < uVar7;
        bVar19 = uVar7 == 0x3fffffff;
        uVar11 = local_74 * 4;
        if (uVar7 < 0x40000000) {
          bVar20 = 0x7ffffffb < uVar11;
          bVar19 = uVar11 == 0x7ffffffc;
        }
        if (!bVar20 || bVar19) {
          uVar14 = 4;
          local_b8 = (uint *)FUN_01298504(uVar11,4);
          iVar17 = local_80;
          uVar4 = local_8c;
          uVar3 = local_90;
          uVar2 = local_94;
          uVar1 = local_98;
          puVar13 = local_9c;
          uVar21 = CONCAT44(local_84,local_88);
          if (local_b8 != (uint *)0x0) {
            *local_b8 = uVar5;
            local_b0 = 1;
            local_6c = 1;
            local_68 = local_a0;
            local_64 = local_9c;
            local_60 = local_98;
            local_5c = (uint *)local_94;
            local_58 = local_90;
            local_54 = local_8c;
            local_50 = local_88;
            local_4c = local_84;
            local_48 = local_80;
            local_44 = iStack_7c;
            puVar16 = local_a0;
            local_70 = local_b8;
            goto LAB_0155df84;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,uVar11);
      }
      FUN_01139b38(iVar12,unaff_r4);
    }
    if (iVar17 == 0) goto LAB_0155de04;
    uVar21 = FUN_01576990(puVar16,param_2,param_3,param_4,param_5);
    iVar12 = (int)uVar21;
    if (iVar12 == 0) break;
    puVar16 = puVar16 + 5;
    iVar17 = iVar17 + -0x14;
    unaff_r4 = (int)((ulonglong)uVar21 >> 0x20);
  }
  puVar13 = puVar16 + 5;
LAB_0155de04:
  local_88 = 0;
  local_a0 = puVar13;
  FUN_014fb344(&local_a0);
  local_68 = (uint *)&SUB_00000004;
  local_60 = 0;
  uVar5 = 0;
  goto LAB_0155de24;
LAB_0155df84:
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar15 = (int)uVar21;
  if (iVar15 == 0) {
LAB_0155dfb4:
    if (puVar16 != (uint *)0x0 && puVar16 != puVar13) goto LAB_0155e06c;
    goto LAB_0155dfc0;
  }
  uVar5 = (**(code **)(iVar12 + 0xc))(iVar15);
  if (uVar5 == 0) {
    FUN_01139b38(iVar15,iVar12);
    goto LAB_0155dfb4;
  }
  local_3c = uVar5;
  if (local_b0 == local_74) {
    (**(code **)(iVar12 + 0x10))(&local_30,iVar15);
    local_c0 = local_28;
    uVar11 = local_2c;
    if (iVar17 != 0) {
      local_bc = local_30;
      goto LAB_0155e00c;
    }
    uVar9 = 1;
    iVar18 = 0;
    uVar7 = 0;
    local_bc = local_30;
    goto LAB_0155e02c;
  }
  goto LAB_0155e0e0;
LAB_0155e06c:
  uVar21 = FUN_01576990(puVar16,uVar1,uVar2,uVar4,uVar3);
  puVar16 = puVar16 + 5;
  if ((int)uVar21 != 0) goto LAB_0155df84;
LAB_0155dfc0:
  if (iVar17 == 0) {
    local_50 = 0;
    local_68 = puVar16;
    local_4c = iVar12;
    goto LAB_0155e1ac;
  }
  uVar5 = (**(code **)(iStack_7c + 0xc))(iVar17);
  if (uVar5 == 0) goto LAB_0155e18c;
  iVar15 = 0;
  local_3c = uVar5;
  if (local_b0 != local_74) goto LAB_0155e0e0;
  local_bc = 0;
  local_c0 = 0;
  uVar11 = 1;
LAB_0155e00c:
  (**(code **)(iStack_7c + 0x10))(&local_30,iVar17);
  uVar7 = local_30;
  uVar9 = local_2c;
  iVar18 = local_28;
LAB_0155e02c:
  iVar10 = local_bc + uVar7;
  if (CARRY4(local_bc,uVar7)) {
    iVar10 = -1;
  }
  if (puVar16 == (uint *)0x0) {
    if ((uVar9 & uVar11) == 0) goto LAB_0155e0b8;
LAB_0155e0a4:
    uVar7 = iVar18 + local_c0;
    puVar8 = &local_38;
  }
  else {
    uVar7 = 0;
    if (((puVar13 == puVar16) && (uVar11 != 0)) && (puVar13 == puVar16)) {
      puVar8 = &local_34;
      if (uVar9 != 0) goto LAB_0155e0a4;
    }
    else {
LAB_0155e0b8:
      uVar7 = 0;
      puVar8 = &local_34;
    }
  }
  uVar11 = iVar10 + 1;
  *puVar8 = uVar7;
  if (iVar10 == -1) {
    uVar11 = 0xffffffff;
  }
  if (local_74 - local_6c < uVar11) {
    FUN_01af7b44(&local_74,local_6c,uVar11,4,4);
    local_b8 = local_70;
  }
LAB_0155e0e0:
  uVar21 = CONCAT44(iVar12,iVar15);
  local_b8[local_b0] = uVar5;
  local_b0 = local_b0 + 1;
  local_6c = local_b0;
  goto LAB_0155df84;
LAB_0155e18c:
  local_50 = 0;
  local_68 = puVar16;
  local_4c = iVar12;
  FUN_01139b38(iVar17,iStack_7c);
  local_48 = 0;
LAB_0155e1ac:
  FUN_014fb344(&local_68);
  local_68 = local_70;
  local_60 = local_74;
  uVar5 = local_6c;
LAB_0155de24:
  local_5c = local_68 + uVar5;
  local_64 = local_68;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar6 = local_68;
  puVar6[1] = local_64;
  puVar6[2] = local_60;
  puVar6[3] = local_5c;
  return;
}

