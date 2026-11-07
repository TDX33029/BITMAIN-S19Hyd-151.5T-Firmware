// FUN_0189736c @ 0189736c size=196 calls_out=5 calls_in=0
// strings: 

void FUN_0189736c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 auStack_1d0 [144];
  undefined1 auStack_140 [144];
  undefined1 auStack_b0 [144];
  
  FUN_01bed93e(auStack_b0,0,0x90);
  FUN_01bd4974(auStack_b0,param_2);
  FUN_01bed4e2(auStack_1d0,auStack_b0,0x90);
  FUN_01bed93e(auStack_b0,0,0x90);
  FUN_01bd43e8(auStack_b0,param_3,param_4,param_4 + 0x30);
  FUN_01bed4e2(auStack_140,auStack_b0,0x90);
  FUN_01bed93e(auStack_b0,0,0x90);
  FUN_01bd4d50(auStack_b0,auStack_1d0,auStack_140);
  FUN_01bed4e2(param_1,auStack_b0,0x90);
  return;
}

