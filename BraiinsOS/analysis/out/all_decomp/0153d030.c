// FUN_0153d030 @ 0153d030 size=176 calls_out=4 calls_in=1
// strings: 

void FUN_0153d030(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [108];
  undefined2 local_b0;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_a4 = *param_2;
  local_a0 = param_2[1];
  local_9c = param_2[2];
  local_a8 = &DAT_80000004;
  local_20 = 0;
  local_24 = 1;
  local_28 = 0;
  FUN_0150e524(&local_a8,&local_28,0x80000000);
  local_128 = local_28;
  uStack_124 = local_24;
  uStack_120 = local_20;
  FUN_016dd1aa(auStack_11c,&local_a8,0x6c);
  local_b0 = 4;
  FUN_0151eddc(param_1,&local_128);
  FUN_016dd1aa(&local_a8,&local_128,0x7c);
  FUN_01525ed4(param_3,&local_a8,0);
  return;
}

