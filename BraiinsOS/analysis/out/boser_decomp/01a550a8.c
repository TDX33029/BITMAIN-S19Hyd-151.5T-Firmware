// FUN_01a550a8 @ 01a550a8 size=48 calls_out=1 calls_in=0
// strings: 

int FUN_01a550a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_14 [3];
  
  FUN_01a4c010(local_14,param_1 + 8,param_2,param_3);
  if (local_14[0] != 0) {
    local_14[0] = local_14[0] + 0x18;
  }
  return local_14[0];
}

