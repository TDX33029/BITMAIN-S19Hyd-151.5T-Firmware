// FUN_00898b8c @ 00898b8c size=1004 calls_out=11 calls_in=0
// strings: 

void FUN_00898b8c(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_r3;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int unaff_r10;
  bool bVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int local_2c;
  undefined2 local_28;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0xb2)) {
  case 0:
    piVar3 = (int *)param_2[1];
    piVar2 = piVar3 + param_2[2] * 4;
    iVar7 = param_2[5];
    *(undefined1 *)((int)param_2 + 0xb3) = 0;
    param_2[6] = iVar7;
    param_2[7] = (int)piVar3;
    param_2[8] = (int)piVar3;
    param_2[9] = *param_2;
    param_2[10] = (int)piVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862fb8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862fb8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1b]) {
    case '\0':
      piVar2 = (int *)param_2[0xd];
      iVar7 = param_2[0xe];
      iVar5 = param_2[0xf];
      piVar3 = (int *)param_2[0x10];
      goto LAB_00898cec;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_00898c08_caseD_3;
    case '\x04':
      uVar12 = *(undefined8 *)(param_2 + 0x1c);
      goto LAB_00898dd8;
    }
  }
  do {
    bVar11 = piVar3 == piVar2;
    if (!bVar11) {
      piVar2 = (int *)*piVar3;
      iVar7 = piVar3[1];
      local_2c = piVar3[2];
      local_28 = (undefined2)piVar3[3];
      param_2[8] = (int)(piVar3 + 4);
    }
    if (bVar11 || piVar2 == (int *)0x2) {
      uVar8 = 0xc;
      if (param_2[9] == 0) goto LAB_00898f68;
      piVar2 = param_2 + 7;
      uVar8 = 0xc;
      goto LAB_00898f5c;
    }
    *(undefined2 *)(param_2 + 0x2c) = local_28;
    param_2[0xb] = (int)piVar2;
    param_2[0xc] = iVar7;
    piVar3 = param_2 + 0x2b;
    *piVar3 = local_2c;
    iVar5 = *(int *)param_2[4];
    param_2[0xd] = (int)piVar2;
    iVar5 = iVar5 + 8;
    param_2[0xe] = iVar7;
    param_2[0xf] = iVar5;
    param_2[0x10] = (int)piVar3;
    *(undefined1 *)(param_2 + 0x1b) = 0;
LAB_00898cec:
    param_2[0x11] = iVar5;
    param_2[0x12] = (int)piVar2;
    param_2[0x13] = iVar7;
    param_2[0x14] = (int)piVar3;
    FUN_0080bae8(param_2 + 0x15);
    *(undefined1 *)(param_2 + 0x2a) = 0;
    param_2[0x1c] = param_2[0x11] + 0xc;
switchD_00898c08_caseD_3:
    iVar7 = FUN_007d67b8(param_2 + 0x1c,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_2 + 0x1b) = 3;
      goto LAB_00898ec8;
    }
    param_2[0x1a] = iVar7;
    if ((char)param_2[0x2a] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = (char)param_2[0x20];
      }
      if (bVar11 && cVar1 == '\x04') {
        FUN_0163c790(param_2 + 0x21);
        if (param_2[0x22] != 0) {
          (**(code **)(param_2[0x22] + 0xc))(param_2[0x23]);
        }
      }
    }
    if (param_2[0x12] == 1) {
      uVar6 = *(int *)param_2[0x11] * param_2[0x13];
      if (0xff < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar6 = (uint)*(byte *)((int *)param_2[0x11] + 1);
    }
    uVar12 = (**(code **)(*(int *)(param_2[0x1a] + 0x20) + 0x14))
                       (*(undefined4 *)(param_2[0x1a] + 0x1c),param_2[0x12],uVar6,param_2[0x18],
                        param_2[0x19],param_2[0x16],param_2[0x17]);
    *(undefined8 *)(param_2 + 0x1c) = uVar12;
LAB_00898dd8:
    uVar13 = (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))((int)uVar12,param_3);
    unaff_r10 = (int)(uVar13 >> 0x20);
    if ((uVar13 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1b) = 4;
      goto LAB_00898ec8;
    }
    iVar7 = param_2[0x1c];
    puVar10 = (undefined4 *)param_2[0x1d];
    pcVar4 = (code *)*puVar10;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar7);
    }
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    pcVar9 = (char *)param_2[0x1a];
    if (*pcVar9 == '\0') {
      bVar11 = (bool)hasExclusiveAccess(pcVar9);
      if (!bVar11) goto LAB_00898e84;
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00898e84:
      FUN_01280da8(pcVar9);
    }
    FUN_0128236c(pcVar9);
    FUN_0163af68(pcVar9,1,pcVar9);
    if (param_2[0x15] != 0) {
      thunk_FUN_016d3fb4(param_2[0x16]);
    }
    *(undefined1 *)(param_2 + 0x1b) = 1;
    if ((uVar13 & 1) != 0) {
LAB_00898ec8:
      *param_1 = 0xd;
      *(undefined1 *)((int)param_2 + 0xb2) = 3;
      return;
    }
    FUN_0081b77c(param_2 + 0xd);
    if (unaff_r10 != 0) {
      if (param_2[9] != 0) {
        thunk_FUN_016d3fb4(param_2[7]);
      }
      uVar8 = 9;
      if ((*(char *)((int)param_2 + 0xb3) == '\x01') && (*param_2 != 0)) {
        piVar2 = param_2 + 1;
        uVar8 = 9;
LAB_00898f5c:
        thunk_FUN_016d3fb4(*piVar2);
      }
LAB_00898f68:
      *(int *)(param_1 + 4) = unaff_r10;
      *param_1 = uVar8;
      *(undefined1 *)((int)param_2 + 0xb2) = 1;
      return;
    }
    piVar3 = (int *)param_2[8];
    piVar2 = (int *)param_2[10];
    iVar7 = extraout_r3;
  } while( true );
}

