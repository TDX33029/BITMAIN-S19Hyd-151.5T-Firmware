// FUN_006ca9b8 @ 006ca9b8 size=608 calls_out=4 calls_in=2
// strings: 

void FUN_006ca9b8(int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  uVar9 = param_1[8];
  if (uVar9 != 0) {
    uVar7 = param_1[9];
    uVar2 = FUN_006c561c(param_1[4],param_1[5],param_1[6],param_1[7],uVar9,uVar7);
    iVar14 = 0;
    iVar6 = *param_1;
    uVar10 = param_1[1];
    uVar12 = uVar2;
    while( true ) {
      uVar12 = uVar10 & uVar12;
      uVar11 = *(uint *)(iVar6 + uVar12);
      uVar3 = uVar11 ^ (uVar2 >> 0x19) * 0x1010101;
      for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3)
      {
        puVar8 = (uint *)(iVar6 + (uVar12 + ((uint)LZCOUNT(uVar3 << 0x18 |
                                                           (uVar3 >> 8 & 0xff) << 0x10 |
                                                           (uVar3 >> 0x10 & 0xff) << 8 |
                                                           uVar3 >> 0x18) >> 3) & uVar10) * -0x14);
        if ((puVar8[-4] == uVar7) && (iVar4 = thunk_FUN_01bed842(puVar8[-5],uVar9), iVar4 == 0))
        goto LAB_006cab74;
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      iVar14 = iVar14 + 4;
      uVar12 = uVar12 + iVar14;
    }
    if (param_1[2] == 0) {
      FUN_006b69a0(param_1,param_1 + 4);
    }
    puVar8 = (uint *)*param_1;
    uVar12 = param_1[1];
    uVar10 = uVar12 & uVar2;
    uVar3 = *(uint *)((int)puVar8 + uVar10) & 0x80808080;
    if (uVar3 == 0) {
      iVar6 = 4;
      do {
        uVar10 = uVar10 + iVar6;
        iVar6 = iVar6 + 4;
        uVar10 = uVar10 & uVar12;
        uVar3 = *(uint *)((int)puVar8 + uVar10) & 0x80808080;
      } while (uVar3 == 0);
    }
    uVar10 = uVar10 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar12;
    uVar3 = (uint)*(char *)((int)puVar8 + uVar10);
    if (-1 < (int)uVar3) {
      uVar10 = *puVar8 & 0x80808080;
      uVar10 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                       | uVar10 >> 0x18);
      uVar3 = (uint)*(byte *)((int)puVar8 + (uVar10 >> 3));
      uVar10 = uVar10 >> 3;
    }
    param_1[2] = param_1[2] - (uVar3 & 1);
    param_1[3] = param_1[3] + 1;
    bVar1 = (byte)(uVar2 >> 0x19);
    *(byte *)((int)puVar8 + uVar10) = bVar1;
    *(byte *)((int)puVar8 + (uVar10 - 4 & uVar12) + 4) = bVar1;
    puVar8 = puVar8 + uVar10 * -5;
    puVar8[-5] = uVar9;
    puVar8[-4] = uVar7;
    puVar8[-3] = 0;
    puVar8[-2] = 4;
    puVar8[-1] = 0;
LAB_006cab74:
    uVar9 = puVar8[-1];
    iVar14 = param_2[7];
    iVar4 = param_2[8];
    iVar6 = *param_2;
    iVar13 = param_2[1];
    if (uVar9 == puVar8[-3]) {
      FUN_01aa1b90();
    }
    piVar5 = (int *)(puVar8[-2] + uVar9 * 0x10);
    *piVar5 = iVar14 + 8;
    piVar5[1] = iVar4;
    piVar5[2] = iVar6;
    piVar5[3] = iVar13;
    puVar8[-1] = uVar9 + 1;
  }
  return;
}

