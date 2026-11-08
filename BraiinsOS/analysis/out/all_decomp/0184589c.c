// FUN_0184589c @ 0184589c size=112 calls_out=0 calls_in=9
// strings: 

int FUN_0184589c(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = LZCOUNT(param_1) + 0x20;
  if (param_2 != 0) {
    uVar3 = LZCOUNT(param_2);
  }
  uVar4 = uVar3 & 0x3f;
  uVar2 = uVar4 - 0x20;
  uVar1 = param_1 >> (0x20 - uVar4 & 0xff) | param_2 << uVar4;
  if (-1 < (int)uVar2) {
    uVar1 = param_1 << (uVar2 & 0xff);
  }
  uVar4 = param_1 << uVar4;
  if (-1 < (int)uVar2) {
    uVar4 = 0;
  }
  uVar3 = (uVar1 >> 8) + uVar3 * -0x800000 + 0x5e800000;
  if (param_1 == 0 && param_2 == 0) {
    uVar3 = uVar1 >> 8;
  }
  return uVar3 - ((int)((uVar4 >> 8 | uVar1 << 0x18 | uVar4 & 0xffff) -
                       ((uVar1 & 0xff) >> 7 & ~(uVar1 >> 8))) >> 0x1f);
}

