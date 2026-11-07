// FUN_01336cac @ 01336cac size=480 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01336cac(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint local_38;
  
  uVar6 = FUN_009bd354(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_01336e8c(param_1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar9 = param_1[1];
  iVar12 = 0;
  bVar5 = false;
  uVar11 = uVar6;
  do {
    uVar11 = uVar9 & uVar11;
    uVar14 = *(uint *)((int)puVar8 + uVar11);
    uVar7 = uVar14 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar13 = uVar7 >> 8;
      uVar1 = uVar7 >> 0x10;
      uVar2 = uVar7 >> 0x18;
      uVar3 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      uVar13 = uVar11 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2
                                      ) >> 3) & uVar9;
      if (param_2 == puVar8[uVar13 * -2 + -2]) {
        puVar8[uVar13 * -2 + -1] = param_3;
        return 1;
      }
    }
    uVar7 = uVar14 & 0x80808080;
    if (bVar5) {
LAB_01336d9c:
      if ((uVar7 & uVar14 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar8 + local_38);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar8 & 0x80808080;
          uVar7 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar8 + (uVar7 >> 3));
          local_38 = uVar7 >> 3;
        }
        iVar12 = param_1[3];
        iVar10 = param_1[2];
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar8 + local_38) = bVar4;
        param_1[2] = iVar10 - (uVar11 & 1);
        param_1[3] = iVar12 + 1;
        *(byte *)((int)puVar8 + (uVar9 & local_38 - 4) + 4) = bVar4;
        puVar8[local_38 * -2 + -2] = param_2;
        puVar8[local_38 * -2 + -1] = param_3;
        return 0;
      }
      bVar5 = true;
    }
    else {
      if (uVar7 != 0) {
        local_38 = uVar11 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_01336d9c;
      }
      bVar5 = false;
    }
    iVar12 = iVar12 + 4;
    uVar11 = iVar12 + uVar11;
  } while( true );
}

