// FUN_01415d14 @ 01415d14 size=616 calls_out=1 calls_in=22
// strings: 

undefined8 FUN_01415d14(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint local_54;
  int local_4c;
  
  uVar6 = param_2[2];
  if (param_1[2] == 0) {
    FUN_01412ce8(param_1);
  }
  uVar3 = param_1[1];
  puVar10 = (uint *)*param_1;
  bVar2 = false;
  local_4c = 0;
  uVar9 = uVar6;
  do {
    uVar9 = uVar3 & uVar9;
    uVar4 = *(uint *)((int)puVar10 + uVar9);
    uVar7 = uVar4 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar3;
      puVar8 = puVar10 + uVar5 * -6 + -6;
      uVar7 = uVar7 - 1 & uVar7;
      if ((*param_2 == *puVar8 && param_2[2] == puVar8[2]) &&
          (param_2[1] == puVar8[1] && param_2[3] == puVar8[3])) {
        uVar6 = puVar10[uVar5 * -6 + -2];
        uVar9 = puVar10[uVar5 * -6 + -1];
        puVar10[uVar5 * -6 + -2] = param_3;
        puVar10[uVar5 * -6 + -1] = param_4;
        param_4 = uVar9;
        goto LAB_01415ed4;
      }
    }
    uVar7 = uVar4 & 0x80808080;
    if (bVar2) goto LAB_01415e6c;
    if (uVar7 == 0) {
      bVar2 = false;
    }
    else {
      local_54 = uVar9 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                        (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar3;
LAB_01415e6c:
      if ((uVar7 & uVar4 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar10 + local_54);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar10 & 0x80808080;
          uVar4 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar10 + (uVar4 >> 3));
          local_54 = uVar4 >> 3;
        }
        param_1[2] = param_1[2] - (uVar9 & 1);
        param_1[3] = param_1[3] + 1;
        bVar1 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar10 + local_54) = bVar1;
        *(byte *)((int)puVar10 + (uVar3 & local_54 - 4) + 4) = bVar1;
        uVar6 = param_2[1];
        uVar9 = param_2[2];
        uVar3 = param_2[3];
        puVar10[local_54 * -6 + -6] = *param_2;
        puVar10[local_54 * -6 + -5] = uVar6;
        puVar10[local_54 * -6 + -4] = uVar9;
        puVar10[local_54 * -6 + -3] = uVar3;
        puVar10[local_54 * -6 + -2] = param_3;
        puVar10[local_54 * -6 + -1] = param_4;
        uVar6 = 0;
LAB_01415ed4:
        return CONCAT44(param_4,uVar6);
      }
      bVar2 = true;
    }
    local_4c = local_4c + 4;
    uVar9 = local_4c + uVar9;
  } while( true );
}

