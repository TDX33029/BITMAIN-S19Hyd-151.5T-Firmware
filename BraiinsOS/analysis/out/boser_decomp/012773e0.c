// FUN_012773e0 @ 012773e0 size=1068 calls_out=9 calls_in=3
// strings: 

void FUN_012773e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint local_154;
  undefined *local_150;
  uint local_128;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [196];
  uint local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar13 = param_3[2];
  uVar15 = param_3[1];
  uVar4 = FUN_01930380(*param_2,param_2[1],param_2[2],param_2[3],uVar15,iVar13);
  local_128 = param_2[6];
  iVar9 = param_2[5];
  if (param_2[9] == 0) {
    FUN_0126f4d0(param_2 + 7,1,iVar9,local_128);
  }
  piVar5 = param_2 + 4;
  puVar11 = (uint *)param_2[7];
  uVar17 = param_2[8];
  bVar2 = false;
  iVar16 = 0;
  bVar3 = false;
  uVar10 = uVar4;
  do {
    local_150 = &DAT_01d307c8;
    uVar10 = uVar17 & uVar10;
    uVar6 = *(uint *)((int)puVar11 + uVar10);
    uVar7 = uVar6 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar14 = puVar11[-1 - (uVar10 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >>
                                      3) & uVar17)];
      if (local_128 <= uVar14) {
LAB_012777fc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,local_128,local_150);
      }
      iVar8 = uVar14 * 0xd8 + iVar9;
      if ((iVar13 == *(int *)(iVar8 + 0xd4)) &&
         (iVar8 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(iVar8 + 0xd0)), iVar8 == 0)) {
        local_128 = param_2[6];
        if (local_128 <= uVar14) {
          local_150 = &DAT_01d307d8;
          goto LAB_012777fc;
        }
        iVar9 = uVar14 * 0xd8 + param_2[5];
        FUN_01bed4e2(auStack_fc,iVar9,0xb8);
        uVar12 = *(undefined4 *)(iVar9 + 0xb8);
        local_110 = *(undefined4 *)(iVar9 + 0xbc);
        uStack_10c = *(undefined4 *)(iVar9 + 0xc0);
        uStack_108 = *(undefined4 *)(iVar9 + 0xc4);
        FUN_01bed4e2(iVar9,param_4,200);
        FUN_019bb7e0(*param_3,uVar15);
        goto LAB_01277780;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_01277598;
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
        local_154 = uVar10 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                            (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                    uVar17;
LAB_01277598:
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar16 = iVar16 + 4;
    uVar10 = uVar10 + iVar16;
  } while( true );
  uVar10 = (uint)*(char *)((int)puVar11 + local_154);
  if (-1 < (int)uVar10) {
    uVar10 = *puVar11 & 0x80808080;
    uVar7 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                    uVar10 >> 0x18);
    uVar10 = (uint)*(byte *)((int)puVar11 + (uVar7 >> 3));
    local_154 = uVar7 >> 3;
  }
  iVar13 = param_2[9];
  iVar16 = param_2[10];
  uVar7 = param_2[6];
  bVar1 = (byte)(uVar4 >> 0x19);
  *(byte *)((int)puVar11 + local_154) = bVar1;
  *(byte *)((int)puVar11 + (uVar17 & local_154 - 4) + 4) = bVar1;
  puVar11[-1 - local_154] = uVar7;
  iVar9 = param_2[6];
  param_2[9] = iVar13 - (uVar10 & 1);
  param_2[10] = iVar16 + 1;
  if (iVar9 == param_2[4]) {
    uVar10 = 0x97b425;
    if ((uint)(param_2[9] + param_2[10]) < 0x97b425) {
      uVar10 = param_2[9] + param_2[10];
    }
    if (1 < uVar10 - iVar9) {
      iVar13 = FUN_01a54c4c(piVar5,iVar9,uVar10 - iVar9,0xd8);
      iVar9 = param_2[6];
      if (iVar13 == -0x7fffffff) goto LAB_01277720;
    }
    FUN_01a54c38(piVar5,iVar9,1,0xd8);
    iVar9 = param_2[6];
  }
LAB_01277720:
  local_34 = *param_3;
  uStack_30 = param_3[1];
  uStack_2c = param_3[2];
  FUN_01bed4e2(auStack_100,param_4,200);
  local_38 = uVar4;
  if (iVar9 == *piVar5) {
    FUN_00b8ecb4(piVar5);
  }
  FUN_01bed4e2(iVar9 * 0xd8 + param_2[5],auStack_100,0xd8);
  param_2[6] = iVar9 + 1;
  uVar12 = 0x80000000;
LAB_01277780:
  FUN_01bed4e2(param_1,auStack_fc,0xb8);
  *(undefined4 *)(param_1 + 0xb8) = uVar12;
  *(undefined4 *)(param_1 + 0xbc) = local_110;
  *(undefined4 *)(param_1 + 0xc0) = uStack_10c;
  *(undefined4 *)(param_1 + 0xc4) = uStack_108;
  return;
}

