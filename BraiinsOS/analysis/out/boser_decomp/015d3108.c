// FUN_015d3108 @ 015d3108 size=220 calls_out=0 calls_in=2
// strings: 

uint * FUN_015d3108(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                   uint *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar4 = (uint *)*param_1;
  uVar8 = param_1[1];
  uVar2 = uVar8 & param_3;
  uVar5 = *(uint *)((int)puVar4 + uVar2) & 0x80808080;
  if (uVar5 == 0) {
    iVar3 = 4;
    do {
      uVar2 = uVar2 + iVar3;
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 & uVar8;
      uVar5 = *(uint *)((int)puVar4 + uVar2) & 0x80808080;
    } while (uVar5 == 0);
  }
  uVar2 = uVar2 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                 (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8;
  uVar5 = (uint)*(char *)((int)puVar4 + uVar2);
  if (-1 < (int)uVar5) {
    uVar2 = *puVar4 & 0x80808080;
    uVar2 = LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                    (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar4 + (uVar2 >> 3));
    uVar2 = uVar2 >> 3;
  }
  puVar9 = puVar4 + uVar2 * -0x10;
  param_1[2] = param_1[2] - (uVar5 & 1);
  bVar1 = (byte)(param_3 >> 0x19);
  *(byte *)((int)puVar4 + uVar2) = bVar1;
  *(byte *)((int)puVar4 + (uVar2 - 4 & uVar8) + 4) = bVar1;
  uVar2 = param_5[1];
  uVar5 = param_5[2];
  uVar8 = param_5[3];
  uVar6 = param_5[4];
  puVar9[-0x10] = *param_5;
  puVar9[-0xf] = uVar2;
  puVar9[-0xe] = uVar5;
  puVar9[-0xd] = uVar8;
  puVar9[-0xc] = uVar6;
  uVar2 = param_5[6];
  uVar5 = param_5[7];
  uVar8 = param_5[8];
  uVar6 = param_5[9];
  puVar9[-0xb] = param_5[5];
  puVar9[-10] = uVar2;
  puVar9[-9] = uVar5;
  puVar9[-8] = uVar8;
  puVar9[-7] = uVar6;
  uVar2 = param_5[0xb];
  uVar5 = param_5[0xc];
  uVar8 = param_5[0xd];
  uVar6 = param_5[0xe];
  uVar7 = param_5[0xf];
  puVar9[-6] = param_5[10];
  puVar9[-5] = uVar2;
  puVar9[-4] = uVar5;
  puVar9[-3] = uVar8;
  puVar9[-2] = uVar6;
  puVar9[-1] = uVar7;
  param_1[3] = param_1[3] + 1;
  return puVar9;
}

