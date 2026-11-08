// FUN_0120da54 @ 0120da54 size=360 calls_out=3 calls_in=0
// strings: 

void FUN_0120da54(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *local_20;
  undefined4 *local_1c;
  
  piVar4 = (int *)*param_1;
  piVar2 = (int *)*piVar4;
  piVar3 = (int *)piVar4[1];
  *piVar4 = 0;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  piVar4 = (int *)*piVar2;
  if (piVar4 == (int *)0xffffffff) {
LAB_0120dba4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038c13e,0x1d,&DAT_0188a4c0);
  }
  iVar9 = *piVar4;
  do {
    if (iVar9 == 0) goto LAB_0120dba4;
    if (iVar9 < 0) {
      local_1c = &DAT_0157d360;
      local_20 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_20,&DAT_018ae288);
    }
    iVar7 = *piVar4;
    if (iVar7 == iVar9) {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *piVar4 = iVar9 + 1;
      }
      bVar5 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    iVar9 = iVar7;
  } while (!bVar5);
  piVar6 = (int *)piVar2[1];
  do {
    iVar9 = *piVar6;
    bVar5 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar5);
  *piVar6 = iVar9 + 1;
  if (-1 < iVar9) {
    piVar6 = (int *)piVar2[4];
    iVar9 = piVar2[1];
    iVar7 = piVar2[2];
    if (piVar6 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      do {
        iVar8 = *piVar6;
        bVar5 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar5);
      *piVar6 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_0120db64;
      iVar8 = piVar2[4];
    }
    piVar6 = (int *)piVar2[3];
    do {
      iVar10 = *piVar6;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar10 + 1;
    if (-1 < iVar10) {
      iVar10 = piVar2[3];
      *piVar3 = (int)piVar4;
      piVar3[1] = iVar9;
      piVar3[2] = iVar7;
      piVar3[3] = iVar10;
      piVar3[4] = iVar8;
      return;
    }
  }
LAB_0120db64:
  software_udf(0xfdee,0x120db64);
  return;
}

