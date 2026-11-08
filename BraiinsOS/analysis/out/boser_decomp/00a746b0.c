// FUN_00a746b0 @ 00a746b0 size=736 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a746b0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int local_8a8;
  int *piStack_8a4;
  int iStack_8a0;
  int *piStack_89c;
  int local_898;
  int *local_894;
  int local_890;
  int *local_88c;
  undefined1 auStack_888 [704];
  int local_5c8;
  int *local_5c4;
  int local_5c0;
  int *local_5bc;
  int local_5b8;
  int *local_5b4;
  int local_5b0;
  int *local_5ac;
  undefined1 auStack_5a8 [704];
  undefined1 auStack_2e8 [708];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 1)) {
  case 0:
    *(undefined1 *)(param_2 + 0x34) = 0;
    param_2[2] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f64c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f64c);
  case 4:
    goto switchD_00a746f0_caseD_4;
  }
  FUN_00a6fd0c(&local_5c8,param_2 + 2,param_3);
  piVar6 = local_5b4;
  iVar5 = local_5b8;
  piVar7 = local_5bc;
  iVar8 = local_5c0;
  piVar9 = local_5c4;
  iVar4 = local_5c8;
  if (local_5c8 == 3) {
    uVar2 = 3;
    *param_1 = 3;
    goto LAB_00a74970;
  }
  cVar1 = *(char *)(param_2 + 0x34);
  bVar10 = cVar1 == '\x03';
  if (bVar10) {
    cVar1 = *(char *)(param_2 + 0x33);
  }
  if (bVar10 && cVar1 == '\x03') {
    FUN_00b99500(param_2 + 4);
  }
  if (iVar4 == 2) {
    param_2[2] = piVar9;
    param_2[3] = iVar8;
    param_2[4] = piVar7;
    *(undefined2 *)(param_2 + 0x16f) = 0;
    param_2[0x16e] = param_2 + 2;
switchD_00a746f0_caseD_4:
    FUN_00a6fe94(&local_5c8,param_2 + 6,param_3);
    if (local_5c8 == 4 && local_5c4 == (int *)0x0) {
      *param_1 = 3;
      uVar2 = 4;
      goto LAB_00a74970;
    }
    FUN_01bed4e2(auStack_2e8,auStack_5a8,0x2c0);
    if (*(char *)(param_2 + 0x16f) == '\x03') {
      FUN_00a7389c(param_2 + 6);
    }
    iVar8 = local_5b8;
    if (local_5c8 != 3 || local_5c4 != (int *)0x0) {
      FUN_01bed4e2(auStack_888,auStack_2e8,0x2c0);
      local_890 = local_5b0;
      local_898 = local_5b8;
      local_894 = local_5b4;
      local_88c = local_5ac;
      local_8a8 = local_5c8;
      piStack_8a4 = local_5c4;
      iStack_8a0 = local_5c0;
      piStack_89c = local_5bc;
      piVar3 = (int *)FUN_01220dcc(&local_8a8);
      FUN_01220ee0(&local_5c8,piVar3);
      piVar7 = piVar3 + 3;
      piVar6 = (int *)0x0;
      piVar9 = (int *)0x0;
      do {
        if (*piVar3 == 1) {
          iVar4 = piVar3[1];
          piVar3[1] = 0;
          if (iVar4 == 0) {
            *piVar3 = 0;
            goto LAB_00a748fc;
          }
        }
        else {
LAB_00a748fc:
          if ((piVar3[2] != 1) || (iVar4 = FUN_0122143c(piVar7), iVar4 == 0)) goto LAB_00a74928;
        }
        if (*(int *)(iVar4 + 0x2b0) == 0) {
          piVar9 = (int *)((int)piVar9 + 1);
        }
      } while( true );
    }
    FUN_0084ec48(param_2 + 2);
    iVar5 = local_5b0;
    piVar6 = local_5ac;
    piVar7 = local_5b4;
    iVar4 = local_5c0;
    piVar9 = local_5bc;
  }
  goto LAB_00a74954;
LAB_00a74928:
  FUN_018f2d80(piVar3,&DAT_01c245a8);
  FUN_00a57438(&local_8a8);
  FUN_0084ec48(param_2 + 2);
  iVar4 = 2;
  iVar5 = extraout_r1;
LAB_00a74954:
  *param_1 = iVar4;
  param_1[1] = (int)piVar9;
  param_1[2] = iVar8;
  param_1[3] = (int)piVar7;
  param_1[4] = iVar5;
  param_1[5] = (int)piVar6;
  uVar2 = 1;
LAB_00a74970:
  *(undefined1 *)(param_2 + 1) = uVar2;
  return;
}

