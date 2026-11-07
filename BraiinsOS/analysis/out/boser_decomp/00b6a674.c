// FUN_00b6a674 @ 00b6a674 size=200 calls_out=5 calls_in=1
// strings: 

void FUN_00b6a674(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_28;
  int iStack_24;
  int iStack_20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar2 = FUN_007416ec(*(int *)(*param_2 + 8) + 8);
    puVar3 = &DAT_01c07fe8;
    param_2[1] = iVar2;
    param_2[2] = (int)&DAT_01c07fe8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c133a0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c133a0);
  case '\x03':
    iVar2 = param_2[1];
    puVar3 = (undefined *)param_2[2];
  }
  (**(code **)(puVar3 + 0xc))(&local_38,iVar2,param_3);
  if (local_38 == -0x7fffffff) {
    *param_1 = -0x7fffffff;
    uVar1 = 3;
  }
  else {
    local_28 = local_38;
    iStack_24 = iStack_34;
    iStack_20 = iStack_30;
    FUN_01139b38(param_2[1],param_2[2]);
    *param_1 = local_28;
    param_1[1] = iStack_24;
    param_1[2] = iStack_20;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

