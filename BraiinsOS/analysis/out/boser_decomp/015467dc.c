// FUN_015467dc @ 015467dc size=100 calls_out=1 calls_in=0
// strings: 

undefined8
FUN_015467dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  undefined4 local_1c;
  
  local_2c = param_1 + 4;
  local_30 = param_1 + 2;
  local_1c = 3;
  local_28 = param_4;
  uVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,param_2,param_3,&local_30,param_5);
  FUN_01532668(auStack_24);
  return uVar1;
}

