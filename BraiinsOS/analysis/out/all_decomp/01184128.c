// FUN_01184128 @ 01184128 size=1420 calls_out=11 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01184128(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined8 uVar29;
  int local_140;
  uint local_ec [3];
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined1 *local_88;
  undefined4 local_84;
  int *local_80;
  undefined4 local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_ec[2] = *(uint *)(param_2 + 4);
  local_e0 = *(undefined4 *)(param_2 + 8);
  uVar18 = param_1[1];
  iVar22 = *param_1;
  local_cc = *(undefined4 *)(param_2 + 0xc);
  if (local_ec[2] == 0) {
    local_cc = 0;
  }
  local_ec[0] = (uint)(local_ec[2] != 0);
  local_d8 = 0;
  local_ec[1] = 0;
  local_dc = local_ec[0];
  local_d4 = local_ec[2];
  local_d0 = local_e0;
  if (param_1[3] == 0) {
    iVar6 = FUN_00f45584(local_ec);
    if (iVar6 == 0) {
      return 0;
    }
  }
  else {
    uVar11 = param_1[4];
    uVar12 = param_1[5];
    uVar13 = param_1[6];
    uVar14 = param_1[7];
    iVar15 = param_1[8];
    iVar16 = param_1[9];
    iVar17 = param_1[10];
    iVar5 = param_1[0xb];
LAB_0118432c:
    uVar29 = FUN_00f45584(local_ec);
    iVar6 = (int)uVar29;
    if (iVar6 == 0) {
      return 0;
    }
    uVar19 = *(undefined4 *)(iVar6 + 4);
    iVar26 = *(int *)(iVar6 + 8);
    local_a8 = iVar15;
    local_a4 = iVar16;
    local_a0 = iVar17;
    local_9c = iVar5;
    local_98 = uVar13;
    uStack_94 = uVar14;
    local_90._0_4_ = uVar11;
    local_90._4_4_ = uVar12;
    FUN_011df94c(&local_a8,uVar19,iVar26);
    uVar7 = local_98 ^ 0xff;
    uVar25 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 | (uStack_94 >> 0x10 & 0xff) << 8 |
             uStack_94 >> 0x18;
    lVar3 = (ulonglong)uVar25 * 0xb36a80d2;
    uVar20 = (uint)lVar3;
    uVar10 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^
             uStack_94 * 0x2df45158 +
             uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
    uVar21 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
    lVar4 = (ulonglong)~(uint)local_90 * (ulonglong)uVar21;
    uVar28 = (uint)lVar4;
    uVar20 = (uVar7 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
             local_98 >> 0x18) * -0x4c957f2e +
             uVar25 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar25 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
    uVar7 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
            uVar25 >> 0x18) * ~(uint)local_90 +
            uVar21 * ~local_90._4_4_ + (int)((ulonglong)lVar4 >> 0x20);
    uVar20 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
             (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
    lVar3 = (ulonglong)uVar20 * (ulonglong)uVar25;
    uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ (uint)lVar3;
    uVar10 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
             uVar28 >> 0x18) ^
             uVar10 * uVar20 +
             uVar25 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                       ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
             (int)((ulonglong)lVar3 >> 0x20);
    uVar20 = uVar10;
    if ((uVar25 & 0x20) != 0) {
      uVar20 = uVar7;
      uVar7 = uVar10;
    }
    uVar20 = uVar7 << (uVar25 & 0x1f) | (uVar20 >> 1) >> (~uVar25 & 0x1f);
    uVar7 = uVar20 >> 0x19;
    local_140 = 0;
    while( true ) {
      uVar20 = uVar18 & uVar20;
      uVar10 = *(uint *)(iVar22 + uVar20);
      uVar25 = uVar10 ^ uVar7 * 0x1010101;
      uVar25 = ~uVar25 & 0x80808080 & uVar25 + 0xfefefeff;
      while (uVar25 != 0) {
        uVar28 = uVar25 - 1 & uVar25;
        uVar21 = uVar20 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                         (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) &
                 uVar18;
        iVar9 = iVar22 + -0x20 + uVar21 * -0x20;
        uVar25 = uVar28;
        if (iVar26 == *(int *)(iVar9 + 8)) {
          iVar24 = *(int *)(iVar9 + 4);
          iVar9 = thunk_FUN_016dd50a(uVar19,iVar24,iVar26);
          if (iVar9 == 0) {
            local_a8 = -0x80000000;
            local_a4 = iVar24;
            local_a0 = iVar26;
            local_9c = param_3;
            iVar6 = FUN_011d018c(iVar22 + -0x14 + uVar21 * -0x20,(int)((ulonglong)uVar29 >> 0x20),
                                 &local_a8,param_4,param_5);
            if (iVar6 != 0) {
              return iVar6;
            }
            goto LAB_0118432c;
          }
        }
      }
      if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
      local_140 = local_140 + 4;
      uVar20 = uVar20 + local_140;
    }
  }
  piVar23 = (int *)param_1[0xc];
  do {
    iVar22 = *piVar23;
    bVar2 = (bool)hasExclusiveAccess(piVar23);
  } while (!bVar2);
  *piVar23 = iVar22 + 1;
  if (iVar22 < 0) {
LAB_011846b8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11846b8);
    (*pcVar1)();
  }
  iVar22 = param_1[0xd];
  if (param_4 == 0) {
    local_c8 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar8 = *(int **)(param_4 + 0xc);
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_011846b8;
    uVar18 = 0;
    uVar11 = param_1[0xd];
    uVar27 = *(undefined4 *)(param_4 + 0xc);
    uVar19 = *(undefined4 *)(param_4 + 0x10);
    uVar12 = (*(int **)(param_4 + 4))[1];
    if (uVar12 <= uVar11) {
      iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar23 + 2,uVar12);
      uVar18 = uVar12;
      if (iVar5 != 0) {
        uVar18 = 0;
      }
    }
    local_b0 = FUN_011e1508((int)(piVar23 + 2) + uVar18,uVar11 - uVar18);
    local_bc = 3;
    local_c8 = 2;
    local_b8 = uVar27;
    local_b4 = uVar19;
  }
  uVar29 = FUN_01238114(param_3);
  piVar8 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar19 = *(undefined4 *)(iVar6 + 4);
  iVar5 = *(int *)(iVar6 + 8);
  iVar6 = 1;
  if (iVar5 != 0) {
    iVar6 = thunk_FUN_016d4a50(iVar5);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar6,uVar19,iVar5);
  local_50 = 6;
  local_88 = &DAT_8000000b;
  piVar8[1] = iVar6;
  piVar8[2] = iVar5;
  *piVar8 = iVar5;
  local_7c = 1;
  local_84 = 1;
  local_a8 = local_c8;
  local_a4 = uStack_c4;
  local_a0 = uStack_c0;
  local_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_80 = piVar8;
  local_4c = param_2;
  local_30 = piVar23;
  local_2c = iVar22;
  local_38 = uVar29;
  local_90 = local_b0;
  iVar22 = thunk_FUN_016d4a50(0x80);
  if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar22,&local_a8,0x80);
  return iVar22;
}

