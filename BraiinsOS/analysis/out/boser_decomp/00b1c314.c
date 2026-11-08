// FUN_00b1c314 @ 00b1c314 size=108 calls_out=2 calls_in=2
// strings: hashboard

void FUN_00b1c314(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint local_30 [2];
  undefined8 local_28;
  
  FUN_00b02b48(local_30);
  uVar1 = 1;
  if ((local_30[0] & 1) == 0) {
    uVar3 = FUN_00b070a4(param_2,"hashboard",9);
    bVar2 = (uVar3 & 1) != 0;
    uVar1 = (uint)bVar2;
    if (!bVar2) {
      *(undefined8 *)(param_1 + 2) = local_28;
      param_1[4] = (uint)(uVar3 >> 0x20);
    }
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

