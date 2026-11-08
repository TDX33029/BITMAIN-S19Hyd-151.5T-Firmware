// FUN_01356d8c @ 01356d8c size=848 calls_out=4 calls_in=2
// strings: 

bool FUN_01356d8c(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint local_64;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_1[4];
  local_3c = param_1[0xb];
  uVar13 = param_1[7];
  local_48 = param_1[8];
  uVar5 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18;
  local_2c = param_1[5];
  local_40 = param_1[10];
  lVar2 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar16 = (uint)lVar2;
  uVar15 = param_2[1];
  uVar17 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_1[6] ^ uVar8;
  local_44 = param_1[9];
  uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  local_38 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
  local_34 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18) ^
             uVar13 * 0x2df45158 + uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20)
  ;
  FUN_01352290(&local_48,uVar15,uVar17);
  uVar9 = local_38;
  uVar16 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar2 = (ulonglong)local_38 * (ulonglong)uVar16;
  uVar5 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar5;
  uVar14 = (uint)lVar3;
  uVar13 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18) * ~local_30 + uVar5 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar5 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * local_38 + uVar16 * local_34 + (int)((ulonglong)lVar2 >> 0x20) ^
          (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18);
  uVar16 = (uint)lVar2 ^
           (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18);
  uVar13 = uVar16;
  if ((local_38 & 0x20) != 0) {
    uVar13 = uVar5;
    uVar5 = uVar16;
  }
  if (param_1[2] == 0) {
    FUN_0133fc00(param_1,param_1 + 4);
  }
  uVar9 = uVar13 << (uVar9 & 0x1f) | (uVar5 >> 1) >> (~uVar9 & 0x1f);
  puVar12 = (uint *)*param_1;
  uVar13 = param_1[1];
  iVar10 = 0;
  bVar4 = false;
  uVar5 = uVar9;
  do {
    uVar5 = uVar13 & uVar5;
    uVar14 = *(uint *)((int)puVar12 + uVar5);
    uVar16 = uVar14 ^ (uVar9 >> 0x19) * 0x1010101;
    for (uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff; uVar16 != 0;
        uVar16 = uVar16 - 1 & uVar16) {
      uVar6 = uVar5 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) & uVar13;
      uVar11 = puVar12[uVar6 * -4 + -1];
      bVar18 = uVar8 == uVar11;
      if (bVar18) {
        uVar11 = puVar12[uVar6 * -4 + -2];
      }
      if ((bVar18 && uVar17 == uVar11) &&
         (iVar7 = thunk_FUN_016dd50a(uVar15,puVar12[uVar6 * -4 + -3],uVar17), iVar7 == 0)) {
        if (*param_2 != 0) {
          thunk_FUN_016d3fb4(uVar15);
        }
        goto LAB_01357030;
      }
    }
    uVar11 = uVar14 & 0x80808080;
    if (bVar4) goto LAB_01356fe4;
    if (uVar11 == 0) {
      bVar4 = false;
    }
    else {
      local_64 = uVar5 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                        (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                 uVar13;
LAB_01356fe4:
      if ((uVar11 & uVar14 << 1) != 0) {
        uVar5 = (uint)*(char *)((int)puVar12 + local_64);
        if (-1 < (int)uVar5) {
          uVar5 = *puVar12 & 0x80808080;
          uVar8 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
          uVar5 = (uint)*(byte *)((int)puVar12 + (uVar8 >> 3));
          local_64 = uVar8 >> 3;
        }
        iVar10 = param_1[3];
        param_1[2] = param_1[2] - (uVar5 & 1);
        bVar1 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar12 + local_64) = bVar1;
        uVar5 = param_2[2];
        uVar8 = *param_2;
        *(byte *)((int)puVar12 + (uVar13 & local_64 - 4) + 4) = bVar1;
        uVar13 = param_2[1];
        uVar9 = param_2[3];
        param_1[3] = iVar10 + 1;
        puVar12[local_64 * -4 + -4] = uVar8;
        puVar12[local_64 * -4 + -3] = uVar13;
        puVar12[local_64 * -4 + -1] = uVar9;
        puVar12[local_64 * -4 + -2] = uVar5;
LAB_01357030:
        return uVar16 != 0;
      }
      bVar4 = true;
    }
    iVar10 = iVar10 + 4;
    uVar5 = iVar10 + uVar5;
  } while( true );
}

