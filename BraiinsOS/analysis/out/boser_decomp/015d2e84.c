// FUN_015d2e84 @ 015d2e84 size=220 calls_out=0 calls_in=6
// strings: 

uint * FUN_015d2e84(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  param_1[2] = param_1[2] - (uVar5 & 1);
  bVar1 = (byte)(param_3 >> 0x19);
  *(byte *)((int)puVar4 + uVar2) = bVar1;
  *(byte *)((int)puVar4 + (uVar2 - 4 & uVar8) + 4) = bVar1;
  puVar4 = puVar4 + uVar2 * -0xc;
  uVar2 = param_5[1];
  uVar5 = param_5[2];
  uVar8 = param_5[3];
  uVar6 = param_5[4];
  uVar7 = param_5[5];
  puVar4[-0xc] = *param_5;
  puVar4[-0xb] = uVar2;
  puVar4[-10] = uVar5;
  puVar4[-9] = uVar8;
  puVar4[-8] = uVar6;
  puVar4[-7] = uVar7;
  uVar2 = param_5[7];
  uVar5 = param_5[8];
  uVar8 = param_5[9];
  uVar6 = param_5[10];
  uVar7 = param_5[0xb];
  puVar4[-6] = param_5[6];
  puVar4[-5] = uVar2;
  puVar4[-4] = uVar5;
  puVar4[-3] = uVar8;
  puVar4[-2] = uVar6;
  puVar4[-1] = uVar7;
  param_1[3] = param_1[3] + 1;
  return puVar4;
}

