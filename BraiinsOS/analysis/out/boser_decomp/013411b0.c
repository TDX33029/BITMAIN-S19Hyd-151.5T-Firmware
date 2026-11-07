// FUN_013411b0 @ 013411b0 size=232 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_013411b0(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_2 == 1) {
      bVar1 = *param_1;
      uVar4 = 0;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_013411e4;
    }
    else {
      bVar1 = *param_1;
    }
    if (bVar1 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    }
    if (param_2 < 9) {
      uVar4 = 1;
      param_4 = 0;
      for (; param_2 != 0; param_2 = param_2 - 1) {
        bVar1 = *param_1;
        if (9 < bVar1 - 0x30) goto LAB_01341288;
        param_1 = param_1 + 1;
        param_4 = (bVar1 - 0x30) + param_4 * 10;
      }
    }
    else {
      param_4 = 0;
      uVar4 = 0;
      while (param_2 != 0) {
        uVar2 = (uint)((ulonglong)param_4 * 10);
        param_4 = (uint)((ulonglong)param_4 * 10 >> 0x20);
        if (param_4 != 0) goto LAB_01341288;
        uVar3 = *param_1 - 0x30;
        param_4 = uVar3 + uVar2;
        if ((9 < uVar3) || (param_2 = param_2 - 1, param_1 = param_1 + 1, CARRY4(uVar3,uVar2)))
        goto LAB_013411e4;
      }
      uVar4 = 1;
    }
  }
  goto LAB_013411e4;
LAB_01341288:
  uVar4 = 0;
LAB_013411e4:
  return CONCAT44(param_4,uVar4);
}

