// FUN_00799458 @ 00799458 size=228 calls_out=5 calls_in=0
// strings: 

void FUN_00799458(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    param_2[1] = *param_2 + 0x540;
    param_2[2] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185cc44);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185cc44);
  }
  iVar3 = FUN_006f5654(param_2 + 1,*param_3);
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 3) = 3;
    *param_1 = 1;
    return;
  }
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    FUN_006f5fbc(iVar4,param_2[2],1);
  }
  piVar5 = *(int **)(iVar3 + 0x20);
  if (piVar5 != (int *)0x0) {
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x799548);
      (*pcVar1)();
    }
  }
  FUN_006f625c();
  param_1[1] = piVar5;
  param_1[2] = &DAT_0185cc74;
  *(undefined1 *)(param_2 + 3) = 1;
  *param_1 = 0;
  return;
}

