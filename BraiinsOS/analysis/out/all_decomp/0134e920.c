// FUN_0134e920 @ 0134e920 size=712 calls_out=4 calls_in=2
// strings: 

uint FUN_0134e920(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_68;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  local_48 = param_1[4];
  uVar11 = param_2[2];
  uVar8 = param_2[1];
  local_44 = param_1[5];
  local_30 = &DAT_018dd8f0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_2c = '\0';
  FUN_0134e6e8(&local_48,uVar8,uVar11);
  if (local_2c == '\0') {
    iVar4 = param_1[2];
    uVar9 = local_48;
  }
  else {
    uVar9 = (local_48 ^ local_40) * (*local_30 ^ local_38) ^
            (local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
            (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38) >> 0x20) ^
            (uint)((ulonglong)(local_48 ^ local_40) * (ulonglong)(local_30[1] ^ local_34) >> 0x20);
    iVar4 = param_1[2];
  }
  if (iVar4 == 0) {
    FUN_01340804(param_1,param_1 + 4);
  }
  uVar1 = uVar9 >> 0x19;
  puVar10 = (uint *)*param_1;
  uVar13 = param_1[1];
  bVar3 = (byte)(uVar9 >> 0x19);
  bVar2 = false;
  iVar4 = 0;
  do {
    uVar9 = uVar13 & uVar9;
    uVar12 = *(uint *)((int)puVar10 + uVar9);
    uVar5 = uVar12 ^ uVar1 * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar13;
      if ((uVar11 == puVar10[uVar6 * -4 + -2]) &&
         (iVar7 = thunk_FUN_016dd50a(uVar8,puVar10[uVar6 * -4 + -3]), iVar7 == 0)) {
        uVar9 = puVar10[uVar6 * -4 + -1];
        uVar11 = *param_2;
        puVar10[uVar6 * -4 + -1] = param_3;
        if (uVar11 != 0) {
          thunk_FUN_016d3fb4(uVar8);
        }
        return uVar9;
      }
    }
    uVar5 = uVar12 & 0x80808080;
    if (bVar2) {
LAB_0134eae8:
      if ((uVar5 & uVar12 << 1) != 0) {
        uVar8 = (uint)*(char *)((int)puVar10 + local_68);
        if (-1 < (int)uVar8) {
          uVar8 = *puVar10 & 0x80808080;
          uVar11 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
          uVar8 = (uint)*(byte *)((int)puVar10 + (uVar11 >> 3));
          local_68 = uVar11 >> 3;
        }
        uVar11 = *param_2;
        param_1[2] = param_1[2] - (uVar8 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar10 + local_68) = bVar3;
        uVar8 = param_2[1];
        *(byte *)((int)puVar10 + (local_68 - 4 & uVar13) + 4) = bVar3;
        puVar10[local_68 * -4 + -2] = param_2[2];
        puVar10[local_68 * -4 + -4] = uVar11;
        puVar10[local_68 * -4 + -3] = uVar8;
        puVar10[local_68 * -4 + -1] = param_3;
        return 0;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_68 = uVar9 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar13;
        goto LAB_0134eae8;
      }
      bVar2 = false;
    }
    iVar4 = iVar4 + 4;
    uVar9 = iVar4 + uVar9;
  } while( true );
}

