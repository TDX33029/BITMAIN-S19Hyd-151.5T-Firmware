// FUN_0132b6b4 @ 0132b6b4 size=80 calls_out=0 calls_in=1
// strings: 

longlong FUN_0132b6b4(int param_1,uint param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2 + (param_2 >> 1);
    param_2 = param_2 - (param_2 >> 1);
    if (*(ushort *)(param_1 + uVar3 * 2) <= param_3) {
      uVar2 = uVar3;
    }
  } while (1 < param_2);
  uVar1 = *(ushort *)(param_1 + uVar2 * 2);
  if (uVar1 == param_3) {
    return (ulonglong)uVar2 << 0x20;
  }
  if (uVar1 < param_3) {
    uVar2 = uVar2 + 1;
  }
  return CONCAT44(uVar2,1);
}

