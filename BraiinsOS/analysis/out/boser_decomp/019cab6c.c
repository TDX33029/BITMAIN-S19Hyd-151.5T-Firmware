// FUN_019cab6c @ 019cab6c size=156 calls_out=3 calls_in=2
// strings: 

void FUN_019cab6c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  local_1c = 0x1b6;
  local_20 = 0;
  local_14 = 0;
  local_18 = 1;
  FUN_019a581c(&local_28,&local_20,param_2,param_3);
  if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
    FUN_019ca9c4(param_1,&local_20,param_4);
    FUN_01bf01d6(local_24);
  }
  else {
    param_1[1] = local_28;
    param_1[2] = local_24;
    *param_1 = 0x80000000;
  }
  return;
}

