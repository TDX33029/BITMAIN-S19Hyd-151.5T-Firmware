// FUN_00e570d8 @ 00e570d8 size=256 calls_out=3 calls_in=1
// strings: 

void FUN_00e570d8(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar2 = ((int *)*param_2)[1];
    uVar4 = (**(code **)(iVar2 + 0x60))
                      (*(int *)*param_2 + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined8 *)(param_2 + 1) = uVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a984);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a984);
  case '\x03':
    uVar4 = *(undefined8 *)(param_2 + 1);
  }
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_40,(int)uVar4,param_3);
  if (local_40 == -0x7ffffffe) {
    *param_1 = -0x7ffffffe;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  iVar2 = param_2[1];
  puVar3 = (undefined4 *)param_2[2];
  local_30 = local_40;
  iStack_2c = iStack_3c;
  iStack_28 = iStack_38;
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

