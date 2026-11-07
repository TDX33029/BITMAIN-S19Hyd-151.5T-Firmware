// FUN_016dd162 @ 016dd162 size=72 calls_out=2 calls_in=4
// strings: 

void FUN_016dd162(int param_1,int *param_2,undefined4 param_3)

{
  undefined1 auStack_a0 [4];
  int local_9c;
  undefined4 local_98;
  int local_74;
  int local_28;
  
  local_98 = 0xffffffff;
  local_9c = param_1;
  local_74 = param_1;
  FUN_016d33b4(auStack_a0,param_2,0,0);
  FUN_016d2e84(auStack_a0,param_3,1,0,0x80000000,0);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + (local_9c - local_74) + local_28;
  }
  return;
}

