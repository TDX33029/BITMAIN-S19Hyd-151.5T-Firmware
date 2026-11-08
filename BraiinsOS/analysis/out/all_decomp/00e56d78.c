// FUN_00e56d78 @ 00e56d78 size=272 calls_out=3 calls_in=1
// strings: 

void FUN_00e56d78(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_58;
  int iStack_54;
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
    uVar4 = (**(code **)(iVar2 + 0x38))
                      (*(int *)*param_2 + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined8 *)(param_2 + 1) = uVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a944);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a944);
  case '\x03':
    uVar4 = *(undefined8 *)(param_2 + 1);
  }
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_58,(int)uVar4,param_3);
  if (local_58 == 6 && iStack_54 == 0) {
    *param_1 = 6;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  local_40 = local_58;
  iStack_3c = iStack_54;
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  iStack_30 = iStack_48;
  iStack_2c = iStack_44;
  puVar3 = (undefined4 *)param_2[2];
  iVar2 = param_2[1];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[5] = iStack_2c;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

