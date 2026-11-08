// FUN_013db298 @ 013db298 size=96 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013db298(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = FUN_013d9414();
  FUN_006643f0(&local_1c,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,local_18,local_14);
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return uVar1;
}

