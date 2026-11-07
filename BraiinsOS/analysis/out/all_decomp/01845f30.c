// FUN_01845f30 @ 01845f30 size=144 calls_out=0 calls_in=83
// strings: 

undefined8 FUN_01845f30(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  iVar2 = LZCOUNT(param_1) + 0x20;
  if (param_2 != 0) {
    iVar2 = LZCOUNT(param_2);
  }
  uVar1 = param_1 >> (0x20U - iVar2 & 0xff) | param_2 << iVar2;
  uVar3 = iVar2 - 0x20;
  if (-1 < (int)uVar3) {
    uVar1 = param_1 << (uVar3 & 0xff);
  }
  param_1 = param_1 << iVar2;
  if (-1 < (int)uVar3) {
    param_1 = 0;
  }
  uVar4 = param_1 >> 0xb | uVar1 << 0x15;
  uVar3 = -((int)(param_1 * 0x200000 - (uint)((~uVar4 & (param_1 & 0x7ff) >> 10) != 0)) >> 0x1f);
  return CONCAT44((uVar1 >> 0xb) + (0x43e - iVar2) * 0x100000 + -0x100000 +
                  (uint)CARRY4(uVar4,uVar3),uVar4 + uVar3);
}

