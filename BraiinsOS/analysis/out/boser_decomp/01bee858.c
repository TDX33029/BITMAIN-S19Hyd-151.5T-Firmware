// FUN_01bee858 @ 01bee858 size=1070 calls_out=18 calls_in=1
// strings: 

int FUN_01bee858(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined8 uVar15;
  int local_d4;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  
  FUN_01bed93e(&local_cc,0,0x24);
  if (DAT_01d53570 == '\0') {
    return 0x26;
  }
  iVar13 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (DAT_01d53571 == '\0') {
    piVar6 = (int *)FUN_01beb698();
    for (iVar2 = *piVar6; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
      if (*(int *)(iVar2 + 0x4c) < 0) {
        *(undefined4 *)(iVar2 + 0x4c) = 0;
      }
    }
    FUN_01beb6b0();
    if ((DAT_01d51100 != 0) && (*(int *)(DAT_01d51100 + 0x4c) < 0)) {
      *(undefined4 *)(DAT_01d51100 + 0x4c) = 0;
    }
    if ((DAT_01d537cc != 0) && (*(int *)(DAT_01d537cc + 0x4c) < 0)) {
      *(undefined4 *)(DAT_01d537cc + 0x4c) = 0;
    }
    if ((DAT_01d51068 != 0) && (*(int *)(DAT_01d51068 + 0x4c) < 0)) {
      *(undefined4 *)(DAT_01d51068 + 0x4c) = 0;
    }
    local_a8 = 0;
    uStack_a4 = 3;
    software_interrupt(0);
    *(undefined **)(iVar13 + -0x30) = &DAT_01d53c18;
    FUN_01bee53e(1,&local_a8);
    DAT_01d53571 = '\x01';
  }
  if ((undefined1 *)((int)param_2 + -1) < (undefined1 *)0xfffffffd || param_2 == (uint *)0xfffffffe)
  {
    local_cc = *param_2;
    local_c8 = param_2[1];
    local_c4 = param_2[2];
    local_c0 = param_2[3];
    local_bc = param_2[4];
    local_b8 = param_2[5];
    uStack_b4 = param_2[6];
    uStack_b0 = param_2[7];
    local_ac = param_2[8];
    FUN_01bee3a4();
  }
  else {
    FUN_01bee3a4();
    local_cc = DAT_01d51114;
    local_c8 = DAT_01d51110;
  }
  uVar12 = local_cc;
  if (local_c4 == 0) {
    uVar9 = (DAT_01d5358c + local_c8) - 1 & -DAT_01d5358c;
    uVar10 = DAT_01d51118 + DAT_01d53580 + DAT_01d5358c + -1 + local_cc & -DAT_01d5358c;
    uVar12 = uVar10 + uVar9;
    if (uVar9 == 0) {
      iVar2 = FUN_01be6c88(0,uVar12,3,0x22,0xffffffff);
      if (iVar2 == -1) goto LAB_01beebac;
      iVar14 = (uVar12 - DAT_01d51118) + iVar2;
      local_d4 = iVar2;
    }
    else {
      iVar2 = FUN_01be6c88(0,uVar12,0,0x22,0xffffffff);
      if (iVar2 == -1) goto LAB_01beebac;
      iVar14 = FUN_01be6d14(iVar2 + uVar9,uVar10,3);
      if ((iVar14 != 0) && (piVar6 = (int *)FUN_01be3244(), *piVar6 != 0x26)) {
        FUN_01be6d98(iVar2,uVar12);
        goto LAB_01beebac;
      }
      iVar14 = (uVar12 - DAT_01d51118) + iVar2;
      local_d4 = iVar2 + uVar9;
    }
LAB_01beeb8c:
    uVar3 = iVar14 - DAT_01d53580;
    uVar10 = uVar3;
  }
  else {
    uVar10 = local_c4 & 0xfffffff0;
    local_d4 = local_c4 - local_cc;
    uVar9 = DAT_01d51118 + DAT_01d53580;
    if (uVar9 < local_cc >> 3 && uVar9 < 0x800) {
      iVar14 = uVar10 - DAT_01d51118;
      uVar10 = iVar14 - DAT_01d53580;
      FUN_01bed93e(uVar10,0);
      if (iVar14 == 0) goto LAB_01bee8fe;
      uVar9 = 0;
      iVar2 = 0;
      uVar3 = iVar14 - DAT_01d53580;
    }
    else {
      uVar12 = DAT_01d5358c + -1 + uVar9 & -DAT_01d5358c;
LAB_01bee8fe:
      iVar2 = FUN_01be6c88(0,uVar12,3,0x22,0xffffffff);
      if (iVar2 == -1) {
LAB_01beebac:
        FUN_01bee3b0();
        return 0xb;
      }
      iVar14 = (uVar12 - DAT_01d51118) + iVar2;
      if (uVar10 == 0) {
        uVar9 = 0;
        local_d4 = iVar2;
        goto LAB_01beeb8c;
      }
      uVar3 = iVar14 - DAT_01d53580;
      uVar9 = 0;
    }
  }
  iVar4 = FUN_01be2e3c(uVar3);
  *(int *)iVar4 = iVar4;
  *(uint *)(iVar4 + 0x30) = uVar10 - local_d4;
  *(uint *)(iVar4 + 0x34) = uVar9;
  *(int *)(iVar4 + 0x40) = iVar14;
  *(int *)(iVar4 + 0x24) = iVar2;
  *(uint *)(iVar4 + 0x28) = uVar12;
  *(uint *)(iVar4 + 0x2c) = uVar10;
  *(undefined **)(iVar4 + 0x58) = &DAT_01d53590;
  if (local_c0 == 0) {
    *(undefined4 *)(iVar4 + 0x18) = 2;
  }
  else {
    *(undefined4 *)(iVar4 + 0x18) = 3;
  }
  *(int *)(iVar4 + 0x44) = iVar4 + 0x44;
  uVar10 = uVar10 & 0xfffffffc;
  *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(iVar13 + -8);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar13 + -100);
  *(undefined4 *)(uVar10 - 0x14) = param_3;
  *(undefined4 *)(uVar10 - 0x10) = param_4;
  *(uint *)(uVar10 - 0xc) = (uint)(local_bc != 0);
  FUN_01bea6d4(&local_a8);
  FUN_01bed4e2(uVar10 - 8,&local_a8,8);
  *(uint *)(uVar10 - 4) = *(uint *)(uVar10 - 4) & 0xfffffffe;
  FUN_01bee540();
  if (DAT_01d53574 == 0) {
    DAT_01d53573 = 1;
  }
  if (param_2 == (uint *)&DAT_ffffffff) {
    puVar5 = &DAT_01bee82f;
  }
  else {
    puVar5 = &DAT_01bee7bd;
  }
  DAT_01d53574 = DAT_01d53574 + 1;
  uVar15 = FUN_01bee364(puVar5,uVar10 - 0x14,&LAB_007d0f00,uVar10 - 0x14,iVar4 + 0x10,iVar4 + 0x70,
                        &DAT_01d53490);
  if ((int)uVar15 < 0) {
    iVar14 = 0xb;
LAB_01beec0e:
    DAT_01d53574 = DAT_01d53574 + -1;
    if (DAT_01d53574 == 0) {
      DAT_01d53573 = 0;
    }
    FUN_01bee5a4();
    FUN_01bea6f0(&local_a8);
    FUN_01bee3b0();
    if (iVar2 != 0) {
      FUN_01be6d98(iVar2,uVar12);
    }
  }
  else {
    if (local_bc != 0) {
      piVar6 = *(int **)(iVar4 + 0x10);
      software_interrupt(0);
      piVar11 = (int *)(uVar10 - 0xc);
      if (piVar6 == (int *)0x0) {
        iVar14 = 0;
      }
      else {
        iVar14 = 3;
      }
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(piVar11);
        iVar8 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = iVar14;
      DataMemoryBarrier(0x1b);
      piVar7 = piVar6;
      if (iVar8 == 2) {
        iVar8 = 0x81;
        software_interrupt(0);
        piVar7 = (int *)(uVar10 + 0x1a);
        if ((int *)(uVar10 + 0x1a) == (int *)0x0) {
          iVar8 = 1;
          software_interrupt(0);
          piVar7 = piVar11;
        }
      }
      uVar15 = CONCAT44(iVar8,piVar7);
      if ((piVar6 != (int *)0x0) && (uVar15 = FUN_01bee22c(piVar11,0,3), (int)piVar6 < 0)) {
        iVar14 = -(int)piVar6;
        goto LAB_01beec0e;
      }
    }
    iVar2 = *(int *)(iVar13 + -0x68);
    iVar14 = 0;
    *(int *)(iVar4 + 4) = iVar13 + -0x70;
    *(int *)(iVar4 + 8) = iVar2;
    *(int *)(iVar2 + 4) = iVar4;
    *(int *)(*(int *)(iVar4 + 4) + 8) = iVar4;
    FUN_01bee5a4((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    FUN_01bea6f0(&local_a8);
    FUN_01bee3b0();
    *param_1 = iVar4;
  }
  return iVar14;
}

