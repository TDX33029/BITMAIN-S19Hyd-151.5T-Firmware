// FUN_0158d258 @ 0158d258 size=132 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_0158d258(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_1c;
  char local_1b;
  char local_1a;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  FUN_0158c2a4(&local_1c,param_1);
  if (local_1c != '\x01') {
    if (local_1b == '\x01') {
      if (local_1a == ':') {
        FUN_0157653c(param_1 + 0xc);
        return 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      local_14[0] = 6;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      local_14[0] = 3;
    }
    local_18 = FUN_01966fbc(local_14,uVar1,uVar2);
  }
  return local_18;
}

