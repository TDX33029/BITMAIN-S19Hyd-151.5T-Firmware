// FUN_006e5158 @ 006e5158 size=684 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_006e5158(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint local_5c;
  int local_54;
  uint local_30;
  uint local_2c;
  
  local_30 = param_2[2];
  local_2c = param_2[3];
  uVar9 = 0x84222325;
  iVar5 = 0;
  do {
    pbVar1 = (byte *)((int)&local_30 + iVar5);
    iVar5 = iVar5 + 1;
    uVar9 = (uVar9 ^ *pbVar1) * 0x1b3;
  } while (iVar5 != 8);
  if (param_1[2] == 0) {
    FUN_006bb984(param_1,1,param_1 + 4);
  }
  puVar12 = (uint *)*param_1;
  uVar10 = param_1[1];
  bVar3 = false;
  local_54 = 0;
  uVar4 = uVar9;
  do {
    uVar4 = uVar10 & uVar4;
    uVar11 = *(uint *)((int)puVar12 + uVar4);
    uVar7 = uVar11 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar8 = uVar4 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar10;
      puVar6 = puVar12 + uVar8 * -6 + -6;
      uVar7 = uVar7 - 1 & uVar7;
      if ((*param_2 == *puVar6 && param_2[2] == puVar6[2]) &&
          (param_2[1] == puVar6[1] && param_2[3] == puVar6[3])) {
        uVar9 = puVar12[uVar8 * -6 + -2];
        puVar6 = (uint *)puVar12[uVar8 * -6 + -1];
        puVar12[uVar8 * -6 + -2] = param_3;
        puVar12[uVar8 * -6 + -1] = param_4;
        goto LAB_006e5358;
      }
    }
    uVar7 = uVar11 & 0x80808080;
    if (bVar3) goto LAB_006e52f8;
    if (uVar7 == 0) {
      bVar3 = false;
    }
    else {
      local_5c = uVar4 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                        (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar10;
LAB_006e52f8:
      if ((uVar7 & uVar11 << 1) != 0) {
        uVar4 = (uint)*(char *)((int)puVar12 + local_5c);
        if (-1 < (int)uVar4) {
          uVar4 = *puVar12 & 0x80808080;
          uVar7 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
          uVar4 = (uint)*(byte *)((int)puVar12 + (uVar7 >> 3));
          local_5c = uVar7 >> 3;
        }
        param_1[2] = param_1[2] - (uVar4 & 1);
        param_1[3] = param_1[3] + 1;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar12 + local_5c) = bVar2;
        *(byte *)((int)puVar12 + (uVar10 & local_5c - 4) + 4) = bVar2;
        uVar9 = param_2[1];
        uVar4 = param_2[2];
        uVar10 = param_2[3];
        puVar6 = puVar12 + local_5c * -6 + -6;
        *puVar6 = *param_2;
        puVar12[local_5c * -6 + -5] = uVar9;
        puVar12[local_5c * -6 + -4] = uVar4;
        puVar12[local_5c * -6 + -3] = uVar10;
        puVar12[local_5c * -6 + -2] = param_3;
        puVar12[local_5c * -6 + -1] = param_4;
        uVar9 = 0;
LAB_006e5358:
        return CONCAT44(puVar6,uVar9);
      }
      bVar3 = true;
    }
    local_54 = local_54 + 4;
    uVar4 = local_54 + uVar4;
  } while( true );
}

