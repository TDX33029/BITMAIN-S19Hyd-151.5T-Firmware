// FUN_00ebefd8 @ 00ebefd8 size=180 calls_out=3 calls_in=0
// strings: 

void FUN_00ebefd8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_190 [92];
  undefined1 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [128];
  undefined4 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [128];
  
  uVar2 = FUN_01626844();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  FUN_016dd1aa(auStack_190,param_2,0x5c);
  local_134 = 0;
  local_130 = uVar1;
  local_12c = (int)uVar2;
  FUN_005bb454(auStack_98);
  local_a4 = 0;
  local_a0 = 0;
  local_a8 = &DAT_005674cc;
  local_9c = 0;
  FUN_016dd1aa(auStack_128,auStack_98,0x80);
  *(undefined4 *)(param_1 + 0xf8) = 100;
  FUN_016dd1aa(param_1,auStack_190,0x60);
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  *(int *)(param_1 + 0xf4) = (int)uVar2;
  FUN_016dd1aa(param_1 + 0x60,auStack_128,0x90);
  return;
}

