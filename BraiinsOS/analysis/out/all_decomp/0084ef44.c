// FUN_0084ef44 @ 0084ef44 size=952 calls_out=10 calls_in=0
// strings: 

ulonglong FUN_0084ef44(int *param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int *local_30;
  int *local_2c;
  int *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x17]) {
  case '\0':
    iVar4 = *param_1;
    piVar6 = param_1 + 2;
    *piVar6 = param_1[1];
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    param_1[4] = iVar4;
    param_1[5] = (int)piVar6;
LAB_0084efd0:
    iVar4 = iVar4 + 0xc;
    param_1[8] = iVar4;
    param_1[7] = (int)piVar6;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 0x16) = 0;
LAB_0084eff4:
    param_1[9] = iVar4;
    *(undefined1 *)(param_1 + 0x15) = 0;
LAB_0084f010:
    param_1[10] = iVar4;
    *(undefined1 *)(param_1 + 0xc) = 0;
LAB_0084f024:
    param_1[0xb] = iVar4;
LAB_0084f028:
    piVar6 = (int *)&DAT_00000001;
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 1;
    param_1[0x13] = 1;
    param_1[0xd] = iVar4;
    param_1[0xe] = 0;
switchD_0084f26c_caseD_4:
    local_2c = param_1 + 0x15;
    local_30 = param_1 + 0x16;
    piVar7 = param_1 + 0xc;
    bVar2 = FUN_0163c8bc(param_1 + 0xd,param_2,piVar6,param_1 + 9,param_1 + 8,param_1 + 9);
    if (bVar2 != 2) {
      FUN_0163c790(param_1 + 0xd);
      if (param_1[0xe] != 0) {
        (**(code **)(param_1[0xe] + 0xc))(param_1[0xf]);
      }
      if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01886288);
      }
      iVar4 = param_1[9];
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined1 *)(param_1 + 0x15) = 1;
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      param_1[3] = iVar4;
      uVar10 = (**(code **)(*(int *)(iVar4 + 0x20) + 0x1c))
                         (*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)param_1[7]);
      *(undefined8 *)(param_1 + 7) = uVar10;
      goto switchD_0084efb4_caseD_4;
    }
    *(undefined1 *)piVar7 = 4;
    *(undefined1 *)local_2c = 3;
    *(undefined1 *)((int)param_1 + 0x19) = 3;
    *(undefined1 *)local_30 = 3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862d4c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862d4c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x19)) {
    case 0:
      iVar4 = param_1[4];
      piVar6 = (int *)param_1[5];
      goto LAB_0084efd0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018758f8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018758f8);
    case 3:
      piVar6 = param_1 + 0x16;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)*piVar6) {
      case '\0':
        iVar4 = param_1[8];
        goto LAB_0084eff4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01886258);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01886258);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x15]) {
      case '\0':
        iVar4 = param_1[9];
        goto LAB_0084f010;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01886268);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01886268);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0xc]) {
      case '\0':
        iVar4 = param_1[10];
        goto LAB_0084f024;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01886278);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01886278);
      case '\x03':
        iVar4 = param_1[0xb];
        goto LAB_0084f028;
      }
      goto switchD_0084f26c_caseD_4;
    }
switchD_0084efb4_caseD_4:
    local_28 = param_1 + 3;
    uVar11 = (**(code **)(param_1[8] + 0xc))(param_1[7],param_2);
    piVar7 = (int *)(uVar11 >> 0x20);
    if ((uVar11 & 1) == 0) {
      iVar4 = param_1[7];
      puVar9 = (undefined4 *)param_1[8];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar4);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
      pcVar8 = (char *)*local_28;
      if (*pcVar8 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (!bVar1) goto LAB_0084f1ec;
        *pcVar8 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0084f1ec:
        FUN_01280da8(pcVar8);
      }
      FUN_0128236c(pcVar8);
      FUN_0163af68(pcVar8,1,pcVar8);
      *(undefined2 *)(param_1 + 6) = 0x100;
      if ((uVar11 & 1) == 0) {
        FUN_00c83a14(local_28);
        uVar3 = 1;
        goto LAB_0084f150;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x19) = 4;
    }
  }
  uVar3 = 3;
  uVar11 = CONCAT44(piVar7,1);
LAB_0084f150:
  *(undefined1 *)(param_1 + 0x17) = uVar3;
  return uVar11;
}

