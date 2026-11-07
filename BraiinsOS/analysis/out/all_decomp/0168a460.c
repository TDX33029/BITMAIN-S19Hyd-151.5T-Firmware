// FUN_0168a460 @ 0168a460 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_0168a460(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_58 [72];
  
  FUN_01676758(auStack_58,param_3);
  FUN_01681fc0(&local_a8,param_2 + 8,auStack_58);
  if (local_a8 == -0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = uStack_a4;
    param_1[2] = uStack_a0;
    param_1[3] = uStack_9c;
    return;
  }
  FUN_016dd1aa(param_1,&local_a8,0x50);
  return;
}

