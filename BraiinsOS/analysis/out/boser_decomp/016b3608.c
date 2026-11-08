// FUN_016b3608 @ 016b3608 size=676 calls_out=1 calls_in=2
// strings: 

uint * FUN_016b3608(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  uint uVar22;
  char cVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint local_8c;
  uint local_88;
  int *local_84;
  char local_68;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar11 = param_1[0x12];
  local_68 = (char)param_2[0x11];
  uVar22 = param_2[0x12];
  if (local_68 == '\x03') {
    local_68 = (char)param_1[0x11];
    if (local_68 != '\x03' && local_68 != '\x02') {
      local_84 = (int *)param_1[0xe];
      do {
        iVar10 = *local_84;
        bVar2 = (bool)hasExclusiveAccess(local_84);
      } while (!bVar2);
      *local_84 = iVar10 + 1;
      if (iVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x16b38a8);
        (*pcVar1)();
      }
      local_8c = param_1[0xf];
      local_88 = param_1[0x10];
    }
    FUN_013385f8();
  }
  else {
    local_8c = param_2[0xf];
    local_88 = param_2[0x10];
    local_26 = *(undefined1 *)((int)param_2 + 0x47);
    local_28 = *(undefined2 *)((int)param_2 + 0x45);
    local_84 = (int *)param_2[0xe];
  }
  puVar17 = param_1;
  if ((*param_2 & 1) != 0) {
    puVar17 = param_2;
  }
  uVar12 = *puVar17;
  uVar14 = puVar17[1];
  uVar18 = puVar17[2];
  uVar25 = puVar17[3];
  uVar26 = puVar17[4];
  uVar7 = puVar17[5];
  uVar13 = puVar17[6];
  uVar15 = puVar17[7];
  uVar19 = puVar17[8];
  uVar20 = puVar17[9];
  cVar16 = (char)uVar11;
  if ((char)uVar22 != '\x02') {
    cVar16 = (char)uVar22;
  }
  cVar21 = *(char *)((int)param_1 + 0x4d);
  if (*(char *)((int)param_2 + 0x4d) != '\x02') {
    cVar21 = *(char *)((int)param_2 + 0x4d);
  }
  cVar23 = *(char *)((int)param_1 + 0x4f);
  if (*(char *)((int)param_2 + 0x4f) != '\x03') {
    cVar23 = *(char *)((int)param_2 + 0x4f);
  }
  cVar3 = (char)param_1[0x13];
  if ((char)param_2[0x13] != '\x02') {
    cVar3 = (char)param_2[0x13];
  }
  cVar4 = *(char *)((int)param_1 + 0x4b);
  if (*(char *)((int)param_2 + 0x4b) != '\x02') {
    cVar4 = *(char *)((int)param_2 + 0x4b);
  }
  cVar5 = *(char *)((int)param_1 + 0x4a);
  if (*(char *)((int)param_2 + 0x4a) != '\x02') {
    cVar5 = *(char *)((int)param_2 + 0x4a);
  }
  cVar6 = *(char *)((int)param_1 + 0x49);
  if (*(char *)((int)param_2 + 0x49) != '\x02') {
    cVar6 = *(char *)((int)param_2 + 0x49);
  }
  uVar11 = param_2[0xc];
  cVar24 = *(char *)((int)param_1 + 0x4e);
  if (*(char *)((int)param_2 + 0x4e) != '\x02') {
    cVar24 = *(char *)((int)param_2 + 0x4e);
  }
  uVar22 = param_1[0xc];
  if (uVar11 != 2) {
    uVar22 = uVar11;
  }
  uVar8 = param_2[10];
  puVar17 = param_2;
  if (uVar11 == 2) {
    puVar17 = param_1;
  }
  uVar11 = param_1[10];
  if (uVar8 != 2) {
    uVar11 = uVar8;
  }
  uVar9 = puVar17[0xd];
  if (uVar8 == 2) {
    param_2 = param_1;
  }
  uVar8 = param_2[0xb];
  FUN_013385f8(param_1 + 0xe);
  *param_1 = uVar12;
  param_1[1] = uVar14;
  param_1[2] = uVar18;
  param_1[3] = uVar25;
  param_1[4] = uVar26;
  param_1[5] = uVar7;
  param_1[6] = uVar13;
  param_1[7] = uVar15;
  param_1[8] = uVar19;
  param_1[9] = uVar20;
  *(char *)(param_1 + 0x11) = local_68;
  param_1[0xb] = uVar8;
  param_1[0xd] = uVar9;
  param_1[0xe] = (uint)local_84;
  param_1[0xf] = local_8c;
  param_1[0x10] = local_88;
  *(char *)((int)param_1 + 0x4f) = cVar23;
  *(char *)((int)param_1 + 0x4d) = cVar21;
  *(char *)(param_1 + 0x13) = cVar3;
  *(char *)((int)param_1 + 0x4b) = cVar4;
  *(char *)((int)param_1 + 0x4a) = cVar5;
  *(char *)((int)param_1 + 0x49) = cVar6;
  *(undefined1 *)((int)param_1 + 0x47) = local_26;
  param_1[10] = uVar11;
  param_1[0xc] = uVar22;
  *(char *)((int)param_1 + 0x4e) = cVar24;
  *(char *)(param_1 + 0x12) = cVar16;
  *(undefined2 *)((int)param_1 + 0x45) = local_28;
  return param_1;
}

