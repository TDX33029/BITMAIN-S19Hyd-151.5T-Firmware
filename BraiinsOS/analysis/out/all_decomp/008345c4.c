// FUN_008345c4 @ 008345c4 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_008345c4(int param_1,undefined4 *param_2)

{
  undefined1 extraout_r1;
  byte local_12;
  undefined1 local_11;
  byte *local_10;
  code *local_c;
  
  local_12 = FUN_009b670c(param_1 + 0x38);
  local_12 = local_12 & 1;
  local_c = FUN_0093efbc;
  local_10 = &local_12;
  local_11 = extraout_r1;
  FUN_00fa948c(*param_2,param_2[1],&DAT_0058409e,&local_10);
  return;
}

