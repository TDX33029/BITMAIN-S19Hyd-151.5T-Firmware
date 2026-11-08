// FUN_0126eb04 @ 0126eb04 size=120 calls_out=1 calls_in=0
// strings: 

void FUN_0126eb04(byte *param_1,undefined4 *param_2)

{
  byte *local_24;
  undefined *local_20;
  undefined4 local_1c;
  byte **local_18;
  code *local_14;
  undefined **local_10;
  undefined4 *local_c;
  
  local_1c = *(undefined4 *)(&DAT_00420ca0 + (*param_1 ^ 0x80) * 4);
  local_20 = (&PTR_DAT_018b23cc)[*param_1 ^ 0x80];
  local_c = &DAT_0157d360;
  local_10 = &local_20;
  local_18 = &local_24;
  local_14 = FUN_0126eb90;
  local_24 = param_1;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00585fcb,&local_18);
  return;
}

