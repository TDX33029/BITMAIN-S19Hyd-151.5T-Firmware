// FUN_006795cc @ 006795cc size=264 calls_out=4 calls_in=5
// strings: 

undefined4 FUN_006795cc(int param_1)

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
  
  FUN_00677900(&local_2c,param_1);
  if (local_2c == '\x01') {
    return local_28;
  }
  if (local_2b == '\x01') {
    if (local_2a == ']') {
      FUN_0157653c(param_1 + 0xc);
      return 0;
    }
    if (local_2a == ',') {
      FUN_0157653c(param_1 + 0xc);
      FUN_00677900(&local_24,param_1);
      if (local_24 != '\x01') {
        bVar3 = local_23 == '\x01';
        if (bVar3) {
          local_23 = local_22;
        }
        if (bVar3 && local_23 == ']') {
          uVar1 = *(undefined4 *)(param_1 + 0x1c);
          uVar2 = *(undefined4 *)(param_1 + 0x20);
          local_1c[0] = 0x15;
          goto LAB_006796ac;
        }
      }
      local_1c[0] = 0x16;
      uVar1 = FUN_01966fbc(local_1c,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20))
      ;
      if (local_24 == '\0') {
        return uVar1;
      }
      FUN_0067904c(local_20);
      return uVar1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    local_1c[0] = 0x16;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    local_1c[0] = 2;
  }
LAB_006796ac:
  uVar1 = FUN_01966fbc(local_1c,uVar1,uVar2);
  return uVar1;
}

