// FUN_00b23e50 @ 00b23e50 size=428 calls_out=6 calls_in=5
// strings: 

void FUN_00b23e50(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xb]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018770ec);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018770ec);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[10]) {
    case '\0':
      iVar4 = param_2[7];
      goto LAB_00b23f6c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187714c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187714c);
    case '\x03':
      goto switchD_00b23ed4_caseD_3;
    }
  }
  param_2[3] = 0;
  param_2[1] = 0;
  param_2[2] = 4;
  piVar3 = *(int **)(*param_2 + 0x3bc);
  iVar4 = *(int *)(*param_2 + 0x3c0);
  param_2[4] = (int)piVar3;
  param_2[5] = (int)(piVar3 + iVar4);
  if (piVar3 != piVar3 + iVar4) {
    do {
      param_2[4] = (int)(piVar3 + 1);
      param_2[6] = (int)piVar3;
      iVar4 = *piVar3;
      *(undefined1 *)(param_2 + 10) = 0;
      iVar4 = iVar4 + 0x10;
      param_2[7] = iVar4;
LAB_00b23f6c:
      param_2[8] = iVar4 + 900;
      param_2[9] = -1;
switchD_00b23ed4_caseD_3:
      iVar4 = FUN_00c8101c(param_2 + 8,param_3);
      if (iVar4 == 0) {
        *(undefined1 *)(param_2 + 10) = 3;
        *param_1 = -0x80000000;
        *(undefined1 *)(param_2 + 0xb) = 3;
        return;
      }
      iVar5 = param_2[8];
      if (iVar5 != 0) {
        FUN_00c8204c(iVar5,param_2[9],1);
      }
      iVar4 = *(int *)(iVar4 + 0x20);
      FUN_00c822ec();
      *(undefined1 *)(param_2 + 10) = 1;
      if (iVar4 != 0) {
        piVar3 = *(int **)param_2[6];
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb24064);
          (*pcVar1)();
        }
        iVar4 = param_2[3];
        if (iVar4 == param_2[1]) {
          FUN_008f542c();
        }
        *(int **)(param_2[2] + iVar4 * 4) = piVar3;
        param_2[3] = iVar4 + 1;
      }
      piVar3 = (int *)param_2[4];
    } while (piVar3 != (int *)param_2[5]);
  }
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  *param_1 = param_2[1];
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}

