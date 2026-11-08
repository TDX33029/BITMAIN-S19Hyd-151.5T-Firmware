// FUN_014147b4 @ 014147b4 size=188 calls_out=3 calls_in=0
// strings: 

void FUN_014147b4(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 *local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined4 local_38 [2];
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_3c = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  local_38[0] = 0;
  local_3b = 0;
  local_2c = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    local_38[0] = 2;
  }
  local_39 = 1;
  local_40 = param_2;
  local_30 = param_1;
  while (uVar1 = FUN_01414bbc(local_38), (int)uVar1 != 0) {
    local_28 = uVar1;
    FUN_01302ea4(&local_40,&local_28,FUN_0141322c,(int)&local_28 + 4,&LAB_014140ec);
  }
  FUN_01303100(&local_40);
  return;
}

