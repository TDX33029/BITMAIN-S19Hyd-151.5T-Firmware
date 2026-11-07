// FUN_00dad684 @ 00dad684 size=192 calls_out=3 calls_in=0
// strings: 

void FUN_00dad684(undefined4 *param_1)

{
  undefined4 uVar1;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00e7a05c(&local_24);
  if (local_24 == 2) {
    uVar1 = 6;
  }
  else {
    if ((local_24 & 1) != 0) {
      if (local_20 == 0) {
        local_c = local_18;
        local_10 = local_1c;
        uVar1 = FUN_014333d0(&local_10);
        uVar1 = FUN_00715ebc(uVar1,&DAT_01cf5e1c);
        param_1[1] = 0;
        *param_1 = 4;
        param_1[2] = uVar1;
        param_1[3] = &DAT_01c07620;
        return;
      }
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_20;
      param_1[3] = local_1c;
      param_1[4] = local_18;
      param_1[5] = local_14;
      return;
    }
    uVar1 = 5;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

