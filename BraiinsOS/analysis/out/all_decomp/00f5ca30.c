// FUN_00f5ca30 @ 00f5ca30 size=248 calls_out=1 calls_in=0
// strings: 

longlong FUN_00f5ca30(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  
  if (param_2 == 1) {
    bVar4 = *param_1;
    uVar3 = 1;
    if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_00f5cafc;
  }
  else {
    if (param_2 == 0) {
      uVar3 = 0;
      goto LAB_00f5cafc;
    }
    bVar4 = *param_1;
  }
  uVar1 = 0;
  if (bVar4 == 0x2b) {
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  if (param_2 < 9) {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      bVar4 = *param_1;
      if (9 < bVar4 - 0x30) goto LAB_00f5caf0;
      param_1 = param_1 + 1;
      uVar1 = (bVar4 - 0x30) + uVar1 * 10;
    }
LAB_00f5caa8:
    return (ulonglong)uVar1 << 0x20;
  }
  do {
    if (param_2 == 0) goto LAB_00f5caa8;
    uVar2 = (uint)((ulonglong)uVar1 * 10);
    if ((int)((ulonglong)uVar1 * 10 >> 0x20) != 0) {
      uVar3 = 1;
      if (*param_1 - 0x30 < 10) {
        uVar3 = 2;
      }
      goto LAB_00f5cafc;
    }
    uVar5 = *param_1 - 0x30;
    if (9 < uVar5) goto LAB_00f5caf0;
    uVar1 = uVar5 + uVar2;
    param_2 = param_2 - 1;
    param_1 = param_1 + 1;
  } while (!CARRY4(uVar5,uVar2));
  uVar3 = 2;
  goto LAB_00f5cafc;
LAB_00f5caf0:
  uVar3 = 1;
LAB_00f5cafc:
  uVar3 = FUN_00f5cb28(uVar3);
  return CONCAT44(uVar3,1);
}

