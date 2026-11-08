// FUN_019021e0 @ 019021e0 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_019021e0(int param_1,undefined4 param_2)

{
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [108];
  
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 1;
  FUN_018ea644(param_2,&local_a0,0x80000001);
  local_90 = local_a0;
  uStack_8c = uStack_9c;
  uStack_88 = local_98;
  FUN_01bed4e2(auStack_84,param_2,0x6c);
  *(undefined2 *)(param_1 + 0x78) = 5;
  FUN_01bed4e2(param_1,&local_90,0x78);
  return;
}

