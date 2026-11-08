// FUN_011637bc @ 011637bc size=2380 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011637bc(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  uint uVar38;
  undefined8 uVar39;
  int local_e4;
  uint local_dc;
  uint local_c8;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar31 = *(uint *)(param_3 + 0xc);
  uVar5 = uVar31 * 0xc;
  if (0xaaaaaaa < uVar31) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar5);
  }
  uVar27 = 0;
  if (uVar5 == 0) {
    local_e4 = 4;
    local_c0 = 0;
  }
  else {
    local_e4 = thunk_FUN_016d4a50(uVar5);
    local_c0 = uVar31;
    if (local_e4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar5);
    }
  }
  local_b8 = 0;
  local_bc = local_e4;
  if ((0x3ffffff < uVar31) || (uVar5 = uVar31 * 0x40, 0x7ffffffc < uVar5)) {
LAB_011641a4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar27,uVar5);
  }
  local_c8 = 4;
  local_b4 = 0;
  if (uVar5 != 0) {
    local_c8 = thunk_FUN_016d4a50(uVar5);
    if (local_c8 == 0) {
      uVar27 = 4;
      goto LAB_011641a4;
    }
    local_b4 = uVar31;
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  uVar5 = param_2[0x16];
  if (local_a8[2] == 0) {
    uVar31 = 0;
  }
  local_a8[3] = *(uint *)(param_3 + 8);
  uVar37 = 0;
  puVar22 = (uint *)param_2[0x15];
  iVar23 = *param_2;
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  iVar10 = param_2[8];
  iVar11 = param_2[9];
  iVar12 = param_2[10];
  iVar13 = param_2[0xb];
  iVar14 = param_2[0x12];
  uVar15 = param_2[1];
  iVar21 = param_2[0x13];
  iVar16 = param_2[3];
  local_dc = 0;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_ac = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_b0 = local_c8;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar31;
LAB_01163a04:
  uVar39 = FUN_00f45584(local_a8);
  uVar27 = (undefined4)((ulonglong)uVar39 >> 0x20);
  iVar34 = (int)uVar39;
  if (iVar34 != 0) {
    iVar32 = *(int *)(iVar34 + 4);
    iVar33 = *(int *)(iVar34 + 8);
    local_40 = -0x80000000;
    local_3c = iVar32;
    local_38 = iVar33;
    local_34 = param_4;
    if (iVar21 != 0) {
      iVar28 = iVar21 << 5;
      iVar29 = iVar14;
      do {
        if ((*(int *)(iVar29 + 8) == iVar33) &&
           (iVar17 = thunk_FUN_016dd50a(*(undefined4 *)(iVar29 + 4),iVar32,iVar33), iVar17 == 0)) {
          FUN_011c9534(&local_80,iVar29 + 0xc,uVar27,&local_40,param_5,param_6);
          if (uVar37 == local_b4) {
            FUN_011ca644(&local_b4);
            local_c8 = local_b0;
          }
          piVar18 = (int *)(local_c8 + uVar37 * 0x40);
          uVar37 = uVar37 + 1;
          *piVar18 = local_80;
          piVar18[1] = local_7c;
          piVar18[2] = local_78;
          piVar18[3] = iStack_74;
          piVar18[4] = local_70;
          piVar18[5] = local_6c;
          piVar18[6] = local_68;
          piVar18[7] = local_64;
          piVar18[8] = iStack_60;
          piVar18[9] = iStack_5c;
          piVar18[10] = local_58;
          piVar18[0xb] = iStack_54;
          piVar18[0xc] = iStack_50;
          piVar18[0xd] = iStack_4c;
          piVar18[0xe] = iStack_48;
          piVar18[0xf] = iStack_44;
          local_ac = uVar37;
          if (iVar16 != 0) {
            uVar24 = *(undefined4 *)(iVar34 + 4);
            iVar34 = *(int *)(iVar34 + 8);
            local_80 = iVar10;
            local_7c = iVar11;
            local_78 = iVar12;
            iStack_74 = iVar13;
            local_70 = uVar8;
            local_6c = uVar9;
            local_68 = uVar6;
            local_64 = uVar7;
            FUN_011df94c(&local_80,uVar24,iVar34);
            uVar31 = local_70 ^ 0xff;
            uVar35 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 |
                     (local_6c >> 0x10 & 0xff) << 8 | local_6c >> 0x18;
            lVar3 = (ulonglong)uVar35 * 0xb36a80d2;
            uVar25 = (uint)lVar3;
            uVar19 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                     uVar25 >> 0x18) ^
                     local_6c * 0x2df45158 +
                     uVar31 * 0x2d7f954c + (int)((ulonglong)uVar31 * 0x2df45158 >> 0x20);
            uVar30 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18;
            uVar26 = local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 |
                     (local_64 >> 0x10 & 0xff) << 8 | local_64 >> 0x18;
            lVar4 = (ulonglong)~local_68 * (ulonglong)uVar30;
            uVar38 = (uint)lVar4;
            uVar25 = (uVar31 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 |
                      (local_70 >> 0x10 & 0xff) << 8 | local_70 >> 0x18) * -0x4c957f2e +
                     uVar35 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar35 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 |
                      (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) ^
                     (uint)((ulonglong)uVar31 * 0x2df45158);
            uVar31 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                     uVar35 >> 0x18) * ~local_68 +
                     uVar30 * ~local_64 + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar26 * (ulonglong)uVar35;
            uVar31 = (uVar31 * 0x1000000 | (uVar31 >> 8 & 0xff) << 0x10 |
                      (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) ^ (uint)lVar3;
            uVar19 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
                     uVar38 >> 0x18) ^
                     uVar19 * uVar26 +
                     uVar35 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                               (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar25 = uVar19;
            if ((uVar35 & 0x20) != 0) {
              uVar25 = uVar31;
              uVar31 = uVar19;
            }
            uVar25 = uVar31 << (uVar35 & 0x1f) | (uVar25 >> 1) >> (~uVar35 & 0x1f);
            iVar32 = 0;
            uVar31 = uVar25 >> 0x19;
            while( true ) {
              uVar25 = uVar15 & uVar25;
              uVar19 = *(uint *)(iVar23 + uVar25);
              uVar35 = uVar19 ^ uVar31 * 0x1010101;
              for (uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff; uVar35 != 0;
                  uVar35 = uVar35 - 1 & uVar35) {
                uVar26 = uVar25 + ((uint)LZCOUNT(uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                                 (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) >> 3
                                  ) & uVar15;
                iVar33 = iVar23 + -0x14 + uVar26 * -0x14;
                if ((iVar34 == *(int *)(iVar33 + 8)) &&
                   (iVar33 = thunk_FUN_016dd50a(uVar24,*(undefined4 *)(iVar33 + 4),iVar34),
                   iVar33 == 0)) {
                  iVar32 = iVar23 + uVar26 * -0x14;
                  iVar34 = *(int *)(iVar32 + -4);
                  if (iVar34 != 0) {
                    iVar34 = iVar34 << 2;
                    puVar36 = *(uint **)(iVar32 + -8);
                    do {
                      uVar31 = *puVar36;
                      if (uVar5 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar31,uVar5,&DAT_01889090);
                      }
                      FUN_011c9534(&local_80,puVar22 + uVar31 * 0x19 + 0x14,uVar27,&local_40,param_5
                                   ,param_6);
                      if (uVar37 == local_b4) {
                        FUN_011ca644(&local_b4);
                        local_c8 = local_b0;
                      }
                      piVar18 = (int *)(local_c8 + uVar37 * 0x40);
                      uVar37 = uVar37 + 1;
                      iVar34 = iVar34 + -4;
                      *piVar18 = local_80;
                      piVar18[1] = local_7c;
                      piVar18[2] = local_78;
                      piVar18[3] = iStack_74;
                      piVar18[4] = local_70;
                      piVar18[5] = local_6c;
                      piVar18[6] = local_68;
                      piVar18[7] = local_64;
                      piVar18[8] = iStack_60;
                      piVar18[9] = iStack_5c;
                      piVar18[10] = local_58;
                      piVar18[0xb] = iStack_54;
                      piVar18[0xc] = iStack_50;
                      piVar18[0xd] = iStack_4c;
                      piVar18[0xe] = iStack_48;
                      piVar18[0xf] = iStack_44;
                      puVar36 = puVar36 + 1;
                      local_ac = uVar37;
                    } while (iVar34 != 0);
                  }
                  goto LAB_01163a04;
                }
              }
              if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
              iVar32 = iVar32 + 4;
              uVar25 = uVar25 + iVar32;
            }
          }
          goto LAB_01163a04;
        }
        iVar29 = iVar29 + 0x20;
        iVar28 = iVar28 + -0x20;
      } while (iVar28 != 0);
    }
    if (uVar5 != 0) {
      uVar5 = *puVar22;
      iVar10 = 4;
      if (2 < uVar5) {
        iVar10 = uVar5 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01163da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01163da8 + *(int *)(&DAT_01163da8 + iVar10 * 4)))();
      return;
    }
    uVar24 = *(undefined4 *)(iVar34 + 4);
    iVar34 = *(int *)(iVar34 + 8);
    if (iVar34 == 0) {
      iVar32 = 1;
    }
    else {
      iVar32 = thunk_FUN_016d4a50(iVar34);
      if (iVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar34);
      }
    }
    FUN_016dd1aa(iVar32,uVar24,iVar34);
    if (local_dc == local_c0) {
      FUN_015f37b0(&local_c0);
      local_e4 = local_bc;
    }
    piVar18 = (int *)(local_e4 + local_dc * 0xc);
    *piVar18 = iVar34;
    piVar18[1] = iVar32;
    piVar18[2] = iVar34;
    local_b8 = local_dc + 1;
    FUN_011c9534(&local_80,param_2 + 0xc,uVar27,&local_40,param_5,param_6);
    uVar31 = local_ac;
    if (local_ac == local_b4) {
      FUN_011ca644(&local_b4);
    }
    local_c8 = local_b0;
    uVar37 = uVar31 + 1;
    piVar18 = (int *)(local_b0 + uVar31 * 0x40);
    *piVar18 = local_80;
    piVar18[1] = local_7c;
    piVar18[2] = local_78;
    piVar18[3] = iStack_74;
    piVar18[4] = local_70;
    piVar18[5] = local_6c;
    piVar18[6] = local_68;
    piVar18[7] = local_64;
    piVar18[8] = iStack_60;
    piVar18[9] = iStack_5c;
    piVar18[10] = local_58;
    piVar18[0xb] = iStack_54;
    piVar18[0xc] = iStack_50;
    piVar18[0xd] = iStack_4c;
    piVar18[0xe] = iStack_48;
    piVar18[0xf] = iStack_44;
    local_dc = local_dc + 1;
    local_ac = uVar37;
    goto LAB_01163a04;
  }
  uVar5 = local_c8;
  iVar10 = uVar37 << 6;
  do {
    iVar11 = iVar10;
    if (iVar11 == 0) {
      local_98 = 0;
      local_a8[1] = local_b4;
      local_a8[2] = local_c8;
      local_a8[0] = 0x80000000;
      local_a8[3] = uVar37;
      goto LAB_011640e0;
    }
    pcVar1 = (char *)(uVar5 + 0x3c);
    uVar5 = uVar5 + 0x40;
    iVar10 = iVar11 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[3] = local_b4;
  local_98 = local_c8;
  local_a8[0] = 0;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_94 = uVar37;
LAB_011640e0:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  iStack_74 = local_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_68 = iStack_30;
  local_64 = iStack_2c;
  piVar18 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar18 = local_80;
  piVar18[1] = local_7c;
  piVar18[2] = local_78;
  piVar18[3] = iStack_74;
  piVar18[4] = local_70;
  piVar18[5] = local_6c;
  piVar18[6] = local_68;
  piVar18[7] = local_64;
  iVar10 = 0x18;
  if (iVar11 == 0) {
    iVar10 = 0x10;
  }
  piVar20 = *(int **)((int)local_a8 + iVar10);
  if (piVar20 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar20;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar10));
    }
  }
  *(int **)((int)local_a8 + iVar10) = piVar18;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
}

