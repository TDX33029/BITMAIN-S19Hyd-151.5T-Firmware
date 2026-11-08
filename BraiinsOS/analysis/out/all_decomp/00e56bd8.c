// FUN_00e56bd8 @ 00e56bd8 size=300 calls_out=3 calls_in=1
// strings: 

void FUN_00e56bd8(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar2 = ((int *)*param_2)[1];
    uVar4 = (**(code **)(iVar2 + 0x44))
                      (*(int *)*param_2 + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined8 *)(param_2 + 1) = uVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a924);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a924);
  case '\x03':
    uVar4 = *(undefined8 *)(param_2 + 1);
  }
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_98,(int)uVar4,param_3);
  if (local_98 == 3 && iStack_94 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  local_60 = local_98;
  iStack_5c = iStack_94;
  iStack_58 = iStack_90;
  iStack_54 = iStack_8c;
  local_50 = local_88;
  iStack_4c = iStack_84;
  iStack_48 = iStack_80;
  iStack_44 = iStack_7c;
  iStack_40 = iStack_78;
  local_3c = local_74;
  iStack_38 = iStack_70;
  iStack_34 = iStack_6c;
  iStack_30 = iStack_68;
  iStack_2c = iStack_64;
  puVar3 = (undefined4 *)param_2[2];
  iVar2 = param_2[1];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  *param_1 = local_60;
  param_1[1] = iStack_5c;
  param_1[2] = iStack_58;
  param_1[3] = iStack_54;
  param_1[4] = local_50;
  param_1[5] = iStack_4c;
  param_1[6] = iStack_48;
  param_1[7] = iStack_44;
  param_1[8] = iStack_40;
  param_1[9] = local_3c;
  param_1[10] = iStack_38;
  param_1[0xb] = iStack_34;
  param_1[0xc] = iStack_30;
  param_1[0xd] = iStack_2c;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

