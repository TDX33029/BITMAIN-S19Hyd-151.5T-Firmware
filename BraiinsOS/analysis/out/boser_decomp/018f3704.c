// FUN_018f3704 @ 018f3704 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_018f3704(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 local_98 [17];
  undefined1 auStack_54 [52];
  
  FUN_01bed93e(auStack_54,0,0x30);
  FUN_01bed4e2((uint)local_98 | 4,param_2,0x40);
  local_98[0] = param_3;
  if (param_5 != 0x30) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0x30,param_5,&DAT_01d23e80);
  }
  FUN_01bed4e2(auStack_54,param_4,0x30);
  FUN_01bed4e2(param_1,local_98,0x74);
  return;
}

