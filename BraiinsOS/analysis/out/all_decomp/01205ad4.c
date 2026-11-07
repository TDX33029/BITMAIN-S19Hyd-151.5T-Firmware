// FUN_01205ad4 @ 01205ad4 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_01205ad4(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_170 [152];
  int local_d8;
  undefined1 auStack_c8 [176];
  
  FUN_016dd1aa(auStack_170,param_3,0xa8);
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 0xa8) != 0) {
    FUN_012055d0(param_2,auStack_170);
  }
  if (local_d8 == -0x80000000) {
    param_1[0x28] = -0x80000000;
    *param_1 = param_2;
    return;
  }
  FUN_016dd1aa((uint)auStack_c8 | 4,auStack_170,0xa8);
  FUN_016dd1aa(param_1 + 1,auStack_c8,0xac);
  *param_1 = param_2;
  return;
}

