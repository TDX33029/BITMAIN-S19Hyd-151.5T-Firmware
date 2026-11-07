// FUN_00a723a4 @ 00a723a4 size=652 calls_out=11 calls_in=0
// strings: 

void FUN_00a723a4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  int local_8b8;
  int local_8b4;
  int local_8b0;
  int local_8ac;
  int local_8a8;
  int local_8a4;
  int local_8a0;
  int local_89c;
  undefined1 auStack_898 [704];
  int local_5d8;
  undefined *local_5d4;
  int local_5d0;
  undefined4 *local_5cc;
  int local_5c8;
  int local_5c4;
  int local_5c0;
  int local_5bc;
  undefined1 auStack_5b8 [704];
  undefined1 auStack_2f8 [708];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 1)) {
  case 0:
    *(undefined1 *)(param_2 + 0x34) = 0;
    param_2[2] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f5cc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f5cc);
  case 4:
    goto switchD_00a723c8_caseD_4;
  }
  piVar6 = param_2 + 2;
  FUN_00a6fd0c(&local_5d8,piVar6,param_3);
  iVar4 = local_5c4;
  iVar3 = local_5c8;
  puVar10 = local_5cc;
  iVar5 = local_5d0;
  puVar9 = (undefined4 *)local_5d4;
  iVar8 = local_5d8;
  if (local_5d8 == 3) {
    *param_1 = 2;
    uVar2 = 3;
  }
  else {
    cVar1 = *(char *)(param_2 + 0x34);
    bVar11 = cVar1 == '\x03';
    if (bVar11) {
      cVar1 = *(char *)(param_2 + 0x33);
    }
    if (bVar11 && cVar1 == '\x03') {
      FUN_00b99500(param_2 + 4);
    }
    uVar7 = 1;
    if (iVar8 == 2) {
      *piVar6 = (int)puVar9;
      param_2[3] = iVar5;
      param_2[4] = puVar10;
      *(undefined2 *)(param_2 + 0x16f) = 0;
      param_2[0x16e] = piVar6;
switchD_00a723c8_caseD_4:
      FUN_00a6fe94(&local_5d8,param_2 + 6,param_3);
      if (local_5d8 == 4 && local_5d4 == (undefined *)0x0) {
        *param_1 = 2;
        uVar2 = 4;
        goto LAB_00a72610;
      }
      FUN_01bed4e2(auStack_2f8,auStack_5b8,0x2c0);
      if (*(char *)(param_2 + 0x16f) == '\x03') {
        FUN_00a7389c(param_2 + 6);
      }
      if (local_5d8 == 3 && local_5d4 == (undefined *)0x0) {
        uVar7 = 1;
        FUN_0084ec48(param_2 + 2);
        iVar3 = local_5c0;
        iVar4 = local_5bc;
        iVar5 = local_5c8;
        iVar8 = local_5d0;
        puVar9 = local_5cc;
        puVar10 = (undefined4 *)local_5c4;
      }
      else {
        FUN_01bed4e2(auStack_898,auStack_2f8,0x2c0);
        local_8a8 = local_5c8;
        local_8ac = (int)local_5cc;
        local_89c = local_5bc;
        local_8a0 = local_5c0;
        local_8b8 = local_5d8;
        local_8b4 = (int)local_5d4;
        local_8a4 = local_5c4;
        local_8b0 = local_5d0;
        local_28 = 0;
        local_5d8 = FUN_01220dcc(&local_8b8);
        local_5cc = &local_28;
        local_5d4 = &DAT_01c245a8;
        local_5d0 = 0;
        FUN_00b227c4(&local_34,&local_5d8);
        FUN_00a57438(&local_8b8);
        FUN_0084ec48(param_2 + 2);
        iVar4 = 0;
        iVar3 = 8;
        puVar10 = (undefined4 *)0x0;
        uVar7 = 0;
        iVar5 = local_2c;
        iVar8 = local_34;
        puVar9 = (undefined4 *)local_30;
      }
    }
    param_1[5] = iVar3;
    uVar2 = 1;
    *param_1 = uVar7;
    param_1[1] = iVar8;
    param_1[2] = puVar9;
    param_1[3] = iVar5;
    param_1[4] = puVar10;
    param_1[6] = iVar4;
  }
LAB_00a72610:
  *(undefined1 *)(param_2 + 1) = uVar2;
  return;
}

