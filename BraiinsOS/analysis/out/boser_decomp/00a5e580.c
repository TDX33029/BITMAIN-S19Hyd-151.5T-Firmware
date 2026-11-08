// FUN_00a5e580 @ 00a5e580 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00a5e580(int param_1)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = 0;
  uStack_24 = 0x1e;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_0141e078(&uStack_34);
  FUN_0141c42c(param_1,local_2c,uStack_34,uStack_30);
  *(undefined4 *)(param_1 + 0x2c) = 0x80000001;
  *(undefined4 *)(param_1 + 0x18) = 0x80000001;
  return;
}

