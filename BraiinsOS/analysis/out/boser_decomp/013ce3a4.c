// FUN_013ce3a4 @ 013ce3a4 size=108 calls_out=4 calls_in=4
// strings: 

void FUN_013ce3a4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  FUN_013e098c(uVar1,param_1[2]);
  FUN_01af7af8(*param_1,uVar1,4,0x4c);
  FUN_00756350(param_1 + 3);
  FUN_00756350(param_1 + 6);
  FUN_00756350(param_1 + 9);
  FUN_00756350(param_1 + 0xc);
  if (param_1[0xf] == -0x80000000) {
    return;
  }
  FUN_013d1214(param_1 + 0xf);
  return;
}

