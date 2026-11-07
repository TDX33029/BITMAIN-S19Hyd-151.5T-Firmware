// FUN_00e9a6bc @ 00e9a6bc size=148 calls_out=2 calls_in=1
// strings: 

void FUN_00e9a6bc(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_28 = param_2[1];
  local_24 = param_2[2];
  local_20 = 0;
  local_1c = local_24;
  FUN_0121f3c0(&local_18,*param_2,param_3,&local_28);
  if ((char)local_18 == '\x05') {
    uVar1 = 5;
  }
  else {
    if ((local_18 & 0xff) != 4) {
      *param_1 = local_18;
      param_1[1] = local_14;
      return;
    }
    if (local_24 < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_20,local_24,&DAT_01d2e4e0);
    }
    uVar1 = 4;
    param_1[1] = local_20;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

