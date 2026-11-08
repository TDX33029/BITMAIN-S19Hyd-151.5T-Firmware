// FUN_008af4dc @ 008af4dc size=788 calls_out=7 calls_in=0
// strings: BUG: impossible | BUG: impossible

longlong FUN_008af4dc(double *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double *local_58;
  code *local_54;
  double *local_50;
  code *local_4c;
  double *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x1b4)) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x36);
    dVar14 = *param_1;
    param_1[1] = dVar14;
    uVar4 = *(undefined4 *)(iVar2 + 0xb8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc0);
    dVar16 = *(double *)(iVar2 + 0x90);
    dVar15 = *(double *)(iVar2 + 0x98);
    dVar17 = *(double *)(iVar2 + 0xa0);
    uVar10 = *(undefined4 *)(iVar2 + 0xbc);
    uVar8 = *(undefined4 *)(iVar2 + 0xa8);
    uVar9 = *(undefined4 *)(iVar2 + 0xac);
    uVar12 = *(undefined4 *)(iVar2 + 0xb0);
    uVar6 = *(undefined4 *)(iVar2 + 0x74);
    uVar7 = *(undefined4 *)(iVar2 + 0x78);
    uVar11 = *(undefined4 *)(iVar2 + 0x7c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(iVar2 + 0x70);
    *(undefined4 *)((int)param_1 + 0x54) = uVar6;
    *(undefined4 *)(param_1 + 0xb) = uVar7;
    *(undefined4 *)((int)param_1 + 0x5c) = uVar11;
    uVar6 = *(undefined4 *)(iVar2 + 0x84);
    uVar7 = *(undefined4 *)(iVar2 + 0x88);
    uVar11 = *(undefined4 *)(iVar2 + 0x8c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0x80);
    *(undefined4 *)((int)param_1 + 100) = uVar6;
    *(undefined4 *)(param_1 + 0xd) = uVar7;
    *(undefined4 *)((int)param_1 + 0x6c) = uVar11;
    *(undefined4 *)(param_1 + 0x13) = uVar4;
    *(undefined4 *)(param_1 + 0x11) = uVar8;
    *(undefined4 *)((int)param_1 + 0x8c) = uVar9;
    *(undefined4 *)((int)param_1 + 0x9c) = uVar10;
    *(undefined4 *)(param_1 + 0x12) = uVar12;
    uVar4 = *(undefined4 *)(iVar2 + 0x30);
    uVar6 = *(undefined4 *)(iVar2 + 0x34);
    uVar8 = *(undefined4 *)(iVar2 + 0x38);
    uVar11 = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    uVar7 = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)((int)param_1 + 0x14) = uVar6;
    uVar5 = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 2) = uVar4;
    uVar4 = *(undefined4 *)(iVar2 + 0x68);
    *(undefined4 *)((int)param_1 + 0x24) = uVar7;
    unaff_r5 = *(undefined4 *)(iVar2 + 100);
    *(undefined4 *)(param_1 + 4) = uVar11;
    uVar6 = *(undefined4 *)(iVar2 + 0x60);
    *(undefined4 *)(param_1 + 3) = uVar8;
    uVar7 = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(param_1 + 5) = uVar5;
    uVar5 = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(iVar2 + 0x50);
    *(undefined4 *)((int)param_1 + 0x34) = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)((int)param_1 + 0x44) = unaff_r5;
    local_58 = param_1 + 1;
    param_1[0xe] = dVar16;
    param_1[0xf] = dVar15;
    param_1[0x10] = dVar17;
    *(undefined4 *)(param_1 + 7) = uVar7;
    *(undefined4 *)(param_1 + 9) = uVar4;
    if (NAN(dVar14)) {
      if (NAN(dVar15)) {
        if (!NAN(*(double *)(iVar2 + 0x160))) {
LAB_008af6c4:
          local_50 = (double *)(iVar2 + 0x160);
          local_4c = FUN_00f5cdb8;
          local_54 = FUN_00f5cdb8;
          FUN_00600d2c(&local_30,&DAT_00573f54,&local_58);
          local_40 = local_30;
          uStack_3c = uStack_2c;
          uStack_38 = uStack_28;
          uVar3 = FUN_00808de4(&local_40);
          break;
        }
LAB_008af780:
        *(int *)(param_1 + 0x34) = iVar2;
        *(undefined1 *)((int)param_1 + 0x1ac) = 0;
        param_1[0x15] = dVar14;
        goto switchD_008af4f8_caseD_3;
      }
    }
    else if (!NAN(dVar16)) {
      if (dVar14 <= dVar16) {
        if (dVar14 < dVar16) goto LAB_008af644;
      }
      else if (dVar14 < dVar16) goto LAB_008af714;
      if (dVar14 <= dVar15) {
        if (*(double *)(iVar2 + 0x160) < dVar14) {
          if (dVar14 < *(double *)(iVar2 + 0x160)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
          }
          goto LAB_008af6c4;
        }
        goto LAB_008af780;
      }
      if (dVar14 < dVar15) {
LAB_008af714:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
      }
    }
LAB_008af644:
    local_48 = param_1 + 0xf;
    local_50 = param_1 + 0xe;
    local_44 = FUN_00f5cdb8;
    local_4c = FUN_00f5cdb8;
    local_54 = FUN_00f5cdb8;
    FUN_00600d2c(&local_30,&DAT_0057a651,&local_58);
    local_40 = local_30;
    uStack_3c = uStack_2c;
    uStack_38 = uStack_28;
    uVar3 = FUN_00808de4(&local_40);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863bfc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863bfc);
  case 3:
switchD_008af4f8_caseD_3:
    uVar18 = FUN_008af8d0(param_1 + 0x15,param_2);
    uVar3 = (uint)(uVar18 >> 0x20);
    if ((uVar18 & 1) != 0) {
      *(undefined1 *)((int)param_1 + 0x1b4) = 3;
      return CONCAT44(unaff_r5,1);
    }
    if (*(char *)((int)param_1 + 0x1ac) == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0x19c);
      bVar13 = cVar1 == '\x03';
      if (bVar13) {
        cVar1 = *(char *)((int)param_1 + 0x189);
      }
      if (bVar13 && cVar1 == '\x03') {
        FUN_008b42e8(param_1 + 0x17);
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x1b4) = 1;
  return (ulonglong)uVar3 << 0x20;
}

