// FUN_01546110 @ 01546110 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_01546110(int *param_1,int param_2,undefined4 param_3)

{
  int local_80 [28];
  
  FUN_01bed4e2(local_80,param_3,0x70);
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_01551720(param_2,local_80);
  }
  if (local_80[0] != 2) {
    FUN_01bed4e2(param_1 + 1,(uint)local_80 | 4,0x6c);
  }
  *param_1 = local_80[0];
  return;
}

