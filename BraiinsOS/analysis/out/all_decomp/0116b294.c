// FUN_0116b294 @ 0116b294 size=2132 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0116b294(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
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
  int iVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  undefined8 uVar37;
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
  uVar26 = *(uint *)(param_3 + 0xc);
  uVar29 = 0xaaaaaaa;
  uVar5 = uVar26 * 0xc;
  if (0xaaaaaaa < uVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar24 = 0;
  if (uVar5 == 0) {
    local_e4 = 4;
    local_c0 = 0;
  }
  else {
    local_e4 = thunk_FUN_016d4a50(uVar5);
    local_c0 = uVar26;
    uVar29 = uVar5;
    if (local_e4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar5);
    }
  }
  local_b8 = 0;
  local_bc = local_e4;
  if ((0x3ffffff < uVar26) || (uVar29 = uVar26 * 0x40, 0x7ffffffc < uVar29)) {
LAB_0116b388:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar24,uVar29);
  }
  if (uVar29 == 0) {
    local_c8 = 4;
    local_b4 = 0;
  }
  else {
    local_c8 = thunk_FUN_016d4a50(uVar29);
    if (local_c8 == 0) {
      uVar24 = 4;
      goto LAB_0116b388;
    }
    local_b4 = uVar26;
  }
  local_ac = 0;
  uVar5 = param_2[0x16];
  local_a8[2] = *(uint *)(param_3 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  uVar29 = 0;
  piVar21 = (int *)param_2[0x15];
  if (local_a8[2] == 0) {
    uVar26 = 0;
  }
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  iVar10 = param_2[8];
  iVar11 = param_2[9];
  iVar12 = param_2[10];
  iVar13 = param_2[0xb];
  iVar14 = param_2[0x12];
  iVar19 = param_2[0x13];
  local_a8[0] = (uint)(local_a8[2] != 0);
  uVar15 = param_2[1];
  iVar16 = param_2[3];
  iVar20 = *param_2;
  local_dc = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_b0 = local_c8;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar26;
LAB_0116b4dc:
  uVar37 = FUN_00f45584(local_a8);
  uVar24 = (undefined4)((ulonglong)uVar37 >> 0x20);
  iVar32 = (int)uVar37;
  if (iVar32 != 0) {
    iVar25 = *(int *)(iVar32 + 4);
    iVar27 = *(int *)(iVar32 + 8);
    local_40 = -0x80000000;
    local_3c = iVar25;
    local_38 = iVar27;
    local_34 = param_4;
    if (iVar19 != 0) {
      iVar30 = iVar14;
      iVar31 = iVar19 << 5;
      do {
        if ((*(int *)(iVar30 + 8) == iVar27) &&
           (iVar17 = thunk_FUN_016dd50a(*(undefined4 *)(iVar30 + 4),iVar25,iVar27), iVar17 == 0)) {
          FUN_011c9534(&local_80,iVar30 + 0xc,uVar24,&local_40,param_5,param_6);
          if (uVar29 == local_b4) {
            FUN_011ca644(&local_b4);
            local_c8 = local_b0;
          }
          piVar18 = (int *)(local_c8 + uVar29 * 0x40);
          uVar29 = uVar29 + 1;
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
          local_ac = uVar29;
          if (iVar16 != 0) {
            uVar22 = *(undefined4 *)(iVar32 + 4);
            iVar32 = *(int *)(iVar32 + 8);
            local_80 = iVar10;
            local_7c = iVar11;
            local_78 = iVar12;
            iStack_74 = iVar13;
            local_70 = uVar8;
            local_6c = uVar9;
            local_68 = uVar6;
            local_64 = uVar7;
            FUN_011df94c(&local_80,uVar22,iVar32);
            uVar26 = local_70 ^ 0xff;
            uVar33 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 |
                     (local_6c >> 0x10 & 0xff) << 8 | local_6c >> 0x18;
            lVar3 = (ulonglong)uVar33 * 0xb36a80d2;
            uVar23 = (uint)lVar3;
            uVar35 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18) ^
                     local_6c * 0x2df45158 +
                     uVar26 * 0x2d7f954c + (int)((ulonglong)uVar26 * 0x2df45158 >> 0x20);
            uVar28 = uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                     uVar35 >> 0x18;
            lVar4 = (ulonglong)~local_68 * (ulonglong)uVar28;
            uVar36 = (uint)lVar4;
            uVar23 = (uVar26 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 |
                      (local_70 >> 0x10 & 0xff) << 8 | local_70 >> 0x18) * -0x4c957f2e +
                     uVar33 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar33 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 |
                      (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) ^
                     (uint)((ulonglong)uVar26 * 0x2df45158);
            uVar26 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                     uVar33 >> 0x18) * ~local_68 +
                     uVar28 * ~local_64 + (int)((ulonglong)lVar4 >> 0x20);
            uVar23 = local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 |
                     (local_64 >> 0x10 & 0xff) << 8 | local_64 >> 0x18;
            lVar3 = (ulonglong)uVar23 * (ulonglong)uVar33;
            uVar26 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 |
                      (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) ^ (uint)lVar3;
            uVar28 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                     uVar36 >> 0x18) ^
                     uVar35 * uVar23 +
                     uVar33 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                               (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar23 = uVar28;
            if ((uVar33 & 0x20) != 0) {
              uVar23 = uVar26;
              uVar26 = uVar28;
            }
            uVar23 = uVar26 << (uVar33 & 0x1f) | (uVar23 >> 1) >> (~uVar33 & 0x1f);
            iVar25 = 0;
            uVar26 = uVar23 >> 0x19;
            while( true ) {
              uVar23 = uVar15 & uVar23;
              uVar28 = *(uint *)(iVar20 + uVar23);
              uVar33 = uVar28 ^ uVar26 * 0x1010101;
              for (uVar33 = ~uVar33 & 0x80808080 & uVar33 + 0xfefefeff; uVar33 != 0;
                  uVar33 = uVar33 - 1 & uVar33) {
                uVar35 = uVar23 + ((uint)LZCOUNT(uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                                                 (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18) >> 3
                                  ) & uVar15;
                iVar27 = iVar20 + -0x14 + uVar35 * -0x14;
                if ((iVar32 == *(int *)(iVar27 + 8)) &&
                   (iVar27 = thunk_FUN_016dd50a(uVar22,*(undefined4 *)(iVar27 + 4),iVar32),
                   iVar27 == 0)) {
                  iVar25 = iVar20 + uVar35 * -0x14;
                  iVar32 = *(int *)(iVar25 + -4);
                  if (iVar32 != 0) {
                    iVar32 = iVar32 << 2;
                    puVar34 = *(uint **)(iVar25 + -8);
                    do {
                      uVar26 = *puVar34;
                      if (uVar5 <= uVar26) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar26,uVar5,&DAT_01889090);
                      }
                      FUN_011c9534(&local_80,piVar21 + uVar26 * 10 + 5,uVar24,&local_40,param_5,
                                   param_6);
                      if (uVar29 == local_b4) {
                        FUN_011ca644(&local_b4);
                        local_c8 = local_b0;
                      }
                      piVar18 = (int *)(local_c8 + uVar29 * 0x40);
                      uVar29 = uVar29 + 1;
                      iVar32 = iVar32 + -4;
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
                      puVar34 = puVar34 + 1;
                      local_ac = uVar29;
                    } while (iVar32 != 0);
                  }
                  goto LAB_0116b4dc;
                }
              }
              if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) break;
              iVar25 = iVar25 + 4;
              uVar23 = uVar23 + iVar25;
            }
          }
          goto LAB_0116b4dc;
        }
        iVar30 = iVar30 + 0x20;
        iVar31 = iVar31 + -0x20;
      } while (iVar31 != 0);
    }
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0116b870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0116b874 + *(int *)(&DAT_0116b874 + *piVar21 * 4)))();
      return;
    }
    uVar22 = *(undefined4 *)(iVar32 + 4);
    iVar32 = *(int *)(iVar32 + 8);
    if (iVar32 == 0) {
      iVar25 = 1;
    }
    else {
      iVar25 = thunk_FUN_016d4a50(iVar32);
      if (iVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar32);
      }
    }
    FUN_016dd1aa(iVar25,uVar22,iVar32);
    if (local_dc == local_c0) {
      FUN_015f37b0(&local_c0);
      local_e4 = local_bc;
    }
    piVar18 = (int *)(local_e4 + local_dc * 0xc);
    *piVar18 = iVar32;
    piVar18[1] = iVar25;
    piVar18[2] = iVar32;
    local_b8 = local_dc + 1;
    FUN_011c9534(&local_80,param_2 + 0xc,uVar24,&local_40,param_5,param_6);
    uVar26 = local_ac;
    if (local_ac == local_b4) {
      FUN_011ca644(&local_b4);
    }
    local_c8 = local_b0;
    uVar29 = uVar26 + 1;
    piVar18 = (int *)(local_b0 + uVar26 * 0x40);
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
    local_ac = uVar29;
    goto LAB_0116b4dc;
  }
  uVar5 = local_c8;
  iVar10 = uVar29 << 6;
  do {
    iVar11 = iVar10;
    if (iVar11 == 0) {
      local_98 = 0;
      local_a8[1] = local_b4;
      local_a8[2] = local_c8;
      local_a8[0] = 0x80000000;
      local_a8[3] = uVar29;
      goto LAB_0116bbb4;
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
  local_94 = uVar29;
LAB_0116bbb4:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  iStack_74 = local_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_68 = iStack_30;
  local_64 = iStack_2c;
  piVar21 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar21 = local_80;
  piVar21[1] = local_7c;
  piVar21[2] = local_78;
  piVar21[3] = iStack_74;
  piVar21[4] = local_70;
  piVar21[5] = local_6c;
  piVar21[6] = local_68;
  piVar21[7] = local_64;
  iVar10 = 0x18;
  if (iVar11 == 0) {
    iVar10 = 0x10;
  }
  piVar18 = *(int **)((int)local_a8 + iVar10);
  if (piVar18 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar10));
    }
  }
  *(int **)((int)local_a8 + iVar10) = piVar21;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
}

