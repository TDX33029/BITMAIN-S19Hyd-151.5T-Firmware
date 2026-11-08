// FUN_0190f9f0 @ 0190f9f0 size=160 calls_out=5 calls_in=2
// strings: 

void FUN_0190f9f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_164 [68];
  undefined1 auStack_120 [120];
  undefined2 local_a8;
  undefined4 local_a0;
  undefined1 auStack_9c [124];
  
  (**(code **)(*(int *)(param_2 + 0x18) + 0xc))(auStack_164,*(undefined4 *)(param_2 + 0x14));
  FUN_018f39e8(auStack_9c,param_1,auStack_164,&DAT_005210ba);
  local_a0 = 0x80000012;
  FUN_0191d7c0(auStack_120,&local_a0);
  local_a8 = 4;
  FUN_0191e124(param_2,auStack_120);
  FUN_01bed4e2(&local_a0,auStack_120,0x7c);
  FUN_018f1fc4(param_3,&local_a0,1);
  return;
}

