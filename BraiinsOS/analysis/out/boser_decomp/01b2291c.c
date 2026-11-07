// FUN_01b2291c @ 01b2291c size=176 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01b2291c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_01b7079c(&DAT_01d51c30,0,0,0);
  if (param_1 == DAT_01d51c50) {
    DAT_01d51c50 = *(int *)(param_1 + 0x134);
  }
  else if (*(int *)(param_1 + 0x138) != 0) {
    *(int *)(*(int *)(param_1 + 0x138) + 0x134) = *(int *)(param_1 + 0x134);
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x138) = *(undefined4 *)(param_1 + 0x138);
  }
  FUN_01b707fc(&DAT_01d51c30);
  if (*(int *)(param_1 + 0x130) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x130) + 4) + 8))();
  }
  FUN_01b6b1c4(*(undefined4 *)(param_1 + 0x130));
  uVar1 = FUN_01b6b1c4(param_1);
  return uVar1;
}

