// FUN_01159adc @ 01159adc size=580 calls_out=8 calls_in=1
// strings: 

int FUN_01159adc(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 extraout_s1;
  double dVar17;
  undefined8 uVar18;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined2 local_8c;
  undefined1 local_58;
  char *local_54;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  uVar18 = CONCAT44(local_c4,local_c8);
  pcVar8 = (char *)param_1[1];
  iVar10 = param_1[2];
  pcVar12 = (char *)*param_1;
  while( true ) {
    if (pcVar12 == pcVar8) {
      return 0;
    }
    cVar2 = *pcVar12;
    *param_1 = pcVar12 + 0x18;
    if (cVar2 != '\x02') break;
    uVar5 = *(uint *)(pcVar12 + 0xc);
    if (uVar5 == 0 && (1 < *(uint *)(pcVar12 + 8)) <= uVar5) {
      param_1[2] = iVar10 + 1;
    }
    else {
      dVar17 = *(double *)(pcVar12 + 0x10);
      uVar16 = FUN_016d62a0(SUB84(dVar17,0),uVar5 - (1 >= *(uint *)(pcVar12 + 8)));
      param_1[2] = iVar10 + 1;
      if (dVar17 - (double)CONCAT44(extraout_s1,uVar16) != 0.0) goto LAB_01159b7c;
    }
    iVar10 = iVar10 + 1;
    pcVar12 = pcVar12 + 0x18;
  }
  param_1[2] = iVar10 + 1;
LAB_01159b7c:
  piVar13 = (int *)param_1[3];
  piVar4 = (int *)*piVar13;
  do {
    iVar6 = *piVar4;
    iVar7 = iVar6 + 1;
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = iVar7;
  if (iVar6 < 0) {
LAB_01159d0c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1159d0c);
    (*pcVar1)();
  }
  iVar15 = *piVar13;
  iVar11 = piVar13[1];
  iVar6 = *(int *)param_1[4];
  if (iVar6 == 0) {
    local_b0[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar6 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(iVar6 + 0xc),iVar6,iVar7,0,iVar11,iVar15);
    }
    piVar4 = *(int **)(iVar6 + 0xc);
    do {
      iVar7 = *piVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar3);
    *piVar4 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01159d0c;
    uVar5 = 0;
    iVar7 = *piVar13;
    uVar14 = piVar13[1];
    local_d0 = *(undefined4 *)(iVar6 + 0xc);
    local_cc = *(undefined4 *)(iVar6 + 0x10);
    uVar9 = (*(int **)(iVar6 + 4))[1];
    if (uVar9 <= uVar14) {
      iVar6 = thunk_FUN_016dd50a(**(int **)(iVar6 + 4) + 8,iVar7 + 8,uVar9);
      uVar5 = uVar9;
      if (iVar6 != 0) {
        uVar5 = 0;
      }
    }
    uVar18 = FUN_011e1508(iVar7 + 8 + uVar5,uVar14 - uVar5);
    local_d4 = 3;
    local_b0[0] = 2;
  }
  local_b4 = param_1[5];
  local_c0 = 0x80000001;
  local_bc = iVar10;
  local_40 = FUN_01238114(&local_c0);
  local_8c = 0x400;
  local_90 = &DAT_80000028;
  local_58 = 6;
  uStack_a4 = local_d4;
  local_a0 = local_d0;
  uStack_9c = local_cc;
  local_54 = pcVar12;
  local_38 = iVar15;
  local_34 = iVar11;
  uStack_98 = uVar18;
  iVar10 = thunk_FUN_016d4a50(0x80);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar10,local_b0,0x80);
  return iVar10;
}

