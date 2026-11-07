// FUN_01344a90 @ 01344a90 size=296 calls_out=0 calls_in=2
// strings: 

longlong FUN_01344a90(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_2 == 0) {
LAB_01344ac8:
    return (ulonglong)param_4 << 0x20;
  }
  param_4 = (uint)*param_1;
  if (param_4 != 0x2b) {
    if ((param_2 != 1) && (param_4 == 0x30)) goto LAB_01344ac8;
    if (param_2 == 0) {
      return (ulonglong)*param_1 << 0x20;
    }
    if (param_2 == 1) {
      if (param_4 == 0x2b) goto LAB_01344ac8;
      if (param_4 == 0x2d) goto LAB_01344aac;
    }
    else if (8 < param_2) {
      param_4 = 0;
      do {
        if (param_2 == 0) {
          return CONCAT44(param_4,1);
        }
        lVar2 = (ulonglong)param_4 * 10;
        if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
          return lVar2 << 0x20;
        }
        uVar4 = *param_1 - 0x30;
        uVar3 = 0;
        param_4 = uVar4 + (uint)lVar2;
        if (9 < uVar4) goto LAB_01344ac8;
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while (!CARRY4(uVar4,(uint)lVar2));
      goto LAB_01344aac;
    }
    param_4 = 0;
    do {
      bVar1 = *param_1;
      if (9 < bVar1 - 0x30) {
        return (ulonglong)param_4 << 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
      param_4 = (bVar1 - 0x30) + param_4 * 10;
      uVar3 = 1;
    } while (param_2 != 0);
  }
LAB_01344aac:
  return CONCAT44(param_4,uVar3);
}

