// FUN_00e56f60 @ 00e56f60 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_00e56f60(int *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0xd)) {
  case 0:
    iVar1 = (*(int **)(param_2 + 1))[1];
    uVar5 = (**(code **)(iVar1 + 0x5c))
                      (**(int **)(param_2 + 1) + (*(int *)(iVar1 + 8) - 1U & 0xfffffff8) + 8,
                       *(undefined1 *)((int)param_2 + 0xc));
    *param_2 = uVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a964);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a964);
  case 3:
    uVar5 = *param_2;
  }
  (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0xc))(&local_40,(int)uVar5,param_3);
  if (local_40 == -0x7ffffffe) {
    *param_1 = -0x7ffffffe;
    *(undefined1 *)((int)param_2 + 0xd) = 3;
    return;
  }
  uVar3 = *(undefined4 *)param_2;
  puVar4 = *(undefined4 **)((int)param_2 + 4);
  local_30 = local_40;
  iStack_2c = iStack_3c;
  iStack_28 = iStack_38;
  pcVar2 = (code *)*puVar4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  *(undefined1 *)((int)param_2 + 0xd) = 1;
  return;
}

