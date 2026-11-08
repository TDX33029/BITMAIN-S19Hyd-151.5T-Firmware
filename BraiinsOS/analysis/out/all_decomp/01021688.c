// FUN_01021688 @ 01021688 size=280 calls_out=1 calls_in=2
// strings: 

void FUN_01021688(int *param_1,int *param_2)

{
  int iVar1;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint local_40;
  int local_3c;
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  *(undefined1 *)(param_1 + 9) = 1;
  if (*param_1 == 1) {
    local_30 = (uint *)(param_1 + 1);
    if ((*local_30 == param_2[4]) && (param_1[2] == param_2[5])) {
                    /* WARNING: Could not recover jumptable at 0x010216e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
      return;
    }
    local_50 = *param_2;
    iStack_4c = param_2[1];
    iStack_48 = param_2[2];
    iStack_44 = param_2[3];
    local_40 = param_2[4];
    local_3c = param_2[5];
    if (*local_30 < local_40) {
      local_28 = &local_34;
      local_24 = FUN_0101a4ac;
      local_2c = FUN_0101a4ac;
      local_34 = local_40;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0056d4c7,&local_30,&DAT_01882cb0);
    }
  }
  else {
    local_50 = *param_2;
    iStack_4c = param_2[1];
    iStack_48 = param_2[2];
    iStack_44 = param_2[3];
    local_40 = param_2[4];
    local_3c = param_2[5];
  }
  iVar1 = param_1[3];
  *param_1 = 1;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))(param_1 + 6,param_1[4],param_1[5]);
  }
  param_1[3] = local_50;
  param_1[4] = iStack_4c;
  param_1[5] = iStack_48;
  param_1[6] = iStack_44;
  param_1[7] = local_40;
  param_1[8] = local_3c;
  return;
}

