// FUN_01224bf0 @ 01224bf0 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_01224bf0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  double dVar4;
  ulonglong uVar5;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    uVar5 = FUN_014b5b50(param_2);
    uVar3 = (undefined4)(uVar5 >> 0x20);
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
      dVar4 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      *(double *)(param_1 + 2) = dVar4 / 1000.0;
      goto LAB_01224c2c;
    }
    param_1[1] = uVar3;
  }
  else {
    param_1[1] = iVar1;
  }
  uVar2 = 1;
LAB_01224c2c:
  *param_1 = uVar2;
  return;
}

