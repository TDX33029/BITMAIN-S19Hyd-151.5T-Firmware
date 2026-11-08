// FUN_0117d43c @ 0117d43c size=1824 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0117d43c(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
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
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  undefined8 uVar31;
  int local_e8;
  uint local_d8;
  uint local_c4;
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
  uint uStack_64;
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
  uVar29 = *(uint *)(param_3 + 0xc);
  puVar26 = (uint *)(uVar29 * 0xc);
  if (0xaaaaaaa < uVar29) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar25 = 0;
  if (puVar26 == (uint *)0x0) {
    local_e8 = 4;
    local_c0 = 0;
    puVar26 = param_1;
  }
  else {
    local_e8 = thunk_FUN_016d4a50(puVar26);
    local_c0 = uVar29;
    if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,puVar26);
    }
  }
  local_b8 = 0;
  local_bc = local_e8;
  if ((0x3ffffff < uVar29) || (puVar26 = (uint *)(uVar29 * 0x40), (uint *)0x7ffffffc < puVar26)) {
LAB_0117d52c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar25,puVar26);
  }
  if (puVar26 == (uint *)0x0) {
    uVar5 = 4;
    local_b4 = 0;
  }
  else {
    uVar5 = thunk_FUN_016d4a50(puVar26);
    if (uVar5 == 0) {
      uVar25 = 4;
      goto LAB_0117d52c;
    }
    local_b4 = uVar29;
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  if (local_a8[2] == 0) {
    uVar29 = 0;
  }
  uVar9 = param_2[7];
  iVar10 = param_2[8];
  iVar11 = param_2[9];
  iVar12 = param_2[10];
  iVar13 = param_2[0xb];
  uVar14 = param_2[1];
  iVar20 = *param_2;
  iVar15 = param_2[3];
  local_d8 = 0;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_ac = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_c4 = 0;
  local_b0 = uVar5;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar29;
LAB_0117d66c:
  uVar31 = FUN_00f45584(local_a8);
  uVar25 = (undefined4)((ulonglong)uVar31 >> 0x20);
  iVar27 = (int)uVar31;
  if (iVar27 != 0) {
    iVar22 = *(int *)(iVar27 + 4);
    iVar30 = *(int *)(iVar27 + 8);
    local_40 = -0x80000000;
    local_3c = iVar22;
    local_38 = iVar30;
    local_34 = param_4;
    if (iVar15 != 0) {
      local_80 = iVar10;
      local_7c = iVar11;
      local_78 = iVar12;
      iStack_74 = iVar13;
      local_70 = uVar8;
      local_6c = uVar9;
      local_68 = uVar6;
      uStack_64 = uVar7;
      FUN_011df94c(&local_80,iVar22,iVar30);
      uVar21 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
               local_6c >> 0x18;
      lVar3 = (ulonglong)uVar21 * 0xb36a80d2;
      uVar23 = (uint)lVar3;
      uVar29 = local_70 ^ 0xff;
      uVar21 = (uVar29 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
               local_70 >> 0x18) * -0x4c957f2e +
               uVar21 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar28 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 | (uStack_64 >> 0x10 & 0xff) << 8
               | uStack_64 >> 0x18;
      uVar16 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
               uVar21 >> 0x18) ^ (uint)((ulonglong)uVar29 * 0x2df45158);
      lVar3 = (ulonglong)uVar28 * (ulonglong)uVar16;
      uVar21 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^
               local_6c * 0x2df45158 +
               uVar29 * 0x2d7f954c + (int)((ulonglong)uVar29 * 0x2df45158 >> 0x20);
      uVar29 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
               uVar21 >> 0x18;
      lVar4 = (ulonglong)~local_68 * (ulonglong)uVar29;
      uVar23 = (uint)lVar4;
      uVar29 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) * ~local_68 + uVar29 * ~uStack_64 + (int)((ulonglong)lVar4 >> 0x20);
      uVar29 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18) ^ (uint)lVar3;
      uVar23 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^
               uVar21 * uVar28 +
               uVar16 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                         (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar21 = uVar23;
      if ((uVar16 & 0x20) != 0) {
        uVar21 = uVar29;
        uVar29 = uVar23;
      }
      uVar21 = uVar29 << (uVar16 & 0x1f) | (uVar21 >> 1) >> (~uVar16 & 0x1f);
      iVar24 = 0;
      uVar29 = uVar21 >> 0x19;
      while( true ) {
        uVar21 = uVar14 & uVar21;
        uVar23 = *(uint *)(iVar20 + uVar21);
        uVar16 = uVar23 ^ uVar29 * 0x1010101;
        for (uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff; uVar16 != 0;
            uVar16 = uVar16 - 1 & uVar16) {
          uVar28 = uVar21 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                   uVar14;
          iVar17 = iVar20 + -0x20 + uVar28 * -0x20;
          if ((iVar30 == *(int *)(iVar17 + 8)) &&
             (iVar17 = thunk_FUN_016dd50a(iVar22,*(undefined4 *)(iVar17 + 4),iVar30), iVar17 == 0))
          {
            FUN_011c9534(&local_80,iVar20 + -0x14 + uVar28 * -0x20,uVar25,&local_40,param_5,param_6)
            ;
            if (local_c4 == local_b4) {
              FUN_011ca644(&local_b4);
              uVar5 = local_b0;
            }
            piVar18 = (int *)(uVar5 + local_c4 * 0x40);
            *piVar18 = local_80;
            piVar18[1] = local_7c;
            piVar18[2] = local_78;
            piVar18[3] = iStack_74;
            piVar18[4] = local_70;
            local_c4 = local_c4 + 1;
            piVar18[5] = local_6c;
            piVar18[6] = local_68;
            piVar18[7] = uStack_64;
            piVar18[8] = iStack_60;
            piVar18[9] = iStack_5c;
            piVar18[10] = local_58;
            piVar18[0xb] = iStack_54;
            piVar18[0xc] = iStack_50;
            piVar18[0xd] = iStack_4c;
            piVar18[0xe] = iStack_48;
            piVar18[0xf] = iStack_44;
            local_ac = local_c4;
            goto LAB_0117d66c;
          }
        }
        if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
        iVar24 = iVar24 + 4;
        uVar21 = uVar21 + iVar24;
      }
    }
    FUN_011c9534(&local_80,param_2 + 0xc,uVar25,&local_40,param_5,param_6);
    if (local_c4 == local_b4) {
      FUN_011ca644(&local_b4);
      uVar5 = local_b0;
    }
    piVar18 = (int *)(uVar5 + local_c4 * 0x40);
    *piVar18 = local_80;
    piVar18[1] = local_7c;
    piVar18[2] = local_78;
    piVar18[3] = iStack_74;
    piVar18[4] = local_70;
    local_c4 = local_c4 + 1;
    piVar18[5] = local_6c;
    piVar18[6] = local_68;
    piVar18[7] = uStack_64;
    piVar18[8] = iStack_60;
    piVar18[9] = iStack_5c;
    piVar18[10] = local_58;
    piVar18[0xb] = iStack_54;
    piVar18[0xc] = iStack_50;
    piVar18[0xd] = iStack_4c;
    piVar18[0xe] = iStack_48;
    piVar18[0xf] = iStack_44;
    uVar25 = *(undefined4 *)(iVar27 + 4);
    iVar27 = *(int *)(iVar27 + 8);
    local_ac = local_c4;
    if (iVar27 == 0) {
      iVar22 = 1;
    }
    else {
      iVar22 = thunk_FUN_016d4a50(iVar27);
      if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar27);
      }
    }
    FUN_016dd1aa(iVar22,uVar25,iVar27);
    if (local_d8 == local_c0) {
      FUN_015f37b0(&local_c0);
      local_e8 = local_bc;
    }
    local_b8 = local_d8 + 1;
    piVar18 = (int *)(local_e8 + local_d8 * 0xc);
    *piVar18 = iVar27;
    piVar18[1] = iVar22;
    piVar18[2] = iVar27;
    local_d8 = local_b8;
    goto LAB_0117d66c;
  }
  uVar29 = local_b0;
  iVar10 = local_ac << 6;
  do {
    iVar11 = iVar10;
    if (iVar11 == 0) {
      local_a8[1] = local_b4;
      local_a8[2] = local_b0;
      local_a8[3] = local_ac;
      local_98 = 0;
      local_a8[0] = 0x80000000;
      goto LAB_0117da50;
    }
    pcVar1 = (char *)(uVar29 + 0x3c);
    uVar29 = uVar29 + 0x40;
    iVar10 = iVar11 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[3] = local_b4;
  local_98 = local_b0;
  local_94 = local_ac;
  local_a8[0] = 0;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
LAB_0117da50:
  if (local_d8 == 0) {
    *param_1 = local_a8[0];
    param_1[1] = local_a8[1];
    param_1[2] = local_a8[2];
    param_1[3] = local_a8[3];
    param_1[4] = local_98;
    param_1[5] = local_94;
    param_1[6] = local_90;
    if (local_c0 != 0) {
      thunk_FUN_016d3fb4(local_bc);
      return;
    }
  }
  else {
    FUN_011f1dd4(&local_40,&local_c0);
    local_7c = 1;
    local_80 = 1;
    local_78 = local_40;
    iStack_74 = local_3c;
    local_70 = local_38;
    local_6c = local_34;
    local_68 = iStack_30;
    uStack_64 = iStack_2c;
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
    piVar18[7] = uStack_64;
    iVar10 = 0x18;
    if (iVar11 == 0) {
      iVar10 = 0x10;
    }
    piVar19 = *(int **)((int)local_a8 + iVar10);
    if (piVar19 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar19;
        bVar2 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar2);
      *piVar19 = iVar11 + -1;
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
  }
  return;
}

