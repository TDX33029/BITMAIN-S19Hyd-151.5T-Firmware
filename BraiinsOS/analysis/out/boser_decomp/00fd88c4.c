// FUN_00fd88c4 @ 00fd88c4 size=180 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_00fd88c4(int param_1)

{
  undefined4 uVar1;
  char local_1c;
  char local_1b;
  char local_1a;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  FUN_012c3960(&local_1c,param_1);
  if (local_1c != '\x01') {
    if (local_1b == '\x01') {
      if (local_1a == 'n') {
        FUN_012c6160(param_1 + 0xc);
        uVar1 = FUN_012c3a60(param_1,"ull",3);
        return uVar1;
      }
      uVar1 = FUN_012c4a28(param_1,local_14,&DAT_01cf9cd4);
      local_18 = FUN_012c6694(uVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34))
      ;
    }
    else {
      local_14[0] = 5;
      local_18 = FUN_01966fbc(local_14,*(undefined4 *)(param_1 + 0x30),
                              *(undefined4 *)(param_1 + 0x34));
    }
  }
  return local_18;
}

