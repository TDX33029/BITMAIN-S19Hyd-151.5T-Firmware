// FUN_016c04f8 @ 016c04f8 size=740 calls_out=1 calls_in=2
// strings: 

int * FUN_016c04f8(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  char cVar23;
  int *piVar24;
  int iVar25;
  int *piVar26;
  char cVar27;
  char cVar28;
  int iVar29;
  int local_70;
  int local_6c;
  char local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  piVar26 = (int *)param_2[10];
  cVar27 = *(char *)((int)param_1 + 0x3a);
  local_30 = (char)param_2[0xd];
  cVar28 = *(char *)((int)param_1 + 0x3b);
  iVar19 = param_1[0xf];
  iVar21 = param_2[0xf];
  cVar23 = *(char *)((int)param_2 + 0x3b);
  cVar20 = *(char *)((int)param_2 + 0x3a);
  if (local_30 == '\x03') {
    local_30 = (char)param_1[0xd];
    if (local_30 != '\x03' && local_30 != '\x02') {
      piVar26 = (int *)param_1[10];
      do {
        iVar18 = *piVar26;
        bVar5 = (bool)hasExclusiveAccess(piVar26);
      } while (!bVar5);
      *piVar26 = iVar18 + 1;
      if (iVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x16c07d8);
        (*pcVar1)();
      }
      local_70 = param_1[0xb];
      local_6c = param_1[0xc];
    }
    FUN_013385f8();
  }
  else {
    local_70 = param_2[0xb];
    local_6c = param_2[0xc];
    local_26 = *(undefined1 *)((int)param_2 + 0x37);
    local_28 = *(undefined2 *)((int)param_2 + 0x35);
  }
  if (cVar20 != '\x02') {
    cVar27 = cVar20;
  }
  if (cVar23 != '\x02') {
    cVar28 = cVar23;
  }
  cVar23 = (char)iVar19;
  if ((char)iVar21 != '\x02') {
    cVar23 = (char)iVar21;
  }
  cVar20 = *(char *)((int)param_1 + 0x42);
  if (*(char *)((int)param_2 + 0x42) != '\x03') {
    cVar20 = *(char *)((int)param_2 + 0x42);
  }
  cVar13 = *(char *)((int)param_1 + 0x3d);
  if (*(char *)((int)param_2 + 0x3d) != '\x02') {
    cVar13 = *(char *)((int)param_2 + 0x3d);
  }
  cVar14 = *(char *)((int)param_1 + 0x3e);
  if (*(char *)((int)param_2 + 0x3e) != '\x02') {
    cVar14 = *(char *)((int)param_2 + 0x3e);
  }
  cVar15 = *(char *)((int)param_1 + 0x41);
  if (*(char *)((int)param_2 + 0x41) != '\x02') {
    cVar15 = *(char *)((int)param_2 + 0x41);
  }
  cVar16 = (char)param_1[0x10];
  if ((char)param_2[0x10] != '\x02') {
    cVar16 = (char)param_2[0x10];
  }
  cVar17 = *(char *)((int)param_1 + 0x3f);
  if (*(char *)((int)param_2 + 0x3f) != '\x02') {
    cVar17 = *(char *)((int)param_2 + 0x3f);
  }
  iVar19 = param_2[2];
  iVar21 = param_2[6];
  piVar6 = param_2;
  if (iVar19 == 2) {
    piVar6 = param_1;
    iVar19 = param_1[2];
  }
  piVar7 = param_2;
  if (iVar21 == 2) {
    piVar7 = param_1;
    iVar21 = param_1[6];
  }
  iVar9 = param_2[8];
  bVar2 = *(byte *)(param_2 + 0xe);
  iVar18 = param_1[8];
  if (iVar9 != 2) {
    iVar18 = iVar9;
  }
  iVar29 = param_2[4];
  piVar8 = param_2;
  if (iVar9 == 2) {
    piVar8 = param_1;
  }
  piVar24 = param_1;
  if (bVar2 != 0) {
    piVar24 = param_2;
  }
  iVar9 = param_1[4];
  if (iVar29 != 2) {
    iVar9 = iVar29;
  }
  iVar10 = piVar8[9];
  uVar3 = *(undefined1 *)((int)piVar24 + 0x39);
  iVar11 = piVar7[7];
  piVar7 = param_2;
  if (iVar29 == 2) {
    piVar7 = param_1;
  }
  piVar8 = param_1;
  if (*param_2 != 0) {
    piVar8 = param_2;
  }
  iVar25 = *param_1;
  iVar29 = piVar7[5];
  if (*param_2 != 0) {
    iVar25 = 1;
  }
  iVar22 = piVar8[1];
  iVar12 = piVar6[3];
  bVar4 = *(byte *)(param_1 + 0xe);
  FUN_013385f8(param_1 + 10);
  *(undefined1 *)((int)param_1 + 0x37) = local_26;
  *(char *)(param_1 + 0xd) = local_30;
  *(char *)((int)param_1 + 0x42) = cVar20;
  param_1[9] = iVar10;
  *(char *)((int)param_1 + 0x41) = cVar15;
  param_1[0xb] = local_70;
  *(char *)(param_1 + 0x10) = cVar16;
  param_1[0xc] = local_6c;
  *(char *)((int)param_1 + 0x3f) = cVar17;
  param_1[3] = iVar12;
  *(char *)((int)param_1 + 0x3e) = cVar14;
  param_1[4] = iVar9;
  *(char *)((int)param_1 + 0x3d) = cVar13;
  param_1[5] = iVar29;
  *(char *)(param_1 + 0xf) = cVar23;
  param_1[6] = iVar21;
  *(char *)((int)param_1 + 0x3b) = cVar28;
  *(char *)((int)param_1 + 0x3a) = cVar27;
  param_1[8] = iVar18;
  param_1[10] = (int)piVar26;
  *param_1 = iVar25;
  param_1[1] = iVar22;
  param_1[2] = iVar19;
  param_1[7] = iVar11;
  *(undefined2 *)((int)param_1 + 0x35) = local_28;
  *(undefined1 *)((int)param_1 + 0x39) = uVar3;
  *(byte *)(param_1 + 0xe) = bVar4 | bVar2;
  return param_1;
}

