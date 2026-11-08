// FUN_01953bac @ 01953bac size=144 calls_out=2 calls_in=1
// strings: 

void FUN_01953bac(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  code *local_14;
  
  local_20 = 0;
  local_24 = 1;
  local_28 = 0;
  local_14 = FUN_01318fa0;
  local_18 = param_2;
  iVar1 = FUN_012fa178(&local_28,&DAT_01d26534,&DAT_00590e5f,&local_18);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_18,&DAT_01d2654c);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  return;
}

