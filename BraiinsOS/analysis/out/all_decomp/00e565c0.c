// FUN_00e565c0 @ 00e565c0 size=268 calls_out=4 calls_in=1
// strings: 

void FUN_00e565c0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_b0;
  int iStack_ac;
  undefined1 auStack_68 [72];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar2 = ((int *)*param_2)[1];
    uVar4 = (**(code **)(iVar2 + 0x3c))
                      (*(int *)*param_2 + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined8 *)(param_2 + 1) = uVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a8a4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a8a4);
  case '\x03':
    uVar4 = *(undefined8 *)(param_2 + 1);
  }
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_b0,(int)uVar4,param_3);
  if (local_b0 == 3 && iStack_ac == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  FUN_016dd1aa(auStack_68,&local_b0,0x48);
  iVar2 = param_2[1];
  puVar3 = (undefined4 *)param_2[2];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  FUN_016dd1aa(param_1,auStack_68,0x48);
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

