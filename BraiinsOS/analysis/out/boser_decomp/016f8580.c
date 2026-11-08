// FUN_016f8580 @ 016f8580 size=140 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_016f8580(undefined4 param_1,undefined *param_2)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  (**(code **)(param_2 + 0x1c))(&local_20,param_1);
  if ((local_20 == 0x756c27d && iStack_18 == -0x529c5e12) &&
      (iStack_1c == -0x28280528 && iStack_14 == 0x6ee8ce6d)) {
    FUN_00f80320(param_1,param_2);
    param_1 = 1;
    param_2 = &UNK_01d18954;
  }
  return CONCAT44(param_2,param_1);
}

