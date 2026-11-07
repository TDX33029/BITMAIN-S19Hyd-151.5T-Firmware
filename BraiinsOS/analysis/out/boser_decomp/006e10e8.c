// FUN_006e10e8 @ 006e10e8 size=1108 calls_out=9 calls_in=69
// strings: 

void FUN_006e10e8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  int *piVar17;
  uint local_13c;
  undefined *local_138;
  uint local_128;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [172];
  uint local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar11 = param_3[2];
  uVar15 = param_3[1];
  uVar4 = FUN_01adafd4(*param_2,param_2[1],param_2[2],param_2[3],uVar15,iVar11);
  iVar5 = param_2[5];
  local_128 = param_2[6];
  if (param_2[9] == 0) {
    FUN_006b851c(param_2 + 7,1,iVar5,local_128);
  }
  puVar16 = (uint *)param_2[7];
  uVar10 = param_2[8];
  piVar17 = param_2 + 4;
  bVar2 = false;
  iVar12 = 0;
  bVar3 = false;
  uVar9 = uVar4;
  do {
    local_138 = &DAT_01d307c8;
    uVar9 = uVar10 & uVar9;
    uVar6 = *(uint *)((int)puVar16 + uVar9);
    uVar7 = uVar6 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar14 = puVar16[-1 - (uVar9 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >>
                                     3) & uVar10)];
      if (local_128 <= uVar14) {
LAB_006e152c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,local_128,local_138);
      }
      iVar8 = iVar5 + uVar14 * 0xc0;
      if ((iVar11 == *(int *)(iVar8 + 0xbc)) &&
         (iVar8 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(iVar8 + 0xb8)), iVar8 == 0)) {
        local_128 = param_2[6];
        if (local_128 <= uVar14) {
          local_138 = &DAT_01d307d8;
          goto LAB_006e152c;
        }
        iVar5 = param_2[5] + uVar14 * 0xc0;
        FUN_01bed4e2(auStack_e4,iVar5,0xa0);
        uVar13 = *(undefined4 *)(iVar5 + 0xa0);
        local_f8 = *(undefined4 *)(iVar5 + 0xa4);
        uStack_f4 = *(undefined4 *)(iVar5 + 0xa8);
        uStack_f0 = *(undefined4 *)(iVar5 + 0xac);
        FUN_01bed4e2(iVar5,param_4,0xb0);
        FUN_019bb7e0(*param_3,uVar15);
        goto LAB_006e14b0;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_006e1290;
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
        local_13c = uVar9 + ((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                    uVar10;
LAB_006e1290:
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
        bVar3 = true;
        bVar2 = true;
      }
    }
    iVar12 = iVar12 + 4;
    uVar9 = uVar9 + iVar12;
  } while( true );
  uVar9 = (uint)*(char *)((int)puVar16 + local_13c);
  if (-1 < (int)uVar9) {
    uVar9 = *puVar16 & 0x80808080;
    uVar7 = LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
    uVar9 = (uint)*(byte *)((int)puVar16 + (uVar7 >> 3));
    local_13c = uVar7 >> 3;
  }
  uVar7 = param_2[6];
  iVar12 = param_2[10];
  iVar11 = param_2[9];
  bVar1 = (byte)(uVar4 >> 0x19);
  *(byte *)((int)puVar16 + local_13c) = bVar1;
  *(byte *)((int)puVar16 + (uVar10 & local_13c - 4) + 4) = bVar1;
  puVar16[-1 - local_13c] = uVar7;
  iVar5 = param_2[6];
  param_2[9] = iVar11 - (uVar9 & 1);
  param_2[10] = iVar12 + 1;
  if (iVar5 == param_2[4]) {
    uVar9 = 0xaaaaaa;
    if ((uint)(param_2[9] + param_2[10]) < 0xaaaaaa) {
      uVar9 = param_2[9] + param_2[10];
    }
    if (1 < uVar9 - iVar5) {
      iVar11 = FUN_0132b728(piVar17,iVar5,uVar9 - iVar5,8,0xc0);
      iVar5 = param_2[6];
      if (iVar11 == -0x7fffffff) goto LAB_006e1450;
    }
    FUN_0132b704(piVar17,iVar5,1,8,0xc0);
    iVar5 = param_2[6];
  }
LAB_006e1450:
  local_34 = *param_3;
  uStack_30 = param_3[1];
  uStack_2c = param_3[2];
  FUN_01bed4e2(auStack_e8,param_4,0xb0);
  local_38 = uVar4;
  if (iVar5 == *piVar17) {
    FUN_006e4e68(piVar17);
  }
  FUN_01bed4e2(param_2[5] + iVar5 * 0xc0,auStack_e8,0xc0);
  param_2[6] = iVar5 + 1;
  uVar13 = 0x80000000;
LAB_006e14b0:
  FUN_01bed4e2(param_1,auStack_e4,0xa0);
  *(undefined4 *)(param_1 + 0xa0) = uVar13;
  *(undefined4 *)(param_1 + 0xa4) = local_f8;
  *(undefined4 *)(param_1 + 0xa8) = uStack_f4;
  *(undefined4 *)(param_1 + 0xac) = uStack_f0;
  return;
}

