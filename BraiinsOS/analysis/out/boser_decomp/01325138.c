// FUN_01325138 @ 01325138 size=96 calls_out=0 calls_in=1
// strings: 

longlong FUN_01325138(byte *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (uint)*param_1 + (uint)param_1[8] + (uint)param_1[2] + (uint)param_1[4] + (uint)param_1[6]
          & 0xff;
  uVar3 = param_2 + uVar2;
  if (CARRY4(param_2,uVar2)) {
    return (ulonglong)uVar3 << 0x20;
  }
  lVar1 = (ulonglong)uVar3 * 3;
  iVar4 = (int)lVar1;
  uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
  if (uVar2 == 0) {
    return CONCAT44(iVar4 + 1,(uint)(iVar4 != -1));
  }
  return (ulonglong)uVar2 << 0x20;
}

