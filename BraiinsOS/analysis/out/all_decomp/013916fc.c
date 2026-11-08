// FUN_013916fc @ 013916fc size=776 calls_out=1 calls_in=2
// strings: 

uint * FUN_013916fc(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint local_80;
  uint local_7c;
  int *local_78;
  undefined2 local_4c;
  undefined1 local_4a;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  cVar3 = (char)param_2[0x13];
  uVar16 = param_1[0x14];
  uVar19 = param_2[0x14];
  if (cVar3 == '\x03') {
    cVar3 = (char)param_1[0x13];
    if (cVar3 == '\x03') {
      cVar3 = '\x03';
    }
    else if (cVar3 == '\x02') {
      cVar3 = '\x02';
    }
    else {
      local_78 = (int *)param_1[0x10];
      do {
        iVar6 = *local_78;
        bVar2 = (bool)hasExclusiveAccess(local_78);
      } while (!bVar2);
      *local_78 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1391a00);
        (*pcVar1)();
      }
      local_7c = param_1[0x11];
      local_80 = param_1[0x12];
    }
  }
  else {
    local_78 = (int *)param_2[0x10];
    local_7c = param_2[0x11];
    local_80 = param_2[0x12];
    local_4a = *(undefined1 *)((int)param_2 + 0x4f);
    local_4c = *(undefined2 *)((int)param_2 + 0x4d);
  }
  local_48 = param_1[2];
  uStack_44 = param_1[3];
  uStack_40 = param_1[4];
  uStack_3c = param_1[5];
  local_38 = param_1[6];
  uStack_34 = param_1[7];
  uStack_30 = param_1[8];
  uStack_2c = param_1[9];
  uVar17 = *param_1;
  uVar18 = param_1[1];
  if ((*param_2 & 1) != 0) {
    local_48 = param_2[2];
    uStack_44 = param_2[3];
    uStack_40 = param_2[4];
    uStack_3c = param_2[5];
    local_38 = param_2[6];
    uStack_34 = param_2[7];
    uStack_30 = param_2[8];
    uStack_2c = param_2[9];
    uVar17 = *param_2;
    uVar18 = param_2[1];
  }
  cVar7 = (char)uVar16;
  if ((char)uVar19 != '\x02') {
    cVar7 = (char)uVar19;
  }
  cVar8 = *(char *)((int)param_1 + 0x51);
  if (*(char *)((int)param_2 + 0x51) != '\x02') {
    cVar8 = *(char *)((int)param_2 + 0x51);
  }
  cVar9 = *(char *)((int)param_1 + 0x52);
  if (*(char *)((int)param_2 + 0x52) != '\x02') {
    cVar9 = *(char *)((int)param_2 + 0x52);
  }
  cVar10 = *(char *)((int)param_1 + 0x53);
  if (*(char *)((int)param_2 + 0x53) != '\x02') {
    cVar10 = *(char *)((int)param_2 + 0x53);
  }
  cVar11 = (char)param_1[0x15];
  if ((char)param_2[0x15] != '\x02') {
    cVar11 = (char)param_2[0x15];
  }
  uVar16 = param_2[0xe];
  cVar20 = *(char *)((int)param_1 + 0x55);
  if (*(char *)((int)param_2 + 0x55) != '\x02') {
    cVar20 = *(char *)((int)param_2 + 0x55);
  }
  uVar12 = param_2[0xc];
  uVar19 = param_1[0xe];
  if (uVar16 != 2) {
    uVar19 = uVar16;
  }
  puVar14 = param_2;
  if (uVar16 == 2) {
    puVar14 = param_1;
  }
  uVar16 = param_1[0xc];
  if (uVar12 != 2) {
    uVar16 = uVar12;
  }
  uVar13 = puVar14[0xf];
  puVar14 = param_2;
  if (uVar12 == 2) {
    puVar14 = param_1;
  }
  puVar5 = param_2;
  if (param_2[10] == 0) {
    puVar5 = param_1;
  }
  uVar12 = puVar5[0xb];
  uVar21 = param_1[10];
  uVar15 = puVar14[0xd];
  if (param_2[10] != 0) {
    uVar21 = 1;
  }
  if ((char)param_1[0x13] != '\x03' && (char)param_1[0x13] != '\x02') {
    piVar4 = (int *)param_1[0x10];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x10],param_1[0x11]);
    }
  }
  *param_1 = uVar17;
  param_1[1] = uVar18;
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  *(char *)(param_1 + 0x13) = cVar3;
  param_1[0xb] = uVar12;
  param_1[0xd] = uVar15;
  param_1[0xf] = uVar13;
  param_1[0x10] = (uint)local_78;
  param_1[0x11] = local_7c;
  *(char *)(param_1 + 0x15) = cVar11;
  *(char *)((int)param_1 + 0x53) = cVar10;
  *(char *)((int)param_1 + 0x52) = cVar9;
  *(char *)((int)param_1 + 0x51) = cVar8;
  *(undefined1 *)((int)param_1 + 0x4f) = local_4a;
  param_1[0x12] = local_80;
  param_1[10] = uVar21;
  param_1[0xc] = uVar16;
  param_1[0xe] = uVar19;
  *(char *)((int)param_1 + 0x55) = cVar20;
  *(char *)(param_1 + 0x14) = cVar7;
  *(undefined2 *)((int)param_1 + 0x4d) = local_4c;
  return param_1;
}

