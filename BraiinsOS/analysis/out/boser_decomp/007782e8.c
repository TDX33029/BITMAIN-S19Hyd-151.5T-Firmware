// FUN_007782e8 @ 007782e8 size=116 calls_out=5 calls_in=1
// strings: 

void FUN_007782e8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  FUN_013e098c(uVar1,param_1[2]);
  FUN_01af7af8(*param_1,uVar1,4,0x4c);
  FUN_00756350(param_1 + 3);
  FUN_00756350(param_1 + 6);
  FUN_00756350(param_1 + 9);
  FUN_00756350(param_1 + 0xc);
  FUN_007563a0(param_1 + 0xf);
  if (*(short *)(param_1 + 0x1a) == 2) {
    return;
  }
  FUN_0079217c(param_1 + 0x1a);
  return;
}

