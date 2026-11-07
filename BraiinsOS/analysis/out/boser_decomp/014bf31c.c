// FUN_014bf31c @ 014bf31c size=84 calls_out=2 calls_in=1
// strings: 

void FUN_014bf31c(int *param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  uint local_28;
  uint local_24;
  undefined1 auStack_1c [12];
  
  FUN_0128e808(auStack_1c);
  FUN_01298334(auStack_30,param_2,auStack_1c);
  *param_1 = local_24 + local_28;
  param_1[1] = ((int)local_24 >> 0x1f) + ((int)local_28 >> 0x1f) + (uint)CARRY4(local_24,local_28);
  param_1[2] = 0;
  return;
}

