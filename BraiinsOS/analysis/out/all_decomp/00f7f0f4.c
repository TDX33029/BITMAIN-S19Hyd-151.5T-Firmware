// FUN_00f7f0f4 @ 00f7f0f4 size=1632 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_00f7f0f4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x4c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar18 = *(int *)(*(int *)(param_1 + 8) + 0x48);
  iVar2 = iVar2 * 0x134 + iVar18;
  piVar7 = (int *)((uint)&local_70 | 4);
  piVar3 = (int *)((uint)&local_70 | 4);
LAB_00f7f148:
  iVar19 = *(int *)(iVar18 + 0xd4);
  if (iVar19 != 0) {
    iVar24 = *(int *)(param_2 + 0x24);
    iVar13 = *(int *)(param_2 + 0x28) << 3;
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar9 = *(undefined4 *)(iVar18 + 0x114);
      iVar12 = *(int *)(iVar18 + 0x118);
      piVar16 = (int *)(iVar24 + 4);
      iVar17 = iVar13;
      do {
        if ((*piVar16 == iVar12) &&
           (iVar4 = thunk_FUN_016dd50a(piVar16[-1],uVar9,iVar12), iVar4 == 0)) goto LAB_00f7f1b8;
        iVar17 = iVar17 + -8;
        piVar16 = piVar16 + 2;
      } while (iVar17 != 0);
    }
    iVar17 = *(int *)(param_2 + 0x30);
    uVar20 = *(uint *)(param_2 + 0x34);
    puVar21 = *(undefined4 **)(iVar18 + 0xd0);
    puVar8 = puVar21;
    do {
      uVar9 = *puVar8;
      iVar4 = puVar8[1];
      puVar22 = puVar8 + 7;
      uVar11 = 0;
      for (iVar12 = iVar13; iVar12 != 0; iVar12 = iVar12 + -8) {
        if ((*(int *)(iVar24 + uVar11 * 8 + 4) == iVar4) &&
           (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar24 + uVar11 * 8),uVar9,iVar4), iVar5 == 0
           )) {
          if (uVar20 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,uVar20,&DAT_01880824);
          }
          iVar12 = puVar8[2];
          if (iVar12 == 0) goto LAB_00f7f364;
          iVar4 = iVar17 + uVar11 * 0x3c;
          iVar5 = *(int *)(iVar4 + 0x34);
          if (iVar5 != 0) {
            iVar14 = *(int *)(iVar4 + 0x30);
            iVar4 = iVar14 + iVar5 * 0xc;
            do {
              piVar16 = (int *)(iVar14 + 8);
              iVar10 = *(int *)(iVar14 + 4);
              iVar14 = iVar14 + 0xc;
              puVar23 = (undefined4 *)(iVar10 + 4);
              for (iVar5 = *piVar16 * 0xc; iVar5 != 0; iVar5 = iVar5 + -0xc) {
                if ((puVar8[3] == *(int *)(iVar10 + 8)) &&
                   (iVar6 = thunk_FUN_016dd50a(iVar12,*puVar23), iVar6 == 0)) goto LAB_00f7f364;
                iVar10 = iVar10 + 0xc;
                puVar23 = puVar23 + 3;
              }
            } while (iVar14 != iVar4);
          }
          break;
        }
        uVar11 = uVar11 + 1;
      }
      puVar8 = puVar22;
    } while (puVar22 != puVar21 + iVar19 * 7);
  }
LAB_00f7f1b8:
  uVar20 = *(uint *)(iVar18 + 200);
  if (uVar20 != 0) {
    if (*(int *)(param_2 + 0x28) != 0) {
      iVar19 = *(int *)(param_2 + 0x28) << 3;
      uVar9 = *(undefined4 *)(iVar18 + 0x114);
      iVar13 = *(int *)(iVar18 + 0x118);
      piVar16 = (int *)(*(int *)(param_2 + 0x24) + 4);
      do {
        if ((*piVar16 == iVar13) &&
           (iVar24 = thunk_FUN_016dd50a(piVar16[-1],uVar9,iVar13), iVar24 == 0)) goto LAB_00f7f374;
        iVar19 = iVar19 + -8;
        piVar16 = piVar16 + 2;
      } while (iVar19 != 0);
    }
    uVar9 = 0;
    if (0xaaaaaaa < uVar20) {
LAB_00f7f72c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,local_cc);
    }
    iVar19 = *(int *)(iVar18 + 0xc4);
    local_cc = thunk_FUN_016d4a50(uVar20 * 0xc);
    if (local_cc == 0) {
      uVar9 = 4;
      local_cc = uVar20 * 0xc;
      goto LAB_00f7f72c;
    }
    piVar16 = (int *)(local_cc + 8);
    uVar11 = 0;
    do {
      uVar9 = 0;
      puVar8 = (undefined4 *)(iVar19 + uVar11 * 8);
      uVar15 = *puVar8;
      iVar13 = puVar8[1];
      if (iVar13 < 0) {
LAB_00f7f6f8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,local_c0);
      }
      if (iVar13 == 0) {
        local_c0 = 1;
        iVar24 = 0;
      }
      else {
        local_c0 = thunk_FUN_016d4a50(iVar13);
        if (local_c0 == 0) {
          uVar9 = 1;
          local_c0 = iVar13;
          goto LAB_00f7f6f8;
        }
        iVar24 = iVar13;
      }
      FUN_016dd1aa(local_c0,uVar15,iVar13);
      uVar11 = uVar11 + 1;
      piVar16[-2] = iVar24;
      *piVar16 = iVar13;
      piVar16[-1] = local_c0;
      piVar16 = piVar16 + 3;
    } while (uVar20 != uVar11);
    local_7c = uVar20;
    local_78 = local_cc;
    local_74 = uVar20;
    FUN_00f7cacc(&local_48,param_1,3,0,iVar18,&local_7c,0);
    if (local_48 == 0x80000009) {
      return local_44;
    }
    local_70 = local_48;
    local_6c = local_44;
    uStack_68 = uStack_40;
    local_64 = iStack_3c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    local_58 = iStack_30;
    local_54 = uStack_2c;
    uStack_50 = uStack_28;
    uVar20 = 4;
    if ((int)local_48 < 0) {
      uVar20 = local_48 ^ 0x80000000;
    }
    piVar16 = piVar7;
    if (1 < uVar20 - 6) {
      if (uVar20 == 4) {
        if (local_48 != 0) {
          thunk_FUN_016d3fb4(local_44);
        }
        piVar16 = &local_58;
        if (local_64 != 0) {
          thunk_FUN_016d3fb4(local_60);
        }
      }
      else if (uVar20 != 0) goto LAB_00f7f374;
    }
    if (*piVar16 != 0) {
      thunk_FUN_016d3fb4(piVar16[1]);
    }
  }
  goto LAB_00f7f374;
LAB_00f7f364:
  if (puVar8[4] != -0x80000000) {
    uVar20 = puVar8[6];
    uVar9 = 0;
    iVar19 = local_c4;
    if (0xaaaaaaa < uVar20) {
LAB_00f7f744:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,iVar19);
    }
    iVar13 = puVar8[5];
    uVar11 = 0;
    iVar19 = uVar20 * 0xc;
    if (iVar19 == 0) {
      local_c4 = 4;
      uVar1 = 0;
    }
    else {
      local_c4 = thunk_FUN_016d4a50(iVar19,local_c4);
      uVar1 = uVar20;
      if (local_c4 == 0) {
        uVar9 = 4;
        goto LAB_00f7f744;
      }
    }
    if (uVar20 != 0) {
      piVar16 = (int *)(local_c4 + 8);
      uVar11 = 0;
      do {
        uVar9 = 0;
        puVar8 = (undefined4 *)(iVar13 + uVar11 * 8);
        uVar15 = *puVar8;
        iVar19 = puVar8[1];
        if (iVar19 < 0) {
LAB_00f7f754:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar9,local_c8);
        }
        if (iVar19 == 0) {
          iVar24 = 0;
          local_c8 = 1;
        }
        else {
          local_c8 = thunk_FUN_016d4a50(iVar19,local_c8);
          if (local_c8 == 0) {
            uVar9 = 1;
            local_c8 = iVar19;
            goto LAB_00f7f754;
          }
          iVar24 = iVar19;
        }
        FUN_016dd1aa(local_c8,uVar15,iVar19);
        uVar11 = uVar11 + 1;
        piVar16[-2] = iVar24;
        *piVar16 = iVar19;
        piVar16[-1] = local_c8;
        piVar16 = piVar16 + 3;
      } while (uVar20 != uVar11);
      uVar11 = uVar20;
    }
    local_88 = uVar1;
    local_84 = local_c4;
    local_80 = uVar11;
    FUN_00f7cacc(&local_48,param_1,3,0,iVar18,&local_88,0);
    if (local_48 == 0x80000009) {
      return local_44;
    }
    local_70 = local_48;
    local_6c = local_44;
    uStack_68 = uStack_40;
    local_64 = iStack_3c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    local_58 = iStack_30;
    local_54 = uStack_2c;
    uStack_50 = uStack_28;
    uVar20 = 4;
    if ((int)local_48 < 0) {
      uVar20 = local_48 ^ 0x80000000;
    }
    piVar16 = piVar3;
    if (1 < uVar20 - 6) {
      if (uVar20 == 4) {
        if (local_48 != 0) {
          thunk_FUN_016d3fb4(local_44);
        }
        piVar16 = &local_58;
        if (local_64 != 0) {
          thunk_FUN_016d3fb4(local_60);
        }
      }
      else if (uVar20 != 0) goto LAB_00f7f374;
    }
    if (*piVar16 != 0) {
      thunk_FUN_016d3fb4(piVar16[1]);
    }
  }
LAB_00f7f374:
  iVar18 = iVar18 + 0x134;
  if (iVar18 == iVar2) {
    return 0;
  }
  goto LAB_00f7f148;
}

