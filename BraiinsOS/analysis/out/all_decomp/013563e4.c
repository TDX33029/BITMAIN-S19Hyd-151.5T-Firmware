// FUN_013563e4 @ 013563e4 size=620 calls_out=1 calls_in=2
// strings: 

bool FUN_013563e4(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_30;
  
  uVar8 = param_1[7];
  uVar11 = param_1[6] ^ param_2;
  uVar15 = param_1[4];
  uVar7 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  uVar14 = param_1[5];
  lVar2 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar9 = (uint)lVar2;
  uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) ^ uVar8 * 0x2df45158 +
              uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20);
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar3 = (ulonglong)~uVar15 * (ulonglong)uVar8;
  uVar13 = (uint)lVar3;
  uVar7 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18) ^ (uint)((ulonglong)uVar11 * 0x2df45158);
  uVar8 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * ~uVar15 + uVar8 * ~uVar14 + (int)((ulonglong)lVar3 >> 0x20);
  uVar7 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18;
  lVar2 = (ulonglong)uVar7 * (ulonglong)uVar9;
  uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ (uint)lVar2;
  uVar5 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18) ^
          uVar5 * uVar7 +
          uVar9 * (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                  uVar15 >> 0x18) + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = uVar5;
  if ((uVar9 & 0x20) != 0) {
    uVar7 = uVar8;
    uVar8 = uVar5;
  }
  uVar8 = uVar8 << (uVar9 & 0x1f) | (uVar7 >> 1) >> (~uVar9 & 0x1f);
  if (param_1[2] == 0) {
    FUN_01340f74(param_1,param_1 + 4);
  }
  puVar10 = (uint *)*param_1;
  uVar9 = param_1[1];
  iVar12 = 0;
  bVar4 = false;
  uVar7 = uVar8;
  do {
    uVar7 = uVar9 & uVar7;
    uVar11 = *(uint *)((int)puVar10 + uVar7);
    uVar5 = uVar11 ^ (uVar8 >> 0x19) * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar13 = uVar5, uVar13 != 0) {
      uVar5 = uVar13 - 1 & uVar13;
      if (param_2 ==
          puVar10[-1 - (uVar7 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                               (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3)
                       & uVar9)]) goto LAB_0135660c;
    }
    uVar5 = uVar11 & 0x80808080;
    if (bVar4) goto LAB_01356588;
    if (uVar5 == 0) {
      bVar4 = false;
    }
    else {
      local_30 = uVar7 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                        (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
LAB_01356588:
      if ((uVar5 & uVar11 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar10 + local_30);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar10 & 0x80808080;
          uVar5 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                          (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar10 + (uVar5 >> 3));
          local_30 = uVar5 >> 3;
        }
        iVar6 = param_1[2];
        iVar12 = param_1[3];
        bVar1 = (byte)(uVar8 >> 0x19);
        *(byte *)((int)puVar10 + local_30) = bVar1;
        param_1[2] = iVar6 - (uVar7 & 1);
        param_1[3] = iVar12 + 1;
        *(byte *)((int)puVar10 + (uVar9 & local_30 - 4) + 4) = bVar1;
        puVar10[-1 - local_30] = param_2;
LAB_0135660c:
        return uVar13 != 0;
      }
      bVar4 = true;
    }
    iVar12 = iVar12 + 4;
    uVar7 = iVar12 + uVar7;
  } while( true );
}

