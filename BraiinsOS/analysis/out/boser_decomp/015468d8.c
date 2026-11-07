// FUN_015468d8 @ 015468d8 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_015468d8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  undefined4 local_1c;
  
  local_1c = 3;
  local_2c = param_2 + 4;
  local_30 = param_2 + 2;
  local_28 = param_5;
  (**(code **)(param_2[1] + 0x18))(param_1,*param_2,param_3,param_4,&local_30,param_6);
  FUN_01532668(auStack_24);
  return;
}

