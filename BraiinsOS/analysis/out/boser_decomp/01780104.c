// FUN_01780104 @ 01780104 size=152 calls_out=2 calls_in=0
// strings: 

void FUN_01780104(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_20 = 0;
  local_28 = param_3;
  local_24 = param_4;
  local_1c = param_4;
  FUN_017801a0(&local_18,*param_2,param_2[1],&local_28);
  if ((local_18 & 0xff) == 4) {
    if (local_24 < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_20,local_24,&DAT_01d2e4e0);
    }
    param_1[1] = local_20;
    *(undefined1 *)param_1 = 4;
  }
  else {
    if ((local_18 & 0xff) == 5) {
      local_14 = 0;
      local_18 = 0xd01;
    }
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

