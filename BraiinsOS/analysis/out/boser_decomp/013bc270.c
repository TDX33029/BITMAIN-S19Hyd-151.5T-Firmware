// FUN_013bc270 @ 013bc270 size=60 calls_out=0 calls_in=3
// strings: 

void FUN_013bc270(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)*param_2)(param_3);
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}

