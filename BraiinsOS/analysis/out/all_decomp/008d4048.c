// FUN_008d4048 @ 008d4048 size=772 calls_out=7 calls_in=1
// strings: 

void FUN_008d4048(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_4c;
  
  uVar8 = param_3 - param_2;
  uVar13 = (uVar8 >> 4) + 1 >> 1;
  if (param_1[3] == 0) {
    uVar13 = uVar8 >> 4;
  }
  if ((uint)param_1[2] < uVar13) {
    FUN_008d3adc(param_1,uVar13,param_1[4],param_1[5],param_1[6],param_1[7]);
  }
  if (param_2 == param_3) {
    return;
  }
  uVar13 = 0;
LAB_008d41cc:
  iVar6 = param_2 + uVar13 * 0x10;
  uVar9 = 1;
  uVar10 = *(uint *)(iVar6 + 8);
  uVar11 = *(undefined4 *)(iVar6 + 4);
  if ((uVar10 != 0) && (uVar9 = thunk_FUN_016d4a50(uVar10), uVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar10);
  }
  FUN_016dd1aa(uVar9,uVar11,uVar10);
  uVar11 = param_1[4];
  uVar15 = param_1[5];
  uVar18 = param_1[6];
  uVar19 = param_1[7];
  uVar7 = FUN_008c3a18(uVar11,uVar15,uVar18,uVar19,uVar9,uVar10);
  if (param_1[2] == 0) {
    FUN_008d3adc(param_1,1,uVar11,uVar15,uVar18,uVar19);
  }
  puVar14 = (uint *)*param_1;
  uVar16 = param_1[1];
  iVar6 = 0;
  bVar2 = false;
  uVar12 = uVar7;
  do {
    uVar12 = uVar16 & uVar12;
    uVar17 = *(uint *)((int)puVar14 + uVar12);
    uVar3 = uVar17 ^ (uVar7 >> 0x19) * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = uVar12 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar16;
      if ((uVar10 == puVar14[uVar4 * -3 + -1]) &&
         (iVar5 = thunk_FUN_016dd50a(uVar9,puVar14[uVar4 * -3 + -2],uVar10), iVar5 == 0)) {
        if (uVar10 != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
        goto LAB_008d41b8;
      }
    }
    uVar4 = uVar17 & 0x80808080;
    uVar3 = local_4c;
    if (bVar2) {
LAB_008d4178:
      if ((uVar4 & uVar17 << 1) != 0) break;
      bVar2 = true;
      local_4c = uVar3;
    }
    else {
      if (uVar4 != 0) {
        uVar3 = uVar12 + ((uint)LZCOUNT((uVar17 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar16;
        goto LAB_008d4178;
      }
      bVar2 = false;
    }
    iVar6 = iVar6 + 4;
    uVar12 = iVar6 + uVar12;
  } while( true );
  uVar12 = (uint)*(char *)((int)puVar14 + uVar3);
  if (-1 < (int)uVar12) {
    uVar12 = *puVar14 & 0x80808080;
    uVar3 = LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                    (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
    uVar12 = (uint)*(byte *)((int)puVar14 + (uVar3 >> 3));
    uVar3 = uVar3 >> 3;
  }
  iVar6 = param_1[3];
  iVar5 = param_1[2];
  bVar1 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar14 + uVar3) = bVar1;
  param_1[2] = iVar5 - (uVar12 & 1);
  param_1[3] = iVar6 + 1;
  *(byte *)((int)puVar14 + (uVar16 & uVar3 - 4) + 4) = bVar1;
  puVar14[uVar3 * -3 + -1] = uVar10;
  puVar14[uVar3 * -3 + -2] = uVar9;
  puVar14[uVar3 * -3 + -3] = uVar10;
LAB_008d41b8:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar8 >> 4) {
    return;
  }
  goto LAB_008d41cc;
}

