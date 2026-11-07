// FUN_018f7b8c @ 018f7b8c size=216 calls_out=1 calls_in=2
// strings: 

uint * FUN_018f7b8c(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                   undefined4 param_5)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = (uint *)*param_1;
  uVar6 = param_1[1];
  uVar5 = uVar6 & param_3;
  uVar4 = *(uint *)((int)puVar2 + uVar5) & 0x80808080;
  if (uVar4 == 0) {
    iVar3 = 4;
    do {
      uVar5 = uVar5 + iVar3;
      iVar3 = iVar3 + 4;
      uVar5 = uVar5 & uVar6;
      uVar4 = *(uint *)((int)puVar2 + uVar5) & 0x80808080;
    } while (uVar4 == 0);
  }
  uVar4 = uVar5 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                 (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar6;
  uVar5 = (uint)*(char *)((int)puVar2 + uVar4);
  if (-1 < (int)uVar5) {
    uVar4 = *puVar2 & 0x80808080;
    uVar4 = LZCOUNT((*puVar2 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar2 + (uVar4 >> 3));
    uVar4 = uVar4 >> 3;
  }
  param_1[2] = param_1[2] - (uVar5 & 1);
  bVar1 = (byte)(param_3 >> 0x19);
  *(byte *)((int)puVar2 + uVar4) = bVar1;
  *(byte *)((int)puVar2 + (uVar4 - 4 & uVar6) + 4) = bVar1;
  FUN_01bed4e2(puVar2 + uVar4 * -0x24 + -0x24,param_5,0x90);
  param_1[3] = param_1[3] + 1;
  return puVar2 + uVar4 * -0x24;
}

