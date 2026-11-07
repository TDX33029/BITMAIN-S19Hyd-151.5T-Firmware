// FUN_012456a8 @ 012456a8 size=1600 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012456a8(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  uint local_e0;
  int local_d0;
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
  uVar23 = *(uint *)(param_3 + 0xc);
  iVar27 = uVar23 * 0xc;
  if (0xaaaaaaa < uVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar27);
  }
  local_d0 = 4;
  local_c0 = 0;
  if ((iVar27 != 0) && (local_d0 = thunk_FUN_016d4a50(iVar27), local_c0 = uVar23, local_d0 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar27);
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  local_b0 = 4;
  if (local_a8[2] == 0) {
    uVar23 = 0;
  }
  uVar5 = param_2[1];
  iVar27 = *param_2;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_b8 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_bc = local_d0;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar23;
  if (param_2[3] == 0) {
    do {
      iVar27 = FUN_00f45584(local_a8);
    } while (iVar27 != 0);
    local_e0 = 4;
    uVar23 = 0;
    local_a8[3] = 0;
  }
  else {
    uVar10 = param_2[4];
    uVar23 = 0;
    uVar11 = param_2[5];
    uVar12 = param_2[6];
    uVar13 = param_2[7];
    iVar14 = param_2[8];
    iVar15 = param_2[9];
    iVar16 = param_2[10];
    iVar6 = param_2[0xb];
    local_e0 = 4;
    uVar29 = 0;
LAB_01245870:
    uVar31 = FUN_00f45584(local_a8);
    iVar25 = (int)uVar31;
    if (iVar25 != 0) {
      iVar18 = *(int *)(iVar25 + 8);
      iVar28 = *(int *)(iVar25 + 4);
      local_80 = iVar14;
      local_7c = iVar15;
      local_78 = iVar16;
      iStack_74 = iVar6;
      local_70 = uVar12;
      local_6c = uVar13;
      local_68 = uVar10;
      uStack_64 = uVar11;
      FUN_011df94c(&local_80,iVar28);
      uVar7 = local_70 ^ 0xff;
      uVar26 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
               local_6c >> 0x18;
      lVar3 = (ulonglong)uVar26 * 0xb36a80d2;
      uVar20 = (uint)lVar3;
      uVar17 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^
               local_6c * 0x2df45158 +
               uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
      uVar21 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18;
      lVar4 = (ulonglong)~local_68 * (ulonglong)uVar21;
      uVar30 = (uint)lVar4;
      uVar20 = (uVar7 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
               local_70 >> 0x18) * -0x4c957f2e +
               uVar26 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar26 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
      uVar7 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
              uVar26 >> 0x18) * ~local_68 + uVar21 * ~uStack_64 + (int)((ulonglong)lVar4 >> 0x20);
      uVar20 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 | (uStack_64 >> 0x10 & 0xff) << 8
               | uStack_64 >> 0x18;
      lVar3 = (ulonglong)uVar20 * (ulonglong)uVar26;
      uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18) ^ (uint)lVar3;
      uVar17 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
               uVar30 >> 0x18) ^
               uVar17 * uVar20 +
               uVar26 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                         (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar20 = uVar17;
      if ((uVar26 & 0x20) != 0) {
        uVar20 = uVar7;
        uVar7 = uVar17;
      }
      uVar20 = uVar7 << (uVar26 & 0x1f) | (uVar20 >> 1) >> (~uVar26 & 0x1f);
      uVar7 = uVar20 >> 0x19;
      iVar22 = 0;
      while( true ) {
        uVar20 = uVar5 & uVar20;
        uVar17 = *(uint *)(iVar27 + uVar20);
        uVar26 = uVar17 ^ uVar7 * 0x1010101;
        for (uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff; uVar26 != 0;
            uVar26 = uVar26 - 1 & uVar26) {
          uVar21 = uVar20 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                           (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                   uVar5;
          iVar8 = iVar27 + -0x20 + uVar21 * -0x20;
          if ((iVar18 == *(int *)(iVar8 + 8)) &&
             (iVar8 = thunk_FUN_016dd50a(iVar28,*(undefined4 *)(iVar8 + 4),iVar18), iVar8 == 0)) {
            local_40 = -0x80000000;
            uVar24 = *(undefined4 *)(iVar25 + 4);
            iVar25 = *(int *)(iVar25 + 8);
            local_3c = iVar28;
            local_38 = iVar18;
            local_34 = param_4;
            if (iVar25 == 0) {
              iVar18 = 1;
            }
            else {
              iVar18 = thunk_FUN_016d4a50(iVar25);
              if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,iVar25);
              }
            }
            FUN_016dd1aa(iVar18,uVar24,iVar25);
            if (uVar29 == local_c0) {
              FUN_015f37b0(&local_c0);
              local_d0 = local_bc;
            }
            piVar19 = (int *)(local_d0 + uVar29 * 0xc);
            *piVar19 = iVar25;
            piVar19[1] = iVar18;
            piVar19[2] = iVar25;
            local_b8 = uVar29 + 1;
            FUN_011c9534(&local_80,iVar27 + -0x14 + uVar21 * -0x20,(int)((ulonglong)uVar31 >> 0x20),
                         &local_40,param_5,param_6);
            uVar23 = local_ac;
            if (local_ac == local_b4) {
              FUN_011ca644(&local_b4);
            }
            local_e0 = local_b0;
            piVar19 = (int *)(local_b0 + uVar23 * 0x40);
            *piVar19 = local_80;
            piVar19[1] = local_7c;
            piVar19[2] = local_78;
            piVar19[3] = iStack_74;
            piVar19[4] = local_70;
            piVar19[5] = local_6c;
            piVar19[6] = local_68;
            piVar19[7] = uStack_64;
            piVar19[8] = iStack_60;
            piVar19[9] = iStack_5c;
            piVar19[10] = local_58;
            piVar19[0xb] = iStack_54;
            piVar19[0xc] = iStack_50;
            piVar19[0xd] = iStack_4c;
            piVar19[0xe] = iStack_48;
            piVar19[0xf] = iStack_44;
            uVar23 = uVar23 + 1;
            uVar29 = uVar29 + 1;
            local_ac = uVar23;
            goto LAB_01245870;
          }
        }
        if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
        iVar22 = iVar22 + 4;
        uVar20 = uVar20 + iVar22;
      }
      goto LAB_01245870;
    }
    local_a8[3] = local_b4;
  }
  uVar5 = local_e0;
  iVar27 = uVar23 << 6;
  do {
    iVar6 = iVar27;
    if (iVar6 == 0) {
      local_98 = 0;
      local_a8[0] = 0x80000000;
      local_a8[1] = local_a8[3];
      local_a8[2] = local_e0;
      local_a8[3] = uVar23;
      goto LAB_01245c0c;
    }
    pcVar1 = (char *)(uVar5 + 0x3c);
    uVar5 = uVar5 + 0x40;
    iVar27 = iVar6 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[0] = 0;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_98 = local_e0;
  local_94 = uVar23;
LAB_01245c0c:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  iStack_74 = local_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_68 = iStack_30;
  uStack_64 = iStack_2c;
  piVar19 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar19 = local_80;
  piVar19[1] = local_7c;
  piVar19[2] = local_78;
  piVar19[3] = iStack_74;
  piVar19[4] = local_70;
  piVar19[5] = local_6c;
  piVar19[6] = local_68;
  piVar19[7] = uStack_64;
  iVar27 = 0x18;
  if (iVar6 == 0) {
    iVar27 = 0x10;
  }
  piVar9 = *(int **)((int)local_a8 + iVar27);
  if (piVar9 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar27));
    }
  }
  *(int **)((int)local_a8 + iVar27) = piVar19;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
}

