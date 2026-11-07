// FUN_01845fc8 @ 01845fc8 size=128 calls_out=0 calls_in=7
// strings: 

int FUN_01845fc8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (int)param_2 >> 0x1f;
  uVar6 = (param_1 ^ uVar2) - uVar2;
  uVar5 = LZCOUNT(uVar6) + 0x20;
  iVar3 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (iVar3 != 0) {
    uVar5 = LZCOUNT(iVar3);
  }
  uVar1 = uVar5 & 0x3f;
  uVar4 = uVar6 >> (0x20 - uVar1 & 0xff) | iVar3 << uVar1;
  uVar2 = uVar6 << uVar1;
  if (-1 < (int)(uVar1 - 0x20)) {
    uVar2 = 0;
    uVar4 = uVar6 << (uVar1 - 0x20 & 0xff);
  }
  uVar6 = param_2 & 0x80000000 | uVar4 >> 8;
  if (param_1 != 0 || param_2 != 0) {
    uVar6 = uVar6 + uVar5 * -0x800000 + 0x5e800000;
  }
  return uVar6 - ((int)((uVar2 >> 8 | uVar4 << 0x18 | uVar2 & 0xffff) -
                       ((uVar4 & 0xff) >> 7 & ~(uVar4 >> 8))) >> 0x1f);
}

