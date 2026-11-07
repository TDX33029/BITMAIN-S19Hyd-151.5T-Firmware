// FUN_01bf0cac @ 01bf0cac size=172 calls_out=0 calls_in=19
// strings: 

longlong FUN_01bf0cac(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    return (ulonglong)(param_2 & 0x80000000) << 0x20;
  }
  uVar5 = (int)param_2 >> 0x1f;
  uVar4 = (param_1 ^ uVar5) - uVar5;
  iVar2 = (param_2 ^ uVar5) - (uVar5 + ((param_1 ^ uVar5) < uVar5));
  iVar1 = LZCOUNT(uVar4) + 0x20;
  if (iVar2 != 0) {
    iVar1 = LZCOUNT(iVar2);
  }
  uVar5 = uVar4 >> (0x20U - iVar1 & 0xff) | iVar2 << iVar1;
  uVar3 = iVar1 - 0x20;
  if (-1 < (int)uVar3) {
    uVar5 = uVar4 << (uVar3 & 0xff);
  }
  uVar4 = uVar4 << iVar1;
  if (-1 < (int)uVar3) {
    uVar4 = 0;
  }
  uVar3 = uVar4 >> 0xb | uVar5 << 0x15;
  uVar4 = -((int)(uVar4 * 0x200000 - (uint)((~uVar3 & (uVar4 & 0x7ff) >> 10) != 0)) >> 0x1f);
  return CONCAT44((uVar5 >> 0xb) + (0x43e - iVar1) * 0x100000 + -0x100000 +
                  (uint)CARRY4(uVar3,uVar4) | param_2 & 0x80000000,uVar3 + uVar4);
}

