// FUN_011ec42c @ 011ec42c size=544 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_011ec42c(int param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 extraout_s1;
  double dVar15;
  undefined8 uVar16;
  undefined4 local_50 [3];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  bVar2 = *(byte *)(param_1 + 0x2c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    bVar2 = bVar2 & 8;
    break;
  case 1:
    bVar2 = bVar2 & 2;
    break;
  case 2:
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((uVar8 == 0 && (1 < *(uint *)(param_2 + 8)) <= uVar8) ||
       (dVar15 = *(double *)(param_2 + 0x10),
       uVar11 = FUN_016d62a0(SUB84(dVar15,0),uVar8 - (1 >= *(uint *)(param_2 + 8))),
       dVar15 - (double)CONCAT44(extraout_s1,uVar11) == 0.0)) {
      bVar2 = bVar2 & 0x14;
    }
    else {
      bVar2 = bVar2 & 0x10;
    }
    break;
  case 3:
    bVar2 = bVar2 & 0x40;
    break;
  case 4:
    bVar2 = bVar2 & 1;
    break;
  case 5:
    bVar2 = bVar2 & 0x20;
  }
  if (bVar2 != 0) {
    iVar10 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x28) * 0x18;
    while (iVar4 != 0) {
      iVar6 = FUN_011e2b78(param_2,iVar10);
      iVar4 = iVar4 + -0x18;
      iVar10 = iVar10 + 0x18;
      if (iVar6 != 0) {
        return 0;
      }
    }
  }
  piVar12 = *(int **)(param_1 + 0x18);
  do {
    iVar4 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_011ec660:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11ec660);
    (*pcVar1)();
  }
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  if (param_4 == 0) {
    local_50[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar5 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_011ec660;
    uVar7 = *(undefined4 *)(param_4 + 0x10);
    uVar14 = *(undefined4 *)(param_4 + 0xc);
    uVar13 = *(uint *)(param_1 + 0x1c);
    uVar9 = (*(int **)(param_4 + 4))[1];
    uVar8 = 0;
    if (uVar9 <= uVar13) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar12 + 2,uVar9);
      uVar8 = uVar9;
      if (iVar4 != 0) {
        uVar8 = 0;
      }
    }
    local_38 = FUN_011e1508((int)(piVar12 + 2) + uVar8,uVar13 - uVar8);
    local_44 = 3;
    local_50[0] = 2;
    local_40 = uVar14;
    local_3c = uVar7;
  }
  uVar16 = FUN_01238114(param_3);
  uVar11 = FUN_011ef804(piVar12,uVar11,local_50,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),param_2
                        ,param_1);
  return uVar11;
}

