// FUN_012255ac @ 012255ac size=812 calls_out=4 calls_in=2
// strings: 

bool FUN_012255ac(undefined4 *param_1,uint *param_2)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint local_70;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_1[4];
  uVar9 = param_2[2];
  local_2c = param_1[5];
  local_38 = param_1[6];
  local_40 = param_1[10];
  uVar7 = param_2[1];
  uStack_3c = param_1[0xb];
  local_34 = param_1[7];
  local_48 = param_1[8];
  local_44 = param_1[9];
  FUN_011df94c(&local_48);
  uVar5 = local_38 ^ 0xff;
  uVar8 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar2 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar10 = (uint)lVar2;
  uVar12 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^
           local_34 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20)
  ;
  uVar10 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar10;
  uVar13 = (uint)lVar3;
  uVar8 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar5 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * ~local_30 + uVar10 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar8 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar11;
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)lVar2;
  uVar10 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) ^
           uVar12 * uVar8 +
           uVar11 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                     (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
           (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = uVar10;
  if ((uVar11 & 0x20) != 0) {
    uVar8 = uVar5;
    uVar5 = uVar10;
  }
  if (param_1[2] == 0) {
    FUN_011a664c(param_1,1,param_1 + 4);
  }
  uVar8 = uVar5 << (uVar11 & 0x1f) | (uVar8 >> 1) >> (~uVar11 & 0x1f);
  uVar10 = param_1[1];
  puVar15 = (uint *)*param_1;
  iVar14 = 0;
  bVar4 = false;
  uVar5 = uVar8;
  do {
    uVar5 = uVar10 & uVar5;
    uVar12 = *(uint *)((int)puVar15 + uVar5);
    uVar11 = uVar12 ^ (uVar8 >> 0x19) * 0x1010101;
    for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar13 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                      (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar10;
      if ((uVar9 == puVar15[uVar13 * -3 + -1]) &&
         (iVar6 = thunk_FUN_016dd50a(uVar7,puVar15[uVar13 * -3 + -2]), iVar6 == 0)) {
        if (*param_2 != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        goto LAB_01225824;
      }
    }
    uVar13 = uVar12 & 0x80808080;
    if (bVar4) goto LAB_012257dc;
    if (uVar13 == 0) {
      bVar4 = false;
    }
    else {
      local_70 = uVar5 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                        (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                 uVar10;
LAB_012257dc:
      if ((uVar13 & uVar12 << 1) != 0) {
        uVar5 = (uint)*(char *)((int)puVar15 + local_70);
        if (-1 < (int)uVar5) {
          uVar5 = *puVar15 & 0x80808080;
          uVar7 = LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
          uVar5 = (uint)*(byte *)((int)puVar15 + (uVar7 >> 3));
          local_70 = uVar7 >> 3;
        }
        bVar1 = (byte)(uVar8 >> 0x19);
        *(byte *)((int)puVar15 + local_70) = bVar1;
        param_1[2] = param_1[2] - (uVar5 & 1);
        param_1[3] = param_1[3] + 1;
        uVar7 = *param_2;
        *(byte *)((int)puVar15 + (uVar10 & local_70 - 4) + 4) = bVar1;
        uVar8 = param_2[1];
        uVar5 = param_2[2];
        puVar15[local_70 * -3 + -3] = uVar7;
        puVar15[local_70 * -3 + -2] = uVar8;
        puVar15[local_70 * -3 + -1] = uVar5;
LAB_01225824:
        return uVar11 != 0;
      }
      bVar4 = true;
    }
    iVar14 = iVar14 + 4;
    uVar5 = iVar14 + uVar5;
  } while( true );
}

