// FUN_00a8679c @ 00a8679c size=200 calls_out=4 calls_in=0
// strings: next_value_seed called before next_key_seed | a Display implementation returned an error unexpectedly

void FUN_00a8679c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  local_40 = *param_2;
  *param_2 = 2;
  if (local_40 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("next_value_seed called before next_key_seed",0x57,&DAT_0187e9c8);
  }
  local_3c = param_2[1];
  iStack_38 = param_2[2];
  iStack_34 = param_2[3];
  iStack_30 = param_2[4];
  iStack_2c = param_2[5];
  local_20 = 0;
  local_24 = 1;
  local_28 = 0;
  iVar1 = FUN_01668a24(&local_40,&local_28,&DAT_0186da3c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                 &DAT_0186da54,&DAT_018af130);
  }
  *param_1 = 2;
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(local_24);
  }
  return;
}

