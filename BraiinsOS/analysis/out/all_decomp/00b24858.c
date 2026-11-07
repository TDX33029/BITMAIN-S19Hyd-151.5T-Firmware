// FUN_00b24858 @ 00b24858 size=352 calls_out=5 calls_in=1
// strings: BUG: impossible

void FUN_00b24858(undefined8 *param_1,double *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  undefined8 unaff_d8;
  double dVar6;
  double dVar7;
  int local_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined8 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    dVar6 = *param_2;
    iVar3 = *(int *)(param_2 + 3);
    uVar4 = *(undefined4 *)((int)param_2 + 0x1c);
    uVar5 = in_fpscr & 0xfffffff;
    *(undefined4 *)(param_2 + 4) = uVar4;
    param_2[1] = dVar6;
    dVar7 = *(double *)(iVar3 + 0x278) * 1.1;
    param_2[2] = dVar7;
    puVar1 = &DAT_3b9aca00;
    if (NAN(dVar6)) {
      if (!NAN(dVar7)) goto LAB_00b248ec;
    }
    else if (dVar7 <= dVar6) {
      uVar5 = uVar5 | (uint)(dVar6 < dVar7) << 0x1f;
      if (SUB41(uVar5 >> 0x1f,0) != (NAN(dVar6) || NAN(dVar7))) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
      }
LAB_00b248ec:
      dVar6 = (double)VectorUnsignedToFloat
                                (*(undefined4 *)(*(int *)(iVar3 + 0x204) + 0x44),
                                 (byte)(uVar5 >> 0x16) & 3);
      dVar7 = (double)VectorUnsignedToFloat(uVar4,(byte)(uVar5 >> 0x16) & 3);
      if ((dVar6 / 1000000.0) * 1.1 < dVar7 / 1000000.0) {
        *(int *)(param_2 + 6) = iVar3;
        *(undefined1 *)((int)param_2 + 0x34) = 0;
        *(undefined4 *)((int)param_2 + 0x24) = 0;
        goto switchD_00b24878_caseD_3;
      }
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f800);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f800);
  case 3:
switchD_00b24878_caseD_3:
    FUN_00b12b90(&local_38,(int)param_2 + 0x24);
    if (local_38 == 2) {
      uVar2 = 3;
      puVar1 = (undefined1 *)0x3b9aca01;
      goto LAB_00b249b8;
    }
    FUN_015f3b0c(&local_38,1);
    puVar1 = local_30;
    iVar3 = local_38;
    uVar4 = uStack_34;
    unaff_d8 = local_28;
  }
  uVar2 = 1;
  *param_1 = unaff_d8;
  *(int *)(param_1 + 1) = iVar3;
  *(undefined4 *)((int)param_1 + 0xc) = uVar4;
LAB_00b249b8:
  *(undefined1 *)(param_2 + 7) = uVar2;
  *(undefined1 **)(param_1 + 2) = puVar1;
  return;
}

