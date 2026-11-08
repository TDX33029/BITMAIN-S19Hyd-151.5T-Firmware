// FUN_0166e6f8 @ 0166e6f8 size=628 calls_out=1 calls_in=2
// strings: 

bool FUN_0166e6f8(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_34;
  int local_30;
  
  uVar13 = param_1[4];
  uVar6 = param_1[5];
  uVar11 = param_1[6] ^ param_2;
  uVar9 = param_1[7];
  uVar8 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  lVar2 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar10 = (uint)lVar2;
  uVar10 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^
           uVar9 * 0x2df45158 + uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20);
  uVar9 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18;
  uVar7 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  lVar3 = (ulonglong)~uVar13 * (ulonglong)uVar9;
  uVar12 = (uint)lVar3;
  uVar8 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ (uint)((ulonglong)uVar11 * 0x2df45158);
  uVar9 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * ~uVar13 + uVar9 * ~uVar6 + (int)((ulonglong)lVar3 >> 0x20);
  lVar2 = (ulonglong)uVar7 * (ulonglong)uVar8;
  uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18) ^ (uint)lVar2;
  uVar6 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^
          uVar10 * uVar7 +
          uVar8 * (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                  uVar13 >> 0x18) + (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = uVar6;
  if ((uVar8 & 0x20) != 0) {
    uVar10 = uVar9;
    uVar9 = uVar6;
  }
  uVar9 = uVar9 << (uVar8 & 0x1f) | (uVar10 >> 1) >> (~uVar8 & 0x1f);
  if (param_1[2] == 0) {
    FUN_016659d0(param_1);
  }
  puVar5 = (uint *)*param_1;
  uVar6 = param_1[1];
  bVar4 = false;
  local_30 = 0;
  uVar10 = uVar9;
  do {
    uVar10 = uVar6 & uVar10;
    uVar8 = *(uint *)((int)puVar5 + uVar10);
    uVar7 = uVar8 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar11 = uVar7, uVar11 != 0) {
      uVar7 = uVar11 - 1 & uVar11;
      if (param_2 ==
          puVar5[-1 - (uVar10 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                               (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3)
                      & uVar6)]) goto LAB_0166e930;
    }
    uVar7 = uVar8 & 0x80808080;
    if (bVar4) goto LAB_0166e8ac;
    if (uVar7 == 0) {
      bVar4 = false;
    }
    else {
      local_34 = uVar10 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                         (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar6;
LAB_0166e8ac:
      if ((uVar7 & uVar8 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar5 + local_34);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar5 & 0x80808080;
          uVar7 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar5 + (uVar7 >> 3));
          local_34 = uVar7 >> 3;
        }
        bVar1 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar5 + local_34) = bVar1;
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar5 + (uVar6 & local_34 - 4) + 4) = bVar1;
        puVar5[-1 - local_34] = param_2;
LAB_0166e930:
        return uVar11 != 0;
      }
      bVar4 = true;
    }
    local_30 = local_30 + 4;
    uVar10 = local_30 + uVar10;
  } while( true );
}

