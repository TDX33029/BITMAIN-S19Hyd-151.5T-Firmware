// FUN_0136cc98 @ 0136cc98 size=832 calls_out=1 calls_in=2
// strings: 

uint * FUN_0136cc98(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  char cVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  uint local_98;
  uint local_94;
  int *local_90;
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
  
  cVar3 = (char)param_2[0x11];
  uVar14 = param_1[0x12];
  uVar19 = param_2[0x12];
  if (cVar3 == '\x03') {
    cVar3 = (char)param_1[0x11];
    if (cVar3 == '\x03') {
      cVar3 = '\x03';
    }
    else if (cVar3 == '\x02') {
      cVar3 = '\x02';
    }
    else {
      local_90 = (int *)param_1[0xe];
      do {
        iVar13 = *local_90;
        bVar2 = (bool)hasExclusiveAccess(local_90);
      } while (!bVar2);
      *local_90 = iVar13 + 1;
      if (iVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x136cfd4);
        (*pcVar1)();
      }
      local_98 = param_1[0xf];
      local_94 = param_1[0x10];
    }
  }
  else {
    local_90 = (int *)param_2[0xe];
    local_98 = param_2[0xf];
    local_94 = param_2[0x10];
    local_4a = *(undefined1 *)((int)param_2 + 0x47);
    local_4c = *(undefined2 *)((int)param_2 + 0x45);
  }
  local_48 = param_1[2];
  uStack_44 = param_1[3];
  uStack_40 = param_1[4];
  uStack_3c = param_1[5];
  local_38 = param_1[6];
  uStack_34 = param_1[7];
  uStack_30 = param_1[8];
  uStack_2c = param_1[9];
  uVar17 = param_1[1];
  uVar20 = *param_1;
  if ((*param_2 & 1) != 0) {
    local_48 = param_2[2];
    uStack_44 = param_2[3];
    uStack_40 = param_2[4];
    uStack_3c = param_2[5];
    local_38 = param_2[6];
    uStack_34 = param_2[7];
    uStack_30 = param_2[8];
    uStack_2c = param_2[9];
    uVar17 = param_2[1];
    uVar20 = *param_2;
  }
  cVar18 = (char)uVar14;
  if ((char)uVar19 != '\x02') {
    cVar18 = (char)uVar19;
  }
  cVar4 = *(char *)((int)param_1 + 0x49);
  if (*(char *)((int)param_2 + 0x49) != '\x02') {
    cVar4 = *(char *)((int)param_2 + 0x49);
  }
  cVar5 = *(char *)((int)param_1 + 0x4a);
  if (*(char *)((int)param_2 + 0x4a) != '\x02') {
    cVar5 = *(char *)((int)param_2 + 0x4a);
  }
  cVar6 = *(char *)((int)param_1 + 0x4f);
  if (*(char *)((int)param_2 + 0x4f) != '\x03') {
    cVar6 = *(char *)((int)param_2 + 0x4f);
  }
  cVar7 = *(char *)((int)param_1 + 0x4b);
  if (*(char *)((int)param_2 + 0x4b) != '\x02') {
    cVar7 = *(char *)((int)param_2 + 0x4b);
  }
  cVar8 = (char)param_1[0x13];
  if ((char)param_2[0x13] != '\x02') {
    cVar8 = (char)param_2[0x13];
  }
  cVar9 = *(char *)((int)param_1 + 0x4d);
  if (*(char *)((int)param_2 + 0x4d) != '\x02') {
    cVar9 = *(char *)((int)param_2 + 0x4d);
  }
  uVar14 = param_2[0xc];
  cVar16 = *(char *)((int)param_1 + 0x4e);
  if (*(char *)((int)param_2 + 0x4e) != '\x02') {
    cVar16 = *(char *)((int)param_2 + 0x4e);
  }
  uVar10 = param_2[10];
  uVar19 = param_1[0xc];
  if (uVar14 != 2) {
    uVar19 = uVar14;
  }
  puVar15 = param_2;
  if (uVar14 == 2) {
    puVar15 = param_1;
  }
  uVar14 = param_1[10];
  if (uVar10 != 2) {
    uVar14 = uVar10;
  }
  uVar11 = puVar15[0xd];
  if (uVar10 == 2) {
    param_2 = param_1;
  }
  uVar10 = param_2[0xb];
  if ((char)param_1[0x11] != '\x03' && (char)param_1[0x11] != '\x02') {
    piVar12 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0xe],param_1[0xf]);
    }
  }
  *param_1 = uVar20;
  param_1[1] = uVar17;
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  *(char *)(param_1 + 0x11) = cVar3;
  param_1[0xb] = uVar10;
  param_1[0xd] = uVar11;
  param_1[0xe] = (uint)local_90;
  param_1[0xf] = local_98;
  param_1[0x10] = local_94;
  *(char *)((int)param_1 + 0x4f) = cVar6;
  *(char *)((int)param_1 + 0x4d) = cVar9;
  *(char *)(param_1 + 0x13) = cVar8;
  *(char *)((int)param_1 + 0x4b) = cVar7;
  *(char *)((int)param_1 + 0x4a) = cVar5;
  *(char *)((int)param_1 + 0x49) = cVar4;
  *(undefined1 *)((int)param_1 + 0x47) = local_4a;
  param_1[10] = uVar14;
  param_1[0xc] = uVar19;
  *(char *)((int)param_1 + 0x4e) = cVar16;
  *(char *)(param_1 + 0x12) = cVar18;
  *(undefined2 *)((int)param_1 + 0x45) = local_4c;
  return param_1;
}

