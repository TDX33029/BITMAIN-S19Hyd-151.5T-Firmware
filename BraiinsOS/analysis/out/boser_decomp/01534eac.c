// FUN_01534eac @ 01534eac size=144 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01534eac(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 local_60;
  undefined1 auStack_5c [40];
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined8 *local_18;
  undefined2 *local_14;
  
  local_60 = param_1;
  local_34 = FUN_0141621c(auStack_5c);
  local_18 = &local_34;
  local_14 = &DAT_0132b6a0;
  local_1c = &LAB_0155c98c;
  local_20 = (undefined1 *)&local_60;
  FUN_00664898(&local_2c,&DAT_005b25a2,&local_20);
  uVar1 = FUN_016bc0ec(local_28,local_24);
  FUN_019bb7e0(local_2c,local_28);
  return uVar1;
}

