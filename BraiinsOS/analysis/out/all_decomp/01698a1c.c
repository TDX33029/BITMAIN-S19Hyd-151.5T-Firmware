// FUN_01698a1c @ 01698a1c size=224 calls_out=4 calls_in=2
// strings: 

void FUN_01698a1c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (param_2 == 0) {
    FUN_01695734(&local_20,param_3,param_4);
  }
  else if (param_2 == 1) {
    FUN_016997a8(&local_20,param_3,param_4);
  }
  else {
    FUN_01696334(&local_20,param_3 + 8,param_4);
  }
  if (local_20 == 2) {
    *param_1 = 0x80000001;
    return;
  }
  if ((local_20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae200);
  }
  *param_1 = local_1c;
  param_1[1] = uStack_18;
  param_1[2] = local_14;
  return;
}

