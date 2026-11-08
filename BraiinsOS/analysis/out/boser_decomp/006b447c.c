// FUN_006b447c @ 006b447c size=212 calls_out=0 calls_in=2
// strings: 

uint * FUN_006b447c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                   uint *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar4 = (uint *)*param_1;
  uVar6 = param_1[1];
  uVar2 = uVar6 & param_3;
  uVar3 = *(uint *)((int)puVar4 + uVar2) & 0x80808080;
  if (uVar3 == 0) {
    iVar8 = 4;
    do {
      uVar2 = uVar2 + iVar8;
      iVar8 = iVar8 + 4;
      uVar2 = uVar2 & uVar6;
      uVar3 = *(uint *)((int)puVar4 + uVar2) & 0x80808080;
    } while (uVar3 == 0);
  }
  uVar2 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                 (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar6;
  uVar3 = (uint)*(char *)((int)puVar4 + uVar2);
  if (-1 < (int)uVar3) {
    uVar2 = *puVar4 & 0x80808080;
    uVar2 = LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                    (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
    uVar3 = (uint)*(byte *)((int)puVar4 + (uVar2 >> 3));
    uVar2 = uVar2 >> 3;
  }
  param_1[2] = param_1[2] - (uVar3 & 1);
  bVar1 = (byte)(param_3 >> 0x19);
  *(byte *)((int)puVar4 + uVar2) = bVar1;
  *(byte *)((int)puVar4 + (uVar2 - 4 & uVar6) + 4) = bVar1;
  puVar4 = puVar4 + uVar2 * -6;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar6 = param_5[3];
  uVar5 = param_5[4];
  uVar7 = param_5[5];
  puVar4[-6] = *param_5;
  puVar4[-5] = uVar2;
  puVar4[-4] = uVar3;
  puVar4[-3] = uVar6;
  puVar4[-2] = uVar5;
  puVar4[-1] = uVar7;
  param_1[3] = param_1[3] + 1;
  return puVar4;
}

