// FUN_01576990 @ 01576990 size=2400 calls_out=7 calls_in=48
// strings: 

undefined4 *
FUN_01576990(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 ******param_4,
            undefined4 ******param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ******ppppppuVar3;
  undefined4 ******ppppppuVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int unaff_r6;
  code *pcVar16;
  int iVar17;
  undefined4 uVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  longlong lVar23;
  undefined8 uVar24;
  int local_c4;
  uint *local_c0;
  uint local_b8;
  undefined4 ******local_a4;
  uint *local_a0;
  uint *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 ******local_90;
  undefined4 ******local_8c;
  undefined8 local_88;
  int local_80;
  int iStack_7c;
  uint local_74;
  uint *local_70;
  uint local_6c;
  uint *local_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  undefined4 ******local_58;
  undefined4 ******local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  
  iVar12 = *param_1;
  uVar10 = 1;
  if ((int)*(uint *)(iVar12 + 8) < 0) {
    uVar10 = *(uint *)(iVar12 + 8) ^ 0x80000000;
  }
  local_a4 = param_4;
  if (uVar10 == 0) {
    iVar5 = *(int *)(iVar12 + 0xc);
    if (iVar5 == 0) {
      return (undefined4 *)&DAT_00000001;
    }
    pcVar16 = *(code **)(*(int *)(iVar12 + 0x10) + 0xc);
LAB_01576a14:
    puVar6 = (undefined4 *)(*pcVar16)(iVar5,param_2,param_3,param_4,param_5);
    return puVar6;
  }
  local_98 = param_2;
  local_94 = param_3;
  if (uVar10 != 1) {
    puVar19 = *(uint **)(iVar12 + 0x10);
    uVar10 = *(uint *)(iVar12 + 0x14);
    lVar23 = (ulonglong)uVar10 << 0x20;
    iVar12 = uVar10 << 5;
    local_90 = param_5;
    puVar15 = puVar19 + uVar10 * 8;
    local_80 = 0;
    local_9c = puVar15;
    local_8c = param_4;
    while( true ) {
      iVar17 = (int)((ulonglong)lVar23 >> 0x20);
      iVar5 = (int)lVar23;
      if (iVar5 != 0) {
        uVar10 = (**(code **)(iVar17 + 0xc))(iVar5);
        if (uVar10 != 0) {
          local_a0 = puVar19;
          local_38 = uVar10;
          local_88 = lVar23;
          (**(code **)(iVar17 + 0x10))(&local_68,iVar5);
          uVar18 = 0;
          puVar9 = &local_30;
          uVar14 = 0;
          if (((uint)(puVar15 == puVar19) & (uint)local_64) != 0) {
            puVar9 = &local_34;
            uVar14 = local_60;
          }
          uVar7 = (int)local_68 + 1;
          if (local_68 == (uint *)0xffffffff) {
            uVar7 = 0xffffffff;
          }
          *puVar9 = uVar14;
          local_74 = uVar7;
          if (uVar7 < 5) {
            local_74 = 4;
          }
          bVar22 = 0x3ffffffe < uVar7;
          bVar21 = uVar7 == 0x3fffffff;
          uVar14 = local_74 * 4;
          if (uVar7 < 0x40000000) {
            bVar22 = 0x7ffffffb < uVar14;
            bVar21 = uVar14 == 0x7ffffffc;
          }
          if (!bVar22 || bVar21) {
            uVar18 = 4;
            local_c0 = (uint *)FUN_01298504(uVar14,4);
            iVar12 = local_80;
            ppppppuVar4 = local_8c;
            ppppppuVar3 = local_90;
            uVar2 = local_94;
            uVar1 = local_98;
            puVar15 = local_9c;
            if (local_c0 != (uint *)0x0) {
              *local_c0 = uVar10;
              local_b8 = 1;
              local_6c = 1;
              local_68 = local_a0;
              local_64 = local_9c;
              local_60 = local_98;
              local_5c = (uint *)local_94;
              local_58 = local_90;
              local_54 = local_8c;
              local_48 = local_80;
              local_44 = iStack_7c;
              puVar19 = local_a0;
              local_70 = local_c0;
              lVar23 = local_88;
              local_50 = local_88;
              goto LAB_01576ddc;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar18,uVar14);
        }
        FUN_01139b38(iVar5,iVar17);
      }
      if (iVar12 == 0) goto LAB_01576b80;
      lVar23 = (**(code **)(puVar19[1] + 0xc))(*puVar19,param_2,param_3,param_4,param_5);
      if ((int)lVar23 == 0) break;
      puVar19 = puVar19 + 8;
      iVar12 = iVar12 + -0x20;
    }
    puVar15 = puVar19 + 8;
LAB_01576b80:
    local_88._0_4_ = 0;
    local_a0 = puVar15;
    local_88._4_4_ = iVar17;
    FUN_014fb344(&local_a0);
    local_68 = (uint *)&SUB_00000004;
    local_60 = 0;
    uVar10 = 0;
    goto LAB_01576ba0;
  }
  iVar5 = *(int *)(iVar12 + 0x10);
  if (iVar5 == 1) {
    iVar5 = **(int **)(iVar12 + 0xc);
    pcVar16 = *(code **)((*(int **)(iVar12 + 0xc))[1] + 0xc);
    goto LAB_01576a14;
  }
  puVar15 = *(uint **)(iVar12 + 0xc);
  iVar17 = 0;
  iVar12 = iVar5 << 5;
  puVar19 = puVar15 + iVar5 * 8;
  local_8c = param_5;
  local_90 = &local_a4;
  local_80 = 0;
  local_9c = puVar19;
  while( true ) {
    local_88._4_4_ = unaff_r6;
    if (iVar17 != 0) {
      uVar10 = (**(code **)(unaff_r6 + 0xc))(iVar17);
      if (uVar10 != 0) {
        local_a0 = puVar15;
        local_88._0_4_ = iVar17;
        local_38 = uVar10;
        (**(code **)(unaff_r6 + 0x10))(&local_68,iVar17);
        uVar18 = 0;
        puVar9 = &local_30;
        uVar14 = 0;
        if (((uint)(puVar19 == puVar15) & (uint)local_64) != 0) {
          puVar9 = &local_34;
          uVar14 = local_60;
        }
        uVar7 = (int)local_68 + 1;
        if (local_68 == (uint *)0xffffffff) {
          uVar7 = 0xffffffff;
        }
        *puVar9 = uVar14;
        local_74 = uVar7;
        if (uVar7 < 5) {
          local_74 = 4;
        }
        bVar22 = 0x3ffffffe < uVar7;
        bVar21 = uVar7 == 0x3fffffff;
        uVar14 = local_74 * 4;
        if (uVar7 < 0x40000000) {
          bVar22 = 0x7ffffffb < uVar14;
          bVar21 = uVar14 == 0x7ffffffc;
        }
        if (!bVar22 || bVar21) {
          uVar18 = 4;
          local_c0 = (uint *)FUN_01298504(uVar14,4);
          iVar12 = local_80;
          ppppppuVar4 = local_8c;
          ppppppuVar3 = local_90;
          uVar2 = local_94;
          uVar1 = local_98;
          puVar15 = local_9c;
          uVar24 = CONCAT44(local_88._4_4_,(int)local_88);
          if (local_c0 != (uint *)0x0) {
            *local_c0 = uVar10;
            local_b8 = 1;
            local_6c = 1;
            local_68 = local_a0;
            local_64 = local_9c;
            local_60 = local_98;
            local_5c = (uint *)local_94;
            local_58 = local_90;
            local_54 = local_8c;
            local_50._0_4_ = (int)local_88;
            local_50._4_4_ = local_88._4_4_;
            local_48 = local_80;
            local_44 = iStack_7c;
            puVar19 = local_a0;
            local_70 = local_c0;
            goto LAB_01577074;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar18,uVar14);
      }
      FUN_01139b38(iVar17,unaff_r6);
    }
    if (iVar12 == 0) goto LAB_01576c64;
    uVar24 = (**(code **)(puVar15[1] + 0xc))(*puVar15,param_2,param_3,local_a4,param_5);
    iVar17 = (int)uVar24;
    if (iVar17 == 0) break;
    puVar15 = puVar15 + 8;
    iVar12 = iVar12 + -0x20;
    unaff_r6 = (int)((ulonglong)uVar24 >> 0x20);
  }
  puVar19 = puVar15 + 8;
LAB_01576c64:
  local_88._0_4_ = 0;
  local_a0 = puVar19;
  FUN_014fb344(&local_a0);
  local_68 = (uint *)&SUB_00000004;
  local_60 = 0;
  uVar10 = 0;
  goto LAB_01576c84;
LAB_01576ddc:
  iVar5 = (int)((ulonglong)lVar23 >> 0x20);
  iVar17 = (int)lVar23;
  if (iVar17 != 0) {
    uVar10 = (**(code **)(iVar5 + 0xc))(iVar17);
    if (uVar10 == 0) {
      FUN_01139b38(iVar17,iVar5);
      goto LAB_01576e0c;
    }
    local_3c = uVar10;
    if (local_b8 != local_74) goto LAB_01576f94;
    (**(code **)(iVar5 + 0x10))(&local_30,iVar17);
    local_c4 = local_28;
    uVar14 = local_30;
    uVar7 = local_2c;
    if (iVar12 != 0) goto LAB_01576ea4;
    uVar11 = 1;
    iVar20 = 0;
    uVar8 = 0;
LAB_01576ec0:
    iVar13 = uVar14 + uVar8;
    if (CARRY4(uVar14,uVar8)) {
      iVar13 = -1;
    }
    if (puVar19 == (uint *)0x0) {
      if ((uVar11 & uVar7) == 0) goto LAB_01576f6c;
LAB_01576f58:
      uVar14 = iVar20 + local_c4;
      puVar9 = &local_38;
    }
    else {
      uVar14 = 0;
      if (((puVar15 == puVar19) && (uVar7 != 0)) && (puVar15 == puVar19)) {
        puVar9 = &local_34;
        if (uVar11 != 0) goto LAB_01576f58;
      }
      else {
LAB_01576f6c:
        uVar14 = 0;
        puVar9 = &local_34;
      }
    }
    uVar7 = iVar13 + 1;
    *puVar9 = uVar14;
    if (iVar13 == -1) {
      uVar7 = 0xffffffff;
    }
    if (local_74 - local_6c < uVar7) {
      FUN_01af7b44(&local_74,local_6c,uVar7,4,4);
      local_c0 = local_70;
    }
LAB_01576f94:
    lVar23 = CONCAT44(iVar5,iVar17);
    local_c0[local_b8] = uVar10;
    local_b8 = local_b8 + 1;
    local_6c = local_b8;
    goto LAB_01576ddc;
  }
LAB_01576e0c:
  if (puVar19 != (uint *)0x0) {
    if (puVar19 == puVar15) goto LAB_01576e58;
    lVar23 = (**(code **)(puVar19[1] + 0xc))(*puVar19,uVar1,uVar2,ppppppuVar4,ppppppuVar3);
    puVar19 = puVar19 + 8;
    if ((int)lVar23 == 0) goto LAB_01576e58;
    goto LAB_01576ddc;
  }
  puVar19 = (uint *)0x0;
LAB_01576e58:
  if (iVar12 == 0) {
    local_50._0_4_ = 0;
    local_68 = puVar19;
    local_50._4_4_ = iVar5;
  }
  else {
    uVar10 = (**(code **)(iStack_7c + 0xc))(iVar12);
    if (uVar10 != 0) {
      iVar17 = 0;
      local_3c = uVar10;
      if (local_b8 == local_74) {
        local_c4 = 0;
        uVar14 = 0;
        uVar7 = 1;
LAB_01576ea4:
        (**(code **)(iStack_7c + 0x10))(&local_30,iVar12);
        uVar8 = local_30;
        uVar11 = local_2c;
        iVar20 = local_28;
        goto LAB_01576ec0;
      }
      goto LAB_01576f94;
    }
    local_50._0_4_ = 0;
    local_68 = puVar19;
    local_50._4_4_ = iVar5;
    FUN_01139b38(iVar12,iStack_7c);
    local_48 = 0;
  }
  FUN_014fb344(&local_68);
  local_68 = local_70;
  local_60 = local_74;
  uVar10 = local_6c;
LAB_01576ba0:
  local_5c = local_68 + uVar10;
  local_64 = local_68;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  goto LAB_01576ca8;
LAB_01577074:
  do {
    iVar5 = (int)((ulonglong)uVar24 >> 0x20);
    iVar17 = (int)uVar24;
    if (iVar17 != 0) {
      uVar10 = (**(code **)(iVar5 + 0xc))(iVar17);
      if (uVar10 == 0) {
        FUN_01139b38(iVar17,iVar5);
        goto LAB_015770a4;
      }
      local_3c = uVar10;
      if (local_b8 == local_74) {
        (**(code **)(iVar5 + 0x10))(&local_30,iVar17);
        local_c4 = local_28;
        uVar14 = local_30;
        uVar7 = local_2c;
        if (iVar12 != 0) goto LAB_0157713c;
        uVar11 = 1;
        iVar20 = 0;
        uVar8 = 0;
        goto LAB_01577158;
      }
      goto LAB_0157722c;
    }
LAB_015770a4:
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)0x0;
      break;
    }
    if (puVar19 == puVar15) break;
    uVar24 = (**(code **)(puVar19[1] + 0xc))(*puVar19,uVar1,uVar2,*ppppppuVar3,ppppppuVar4);
    puVar19 = puVar19 + 8;
  } while ((int)uVar24 != 0);
  if (iVar12 == 0) {
    local_50._0_4_ = 0;
    local_68 = puVar19;
    local_50._4_4_ = iVar5;
    goto LAB_015772d8;
  }
  uVar10 = (**(code **)(iStack_7c + 0xc))(iVar12);
  if (uVar10 == 0) goto LAB_015772b8;
  iVar17 = 0;
  local_3c = uVar10;
  if (local_b8 != local_74) goto LAB_0157722c;
  local_c4 = 0;
  uVar14 = 0;
  uVar7 = 1;
LAB_0157713c:
  (**(code **)(iStack_7c + 0x10))(&local_30,iVar12);
  uVar8 = local_30;
  uVar11 = local_2c;
  iVar20 = local_28;
LAB_01577158:
  iVar13 = uVar14 + uVar8;
  if (CARRY4(uVar14,uVar8)) {
    iVar13 = -1;
  }
  if (puVar19 == (uint *)0x0) {
    if ((uVar11 & uVar7) == 0) goto LAB_01577204;
LAB_015771f0:
    uVar14 = iVar20 + local_c4;
    puVar9 = &local_38;
  }
  else {
    uVar14 = 0;
    if (((puVar15 == puVar19) && (uVar7 != 0)) && (puVar15 == puVar19)) {
      puVar9 = &local_34;
      if (uVar11 != 0) goto LAB_015771f0;
    }
    else {
LAB_01577204:
      uVar14 = 0;
      puVar9 = &local_34;
    }
  }
  uVar7 = iVar13 + 1;
  *puVar9 = uVar14;
  if (iVar13 == -1) {
    uVar7 = 0xffffffff;
  }
  if (local_74 - local_6c < uVar7) {
    FUN_01af7b44(&local_74,local_6c,uVar7,4,4);
    local_c0 = local_70;
  }
LAB_0157722c:
  uVar24 = CONCAT44(iVar5,iVar17);
  local_c0[local_b8] = uVar10;
  local_b8 = local_b8 + 1;
  local_6c = local_b8;
  goto LAB_01577074;
LAB_015772b8:
  local_50._0_4_ = 0;
  local_68 = puVar19;
  local_50._4_4_ = iVar5;
  FUN_01139b38(iVar12,iStack_7c);
  local_48 = 0;
LAB_015772d8:
  FUN_014fb344(&local_68);
  local_68 = local_70;
  local_60 = local_74;
  uVar10 = local_6c;
LAB_01576c84:
  local_5c = local_68 + uVar10;
  local_64 = local_68;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
LAB_01576ca8:
  *puVar6 = local_68;
  puVar6[1] = local_64;
  puVar6[2] = local_60;
  puVar6[3] = local_5c;
  return puVar6;
}

