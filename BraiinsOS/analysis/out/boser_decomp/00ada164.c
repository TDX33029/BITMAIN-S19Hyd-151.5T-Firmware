// FUN_00ada164 @ 00ada164 size=776 calls_out=4 calls_in=4
// strings: 

void FUN_00ada164(undefined4 *param_1,undefined1 param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int ****ppppiVar4;
  int iVar5;
  int iVar6;
  int ****ppppiVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int ***pppiVar11;
  int *piVar12;
  int ****ppppiVar13;
  int ***pppiVar14;
  int iVar15;
  int **ppiVar16;
  int iVar17;
  int ***pppiVar18;
  undefined4 *puVar19;
  int ****local_58 [2];
  undefined4 local_50;
  int ***pppiStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int ****local_40 [4];
  undefined4 local_30;
  int ***pppiStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    iVar5 = 6;
    if (param_3 < 0) {
      iVar5 = param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x00ada1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00ada1ac + *(int *)(&DAT_00ada1ac + iVar5 * 4)))();
    return;
  case 1:
    ppppiVar13 = (int ****)&DAT_01d4bbb0;
    DataMemoryBarrier(0xb);
    iVar5 = DAT_01d4bbb0;
    if (param_3 == -0x80000000) {
      if (DAT_01d4bbb0 != 0) {
        local_40[2] = (int ****)local_58;
        local_58[0] = (int ****)&DAT_01d4bbb0;
        FUN_019a768c(&DAT_01d4bbb0,1,local_40 + 2,&DAT_01c103ac,&DAT_01d293e0);
      }
      ppppiVar4 = (int ****)&DAT_01d4bb90;
      goto LAB_00ada270;
    }
    break;
  case 2:
    ppppiVar13 = (int ****)&DAT_01d4bc10;
    DataMemoryBarrier(0xb);
    if (DAT_01d4bc10 != 0) {
      local_40[2] = (int ****)local_58;
      local_58[0] = (int ****)&DAT_01d4bc10;
      FUN_019a768c(&DAT_01d4bc10,1,local_40 + 2,&DAT_01c103ac,&DAT_01d293e0);
    }
    ppppiVar4 = (int ****)&DAT_01d4bc20;
    goto LAB_00ada270;
  case 3:
    ppppiVar13 = (int ****)&DAT_01d4bbe0;
    DataMemoryBarrier(0xb);
    if (DAT_01d4bbe0 != 0) {
      local_40[2] = (int ****)local_58;
      local_58[0] = (int ****)&DAT_01d4bbe0;
      FUN_019a768c(&DAT_01d4bbe0,1,local_40 + 2,&DAT_01c103ac,&DAT_01d293e0);
    }
    ppppiVar4 = (int ****)&DAT_01d4bbf0;
    goto LAB_00ada270;
  case 4:
    ppppiVar13 = (int ****)&DAT_01d4bc10;
    DataMemoryBarrier(0xb);
    iVar5 = DAT_01d4bc10;
  }
  if (iVar5 != 0) {
    local_40[2] = (int ****)local_58;
    local_58[0] = ppppiVar13;
    FUN_019a768c(ppppiVar13,1,local_40 + 2,&DAT_01c103ac,&DAT_01d293e0);
  }
  ppppiVar4 = (int ****)&DAT_01d4bc30;
LAB_00ada270:
  DataMemoryBarrier(0xb);
  if (*ppppiVar4 != (int ***)0x0) {
    local_40[2] = (int ****)local_58;
    local_58[0] = ppppiVar4;
    FUN_019a768c(ppppiVar4,1,local_40 + 2,&DAT_01c103ac,&DAT_01d293e0);
  }
  ppppiVar7 = (int ****)local_40;
  local_40[1] = ppppiVar4 + 1;
  local_40[0] = ppppiVar13 + 1;
  ppppiVar13 = (int ****)(local_40 + 2);
  bVar3 = true;
  do {
    bVar9 = bVar3;
    pppiVar18 = *ppppiVar7;
    pppiVar11 = (int ***)*pppiVar18;
    do {
      ppiVar16 = *pppiVar11;
      bVar3 = (bool)hasExclusiveAccess(pppiVar11);
    } while (!bVar3);
    *pppiVar11 = (int **)((int)ppiVar16 + 1);
    if ((int)ppiVar16 < 0) goto LAB_00ada41c;
    pppiVar14 = (int ***)pppiVar18[1];
    ppppiVar7 = ppppiVar7 + 1;
    *(undefined1 *)(ppppiVar13 + 2) = *(undefined1 *)(pppiVar18 + 2);
    *ppppiVar13 = pppiVar11;
    ppppiVar13[1] = pppiVar14;
    ppppiVar13 = &pppiStack_2c;
    bVar3 = false;
  } while (bVar9);
  local_58[0] = local_40[2];
  local_58[1] = local_40[3];
  local_50 = local_30;
  pppiStack_4c = pppiStack_2c;
  uStack_48 = uStack_28;
  uStack_44 = uStack_24;
  iVar5 = thunk_FUN_01be5118(0x18);
  iVar6 = 2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x18);
  }
  iVar10 = 0;
  iVar17 = 0;
  do {
    if (iVar10 == 0x18) break;
    iVar6 = iVar6 + -1;
    piVar12 = *(int **)((int)local_58 + iVar10);
    do {
      iVar15 = *piVar12;
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = iVar15 + 1;
    if (iVar15 < 0) {
LAB_00ada41c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xada41c);
      (*pcVar1)();
    }
    uVar8 = *(undefined4 *)((int)local_58 + iVar10 + 4);
    uVar2 = *(undefined1 *)((int)local_58 + iVar10 + 8);
    puVar19 = (undefined4 *)(iVar5 + iVar17 * 0xc);
    *puVar19 = piVar12;
    iVar10 = iVar10 + 0xc;
    iVar17 = iVar17 + 1;
    *(undefined1 *)(puVar19 + 2) = uVar2;
    puVar19[1] = uVar8;
  } while (iVar6 != 0);
  *param_1 = 2;
  param_1[1] = iVar5;
  param_1[2] = 2;
  FUN_00ada568(local_58);
  return;
}

