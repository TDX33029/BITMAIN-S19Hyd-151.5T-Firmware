// FUN_0118c280 @ 0118c280 size=1932 calls_out=11 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0118c280(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined8 uVar30;
  int local_148;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined1 *local_88;
  undefined4 local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_e8 = *(int *)(param_2 + 4);
  local_e4 = *(undefined4 *)(param_2 + 8);
  local_d0 = *(undefined4 *)(param_2 + 0xc);
  uVar9 = param_1[1];
  if (local_e8 == 0) {
    local_d0 = 0;
  }
  iVar24 = *param_1;
  iVar28 = param_1[0x11];
  iVar10 = param_1[0x12];
  local_f0 = (uint)(local_e8 != 0);
  local_dc = 0;
  local_ec = 0;
  local_e0 = local_f0;
  local_d8._0_4_ = local_e8;
  local_d8._4_4_ = local_e4;
  local_4c = param_2;
  if (param_1[3] == 0) {
    iVar6 = FUN_00f45584(&local_f0);
    if (iVar6 != 0) {
LAB_0118c738:
      piVar23 = (int *)param_1[0xc];
      do {
        iVar10 = *piVar23;
        bVar8 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar8);
      *piVar23 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_0118ca18;
      iVar10 = param_1[0xd];
      if (param_4 == 0) {
        local_c8 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar7 = *(int **)(param_4 + 0xc);
        do {
          iVar24 = *piVar7;
          bVar8 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar8);
        *piVar7 = iVar24 + 1;
        if (iVar24 < 0) goto LAB_0118ca18;
        uVar15 = *(uint *)(param_4 + 0xc);
        uVar20 = *(undefined4 *)(param_4 + 0x10);
        uVar9 = 0;
        uVar13 = param_1[0xd];
        uVar14 = (*(int **)(param_4 + 4))[1];
        if (uVar14 <= uVar13) {
          iVar24 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar23 + 2,uVar14);
          uVar9 = uVar14;
          if (iVar24 != 0) {
            uVar9 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar23 + 2) + uVar9,uVar13 - uVar9);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar15;
        local_b4 = uVar20;
      }
      uVar30 = FUN_01238114(param_3);
      piVar7 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      uVar20 = *(undefined4 *)(iVar6 + 4);
      iVar28 = *(int *)(iVar6 + 8);
      iVar24 = 1;
      if (iVar28 != 0) {
        iVar24 = thunk_FUN_016d4a50(iVar28);
        if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar28);
        }
      }
      FUN_016dd1aa(iVar24,uVar20,iVar28);
      local_50 = 6;
      local_88 = &DAT_8000000b;
      piVar7[1] = iVar24;
      piVar7[2] = iVar28;
      *piVar7 = iVar28;
      local_7c = 1;
      local_84 = 1;
      local_a8 = local_c8;
      local_a4 = uStack_c4;
      local_a0 = iStack_c0;
      local_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = piVar7;
      local_30 = piVar23;
      local_2c = iVar10;
      local_38 = uVar30;
      local_90 = local_b0;
      iVar10 = thunk_FUN_016d4a50(0x80);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      goto LAB_0118c9a0;
    }
  }
  else {
    bVar8 = false;
    uVar13 = param_1[4];
    uVar14 = param_1[5];
    uVar15 = param_1[6];
    uVar16 = param_1[7];
    uVar17 = param_1[8];
    iVar18 = param_1[9];
    iVar19 = param_1[10];
    iVar4 = param_1[0xb];
LAB_0118c394:
    uVar30 = FUN_00f45584(&local_f0);
    iVar6 = (int)uVar30;
    if (iVar6 != 0) {
      uVar20 = *(undefined4 *)(iVar6 + 4);
      iVar27 = *(int *)(iVar6 + 8);
      local_a8 = uVar17;
      local_a4 = iVar18;
      local_a0 = iVar19;
      local_9c = iVar4;
      local_98 = uVar15;
      uStack_94 = uVar16;
      local_90._0_4_ = uVar13;
      local_90._4_4_ = uVar14;
      FUN_011df94c(&local_a8,uVar20,iVar27);
      uVar5 = local_98 ^ 0xff;
      uVar25 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 | (uStack_94 >> 0x10 & 0xff) << 8
               | uStack_94 >> 0x18;
      lVar2 = (ulonglong)uVar25 * 0xb36a80d2;
      uVar21 = (uint)lVar2;
      uVar11 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
               uVar21 >> 0x18) ^
               uStack_94 * 0x2df45158 +
               uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
      uVar22 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
      lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar22;
      uVar29 = (uint)lVar3;
      uVar21 = (uVar5 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
               local_98 >> 0x18) * -0x4c957f2e +
               uVar25 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar25 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
               uVar21 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
      uVar5 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
              uVar25 >> 0x18) * ~(uint)local_90 +
              uVar22 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
      uVar21 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
               (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
      lVar2 = (ulonglong)uVar21 * (ulonglong)uVar25;
      uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18) ^ (uint)lVar2;
      uVar11 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18) ^
               uVar11 * uVar21 +
               uVar25 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                         ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar21 = uVar11;
      if ((uVar25 & 0x20) != 0) {
        uVar21 = uVar5;
        uVar5 = uVar11;
      }
      uVar21 = uVar5 << (uVar25 & 0x1f) | (uVar21 >> 1) >> (~uVar25 & 0x1f);
      uVar5 = uVar21 >> 0x19;
      local_148 = 0;
      while( true ) {
        uVar21 = uVar9 & uVar21;
        uVar11 = *(uint *)(iVar24 + uVar21);
        uVar25 = uVar11 ^ uVar5 * 0x1010101;
        uVar25 = ~uVar25 & 0x80808080 & uVar25 + 0xfefefeff;
        while (uVar25 != 0) {
          uVar29 = uVar25 - 1 & uVar25;
          uVar22 = uVar21 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                           (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) &
                   uVar9;
          iVar12 = iVar24 + -0x20 + uVar22 * -0x20;
          uVar25 = uVar29;
          if (iVar27 == *(int *)(iVar12 + 8)) {
            iVar26 = *(int *)(iVar12 + 4);
            iVar12 = thunk_FUN_016dd50a(uVar20,iVar26,iVar27);
            if (iVar12 == 0) {
              local_a8 = 0x80000000;
              local_a4 = iVar26;
              local_a0 = iVar27;
              local_9c = param_3;
              iVar27 = FUN_011d018c(iVar24 + -0x14 + uVar22 * -0x20,(int)((ulonglong)uVar30 >> 0x20)
                                    ,&local_a8,param_4,param_5);
              if (iVar27 != 0) {
                return iVar27;
              }
              if (*(int *)(iVar6 + 8) == iVar10) {
                iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 4),iVar28,iVar10);
                bVar8 = (bool)(iVar6 == 0 | bVar8);
              }
              goto LAB_0118c394;
            }
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_148 = local_148 + 4;
        uVar21 = uVar21 + local_148;
      }
      goto LAB_0118c738;
    }
    if (bVar8) {
      return 0;
    }
  }
  piVar23 = (int *)param_1[0xe];
  do {
    iVar10 = *piVar23;
    bVar8 = (bool)hasExclusiveAccess(piVar23);
  } while (!bVar8);
  *piVar23 = iVar10 + 1;
  if (iVar10 < 0) {
LAB_0118ca18:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x118ca18);
    (*pcVar1)();
  }
  iVar10 = param_1[0xf];
  if (param_4 == 0) {
    local_f0 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar7 = *(int **)(param_4 + 0xc);
    do {
      iVar24 = *piVar7;
      bVar8 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar8);
    *piVar7 = iVar24 + 1;
    if (iVar24 < 0) goto LAB_0118ca18;
    uVar15 = *(uint *)(param_4 + 0xc);
    uVar9 = 0;
    uVar20 = *(undefined4 *)(param_4 + 0x10);
    uVar14 = param_1[0xf];
    uVar13 = (*(int **)(param_4 + 4))[1];
    if (uVar13 <= uVar14) {
      iVar24 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar23 + 2,uVar13);
      uVar9 = uVar13;
      if (iVar24 != 0) {
        uVar9 = 0;
      }
    }
    local_d8 = FUN_011e1508((int)(piVar23 + 2) + uVar9,uVar14 - uVar9);
    local_e4 = 3;
    local_f0 = 2;
    local_e0 = uVar15;
    local_dc = uVar20;
  }
  uVar30 = FUN_01238114(param_3);
  iVar24 = param_1[0x11];
  local_7c = param_1[0x12];
  if (local_7c == 0) {
    iVar28 = 1;
  }
  else {
    iVar28 = thunk_FUN_016d4a50(local_7c);
    if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_7c);
    }
  }
  FUN_016dd1aa(iVar28,iVar24,local_7c);
  local_50 = 6;
  local_80 = (int *)CONCAT31(local_80._1_3_,3);
  local_88 = (undefined1 *)0x80000027;
  local_a8 = local_f0;
  local_a4 = local_ec;
  local_a0 = local_e8;
  local_9c = local_e4;
  local_98 = local_e0;
  uStack_94 = local_dc;
  local_78 = iVar28;
  local_74 = local_7c;
  local_30 = piVar23;
  local_2c = iVar10;
  local_38 = uVar30;
  local_90 = local_d8;
  iVar10 = thunk_FUN_016d4a50(0x80);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
LAB_0118c9a0:
  FUN_016dd1aa(iVar10,&local_a8,0x80);
  return iVar10;
}

