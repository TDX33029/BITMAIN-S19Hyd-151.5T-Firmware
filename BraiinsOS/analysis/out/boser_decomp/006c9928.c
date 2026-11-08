// FUN_006c9928 @ 006c9928 size=88 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_006c9928(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_2 + 0xc))(param_1);
  if (*(int *)(param_2 + 4) != 0) {
    thunk_FUN_01be4678(param_1);
  }
  return uVar1;
}

