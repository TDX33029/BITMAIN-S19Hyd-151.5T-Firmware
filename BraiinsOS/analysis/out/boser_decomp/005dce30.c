// FUN_005dce30 @ 005dce30 size=124 calls_out=4 calls_in=5
// strings: 

void FUN_005dce30(undefined4 *param_1)

{
  undefined8 uVar1;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_019a5900(&local_1c);
  if (local_1c == -0x80000000) {
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = 6;
    param_1[3] = local_18;
    param_1[4] = local_14;
    return;
  }
  uVar1 = FUN_013245a0(local_18);
  FUN_01259844(param_1,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  FUN_019bb7e0(local_1c,local_18);
  return;
}

