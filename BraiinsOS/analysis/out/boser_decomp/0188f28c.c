// FUN_0188f28c @ 0188f28c size=208 calls_out=4 calls_in=0
// strings: 

void FUN_0188f28c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 auStack_1d0 [144];
  undefined1 auStack_140 [144];
  undefined1 auStack_b0 [144];
  
  FUN_01bed93e(auStack_b0,0,0x90);
  FUN_01bd0b34(auStack_b0,param_2,&DAT_0051d2bc,&DAT_0051d2ec);
  FUN_01bed4e2(auStack_1d0,auStack_b0,0x90);
  FUN_01bed93e(auStack_b0,0,0x90);
  FUN_01bd0b34(auStack_b0,param_3,param_4,param_4 + 0x30);
  FUN_01bed4e2(auStack_140,auStack_b0,0x90);
  FUN_01bed93e(auStack_b0,0,0x90);
  FUN_01bd0a28(auStack_b0,auStack_1d0,auStack_140);
  FUN_01bed4e2(param_1,auStack_b0,0x90);
  return;
}

