// FUN_00fec824 @ 00fec824 size=168 calls_out=3 calls_in=3
// strings: 

void FUN_00fec824(undefined4 param_1)

{
  undefined4 local_a0 [3];
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 *local_10;
  undefined *local_c;
  
  local_2c = &DAT_01c1e988;
  local_28 = 0;
  local_30 = 1;
  local_34 = 0;
  local_40 = 0;
  local_4c = 0;
  local_58 = 0;
  local_64 = 0;
  local_70 = 0;
  local_7c = 0;
  local_88 = 0;
  local_94 = 0;
  local_a0[0] = 0;
  local_10 = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *local_10 = FUN_011dbc18;
  local_c = &DAT_01c21514;
  local_14 = 2;
  FUN_00fec6ac(param_1,local_a0,&local_14);
  return;
}

