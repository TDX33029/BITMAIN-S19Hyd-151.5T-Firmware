// FUN_012c4db0 @ 012c4db0 size=140 calls_out=3 calls_in=6
// strings: 

undefined4 FUN_012c4db0(int param_1)

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
      if (local_1a == '}') {
        FUN_012c6160(param_1 + 0xc);
        return 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      if (local_1a == ',') {
        local_14[0] = 0x15;
      }
      else {
        local_14[0] = 0x16;
      }
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

