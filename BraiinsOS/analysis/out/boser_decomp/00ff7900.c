// FUN_00ff7900 @ 00ff7900 size=60 calls_out=1 calls_in=6
// strings: 

void FUN_00ff7900(undefined4 *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 3) {
    uVar1 = (**(code **)(param_2[2] + 0x14))(param_2[1]);
    *(undefined8 *)(param_1 + 1) = uVar1;
    *param_1 = 3;
    return;
  }
  FUN_00ff7270(param_1);
  return;
}

