// FUN_015dc04c @ 015dc04c size=456 calls_out=2 calls_in=2
// strings: 

void FUN_015dc04c(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint local_30;
  int local_2c;
  
  uVar7 = FUN_015f6720(param_1[4],param_1[5],param_1[6],param_1[7],param_3,param_4);
  if (param_1[2] == 0) {
    FUN_015d4248(param_1,1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar10 = param_1[1];
  bVar6 = false;
  local_2c = 0;
  uVar11 = uVar7;
  do {
    uVar11 = uVar10 & uVar11;
    uVar14 = *(uint *)((int)puVar8 + uVar11);
    uVar9 = uVar14 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    while (uVar9 != 0) {
      uVar1 = uVar9 >> 8;
      uVar2 = uVar9 >> 0x10;
      uVar3 = uVar9 >> 0x18;
      uVar4 = uVar9 << 0x18;
      uVar9 = uVar9 - 1 & uVar9;
      if (param_3 ==
          puVar8[(uVar11 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & uVar10) * -2 + -2] &&
          param_4 ==
          (puVar8 + (uVar11 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                             uVar3) >> 3) & uVar10) * -2 + -2)[1]) {
        return;
      }
    }
    uVar9 = uVar14 & 0x80808080;
    if (bVar6) {
LAB_015dc148:
      if ((uVar9 & uVar14 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar8 + local_30);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar8 & 0x80808080;
          uVar9 = LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar8 + (uVar9 >> 3));
          local_30 = uVar9 >> 3;
        }
        iVar12 = param_1[2];
        iVar13 = param_1[3];
        bVar5 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar8 + local_30) = bVar5;
        param_1[2] = iVar12 - (uVar11 & 1);
        param_1[3] = iVar13 + 1;
        *(byte *)((int)puVar8 + (uVar10 & local_30 - 4) + 4) = bVar5;
        puVar8[local_30 * -2 + -2] = param_3;
        puVar8[local_30 * -2 + -1] = param_4;
        return;
      }
      bVar6 = true;
    }
    else {
      if (uVar9 != 0) {
        local_30 = uVar11 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_015dc148;
      }
      bVar6 = false;
    }
    local_2c = local_2c + 4;
    uVar11 = local_2c + uVar11;
  } while( true );
}

