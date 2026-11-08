// FUN_016c5eb4 @ 016c5eb4 size=612 calls_out=1 calls_in=2
// strings: 

uint * FUN_016c5eb4(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char cVar25;
  char cVar26;
  uint local_80;
  uint local_7c;
  int *local_78;
  char local_58;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar13 = param_1[0x14];
  local_58 = (char)param_2[0x13];
  uVar21 = param_2[0x14];
  if (local_58 == '\x03') {
    local_58 = (char)param_1[0x13];
    if (local_58 != '\x03' && local_58 != '\x02') {
      local_78 = (int *)param_1[0x10];
      do {
        iVar6 = *local_78;
        bVar2 = (bool)hasExclusiveAccess(local_78);
      } while (!bVar2);
      *local_78 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x16c6114);
        (*pcVar1)();
      }
      local_7c = param_1[0x11];
      local_80 = param_1[0x12];
    }
    FUN_016b7bb4();
  }
  else {
    local_7c = param_2[0x11];
    local_80 = param_2[0x12];
    local_26 = *(undefined1 *)((int)param_2 + 0x4f);
    local_28 = *(undefined2 *)((int)param_2 + 0x4d);
    local_78 = (int *)param_2[0x10];
  }
  puVar3 = param_1;
  if ((*param_2 & 1) != 0) {
    puVar3 = param_2;
  }
  uVar7 = *puVar3;
  uVar11 = puVar3[1];
  uVar14 = puVar3[2];
  uVar18 = puVar3[3];
  uVar23 = puVar3[4];
  uVar8 = puVar3[5];
  uVar12 = puVar3[6];
  uVar15 = puVar3[7];
  uVar17 = puVar3[8];
  uVar19 = puVar3[9];
  cVar16 = (char)uVar13;
  if ((char)uVar21 != '\x02') {
    cVar16 = (char)uVar21;
  }
  uVar13 = param_2[0xe];
  cVar25 = *(char *)((int)param_1 + 0x53);
  if (*(char *)((int)param_2 + 0x53) != '\x02') {
    cVar25 = *(char *)((int)param_2 + 0x53);
  }
  cVar26 = *(char *)((int)param_1 + 0x52);
  if (*(char *)((int)param_2 + 0x52) != '\x02') {
    cVar26 = *(char *)((int)param_2 + 0x52);
  }
  cVar20 = *(char *)((int)param_1 + 0x51);
  if (*(char *)((int)param_2 + 0x51) != '\x02') {
    cVar20 = *(char *)((int)param_2 + 0x51);
  }
  cVar4 = (char)param_1[0x15];
  if ((char)param_2[0x15] != '\x02') {
    cVar4 = (char)param_2[0x15];
  }
  cVar5 = *(char *)((int)param_1 + 0x55);
  if (*(char *)((int)param_2 + 0x55) != '\x02') {
    cVar5 = *(char *)((int)param_2 + 0x55);
  }
  puVar3 = param_2;
  if (uVar13 == 2) {
    puVar3 = param_1;
    uVar13 = param_1[0xe];
  }
  uVar9 = param_2[0xc];
  uVar21 = param_1[0xc];
  if (uVar9 != 2) {
    uVar21 = uVar9;
  }
  uVar10 = puVar3[0xf];
  puVar3 = param_2;
  if (uVar9 == 2) {
    puVar3 = param_1;
  }
  uVar24 = param_1[10];
  uVar9 = puVar3[0xd];
  puVar3 = param_1;
  if (param_2[10] != 0) {
    puVar3 = param_2;
  }
  if (param_2[10] != 0) {
    uVar24 = 1;
  }
  uVar22 = puVar3[0xb];
  FUN_016b7bb4(param_1 + 0x10);
  *param_1 = uVar7;
  param_1[1] = uVar11;
  param_1[2] = uVar14;
  param_1[3] = uVar18;
  param_1[4] = uVar23;
  param_1[5] = uVar8;
  param_1[6] = uVar12;
  param_1[7] = uVar15;
  param_1[8] = uVar17;
  param_1[9] = uVar19;
  *(char *)(param_1 + 0x13) = local_58;
  param_1[0x12] = local_80;
  param_1[0xd] = uVar9;
  param_1[0xe] = uVar13;
  param_1[0xf] = uVar10;
  param_1[0x10] = (uint)local_78;
  param_1[0x11] = local_7c;
  *(char *)((int)param_1 + 0x55) = cVar5;
  *(char *)(param_1 + 0x15) = cVar4;
  *(char *)((int)param_1 + 0x53) = cVar25;
  *(char *)((int)param_1 + 0x52) = cVar26;
  *(char *)((int)param_1 + 0x51) = cVar20;
  *(undefined1 *)((int)param_1 + 0x4f) = local_26;
  param_1[10] = uVar24;
  param_1[0xb] = uVar22;
  param_1[0xc] = uVar21;
  *(char *)(param_1 + 0x14) = cVar16;
  *(undefined2 *)((int)param_1 + 0x4d) = local_28;
  return param_1;
}

