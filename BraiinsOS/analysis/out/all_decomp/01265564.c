// FUN_01265564 @ 01265564 size=1124 calls_out=6 calls_in=2
// strings: 

void FUN_01265564(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint local_a0;
  int local_80;
  int *local_7c;
  int local_78;
  int iStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  piVar14 = *(int **)(param_2 + 0x54);
  do {
    iVar8 = *piVar14;
    bVar4 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar4);
  *piVar14 = iVar8 + 1;
  if (iVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x1265998);
    (*pcVar2)();
  }
  local_48 = piVar14[3];
  local_44 = piVar14[4];
  local_40 = piVar14[5];
  iStack_3c = piVar14[6];
  iStack_38 = piVar14[7];
  local_34 = piVar14[8];
  iStack_30 = piVar14[9];
  iStack_2c = piVar14[10];
  iStack_28 = piVar14[0xb];
  FUN_0134831c(&local_80,*(undefined4 *)(param_2 + 0x50),&local_48,param_3,param_4);
  piVar7 = local_7c;
  if (local_80 != -0x7ffffff6) {
    param_1[2] = local_78;
    param_1[3] = iStack_74;
    param_1[4] = local_70;
    param_1[5] = uStack_6c;
    param_1[6] = uStack_68;
    param_1[7] = local_64;
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    *param_1 = local_80;
    param_1[1] = (int)local_7c;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar14;
      bVar4 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar4);
    *piVar14 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar14);
      return;
    }
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar14;
    bVar4 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar4);
  *piVar14 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(piVar14);
  }
  iVar8 = *(int *)(param_2 + 0x5c);
  if (*(int *)(iVar8 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0188af38);
  }
  *(undefined4 *)(iVar8 + 8) = 0xffffffff;
  iStack_74 = *(undefined4 *)(iVar8 + 0x3c);
  piVar14 = local_7c + 3;
  piVar1 = local_7c + 4;
  local_64 = *(uint *)(iVar8 + 0x24);
  local_70 = *(uint *)(iVar8 + 0x28);
  uStack_6c = *(uint *)(iVar8 + 0x2c);
  local_80 = *(int *)(iVar8 + 0x30);
  uStack_68 = *(uint *)(iVar8 + 0x20);
  local_7c = *(int **)(iVar8 + 0x34);
  local_78 = *(undefined4 *)(iVar8 + 0x38);
  FUN_011df94c(&local_80,*piVar14,*piVar1);
  uVar9 = local_70 ^ 0xff;
  uVar11 = uStack_6c << 0x18 | (uStack_6c >> 8 & 0xff) << 0x10 | (uStack_6c >> 0x10 & 0xff) << 8 |
           uStack_6c >> 0x18;
  lVar5 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar12 = (uint)lVar5;
  uVar16 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^
           uStack_6c * 0x2df45158 +
           uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
  uVar15 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar6 = (ulonglong)~uStack_68 * (ulonglong)uVar15;
  uVar18 = (uint)lVar6;
  uVar11 = (uVar9 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
           local_70 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar5 >> 0x20);
  uVar12 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
  uVar11 = local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 | (local_64 >> 0x10 & 0xff) << 8 |
           local_64 >> 0x18;
  uVar9 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * ~uStack_68 + uVar15 * ~local_64 + (int)((ulonglong)lVar6 >> 0x20);
  lVar5 = (ulonglong)uVar11 * (ulonglong)uVar12;
  uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18) ^ (uint)lVar5;
  uVar15 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^
           uVar16 * uVar11 +
           uVar12 * (uStack_68 << 0x18 | (uStack_68 >> 8 & 0xff) << 0x10 |
                     (uStack_68 >> 0x10 & 0xff) << 8 | uStack_68 >> 0x18) +
           (int)((ulonglong)lVar5 >> 0x20);
  uVar11 = uVar15;
  if ((uVar12 & 0x20) != 0) {
    uVar11 = uVar9;
    uVar9 = uVar15;
  }
  if (*(int *)(iVar8 + 0x18) == 0) {
    FUN_011a5550(iVar8 + 0x10,(uint *)(iVar8 + 0x20));
  }
  puVar13 = *(uint **)(iVar8 + 0x10);
  uVar11 = uVar9 << (uVar12 & 0x1f) | (uVar11 >> 1) >> (~uVar12 & 0x1f);
  uVar12 = *(uint *)(iVar8 + 0x14);
  bVar4 = false;
  iVar17 = 0;
  uVar9 = uVar11;
  do {
    uVar9 = uVar12 & uVar9;
    uVar16 = *(uint *)((int)puVar13 + uVar9);
    uVar15 = uVar16 ^ (uVar11 >> 0x19) * 0x1010101;
    for (uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff; uVar15 != 0;
        uVar15 = uVar15 - 1 & uVar15) {
      piVar14 = (int *)puVar13[-1 - (uVar9 + ((uint)LZCOUNT(uVar15 << 0x18 |
                                                            (uVar15 >> 8 & 0xff) << 0x10 |
                                                            (uVar15 >> 0x10 & 0xff) << 8 |
                                                            uVar15 >> 0x18) >> 3) & uVar12)];
      if ((piVar7 == piVar14) ||
         ((piVar7[4] == piVar14[4] &&
          (iVar10 = thunk_FUN_016dd50a(piVar7[3],piVar14[3]), iVar10 == 0)))) {
        DataMemoryBarrier(0xb);
        do {
          iVar17 = *piVar7;
          bVar4 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar4);
        *piVar7 = iVar17 + -1;
        if (iVar17 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(piVar7);
        }
        goto LAB_01265924;
      }
    }
    uVar15 = uVar16 & 0x80808080;
    if (bVar4) {
LAB_01265878:
      if ((uVar15 & uVar16 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar13 + local_a0);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar13 & 0x80808080;
          uVar15 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar13 + (uVar15 >> 3));
          local_a0 = uVar15 >> 3;
        }
        iVar17 = *(int *)(iVar8 + 0x1c);
        iVar10 = *(int *)(iVar8 + 0x18);
        bVar3 = (byte)(uVar11 >> 0x19);
        *(byte *)((int)puVar13 + local_a0) = bVar3;
        *(uint *)(iVar8 + 0x18) = iVar10 - (uVar9 & 1);
        *(int *)(iVar8 + 0x1c) = iVar17 + 1;
        *(byte *)((int)puVar13 + (uVar12 & local_a0 - 4) + 4) = bVar3;
        puVar13[-1 - local_a0] = (uint)piVar7;
LAB_01265924:
        iVar17 = *(int *)(iVar8 + 8);
        *param_1 = -0x7ffffff6;
        *(int *)(iVar8 + 8) = iVar17 + 1;
        return;
      }
      bVar4 = true;
    }
    else {
      if (uVar15 != 0) {
        local_a0 = uVar9 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                          (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                   uVar12;
        goto LAB_01265878;
      }
      bVar4 = false;
    }
    iVar17 = iVar17 + 4;
    uVar9 = iVar17 + uVar9;
  } while( true );
}

