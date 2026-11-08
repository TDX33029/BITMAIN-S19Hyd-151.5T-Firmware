// FUN_00abb70c @ 00abb70c size=156 calls_out=3 calls_in=4
// strings: 

void FUN_00abb70c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *local_20;
  uint local_1c;
  uint uStack_18;
  
  FUN_0094f574(&local_20);
  if ((char)local_20 != '\x01') {
    uVar1 = (uint)local_20 >> 8 & 0xff;
    if (uVar1 == 0) {
      *param_1 = 0x80000000;
      return;
    }
    if (uVar1 == 1) {
      FUN_00aeed24(&local_20,param_2);
      if (local_20 != (undefined1 *)0x80000000) {
        *param_1 = (uint)local_20;
        param_1[1] = local_1c;
        param_1[2] = uStack_18;
        return;
      }
    }
    else {
      local_20 = &DAT_80000004;
      local_1c = uVar1;
      local_1c = FUN_0073696c(&local_20);
    }
  }
  *param_1 = 0x80000001;
  param_1[1] = local_1c;
  return;
}

