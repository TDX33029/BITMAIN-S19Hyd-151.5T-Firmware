// FUN_013c1294 @ 013c1294 size=812 calls_out=1 calls_in=2
// strings: 

int * FUN_013c1294(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int *unaff_r10;
  int iVar30;
  int local_78;
  int local_74;
  undefined2 local_28;
  undefined1 local_26;
  
  cVar24 = *(char *)((int)param_1 + 0x3a);
  cVar13 = *(char *)((int)param_1 + 0x3b);
  iVar28 = param_1[0xf];
  cVar6 = (char)param_2[0xd];
  iVar26 = param_2[0xf];
  cVar20 = *(char *)((int)param_2 + 0x3b);
  cVar14 = *(char *)((int)param_2 + 0x3a);
  if (cVar6 == '\x03') {
    cVar6 = (char)param_1[0xd];
    if (cVar6 == '\x03') {
      cVar6 = '\x03';
    }
    else if (cVar6 == '\x02') {
      cVar6 = '\x02';
    }
    else {
      unaff_r10 = (int *)param_1[10];
      do {
        iVar25 = *unaff_r10;
        bVar5 = (bool)hasExclusiveAccess(unaff_r10);
      } while (!bVar5);
      *unaff_r10 = iVar25 + 1;
      if (iVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13c15bc);
        (*pcVar1)();
      }
      local_78 = param_1[0xb];
      local_74 = param_1[0xc];
    }
  }
  else {
    local_78 = param_2[0xb];
    local_74 = param_2[0xc];
    local_26 = *(undefined1 *)((int)param_2 + 0x37);
    local_28 = *(undefined2 *)((int)param_2 + 0x35);
    unaff_r10 = (int *)param_2[10];
  }
  if (cVar14 != '\x02') {
    cVar24 = cVar14;
  }
  if (cVar20 != '\x02') {
    cVar13 = cVar20;
  }
  cVar20 = (char)iVar28;
  if ((char)iVar26 != '\x02') {
    cVar20 = (char)iVar26;
  }
  cVar14 = *(char *)((int)param_1 + 0x42);
  if (*(char *)((int)param_2 + 0x42) != '\x03') {
    cVar14 = *(char *)((int)param_2 + 0x42);
  }
  cVar15 = *(char *)((int)param_1 + 0x3d);
  if (*(char *)((int)param_2 + 0x3d) != '\x02') {
    cVar15 = *(char *)((int)param_2 + 0x3d);
  }
  cVar16 = *(char *)((int)param_1 + 0x3e);
  if (*(char *)((int)param_2 + 0x3e) != '\x02') {
    cVar16 = *(char *)((int)param_2 + 0x3e);
  }
  cVar17 = *(char *)((int)param_1 + 0x3f);
  if (*(char *)((int)param_2 + 0x3f) != '\x02') {
    cVar17 = *(char *)((int)param_2 + 0x3f);
  }
  cVar18 = (char)param_1[0x10];
  if ((char)param_2[0x10] != '\x02') {
    cVar18 = (char)param_2[0x10];
  }
  cVar19 = *(char *)((int)param_1 + 0x41);
  if (*(char *)((int)param_2 + 0x41) != '\x02') {
    cVar19 = *(char *)((int)param_2 + 0x41);
  }
  iVar28 = param_1[2];
  iVar26 = param_2[6];
  if (param_2[2] == 2) {
    piVar10 = param_1;
  }
  else {
    piVar10 = param_2;
    iVar28 = param_2[2];
  }
  iVar25 = param_1[6];
  if (iVar26 != 2) {
    iVar25 = iVar26;
  }
  iVar23 = param_2[8];
  piVar7 = param_2;
  if (iVar26 == 2) {
    piVar7 = param_1;
  }
  iVar26 = param_1[8];
  if (iVar23 != 2) {
    iVar26 = iVar23;
  }
  bVar2 = *(byte *)(param_2 + 0xe);
  iVar30 = param_2[4];
  piVar27 = param_2;
  if (iVar23 == 2) {
    piVar27 = param_1;
  }
  iVar23 = piVar7[7];
  piVar7 = param_2;
  if (bVar2 == 0) {
    piVar7 = param_1;
  }
  piVar8 = param_2;
  if (iVar30 == 2) {
    piVar8 = param_1;
  }
  iVar9 = piVar8[5];
  iVar21 = param_1[4];
  if (iVar30 != 2) {
    iVar21 = iVar30;
  }
  iVar30 = piVar10[3];
  bVar3 = *(byte *)(param_1 + 0xe);
  piVar10 = param_2;
  if (*param_2 == 0) {
    piVar10 = param_1;
  }
  uVar4 = *(undefined1 *)((int)piVar7 + 0x39);
  iVar22 = piVar27[9];
  iVar29 = *param_1;
  iVar11 = piVar10[1];
  if (*param_2 != 0) {
    iVar29 = 1;
  }
  if ((char)param_1[0xd] != '\x03' && (char)param_1[0xd] != '\x02') {
    piVar10 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar10;
      bVar5 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar5);
    *piVar10 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[10],param_1[0xb]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x37) = local_26;
  *(char *)((int)param_1 + 0x42) = cVar14;
  *(char *)(param_1 + 0xd) = cVar6;
  *(char *)((int)param_1 + 0x41) = cVar19;
  param_1[9] = iVar22;
  *(char *)(param_1 + 0x10) = cVar18;
  *(char *)((int)param_1 + 0x3f) = cVar17;
  param_1[1] = iVar11;
  param_1[2] = iVar28;
  *(char *)((int)param_1 + 0x3e) = cVar16;
  param_1[3] = iVar30;
  *(char *)((int)param_1 + 0x3d) = cVar15;
  param_1[4] = iVar21;
  *(char *)(param_1 + 0xf) = cVar20;
  param_1[5] = iVar9;
  *(char *)((int)param_1 + 0x3b) = cVar13;
  param_1[6] = iVar25;
  *(char *)((int)param_1 + 0x3a) = cVar24;
  *(undefined1 *)((int)param_1 + 0x39) = uVar4;
  param_1[8] = iVar26;
  param_1[10] = (int)unaff_r10;
  param_1[0xb] = local_78;
  param_1[0xc] = local_74;
  *param_1 = iVar29;
  param_1[7] = iVar23;
  *(undefined2 *)((int)param_1 + 0x35) = local_28;
  *(byte *)(param_1 + 0xe) = bVar3 | bVar2;
  return param_1;
}

