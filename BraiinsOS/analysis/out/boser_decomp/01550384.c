// FUN_01550384 @ 01550384 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01550384(int param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_b8 [152];
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_01bed4e2(auStack_b8,param_3,0xa8);
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 0xa8) != 0) {
    FUN_01550b0c(param_2,auStack_b8);
  }
  if (local_20 != -0x80000000) {
    FUN_01bed4e2(param_1,auStack_b8,0x98);
    *(undefined4 *)(param_1 + 0x9c) = local_1c;
    *(undefined4 *)(param_1 + 0xa0) = uStack_18;
    *(undefined4 *)(param_1 + 0xa4) = uStack_14;
  }
  *(int *)(param_1 + 0x98) = local_20;
  return;
}

