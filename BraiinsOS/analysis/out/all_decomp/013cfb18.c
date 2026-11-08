// FUN_013cfb18 @ 013cfb18 size=1956 calls_out=9 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013cfb18(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined *puVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  bool bVar20;
  int local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int local_80;
  uint local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  int local_6c;
  uint *local_68;
  uint *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint *local_3c;
  uint *puStack_38;
  int iStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  iVar5 = *(int *)(param_4 + 0x18);
  piVar9 = (int *)(param_4 + 0x10);
  local_5c = (int *)0x0;
  local_60 = (int *)0x0;
  if (iVar5 == *piVar9) {
    FUN_013c40f0(piVar9);
  }
  *(int *)(param_4 + 0x18) = iVar5 + 1;
  puVar6 = (undefined4 *)(*(int *)(param_4 + 0x14) + iVar5 * 0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  if ((*(int *)(param_4 + 8) == 1) &&
     (uVar7 = *(uint *)(param_4 + 0xc),
     uVar7 < (uint)(*(int *)(param_4 + 0x34) + (iVar5 + 1) * 0x10))) {
    *param_1 = 0x27;
    param_1[1] = uVar7;
    return;
  }
  uVar7 = 0;
  local_a0 = 4;
  local_9c = 0;
  local_a4 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01894a38);
  }
  local_78 = *(uint **)(param_2 + 0x10);
  uVar15 = *(uint *)(param_2 + 0x14);
  local_80 = *(int *)(param_2 + 4);
  local_7c = *(uint *)(param_2 + 8);
  local_74 = local_78 + uVar15 * 2;
  if (uVar15 != 0) {
    bVar20 = &DAT_00000007 < local_74;
    if (local_74 != (uint *)&DAT_00000008) {
      uVar7 = local_74[-1];
      bVar20 = local_7c <= uVar7;
    }
    if (bVar20 && (local_74 != (uint *)&DAT_00000008 && uVar7 != local_7c)) {
      puVar11 = &DAT_01894a78;
      uVar15 = local_7c;
      goto LAB_013d0218;
    }
  }
  local_6c = local_7c - uVar7;
  local_68 = (uint *)(local_80 + uVar7 * 8);
  if ((uVar15 & 0x1fffffff) == 0) {
    local_70 = (uint *)0x0;
    iVar17 = local_6c;
  }
  else {
    uVar7 = *local_78;
    uVar15 = local_78[1];
    puVar11 = &DAT_01894838;
    if ((uVar15 < uVar7) || (local_7c < uVar15)) {
LAB_013d0218:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar7,uVar15,local_7c,puVar11);
    }
    local_78 = local_78 + 2;
    iVar17 = uVar15 - uVar7;
    local_70 = local_68;
    local_68 = (uint *)(local_80 + uVar7 * 8);
  }
  local_88 = (int *)&DAT_00000004;
  local_64 = local_68 + iVar17 * 2;
  local_94 = (int *)&DAT_00000004;
  iVar17 = 0;
  local_84 = (int *)0x0;
  local_8c = (int *)0x0;
  local_90 = (int *)0x0;
  local_98 = (int *)0x0;
  local_b0 = 4;
LAB_013cfcd8:
  do {
    while( true ) {
      puVar13 = local_68;
      piVar2 = local_84;
      piVar16 = local_88;
      piVar14 = local_8c;
      if (local_68 == local_64) break;
      puVar4 = local_68 + 2;
      uVar7 = *local_68;
      if (param_3 <= uVar7) {
        local_68 = puVar4;
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,param_3,&DAT_01894a48);
      }
      uVar1 = (undefined1)local_68[1];
      if (*(int *)(param_2 + uVar7 * 0x18 + 8) == 0) {
        local_68 = puVar4;
        if (local_84 == local_8c) {
          FUN_013c3fcc(&local_8c);
        }
        local_88[(int)piVar2 * 2] = iVar5;
        (local_88 + (int)piVar2 * 2)[1] = (uint)CONCAT11(uVar1,uVar1);
        local_84 = (int *)((int)piVar2 + 1);
      }
      else {
        local_68 = puVar4;
        if (local_84 == local_8c) {
          FUN_013c3fcc(&local_8c);
        }
        local_88[(int)piVar2 * 2] = 0;
        (local_88 + (int)piVar2 * 2)[1] = (uint)CONCAT11(uVar1,uVar1);
        local_84 = (int *)((int)piVar2 + 1);
        if (iVar17 == local_a4) {
          FUN_013c4278(&local_a4);
          local_b0 = local_a0;
        }
        FUN_016dd52c(local_b0 + iVar17 * 0x38,&local_98,0x38);
        iVar17 = iVar17 + 1;
        uVar7 = *puVar13;
        local_9c = iVar17;
        if (param_3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar7,param_3,&DAT_01894a58);
        }
        puVar13 = (uint *)0x0;
        uVar15 = 0;
        iVar3 = param_2 + uVar7 * 0x18;
        uVar7 = *(uint *)(iVar3 + 0x14);
        iVar10 = *(int *)(iVar3 + 4);
        uVar18 = *(uint *)(iVar3 + 8);
        puVar4 = *(uint **)(iVar3 + 0x10);
        puVar19 = puVar4 + uVar7 * 2;
        if (uVar7 != 0) {
          bVar20 = &DAT_00000007 < puVar19;
          if (puVar19 != (uint *)&DAT_00000008) {
            uVar15 = puVar19[-1];
            bVar20 = uVar18 <= uVar15;
          }
          if (bVar20 && (puVar19 != (uint *)&DAT_00000008 && uVar15 != uVar18)) {
            puVar11 = &DAT_01894a78;
            uVar7 = uVar18;
            goto LAB_013d01e8;
          }
        }
        puVar12 = (uint *)(iVar10 + uVar15 * 8);
        iVar3 = uVar18 - uVar15;
        if ((uVar7 & 0x1fffffff) == 0) {
          iVar8 = iVar3;
        }
        else {
          uVar15 = *puVar4;
          uVar7 = puVar4[1];
          if ((uVar7 < uVar15) || (uVar18 < uVar7)) {
            puVar11 = &DAT_01894838;
LAB_013d01e8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar15,uVar7,uVar18,puVar11);
          }
          puVar4 = puVar4 + 2;
          puVar13 = puVar12;
          puVar12 = (uint *)(iVar10 + uVar15 * 8);
          iVar8 = uVar7 - uVar15;
        }
        local_64 = puVar12 + iVar8 * 2;
        local_84 = (int *)0x0;
        local_88 = (int *)&DAT_00000004;
        local_8c = (int *)0x0;
        local_90 = (int *)0x0;
        local_94 = (int *)&DAT_00000004;
        local_98 = (int *)0x0;
        local_80 = iVar10;
        local_7c = uVar18;
        local_78 = puVar4;
        local_74 = puVar19;
        local_70 = puVar13;
        local_6c = iVar3;
        local_68 = puVar12;
      }
    }
    if (local_84 != (int *)0x0) {
      if (local_84 == (int *)&DAT_00000001) {
        local_84 = (int *)0x0;
        piVar14 = (int *)*local_88;
        piVar16 = (int *)local_88[1];
        iVar3 = *(int *)(param_4 + 0x18);
        local_60 = (int *)&DAT_00000001;
        local_5c = piVar14;
        local_58 = piVar16;
        if (iVar3 == *(int *)(param_4 + 0x10)) {
          FUN_013c40f0(piVar9);
        }
        iVar10 = iVar3 + 1;
        *(int *)(param_4 + 0x18) = iVar10;
        puVar6 = (undefined4 *)(*(int *)(param_4 + 0x14) + iVar3 * 0x10);
        *puVar6 = 1;
        puVar6[1] = piVar14;
        puVar6[2] = piVar16;
        iVar8 = *(int *)(param_4 + 8);
        piVar14 = local_90;
      }
      else {
        *(int *)(param_4 + 0x34) = *(int *)(param_4 + 0x34) + (int)local_84 * 8;
        iVar3 = *(int *)(param_4 + 0x18);
        local_88 = (int *)&DAT_00000004;
        local_84 = (int *)0x0;
        local_8c = (int *)0x0;
        local_5c = piVar14;
        local_58 = piVar16;
        local_60 = (int *)&SUB_00000002;
        local_54 = piVar2;
        if (iVar3 == *(int *)(param_4 + 0x10)) {
          FUN_013c40f0(piVar9);
        }
        iVar10 = iVar3 + 1;
        *(int *)(param_4 + 0x18) = iVar10;
        puVar6 = (undefined4 *)(*(int *)(param_4 + 0x14) + iVar3 * 0x10);
        *puVar6 = 2;
        puVar6[1] = piVar14;
        puVar6[2] = piVar16;
        puVar6[3] = piVar2;
        iVar8 = *(int *)(param_4 + 8);
        piVar14 = local_90;
      }
      local_90 = piVar14;
      if ((iVar8 == 1) &&
         (uVar7 = *(uint *)(param_4 + 0xc), uVar7 < (uint)(*(int *)(param_4 + 0x34) + iVar10 * 0x10)
         )) {
        *param_1 = 0x27;
        param_1[1] = uVar7;
        piVar14 = local_88;
        if (local_98 != (int *)0x0) {
          thunk_FUN_016d3fb4(local_94);
          piVar14 = local_88;
        }
        goto joined_r0x013d016c;
      }
      if (piVar14 == local_98) {
        FUN_013c1038(&local_98);
      }
      local_94[(int)piVar14] = iVar3;
      local_90 = (int *)((int)piVar14 + 1);
    }
    puVar13 = local_70;
    piVar2 = local_90;
    piVar16 = local_94;
    piVar14 = local_98;
    if (local_78 != local_74) {
      uVar7 = *local_78;
      uVar15 = local_78[1];
      if ((uVar15 < uVar7) || (local_7c < uVar15)) {
        local_78 = local_78 + 2;
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c();
      }
      puVar13 = (uint *)(local_80 + uVar7 * 8);
      iVar3 = uVar15 - uVar7;
      local_78 = local_78 + 2;
LAB_013d001c:
      if (local_90 == local_98) {
        FUN_013c1038(&local_98);
      }
      local_94[(int)piVar2] = iVar5;
      local_64 = puVar13 + iVar3 * 2;
      local_90 = (int *)((int)piVar2 + 1);
      local_68 = puVar13;
      goto LAB_013cfcd8;
    }
    bVar20 = local_70 != (uint *)0x0;
    local_70 = (uint *)0x0;
    iVar3 = local_6c;
    if (bVar20) goto LAB_013d001c;
    iVar3 = *(int *)(param_4 + 0x18);
    *(int *)(param_4 + 0x34) = *(int *)(param_4 + 0x34) + (int)local_90 * 4;
    local_5c = local_98;
    local_58 = local_94;
    local_60 = (int *)&DAT_00000006;
    local_54 = local_90;
    if (iVar3 == *(int *)(param_4 + 0x10)) {
      FUN_013c40f0(piVar9);
    }
    *(int *)(param_4 + 0x18) = iVar3 + 1;
    puVar6 = (undefined4 *)(*(int *)(param_4 + 0x14) + iVar3 * 0x10);
    *puVar6 = 6;
    puVar6[1] = piVar14;
    puVar6[2] = piVar16;
    puVar6[3] = piVar2;
    piVar14 = local_88;
    if ((*(int *)(param_4 + 8) == 1) &&
       (uVar7 = *(uint *)(param_4 + 0xc),
       uVar7 < (uint)(*(int *)(param_4 + 0x34) + (iVar3 + 1) * 0x10))) {
      *param_1 = 0x27;
      param_1[1] = uVar7;
joined_r0x013d016c:
      local_88 = piVar14;
      if (local_8c == (int *)0x0) {
        iVar5 = 0;
        goto LAB_013d038c;
      }
      iVar5 = 0;
      do {
        thunk_FUN_016d3fb4(piVar14);
LAB_013d038c:
        piVar9 = (int *)(local_b0 + iVar5 * 0x38 + 0xc);
        do {
          piVar14 = piVar9;
          if (iVar17 == iVar5) {
            if (local_a4 != 0) {
              thunk_FUN_016d3fb4(local_b0);
            }
            return;
          }
          if (piVar14[-3] != 0) {
            thunk_FUN_016d3fb4(piVar14[-2]);
          }
          iVar5 = iVar5 + 1;
          piVar9 = piVar14 + 0xe;
        } while (*piVar14 == 0);
        piVar14 = (int *)piVar14[1];
      } while( true );
    }
    if (iVar17 == 0) {
      *param_1 = 0x2a;
      param_1[1] = iVar3;
      param_1[2] = iVar5;
      goto joined_r0x013d016c;
    }
    iVar17 = iVar17 + -1;
    puVar6 = (undefined4 *)(local_b0 + iVar17 * 0x38);
    local_60 = (int *)*puVar6;
    local_5c = (int *)puVar6[1];
    local_58 = (int *)puVar6[2];
    local_54 = (int *)puVar6[3];
    local_50 = (int *)puVar6[4];
    local_4c = (int *)puVar6[5];
    iStack_48 = puVar6[6];
    uStack_44 = puVar6[7];
    puStack_40 = (uint *)puVar6[8];
    local_3c = (uint *)puVar6[9];
    puStack_38 = (uint *)puVar6[10];
    iStack_34 = puVar6[0xb];
    puStack_30 = (uint *)puVar6[0xc];
    puStack_2c = (uint *)puVar6[0xd];
    local_9c = iVar17;
    if (local_4c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01894a68);
    }
    local_50[(int)local_4c * 2 + -2] = iVar3;
    if (local_8c != (int *)0x0) {
      thunk_FUN_016d3fb4(local_88);
    }
    local_98 = local_60;
    local_94 = local_5c;
    local_90 = local_58;
    local_8c = local_54;
    local_88 = local_50;
    local_84 = local_4c;
    local_80 = iStack_48;
    local_7c = uStack_44;
    local_78 = puStack_40;
    local_74 = local_3c;
    local_70 = puStack_38;
    local_6c = iStack_34;
    local_68 = puStack_30;
    local_64 = puStack_2c;
  } while( true );
}

