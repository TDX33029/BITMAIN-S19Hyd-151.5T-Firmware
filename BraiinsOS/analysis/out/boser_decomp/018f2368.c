// FUN_018f2368 @ 018f2368 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_018f2368(int param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x234) = 0x80000000;
  if (iVar1 != -0x80000000) {
    iStack_1c = iVar1;
    uStack_18 = *(undefined4 *)(param_1 + 0x238);
    local_14 = *(undefined4 *)(param_1 + 0x23c);
    FUN_01914ee4(param_1 + 500,&iStack_1c);
  }
  FUN_01931328(&iStack_1c,param_2);
  FUN_01914ee4(param_1 + 500,&iStack_1c);
  return;
}

