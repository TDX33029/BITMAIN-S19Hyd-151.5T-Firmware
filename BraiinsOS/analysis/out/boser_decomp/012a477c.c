// FUN_012a477c @ 012a477c size=168 calls_out=3 calls_in=2
// strings: 

void FUN_012a477c(undefined4 *param_1,int param_2)

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
  
  iVar1 = FUN_012a4878(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c));
  if (iVar1 == 0) {
    *param_1 = 0x80000000;
  }
  else {
    local_24 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_18 = 0;
    local_2c = 1;
    local_1c = 0x60000020;
    local_20 = &DAT_01ce2354;
    iVar1 = FUN_012bb12c(iVar1,&local_24);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01ce236c,&DAT_01d30334);
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
  }
  return;
}

