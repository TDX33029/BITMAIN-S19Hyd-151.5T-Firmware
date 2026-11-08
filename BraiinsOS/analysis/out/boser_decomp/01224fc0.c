// FUN_01224fc0 @ 01224fc0 size=168 calls_out=2 calls_in=2
// strings: 

void FUN_01224fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  ulonglong uVar3;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_01965170(&local_18);
  if (local_18 == '\x01') {
    param_1[1] = 0;
    *param_1 = 2;
    param_1[2] = local_14;
  }
  else if (local_17 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar3 = FUN_014b5b50(*param_2);
    uVar1 = (undefined4)(uVar3 >> 0x20);
    if ((uVar3 & 1) == 0) {
      dVar2 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
      *param_1 = 1;
      param_1[1] = 0;
      *(double *)(param_1 + 2) = dVar2 / 1000.0;
    }
    else {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = uVar1;
    }
  }
  return;
}

