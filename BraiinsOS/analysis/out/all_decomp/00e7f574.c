// FUN_00e7f574 @ 00e7f574 size=492 calls_out=8 calls_in=0
// strings: 

void FUN_00e7f574(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int local_30;
  int local_2c;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[8]) {
  case '\0':
    iVar3 = *(int *)(*param_2 + 0x40);
    *(undefined1 *)(param_2 + 7) = 0;
    piVar4 = (int *)(iVar3 + 0x6c);
    iVar3 = param_2[1];
    param_2[2] = (int)piVar4;
    param_2[3] = iVar3;
LAB_00e7f5f0:
    param_2[4] = iVar3;
    iVar3 = *piVar4;
    param_2[6] = -1;
    param_2[5] = iVar3 + 8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187ac90);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187ac90);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      piVar4 = (int *)param_2[2];
      iVar3 = param_2[3];
      goto LAB_00e7f5f0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b084);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b084);
    }
  }
  iVar3 = FUN_00e43b0c(param_2 + 5,param_3);
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 7) = 3;
    *param_1 = 0x80000006;
    *(undefined1 *)(param_2 + 8) = 3;
    return;
  }
  iVar5 = param_2[5];
  if (iVar5 != 0) {
    FUN_00e43e74(iVar5,param_2[6],1);
  }
  uVar8 = param_2[4];
  FUN_00f29e9c(&local_30,*(int *)(iVar3 + 0x2c),
               *(int *)(iVar3 + 0x2c) + *(int *)(iVar3 + 0x30) * 0x30);
  iVar5 = local_2c;
  if (uVar8 < local_28) {
    piVar4 = *(int **)(local_2c + uVar8 * 4);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe7f780);
      (*pcVar1)();
    }
    iVar6 = *(int *)(local_2c + uVar8 * 4);
  }
  else {
    iVar6 = 0;
    if (local_28 == 0) goto LAB_00e7f70c;
  }
  uVar8 = 0;
  do {
    piVar4 = *(int **)(iVar5 + uVar8 * 4);
    uVar9 = uVar8 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078ecac(*(undefined4 *)(iVar5 + uVar8 * 4));
    }
    uVar8 = uVar9;
  } while (uVar9 != local_28);
LAB_00e7f70c:
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(local_2c);
  }
  FUN_00e44114(iVar3);
  uVar10 = 0x80000005;
  if (iVar6 == 0) {
    uVar10 = 0x80000000;
  }
  *(undefined1 *)(param_2 + 7) = 1;
  *param_1 = uVar10;
  param_1[1] = iVar6;
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

