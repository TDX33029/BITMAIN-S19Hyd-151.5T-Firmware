// FUN_00dbd824 @ 00dbd824 size=316 calls_out=5 calls_in=1
// strings: 

void FUN_00dbd824(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x49)) {
  case 0:
    local_48 = param_2[0x10];
    *(undefined1 *)(param_2 + 0x12) = 0;
    if (local_48 != 0) {
      local_48 = local_48 + 8;
    }
    local_40 = param_2[10];
    iStack_3c = param_2[0xb];
    iStack_38 = param_2[0xc];
    iStack_34 = param_2[0xd];
    iStack_30 = param_2[0xe];
    iStack_2c = param_2[0xf];
    (*(code *)param_2[0x11])(&local_70,local_48);
    *param_2 = local_70;
    param_2[1] = iStack_6c;
    param_2[2] = iStack_68;
    param_2[3] = iStack_64;
    param_2[4] = iStack_60;
    param_2[5] = local_5c;
    param_2[6] = iStack_58;
    param_2[7] = iStack_54;
    param_2[8] = iStack_50;
    param_2[9] = iStack_4c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c161d0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c161d0);
  }
  iVar2 = *param_2;
  *param_2 = 2;
  if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_0051d182,0x1d,&DAT_01d21154);
  }
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  iVar6 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  param_1[4] = iVar6;
  iVar4 = param_2[6];
  iVar5 = param_2[7];
  iVar6 = param_2[8];
  iVar7 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = iVar4;
  param_1[7] = iVar5;
  param_1[8] = iVar6;
  param_1[9] = iVar7;
  *param_1 = iVar2;
  FUN_00dbda10(param_2);
  piVar3 = (int *)param_2[0x10];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(param_2[0x10]);
    }
  }
  *(undefined1 *)((int)param_2 + 0x49) = 1;
  return;
}

