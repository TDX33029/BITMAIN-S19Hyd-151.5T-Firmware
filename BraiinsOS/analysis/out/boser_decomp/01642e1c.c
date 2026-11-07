// FUN_01642e1c @ 01642e1c size=120 calls_out=1 calls_in=0
// strings: 

void FUN_01642e1c(byte *param_1,undefined4 *param_2)

{
  byte *local_24;
  undefined *local_20;
  undefined4 local_1c;
  byte **local_18;
  code *local_14;
  undefined **local_10;
  undefined1 *local_c;
  
  local_1c = *(undefined4 *)(&DAT_00537458 + (*param_1 ^ 0x80) * 4);
  local_20 = (&PTR_DAT_01d32948)[*param_1 ^ 0x80];
  local_c = &LAB_018a13b8;
  local_10 = &local_20;
  local_18 = &local_24;
  local_14 = FUN_01642ea8;
  local_24 = param_1;
  FUN_012fa178(*param_2,param_2[1],&DAT_00587911,&local_18);
  return;
}

