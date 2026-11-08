// FUN_00a15f90 @ 00a15f90 size=468 calls_out=8 calls_in=1
// strings: 

void FUN_00a15f90(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    param_2[1] = *(int *)*param_2 + 8;
    param_2[2] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b064);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b064);
  }
  iVar3 = FUN_00aa15a4(param_2 + 1,param_3);
  if (iVar3 == 0) {
    *param_1 = -0x80000000;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    FUN_00aa190c(iVar4,param_2[2],1);
  }
  iVar9 = *(int *)(iVar3 + 0x2c);
  iVar7 = iVar9 + *(int *)(iVar3 + 0x30) * 0x30;
  iVar4 = *(int *)(iVar3 + 0x30) * 0x30;
  do {
    if (iVar4 == 0) {
      puVar6 = (undefined4 *)&DAT_00000004;
      iVar8 = 0;
      iVar4 = 0;
      goto LAB_00a1612c;
    }
    piVar5 = *(int **)(iVar9 + 0x2c);
    iVar4 = iVar4 + -0x30;
    iVar9 = iVar9 + 0x30;
  } while ((char)piVar5[0x19] != '\0');
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_00a16170:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa16170);
    (*pcVar1)();
  }
  local_2c = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x10);
  }
  iVar8 = 1;
  *local_2c = piVar5;
  local_30 = 4;
  puVar6 = local_2c;
  do {
    do {
      local_28 = iVar8;
      if (iVar9 == iVar7) {
        puVar6 = local_2c;
        iVar4 = local_30;
LAB_00a1612c:
        FUN_00aa13c0(iVar3);
        *param_1 = iVar4;
        param_1[1] = (int)puVar6;
        param_1[2] = iVar8;
        *(undefined1 *)(param_2 + 3) = 1;
        return;
      }
      piVar5 = *(int **)(iVar9 + 0x2c);
      iVar9 = iVar9 + 0x30;
    } while ((char)piVar5[0x19] != '\0');
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_00a16170;
    if (iVar8 == local_30) {
      FUN_00a8a86c(&local_30,iVar8,1,4,4);
      puVar6 = local_2c;
    }
    puVar6[iVar8] = piVar5;
    iVar8 = iVar8 + 1;
  } while( true );
}

