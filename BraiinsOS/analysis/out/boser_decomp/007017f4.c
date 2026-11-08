// FUN_007017f4 @ 007017f4 size=1188 calls_out=8 calls_in=3
// strings: 

void FUN_007017f4(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4,
                 undefined4 *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  uint local_108;
  undefined *local_104;
  uint local_f4;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_2c;
  
  uVar4 = FUN_00701e18(*param_2,param_2[1],param_2[2],param_2[3],param_3,param_4);
  iVar15 = param_2[5];
  local_f4 = param_2[6];
  if (param_2[9] == 0) {
    FUN_00702fc4(param_2 + 7,1,iVar15,local_f4);
  }
  piVar5 = param_2 + 4;
  puVar17 = (uint *)param_2[7];
  uVar13 = param_2[8];
  bVar2 = false;
  iVar20 = 0;
  bVar3 = false;
  uVar11 = uVar4;
  do {
    local_104 = &DAT_01d307c8;
    uVar11 = uVar13 & uVar11;
    uVar6 = *(uint *)((int)puVar17 + uVar11);
    uVar7 = uVar6 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar14 = puVar17[-1 - (uVar11 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >>
                                      3) & uVar13)];
      if (local_f4 <= uVar14) {
LAB_00701c88:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,local_f4,local_104);
      }
      iVar8 = iVar15 + uVar14 * 0x40;
      if ((param_4 == *(int *)(iVar8 + 0x34)) &&
         (iVar8 = thunk_FUN_01bed842(param_3 + 2,*(int *)(iVar8 + 0x30) + 8,param_4), iVar8 == 0)) {
        local_f4 = param_2[6];
        if (local_f4 <= uVar14) {
          local_104 = &DAT_01d307d8;
          goto LAB_00701c88;
        }
        puVar9 = (undefined4 *)(param_2[5] + uVar14 * 0x40);
        local_94 = *puVar9;
        uStack_90 = puVar9[1];
        uStack_8c = puVar9[2];
        uStack_88 = puVar9[3];
        uVar21 = puVar9[4];
        local_68 = puVar9[5];
        uStack_64 = puVar9[6];
        uStack_60 = puVar9[7];
        local_5c = puVar9[8];
        uStack_58 = puVar9[9];
        local_54 = puVar9[10];
        local_50 = puVar9[0xb];
        uVar10 = param_5[1];
        uVar12 = param_5[2];
        uVar16 = param_5[3];
        uVar18 = param_5[4];
        uVar19 = param_5[5];
        *puVar9 = *param_5;
        puVar9[1] = uVar10;
        puVar9[2] = uVar12;
        puVar9[3] = uVar16;
        puVar9[4] = uVar18;
        puVar9[5] = uVar19;
        uVar10 = param_5[7];
        uVar12 = param_5[8];
        uVar16 = param_5[9];
        uVar18 = param_5[10];
        uVar19 = param_5[0xb];
        puVar9[6] = param_5[6];
        puVar9[7] = uVar10;
        puVar9[8] = uVar12;
        puVar9[9] = uVar16;
        puVar9[10] = uVar18;
        puVar9[0xb] = uVar19;
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(param_3,param_4);
        }
        goto LAB_00701c00;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_007019b0;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar7 = uVar6 & 0x80808080;
      if (uVar7 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_108 = uVar11 + ((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                            (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                    uVar13;
LAB_007019b0:
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar20 = iVar20 + 4;
    uVar11 = uVar11 + iVar20;
  } while( true );
  uVar11 = (uint)*(char *)((int)puVar17 + local_108);
  if (-1 < (int)uVar11) {
    uVar11 = *puVar17 & 0x80808080;
    uVar7 = LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                    (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)puVar17 + (uVar7 >> 3));
    local_108 = uVar7 >> 3;
  }
  iVar15 = param_2[9];
  iVar20 = param_2[10];
  uVar7 = param_2[6];
  bVar1 = (byte)(uVar4 >> 0x19);
  *(byte *)((int)puVar17 + local_108) = bVar1;
  param_2[9] = iVar15 - (uVar11 & 1);
  param_2[10] = iVar20 + 1;
  *(byte *)((int)puVar17 + (uVar13 & local_108 - 4) + 4) = bVar1;
  puVar17[-1 - local_108] = uVar7;
  local_94 = param_5[1];
  uStack_90 = param_5[2];
  uStack_8c = param_5[3];
  uStack_88 = param_5[4];
  iVar15 = param_2[6];
  if (iVar15 == param_2[4]) {
    uVar11 = 0x1ffffff;
    if ((uint)(param_2[9] + param_2[10]) < 0x1ffffff) {
      uVar11 = param_2[9] + param_2[10];
    }
    if (1 < uVar11 - iVar15) {
      iVar20 = FUN_00702534(piVar5,iVar15);
      iVar15 = param_2[6];
      if (iVar20 == -0x7fffffff) goto LAB_00701b94;
    }
    FUN_00702520(piVar5,iVar15,1);
    iVar15 = param_2[6];
  }
LAB_00701b94:
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  local_5c = param_5[3];
  uStack_58 = param_5[4];
  local_54 = param_5[5];
  local_50 = param_5[6];
  uVar10 = param_5[7];
  uVar12 = param_5[8];
  uVar16 = param_5[9];
  uVar18 = param_5[10];
  uVar19 = param_5[0xb];
  if (iVar15 == *piVar5) {
    FUN_007024c0(piVar5);
  }
  puVar9 = (undefined4 *)(param_2[5] + iVar15 * 0x40);
  *puVar9 = local_68;
  puVar9[1] = uStack_64;
  puVar9[2] = uStack_60;
  puVar9[3] = local_5c;
  puVar9[4] = uStack_58;
  puVar9[5] = local_54;
  puVar9[6] = local_50;
  puVar9[7] = uVar10;
  puVar9[8] = uVar12;
  puVar9[9] = uVar16;
  puVar9[10] = uVar18;
  puVar9[0xb] = uVar19;
  puVar9[0xc] = param_3;
  puVar9[0xd] = param_4;
  puVar9[0xe] = uVar4;
  puVar9[0xf] = uStack_2c;
  uVar21 = 0x80000007;
  param_2[6] = iVar15 + 1;
LAB_00701c00:
  *param_1 = local_94;
  param_1[1] = uStack_90;
  param_1[2] = uStack_8c;
  param_1[3] = uStack_88;
  param_1[4] = uVar21;
  param_1[5] = local_68;
  param_1[6] = uStack_64;
  param_1[7] = uStack_60;
  param_1[8] = local_5c;
  param_1[9] = uStack_58;
  param_1[10] = local_54;
  param_1[0xb] = local_50;
  return;
}

