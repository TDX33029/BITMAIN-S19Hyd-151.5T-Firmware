// FUN_008a0828 @ 008a0828 size=1608 calls_out=17 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x008a0c64) */

void FUN_008a0828(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int unaff_r7;
  bool bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int *local_2c;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    param_2[1] = *param_2;
    iVar2 = *(int *)(*param_2 + 0x148);
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[5] = 4;
    param_2[6] = (int)puVar8;
    param_2[7] = 4;
    param_2[8] = 0x80;
    param_2[9] = 4;
    param_2[10] = iVar2 + 8;
    param_2[3] = 0;
    *puVar8 = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862d0c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862d0c);
  case '\x04':
    goto switchD_008a0848_caseD_4;
  case '\x05':
    goto switchD_008a0848_caseD_5;
  case '\x06':
    goto switchD_008a0848_caseD_6;
  case '\a':
    goto switchD_008a0848_caseD_7;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      iVar2 = param_2[5];
      iVar5 = param_2[7];
      piVar3 = (int *)param_2[8];
      goto LAB_008a0b84;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_008a0908_caseD_3;
    case '\x04':
      uVar11 = *(undefined8 *)(param_2 + 0x14);
    }
    goto LAB_008a0ca0;
  case '\t':
    goto switchD_008a0848_caseD_9;
  }
  uVar12 = FUN_008a0118(param_2 + 3,param_3);
  unaff_r7 = (int)(uVar12 >> 0x20);
  if ((uVar12 & 1) != 0) {
    *param_1 = 0xd;
    *(undefined1 *)(param_2 + 2) = 3;
    return;
  }
  FUN_00815de4(param_2 + 3);
  if (unaff_r7 == 0) {
    iVar2 = *(int *)(param_2[1] + 0x148);
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[5] = 4;
    param_2[6] = (int)puVar8;
    param_2[7] = 4;
    param_2[8] = 0x84;
    param_2[9] = 4;
    param_2[10] = iVar2 + 8;
    param_2[3] = 0;
    *puVar8 = 0;
switchD_008a0848_caseD_4:
    uVar12 = FUN_008a0118(param_2 + 3,param_3);
    unaff_r7 = (int)(uVar12 >> 0x20);
    if ((uVar12 & 1) != 0) {
      *param_1 = 0xd;
      *(undefined1 *)(param_2 + 2) = 4;
      return;
    }
    FUN_00815de4(param_2 + 3);
    if (unaff_r7 == 0) {
      iVar2 = *(int *)(param_2[1] + 0x148);
      *(undefined1 *)(param_2 + 0x21) = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 100000000;
      param_2[0x20] = iVar2 + 8;
switchD_008a0848_caseD_5:
      iVar2 = FUN_0081c170(param_2 + 4,param_3);
      if (iVar2 != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 2) = 5;
        return;
      }
      if ((char)param_2[0x21] == '\x03') {
        FUN_0081c020(param_2 + 0xc);
      }
      iVar2 = *(int *)(param_2[1] + 0x148);
      puVar8 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[3] = 0;
      param_2[5] = 4;
      param_2[6] = (int)puVar8;
      param_2[7] = 4;
      param_2[8] = 0x20;
      param_2[9] = 4;
      param_2[10] = iVar2 + 8;
      *puVar8 = 0x1000000;
switchD_008a0848_caseD_6:
      uVar12 = FUN_008a0118(param_2 + 3,param_3);
      unaff_r7 = (int)(uVar12 >> 0x20);
      if ((uVar12 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 2) = 6;
        return;
      }
      FUN_00815de4(param_2 + 3);
      if (unaff_r7 == 0) {
        iVar2 = *(int *)(param_2[1] + 0x148);
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 50000000;
        param_2[0x20] = iVar2 + 8;
switchD_008a0848_caseD_7:
        iVar2 = FUN_0081c170(param_2 + 4,param_3);
        if (iVar2 != 0) {
          *param_1 = 0xd;
          *(undefined1 *)(param_2 + 2) = 7;
          return;
        }
        if ((char)param_2[0x21] == '\x03') {
          FUN_0081c020(param_2 + 0xc);
        }
        iVar5 = *(int *)(param_2[1] + 0x148);
        uVar7 = *(undefined1 *)(param_2[1] + 0x144);
        iVar2 = 0;
        param_2[5] = 0;
        iVar5 = iVar5 + 8;
        *(undefined2 *)((int)param_2 + 0x11) = 0;
        piVar3 = param_2 + 3;
        *(undefined1 *)piVar3 = 1;
        param_2[7] = iVar5;
        param_2[8] = (int)piVar3;
        *(undefined1 *)((int)param_2 + 0x13) = uVar7;
        *(undefined4 *)((int)param_2 + 0xd) = 1;
        *(undefined1 *)(param_2 + 0x13) = 0;
LAB_008a0b84:
        param_2[9] = iVar5;
        param_2[10] = iVar2;
        param_2[0xb] = param_2[6];
        param_2[0xc] = (int)piVar3;
        FUN_0080b980(param_2 + 0xd);
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x14] = param_2[9] + 0xc;
switchD_008a0908_caseD_3:
        iVar2 = FUN_007d67b8(param_2 + 0x14,param_3);
        if (iVar2 == 0) {
          *(undefined1 *)(param_2 + 0x13) = 3;
          goto LAB_008a0cd0;
        }
        param_2[0x12] = iVar2;
        if ((char)param_2[0x22] == '\x03') {
          cVar1 = (char)param_2[0x21];
          bVar10 = cVar1 == '\x03';
          if (bVar10) {
            cVar1 = (char)param_2[0x18];
          }
          if (bVar10 && cVar1 == '\x04') {
            FUN_0163c790(param_2 + 0x19);
            if (param_2[0x1a] != 0) {
              (**(code **)(param_2[0x1a] + 0xc))(param_2[0x1b]);
            }
          }
        }
        if (param_2[10] == 1) {
          uVar6 = *(int *)param_2[9] * param_2[0xb];
          if (0xff < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
          }
        }
        else {
          uVar6 = (uint)*(byte *)((int *)param_2[9] + 1);
        }
        uVar11 = (**(code **)(*(int *)(param_2[0x12] + 0x20) + 0x14))
                           (*(undefined4 *)(param_2[0x12] + 0x1c),param_2[10],uVar6,param_2[0x10],
                            param_2[0x11],param_2[0xe],param_2[0xf]);
        *(undefined8 *)(param_2 + 0x14) = uVar11;
LAB_008a0ca0:
        local_2c = param_2 + 5;
        uVar12 = (**(code **)((int)((ulonglong)uVar11 >> 0x20) + 0xc))((int)uVar11,param_3);
        unaff_r7 = (int)(uVar12 >> 0x20);
        if ((uVar12 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x13) = 4;
          goto LAB_008a0cd0;
        }
        puVar8 = (undefined4 *)param_2[0x15];
        iVar2 = param_2[0x14];
        pcVar4 = (code *)*puVar8;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(iVar2);
        }
        if (puVar8[1] != 0) {
          thunk_FUN_016d3fb4(iVar2);
        }
        pcVar9 = (char *)param_2[0x12];
        if (*pcVar9 == '\0') {
          bVar10 = (bool)hasExclusiveAccess(pcVar9);
          if (!bVar10) goto LAB_008a0d40;
          *pcVar9 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_008a0d40:
          FUN_01280da8(pcVar9);
        }
        FUN_0128236c(pcVar9);
        FUN_0163af68(pcVar9,1,pcVar9);
        if (param_2[0xd] != 0) {
          thunk_FUN_016d3fb4(param_2[0xe]);
        }
        *(undefined1 *)(param_2 + 0x13) = 1;
        if ((uVar12 & 1) != 0) {
LAB_008a0cd0:
          *param_1 = 0xd;
          *(undefined1 *)(param_2 + 2) = 8;
          return;
        }
        FUN_0081b77c(local_2c);
        if (unaff_r7 == 0) {
          iVar2 = *(int *)(param_2[1] + 0x148);
          *(undefined1 *)(param_2 + 0x21) = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 50000000;
          param_2[0x20] = iVar2 + 8;
switchD_008a0848_caseD_9:
          iVar2 = FUN_0081c170(param_2 + 4,param_3);
          if (iVar2 != 0) {
            *param_1 = 0xd;
            *(undefined1 *)(param_2 + 2) = 9;
            return;
          }
          uVar7 = 0xc;
          if ((char)param_2[0x21] == '\x03') {
            FUN_0081c020(param_2 + 0xc);
          }
          goto LAB_008a0d98;
        }
      }
    }
  }
  uVar7 = 9;
LAB_008a0d98:
  *(int *)(param_1 + 4) = unaff_r7;
  *param_1 = uVar7;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

