// FUN_01325bc8 @ 01325bc8 size=124 calls_out=0 calls_in=1
// strings: 

ulonglong FUN_01325bc8(byte *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[4] != 0) {
    uVar3 = ~(uint)param_1[1];
  }
  uVar3 = param_2 + (uVar3 & 1);
  if (param_1[2] - 5 < 2) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 < param_2) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar2 = (uint)*param_1 + (uint)(param_1[4] != 0 & param_1[1]) & 0xff;
  if (CARRY4(uVar3,uVar2)) {
    return (ulonglong)uVar2 << 0x20;
  }
  lVar1 = (ulonglong)(uVar3 + uVar2) * 3;
  return CONCAT44((int)lVar1,(uint)((int)((ulonglong)lVar1 >> 0x20) != 0)) ^ 1;
}

