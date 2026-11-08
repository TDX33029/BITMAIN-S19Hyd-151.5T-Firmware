// FUN_00e56740 @ 00e56740 size=300 calls_out=3 calls_in=1
// strings: 

void FUN_00e56740(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar2 = ((int *)*param_2)[1];
    uVar4 = (**(code **)(iVar2 + 0x4c))
                      (*(int *)*param_2 + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined8 *)(param_2 + 1) = uVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a8c4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a8c4);
  case '\x03':
    uVar4 = *(undefined8 *)(param_2 + 1);
  }
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_a8,(int)uVar4,param_3);
  if (local_a8 == 3 && iStack_a4 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  local_68 = local_a8;
  iStack_64 = iStack_a4;
  iStack_60 = iStack_a0;
  iStack_5c = iStack_9c;
  iStack_58 = iStack_98;
  local_54 = local_94;
  iStack_50 = iStack_90;
  iStack_4c = iStack_8c;
  iStack_48 = iStack_88;
  iStack_44 = iStack_84;
  local_40 = local_80;
  iStack_3c = iStack_7c;
  iStack_38 = iStack_78;
  iStack_34 = iStack_74;
  iStack_30 = iStack_70;
  iStack_2c = iStack_6c;
  puVar3 = (undefined4 *)param_2[2];
  iVar2 = param_2[1];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  *param_1 = local_68;
  param_1[1] = iStack_64;
  param_1[2] = iStack_60;
  param_1[3] = iStack_5c;
  param_1[4] = iStack_58;
  param_1[5] = local_54;
  param_1[6] = iStack_50;
  param_1[7] = iStack_4c;
  param_1[8] = iStack_48;
  param_1[9] = iStack_44;
  param_1[10] = local_40;
  param_1[0xb] = iStack_3c;
  param_1[0xc] = iStack_38;
  param_1[0xd] = iStack_34;
  param_1[0xe] = iStack_30;
  param_1[0xf] = iStack_2c;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

