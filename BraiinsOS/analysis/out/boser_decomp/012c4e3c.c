// FUN_012c4e3c @ 012c4e3c size=264 calls_out=4 calls_in=6
// strings: 

undefined4 FUN_012c4e3c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char local_2c;
  char local_2b;
  char local_2a;
  undefined4 local_28;
  char local_24;
  char local_23;
  char local_22;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  FUN_012c3960(&local_2c,param_1);
  if (local_2c == '\x01') {
    return local_28;
  }
  if (local_2b == '\x01') {
    if (local_2a == ']') {
      FUN_012c6160(param_1 + 0xc);
      return 0;
    }
    if (local_2a == ',') {
      FUN_012c6160(param_1 + 0xc);
      FUN_012c3960(&local_24,param_1);
      if (local_24 != '\x01') {
        bVar3 = local_23 == '\x01';
        if (bVar3) {
          local_23 = local_22;
        }
        if (bVar3 && local_23 == ']') {
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          uVar2 = *(undefined4 *)(param_1 + 0x34);
          local_1c[0] = 0x15;
          goto LAB_012c4f1c;
        }
      }
      local_1c[0] = 0x16;
      uVar1 = FUN_01966fbc(local_1c,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34))
      ;
      if (local_24 == '\0') {
        return uVar1;
      }
      FUN_012c4c7c(local_20);
      return uVar1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    local_1c[0] = 0x16;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    local_1c[0] = 2;
  }
LAB_012c4f1c:
  uVar1 = FUN_01966fbc(local_1c,uVar1,uVar2);
  return uVar1;
}

