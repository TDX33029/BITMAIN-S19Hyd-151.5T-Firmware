// FUN_0124ad54 @ 0124ad54 size=200 calls_out=3 calls_in=0
// strings: next_value_seed called before next_key_seed

void FUN_0124ad54(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  local_40 = *param_2;
  *param_2 = 2;
  if (local_40 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("next_value_seed called before next_key_seed",0x57,&DAT_01c24e10);
  }
  local_3c = param_2[1];
  iStack_38 = param_2[2];
  iStack_34 = param_2[3];
  iStack_30 = param_2[4];
  iStack_2c = param_2[5];
  local_20 = 0;
  local_24 = 1;
  local_28 = 0;
  iVar1 = FUN_01a44394(&local_40,&local_28,&DAT_01c24dcc);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_19,&DAT_01c24de4);
  }
  param_1[3] = local_28;
  param_1[4] = local_24;
  param_1[5] = local_20;
  *param_1 = 2;
  param_1[2] = &DAT_8000000c;
  return;
}

