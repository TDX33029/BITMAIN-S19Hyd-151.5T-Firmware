// FUN_00abb9dc @ 00abb9dc size=156 calls_out=3 calls_in=1
// strings: 

void FUN_00abb9dc(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *local_1c;
  uint local_18;
  
  FUN_0094f574(&local_1c);
  if ((char)local_1c == '\x01') {
LAB_00abba68:
    *param_1 = 2;
    param_1[1] = local_18;
  }
  else {
    uVar1 = (uint)local_1c >> 8 & 0xff;
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (uVar1 != 1) {
        local_1c = &DAT_80000004;
        local_18 = uVar1;
        local_18 = FUN_0073696c(&local_1c);
        goto LAB_00abba68;
      }
      FUN_0094ef18(&local_1c,param_2);
      param_1[1] = local_18;
      if (local_1c == (undefined1 *)0x1) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
    *param_1 = uVar2;
  }
  return;
}

