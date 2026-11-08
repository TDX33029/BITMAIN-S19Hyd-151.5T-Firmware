// FUN_012c38fc @ 012c38fc size=100 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_012c38fc(int param_1)

{
  char local_1c;
  char local_1b;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  FUN_012c3960(&local_1c,param_1);
  if ((local_1c != '\x01') && (local_18 = 0, local_1b == '\x01')) {
    local_14[0] = 0x16;
    local_18 = FUN_01966fbc(local_14,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34)
                           );
  }
  return local_18;
}

