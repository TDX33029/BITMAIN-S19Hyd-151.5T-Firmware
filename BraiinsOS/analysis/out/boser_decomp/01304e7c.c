// FUN_01304e7c @ 01304e7c size=116 calls_out=1 calls_in=13
// strings: 

void FUN_01304e7c(undefined2 *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 local_20;
  uint local_1c;
  byte local_15;
  undefined4 local_14;
  
  if (0xf < param_3) {
    *param_1 = 0x101;
    return;
  }
  local_20 = param_2;
  local_1c = param_3;
  FUN_01304258(&local_15,&local_20);
  if ((local_1c == 0) && ((local_15 & 1) != 0)) {
    *(undefined4 *)((int)param_1 + 1) = local_14;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(undefined1 *)((int)param_1 + 1) = 1;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

