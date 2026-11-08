// FUN_01417268 @ 01417268 size=144 calls_out=1 calls_in=2
// strings: 

void FUN_01417268(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_24 = param_5;
  local_1c = param_2 + param_3;
  local_c = 0;
  local_28 = param_4;
  local_20 = param_2;
  local_18 = param_2;
  FUN_01416510(&local_14,&local_28,&local_20,&local_c);
  if (local_14 == 2) {
    param_1[1] = (undefined1)local_10;
    uVar1 = 1;
  }
  else if ((local_14 & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = local_10;
    *(undefined4 *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0xc) = local_24;
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *param_1 = uVar1;
  return;
}

