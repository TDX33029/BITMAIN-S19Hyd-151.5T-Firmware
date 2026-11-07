// FUN_010d2f30 @ 010d2f30 size=300 calls_out=0 calls_in=1
// strings: 

longlong FUN_010d2f30(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (param_2 <= param_3) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar4 = param_3 + 1;
  uVar1 = *(ushort *)(param_1 + param_3 * 2);
  uVar3 = (uint)uVar1;
  if ((short)uVar1 < 0) {
    uVar3 = uVar3 & 0x7fff;
    if (uVar3 < 0x4000) {
      return CONCAT44(uVar3,2);
    }
    if (uVar3 != 0x7fff) {
      if (uVar4 < param_2) {
        return CONCAT44((uint)*(ushort *)(param_1 + uVar4 * 2) | (uVar3 - 0x4000) * 0x10000,2);
      }
      return (ulonglong)uVar3 << 0x20;
    }
    uVar3 = 0x7fff;
    if (param_2 <= uVar4) {
LAB_010d3038:
      return (ulonglong)uVar3 << 0x20;
    }
    uVar3 = 0x7fff;
    if (param_3 + 2 < param_2) {
      return CONCAT44(CONCAT22(*(undefined2 *)(param_1 + uVar4 * 2),
                               *(undefined2 *)(param_1 + (param_3 + 2) * 2)),2);
    }
  }
  else {
    if (uVar3 < 0x4040) {
      uVar3 = (uVar1 >> 6) - 1 & 0xffff;
    }
    else if (uVar3 < 0x7fc0) {
      if (param_2 <= uVar4) goto LAB_010d2f7c;
      uVar3 = (uint)*(ushort *)(param_1 + uVar4 * 2) | ((uVar3 & 0x7fc0) - 0x4040 & 0xffff) << 10;
    }
    else {
      if (param_2 <= uVar4) goto LAB_010d3038;
      if (param_2 <= param_3 + 2) goto LAB_010d2f7c;
      uVar3 = CONCAT22(*(undefined2 *)(param_1 + uVar4 * 2),
                       *(undefined2 *)(param_1 + (param_3 + 2) * 2));
    }
    uVar2 = 3;
  }
LAB_010d2f7c:
  return CONCAT44(uVar3,uVar2);
}

