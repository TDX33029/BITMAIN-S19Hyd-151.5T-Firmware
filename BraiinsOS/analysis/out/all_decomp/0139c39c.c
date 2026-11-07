// FUN_0139c39c @ 0139c39c size=384 calls_out=6 calls_in=0
// strings: 

void FUN_0139c39c(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte **local_20;
  code *local_1c;
  
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_0139d778(param_1);
      return;
    }
    if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893548);
    }
    FUN_0139daac(&local_34,param_2,param_3 + 0xd8);
    if (local_34 == 2) {
      local_24 = local_30;
      if (1 < *local_30) {
        local_20 = &local_24;
        local_1c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_20,&DAT_01892790);
      }
      thunk_FUN_016d3fb4();
      FUN_0139d778(param_1,param_2,param_3,param_4);
      return;
    }
  }
  else {
    FUN_0139d490(&local_34,param_2 + 0x144,param_4);
    if (local_34 == 2) {
      local_24 = local_30;
      if (1 < *local_30) {
        local_20 = &local_24;
        local_1c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_20,&DAT_01892790);
      }
      thunk_FUN_016d3fb4();
      FUN_0139d778(param_1,param_2,param_3,param_4);
      return;
    }
  }
  param_1[2] = local_2c;
  *param_1 = local_34;
  param_1[1] = (int)local_30;
  param_1[3] = local_28;
  return;
}

