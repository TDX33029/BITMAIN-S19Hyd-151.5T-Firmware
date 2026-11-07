// FUN_016f75cc @ 016f75cc size=220 calls_out=2 calls_in=0
// strings: 

void FUN_016f75cc(uint *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30 = param_3;
  local_2c = param_4;
  FUN_0183b030(&local_20,*(undefined4 *)(*param_2 + 8),*(undefined4 *)(*param_2 + 0xc),param_2[1],
               &local_30);
  if ((char)local_20 == '\x04') {
    if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_28,local_2c,&DAT_01d20c0c);
    }
    uVar1 = local_28;
    if (param_4 < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_28,param_4,&DAT_01d2e4e0);
    }
  }
  else if ((local_20 & 0xff) != 4) {
    if ((local_20 & 0xff) == 5) {
      local_1c = 0;
      local_20 = 0xd01;
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
    return;
  }
  param_1[1] = uVar1;
  *(undefined1 *)param_1 = 4;
  return;
}

