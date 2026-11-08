// FUN_0135a8dc @ 0135a8dc size=120 calls_out=1 calls_in=0
// strings: invalid percent-encoded octet at index 

void FUN_0135a8dc(int *param_1,undefined4 *param_2)

{
  undefined *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = *param_1;
  local_24 = *(undefined4 *)(&DAT_00421760 + (uint)*(byte *)(local_18 + 4) * 4);
  local_28 = (&PTR_s_invalid_percent_encoded_octet_at_018b2c90)[*(byte *)(local_18 + 4)];
  local_14 = &LAB_00fac484;
  local_1c = &DAT_0157d360;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00570dec,&local_20);
  return;
}

