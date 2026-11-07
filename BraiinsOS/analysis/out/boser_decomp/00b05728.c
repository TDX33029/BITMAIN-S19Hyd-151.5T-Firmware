// FUN_00b05728 @ 00b05728 size=280 calls_out=3 calls_in=1
// strings: 

void FUN_00b05728(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int **local_20;
  code *local_1c;
  
  if (*param_2 == 4) {
    *param_1 = 0x80000000;
  }
  else {
    local_24 = &local_60;
    local_60 = *param_2;
    iStack_5c = param_2[1];
    iStack_58 = param_2[2];
    iStack_54 = param_2[3];
    iStack_50 = param_2[4];
    iStack_4c = param_2[5];
    local_48 = param_2[6];
    iStack_44 = param_2[7];
    iStack_40 = param_2[8];
    iStack_3c = param_2[9];
    iStack_38 = param_2[10];
    iStack_34 = param_2[0xb];
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    if (local_60 == 3) {
      local_24 = (int *)((uint)local_24 | 4);
      local_1c = FUN_00ab1ce0;
      local_20 = &local_24;
      iVar1 = FUN_012fa178(&local_30,&DAT_01c10bb0,&DAT_0059b2c5,&local_20);
    }
    else {
      local_1c = (code *)&LAB_00ab1aa0;
      local_20 = &local_24;
      iVar1 = FUN_012fa178(&local_30,&DAT_01c10bb0,&DAT_005a003d,&local_20);
    }
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_20,&DAT_01c10bf8,&DAT_01d30334);
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    FUN_00b05888(&local_60);
  }
  return;
}

