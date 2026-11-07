// FUN_00fedc7c @ 00fedc7c size=100 calls_out=1 calls_in=2
// strings: 

void FUN_00fedc7c(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 1);
  if (uVar1 < 2) {
    FUN_019bb7e0(*param_3,param_3[1]);
    FUN_019bb7e0(param_3[3],param_3[4]);
  }
  else {
    uVar2 = (**(code **)(param_2[2] + 0x10))(param_2[1]);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = uVar2;
  return;
}

