// FUN_0134ef4c @ 0134ef4c size=1568 calls_out=12 calls_in=3
// strings: 

void FUN_0134ef4c(uint *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 ****param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *****pppppuVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint *puStack_c4;
  uint local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 ****local_a8;
  uint local_a4;
  int *local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint *puStack_8c;
  uint local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 *****local_78;
  uint local_74;
  undefined4 ****local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint *local_60;
  uint local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 ****local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  uVar13 = *param_3;
  iVar14 = param_3[1];
  local_78 = (undefined4 *****)param_2[4];
  local_74 = param_2[5];
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = (undefined4 ****)0x0;
  local_5c = local_5c & 0xffffff00;
  local_60 = &DAT_018dd8f0;
  FUN_0134e6e8(&local_78);
  if ((char)local_5c == '\0') {
    pppppuVar19 = local_78;
    uVar17 = local_74;
  }
  else {
    uVar5 = (ulonglong)((uint)local_78 ^ (uint)local_70) * (ulonglong)(local_60[1] ^ local_64) ^
            (ulonglong)(local_74 ^ local_6c) * (ulonglong)(*local_60 ^ local_68);
    uVar6 = (ulonglong)((uint)local_78 ^ (uint)local_70) * (ulonglong)(*local_60 ^ local_68) ^
            (ulonglong)(local_74 ^ local_6c) * (ulonglong)(local_60[1] ^ local_64);
    pppppuVar19 = (undefined4 *****)((uint)uVar6 ^ (uint)(uVar5 >> 0x20));
    uVar17 = (uint)(uVar6 >> 0x20) ^ (uint)uVar5;
  }
  uVar15 = param_2[1];
  iVar16 = *param_2;
  iVar22 = 0;
  ppppuVar9 = pppppuVar19;
  do {
    uVar21 = uVar15 & (uint)ppppuVar9;
    uVar18 = *(uint *)(iVar16 + uVar21);
    uVar7 = uVar18 ^ ((uint)pppppuVar19 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      iVar20 = iVar16 + (uVar21 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                 (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3)
                        & uVar15) * -0x28;
      if ((iVar14 == *(int *)(iVar20 + -0x20)) &&
         (iVar8 = thunk_FUN_016dd50a(uVar13,*(undefined4 *)(iVar20 + -0x24)), iVar8 == 0)) {
        puVar10 = (uint *)FUN_0134e538(iVar20 + -0x18,param_4,param_5);
        if (puVar10 != (uint *)0x0) {
          piVar11 = (int *)*puVar10;
          do {
            iVar14 = *piVar11;
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = iVar14 + 1;
          if (-1 < iVar14) {
            param_1[1] = *puVar10;
            *param_1 = 0x8000000a;
            return;
          }
          goto LAB_0134f578;
        }
        FUN_01357154(&local_78,param_3,param_4,param_5);
        ppppuVar9 = local_70;
        uVar17 = local_74;
        puVar10 = &local_d0;
        local_d0 = local_6c;
        uStack_cc = local_68;
        uStack_c8 = local_64;
        puStack_c4 = local_60;
        local_c0 = local_5c;
        iStack_bc = iStack_58;
        iStack_b8 = iStack_54;
        iStack_b4 = iStack_50;
        if (local_78 == (undefined4 *****)0x8000000a) {
          piVar11 = (int *)thunk_FUN_016d4a50(0x30);
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x30);
          }
          uVar15 = 1;
          *piVar11 = 1;
          piVar11[1] = 1;
          piVar11[2] = uVar17;
          piVar11[3] = (int)ppppuVar9;
          piVar11[4] = local_d0;
          piVar11[5] = uStack_cc;
          piVar11[6] = uStack_c8;
          piVar11[7] = (int)puStack_c4;
          piVar11[8] = local_c0;
          piVar11[9] = iStack_bc;
          piVar11[10] = iStack_b8;
          piVar11[0xb] = iStack_b4;
          uVar13 = 0;
          if ((int)param_5 < 0) {
LAB_0134f378:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar13,param_5);
          }
          if (param_5 == (undefined4 ****)0x0) {
            ppppuVar9 = (undefined4 ****)0x0;
          }
          else {
            uVar15 = thunk_FUN_016d4a50(param_5);
            if (uVar15 == 0) {
              uVar13 = 1;
              goto LAB_0134f378;
            }
            ppppuVar9 = param_5;
          }
          FUN_016dd1aa(uVar15,param_4,param_5);
          local_70 = param_5;
          do {
            iVar14 = *piVar11;
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = iVar14 + 1;
          local_78 = (undefined4 *****)ppppuVar9;
          local_74 = uVar15;
          if (iVar14 < 0) goto LAB_0134f578;
          piVar12 = (int *)FUN_0134e920(iVar20 + -0x18,&local_78,piVar11);
          if (piVar12 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar14 = *piVar12;
              bVar2 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar2);
            *piVar12 = iVar14 + -1;
            if (iVar14 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013532e4();
            }
          }
          goto LAB_0134f4a0;
        }
        goto LAB_0134f384;
      }
    }
    if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
    iVar22 = iVar22 + 4;
    ppppuVar9 = (undefined4 ****)(iVar22 + uVar21);
  } while( true );
  local_b0 = uVar13;
  local_ac = iVar14;
  local_a8 = pppppuVar19;
  local_a4 = uVar17;
  local_a0 = param_2;
  FUN_01357154(&local_78,param_3,param_4,param_5);
  ppppuVar9 = local_70;
  uVar17 = local_74;
  puVar10 = &local_98;
  local_98 = local_6c;
  uStack_94 = local_68;
  uStack_90 = local_64;
  puStack_8c = local_60;
  local_88 = local_5c;
  iStack_84 = iStack_58;
  iStack_80 = iStack_54;
  iStack_7c = iStack_50;
  if (local_78 != (undefined4 *****)0x8000000a) {
LAB_0134f384:
    param_1[0xb] = local_4c;
    param_1[0xc] = local_48;
    param_1[0xd] = local_44;
    param_1[1] = local_74;
    param_1[2] = (uint)local_70;
    uVar17 = puVar10[1];
    uVar15 = puVar10[2];
    uVar7 = puVar10[3];
    param_1[3] = *puVar10;
    param_1[4] = uVar17;
    param_1[5] = uVar15;
    param_1[6] = uVar7;
    uVar17 = puVar10[5];
    uVar15 = puVar10[6];
    uVar7 = puVar10[7];
    param_1[7] = puVar10[4];
    param_1[8] = uVar17;
    param_1[9] = uVar15;
    param_1[10] = uVar7;
    *param_1 = (uint)local_78;
    return;
  }
  piVar11 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *piVar11 = 1;
  piVar11[1] = 1;
  piVar11[2] = uVar17;
  piVar11[3] = (int)ppppuVar9;
  piVar11[4] = local_98;
  piVar11[5] = uStack_94;
  piVar11[6] = uStack_90;
  piVar11[7] = (int)puStack_8c;
  piVar11[8] = local_88;
  piVar11[9] = iStack_84;
  piVar11[10] = iStack_80;
  piVar11[0xb] = iStack_7c;
  local_74 = 0;
  lVar3 = ZEXT48(&local_78) * 0x13198a2e;
  lVar4 = ZEXT48(&local_78) * (ulonglong)(DAT_018dd94c ^ 0x3707344);
  uVar17 = (uint)lVar4 ^ (uint)((ulonglong)lVar3 >> 0x20);
  DataMemoryBarrier(0xb);
  local_78 = &local_78;
  DAT_018dd94c = uVar17;
  if (DAT_018dd920 != '\x02') {
    FUN_0100e96c();
  }
  iVar14 = thunk_FUN_016d4a50(0x48);
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x48);
  }
  uVar15 = (uint)((ulonglong)lVar4 >> 0x20) ^ (uint)lVar3;
  uVar5 = (ulonglong)uVar17 * 0x299f31d0 ^ (ulonglong)uVar15 * 0xa4093822;
  uVar6 = (ulonglong)uVar17 * 0xa4093822 ^ (ulonglong)uVar15 * 0x299f31d0;
  local_2c = (uint)(uVar5 >> 0x20) ^ (uint)uVar6;
  local_30 = (uint)uVar5 ^ (uint)(uVar6 >> 0x20);
  local_40 = (undefined4 ****)(iVar14 + 0x40);
  *local_40 = (undefined4 ***)0xffffffff;
  *(undefined4 *)(iVar14 + 0x44) = 0xffffffff;
  uVar13 = 0;
  local_34 = 0;
  local_38 = 3;
  local_3c = 3;
  if ((int)param_5 < 0) {
LAB_0134f2e0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar13,param_5);
  }
  if (param_5 == (undefined4 ****)0x0) {
    uVar17 = 1;
    ppppuVar9 = (undefined4 ****)0x0;
  }
  else {
    uVar17 = thunk_FUN_016d4a50(param_5);
    if (uVar17 == 0) {
      uVar13 = 1;
      goto LAB_0134f2e0;
    }
    ppppuVar9 = param_5;
  }
  FUN_016dd1aa(uVar17,param_4,param_5);
  local_70 = param_5;
  do {
    iVar14 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar14 + 1;
  local_78 = (undefined4 *****)ppppuVar9;
  local_74 = uVar17;
  if (iVar14 < 0) {
LAB_0134f578:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x134f578);
    (*pcVar1)();
  }
  piVar12 = (int *)FUN_0134e920(&local_40,&local_78,piVar11);
  if (piVar12 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4();
    }
  }
  local_78 = (undefined4 *****)local_40;
  local_74 = local_3c;
  local_70 = (undefined4 ****)local_38;
  local_6c = local_34;
  local_68 = local_30;
  local_64 = local_2c;
  FUN_0134ec5c(&local_b0,&local_78);
LAB_0134f4a0:
  param_1[1] = (uint)piVar11;
  *param_1 = 0x8000000a;
  return;
}

