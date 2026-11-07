// FUN_019ae210 @ 019ae210 size=176 calls_out=4 calls_in=2
// strings: 

void FUN_019ae210(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined1 auStack_1a8 [388];
  int local_24;
  undefined4 local_20;
  
  if (2 < param_3 >> 7) {
    FUN_0198245c(param_1,param_2,param_3,&LAB_019ae2cc);
    return;
  }
  FUN_01bed4e2(auStack_1a8,param_2,param_3);
  auStack_1a8[param_3] = 0;
  FUN_012fbc58(&local_24,auStack_1a8,param_3 + 1);
  if (local_24 == 1) {
    *param_1 = 0x80000000;
    param_1[1] = 2;
    param_1[2] = &DAT_01d27a70;
    return;
  }
  FUN_019a0c3c(param_1,local_20);
  return;
}

