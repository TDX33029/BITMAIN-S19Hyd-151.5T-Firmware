// FUN_01a34c94 @ 01a34c94 size=424 calls_out=8 calls_in=2
// strings: max receivers

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a34c94(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iStack_34;
  int local_28;
  int iStack_24;
  
  piVar6 = *(int **)(param_1 + 0x34);
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (iVar3 < 0) goto LAB_01a34e40;
  piVar7 = *(int **)(param_1 + 4);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + 1;
  if (iVar3 < 0) goto LAB_01a34e40;
  piVar4 = piVar7 + 4;
  if ((char)*piVar4 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar2) goto LAB_01a34d08;
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01a34d08:
    FUN_0164fba8(piVar4);
  }
  FUN_0165098c(piVar4);
  iVar3 = piVar7[10];
  if (iVar3 == 0) {
    *(undefined1 *)(piVar7 + 0xb) = 0;
  }
  else {
    if (iVar3 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("max receivers",0x1b,&DAT_01d2a510);
    }
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2a520);
    }
  }
  iVar8 = piVar7[6];
  iVar9 = piVar7[7];
  piVar7[10] = iVar3 + 1;
  FUN_01650a90(piVar4);
  if ((char)*piVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (bVar2) {
        *(char *)piVar4 = '\0';
        goto LAB_01a34da8;
      }
    } while ((char)*piVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar4);
LAB_01a34da8:
  piVar4 = *(int **)(param_1 + 0x2c);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (-1 < iVar3) {
    local_28 = (uint)local_28._1_3_ << 8;
    piVar5 = (int *)thunk_FUN_01be5118(0x20);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x20);
    }
    *piVar5 = iVar8;
    piVar5[1] = iVar9;
    piVar5[2] = (int)piVar7;
    piVar5[3] = iStack_34;
    piVar5[4] = (int)piVar6;
    piVar5[5] = (int)piVar4;
    piVar5[6] = local_28;
    piVar5[7] = iStack_24;
    return;
  }
LAB_01a34e40:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a34e40);
  (*pcVar1)();
}

