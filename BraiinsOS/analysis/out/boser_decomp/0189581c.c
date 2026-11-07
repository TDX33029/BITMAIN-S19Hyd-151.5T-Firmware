// FUN_0189581c @ 0189581c size=204 calls_out=6 calls_in=3
// strings: 

void FUN_0189581c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_b8 [31];
  byte local_99;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  FUN_01bed93e(auStack_b8,0,0x20);
  FUN_01bed93e(auStack_98,0,0x28);
  FUN_01bcbf2c(auStack_98,param_4);
  FUN_01bed93e(auStack_70,0,0x28);
  FUN_01bcc064(auStack_70,param_2,auStack_98);
  FUN_01bed93e(auStack_48,0,0x28);
  FUN_01bcc064(auStack_48,param_3,auStack_98);
  FUN_01bcc18c(auStack_b8,auStack_48);
  cVar1 = FUN_01bcbfcc(auStack_70);
  local_99 = local_99 ^ cVar1 << 7;
  FUN_01bed4e2(param_1,auStack_b8,0x20);
  return;
}

