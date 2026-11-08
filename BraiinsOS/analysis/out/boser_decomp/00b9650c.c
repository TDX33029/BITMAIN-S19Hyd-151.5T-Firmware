// FUN_00b9650c @ 00b9650c size=140 calls_out=2 calls_in=1
// strings: 

void FUN_00b9650c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  local_2c = 1;
  local_24 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_18 = 0;
  local_20 = &DAT_01c14054;
  local_1c = 0x60000020;
  iVar1 = FUN_012fb940(&local_24,param_2 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01c1408c);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

