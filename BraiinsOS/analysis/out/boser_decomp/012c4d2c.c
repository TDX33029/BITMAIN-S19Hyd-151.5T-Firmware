// FUN_012c4d2c @ 012c4d2c size=132 calls_out=3 calls_in=10
// strings: 

undefined4 FUN_012c4d2c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_1c;
  char local_1b;
  char local_1a;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  FUN_012c3960(&local_1c,param_1);
  if (local_1c != '\x01') {
    if (local_1b == '\x01') {
      if (local_1a == ':') {
        FUN_012c6160(param_1 + 0xc);
        return 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      local_14[0] = 6;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      local_14[0] = 3;
    }
    local_18 = FUN_01966fbc(local_14,uVar1,uVar2);
  }
  return local_18;
}

