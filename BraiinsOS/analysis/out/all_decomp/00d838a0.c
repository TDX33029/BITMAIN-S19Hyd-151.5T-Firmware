// FUN_00d838a0 @ 00d838a0 size=648 calls_out=9 calls_in=0
// strings: BUG: impossible

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00d83a34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00d838a0(undefined4 *param_1,double *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  double in_d0;
  double dVar12;
  ulonglong uVar13;
  int *local_38;
  undefined4 uStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x29)) {
  case 0:
    iVar7 = *(int *)((int)param_2 + 0x24);
    *(undefined1 *)(param_2 + 5) = 1;
    uVar3 = *(undefined4 *)(param_2 + 3);
    uVar10 = *(undefined4 *)((int)param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 4);
    iVar4 = (**(code **)(iVar7 + 0xc))(uVar9);
    iVar4 = *(int *)(iVar4 + 0x204);
    if (*(int *)(iVar4 + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_01879bd0);
    }
    uVar2 = FUN_018462e8(*(undefined4 *)(iVar4 + 0xb8));
    pcVar5 = *(code **)(iVar7 + 0x10);
    dVar12 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *param_2 = *(double *)(iVar4 + 0x30) * dVar12;
    dVar12 = (double)(*pcVar5)(uVar9);
    pcVar5 = *(code **)((int)((ulonglong)dVar12 >> 0x20) + 0x10);
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[1] = dVar12;
    dVar12 = (double)(*pcVar5)(SUB84(dVar12,0),uVar3,uVar10);
    param_2[2] = dVar12;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a0a4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a0a4);
  case 3:
    dVar12 = param_2[2];
  }
  uVar13 = (**(code **)((int)((ulonglong)dVar12 >> 0x20) + 0xc))(SUB84(dVar12,0),param_3);
  piVar8 = (int *)(uVar13 >> 0x20);
  if ((int)uVar13 == 2) {
    uVar3 = 1;
    uVar6 = 3;
    goto LAB_00d83af4;
  }
  uVar3 = *(undefined4 *)(param_2 + 2);
  puVar11 = *(undefined4 **)((int)param_2 + 0x14);
  pcVar5 = (code *)*puVar11;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar3);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  if ((uVar13 & 1) == 0) {
    uVar3 = *(undefined4 *)(param_2 + 1);
    puVar11 = *(undefined4 **)((int)param_2 + 0xc);
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar3);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    in_d0 = *(double *)(piVar8[2] + 0x158);
    dVar12 = *(double *)(piVar8[2] + 0x150);
    FUN_016d5622(SUB84(in_d0,0),(int)((ulonglong)in_d0 >> 0x20),SUB84(*param_2,0));
    if (NAN(dVar12)) {
LAB_00d83a90:
      local_38 = (int *)FUN_00f155bc(&DAT_003588fc,0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1420(piVar8);
      }
      goto LAB_00d83ad0;
    }
    if (!NAN(in_d0)) {
      if (dVar12 <= in_d0) {
        if (dVar12 < in_d0) goto LAB_00d83b0c;
      }
      else if (dVar12 < in_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
      }
      goto LAB_00d83a90;
    }
LAB_00d83b0c:
    *(undefined1 *)(param_2 + 5) = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 1);
    puVar11 = *(undefined4 **)((int)param_2 + 0xc);
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar3);
    }
    local_38 = piVar8;
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
LAB_00d83ad0:
    piVar8 = (int *)0x0;
    dVar12 = (double)CONCAT44(uStack_34,local_38);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  param_1[6] = piVar8;
  uVar3 = 0;
  *(double *)(param_1 + 2) = dVar12;
  uVar6 = 1;
  *(double *)(param_1 + 4) = in_d0;
LAB_00d83af4:
  *(undefined1 *)((int)param_2 + 0x29) = uVar6;
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

