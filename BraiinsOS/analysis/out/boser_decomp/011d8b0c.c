// FUN_011d8b0c @ 011d8b0c size=968 calls_out=3 calls_in=5
// strings: 

undefined8 FUN_011d8b0c(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  undefined4 uVar23;
  int *piVar24;
  uint *puVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  undefined4 local_9c;
  undefined4 local_8c;
  
  uVar4 = param_3[0x10];
  uVar5 = param_3[0x12];
  uVar6 = param_3[0x13];
  uVar7 = param_3[0x14];
  uVar8 = param_3[0x15];
  uVar9 = param_3[9];
  uVar10 = param_3[10];
  uVar11 = param_3[0xc];
  uVar12 = param_3[0xd];
  uVar29 = param_3[0xf];
  puVar25 = (uint *)param_3[0x11];
  uVar3 = param_3[6];
  uVar17 = param_3[7];
  piVar21 = (int *)param_3[8];
  piVar27 = (int *)param_3[0xb];
  piVar24 = (int *)param_3[0xe];
  piVar20 = (int *)param_3[1];
  uVar18 = param_3[2];
  uVar22 = param_3[3];
  piVar26 = (int *)param_3[4];
  uVar28 = param_3[5];
  uVar19 = 0;
  if ((*param_3 & 1) != 0) {
    do {
      iVar16 = *piVar20;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = iVar16 + 1;
    uVar19 = 1;
    if (iVar16 < 0) goto LAB_011d8d4c;
  }
  if (uVar22 == 2) {
    uVar13 = 2;
  }
  else {
    uVar13 = 0;
    if ((uVar22 & 1) != 0) {
      do {
        iVar16 = *piVar26;
        bVar2 = (bool)hasExclusiveAccess(piVar26);
      } while (!bVar2);
      *piVar26 = iVar16 + 1;
      uVar13 = 1;
      if (iVar16 < 0) goto LAB_011d8d4c;
    }
  }
  local_8c = 0;
  if ((uVar17 & 1) != 0) {
    do {
      iVar16 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar16 + 1;
    local_8c = 1;
    if (iVar16 < 0) goto LAB_011d8d4c;
  }
  if (uVar10 == 2) {
    uVar14 = 2;
  }
  else {
    uVar14 = 0;
    if ((uVar10 & 1) != 0) {
      do {
        iVar16 = *piVar27;
        bVar2 = (bool)hasExclusiveAccess(piVar27);
      } while (!bVar2);
      *piVar27 = iVar16 + 1;
      uVar14 = 1;
      if (iVar16 < 0) goto LAB_011d8d4c;
    }
  }
  local_9c = 0;
  if ((uVar12 & 1) != 0) {
    do {
      iVar16 = *piVar24;
      bVar2 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar2);
    *piVar24 = iVar16 + 1;
    local_9c = 1;
    if (iVar16 < 0) goto LAB_011d8d4c;
  }
  if (uVar4 == 2) {
    uVar23 = 2;
  }
  else if ((uVar4 & 1) == 0) {
    uVar23 = 0;
  }
  else {
    do {
      uVar4 = *puVar25;
      bVar2 = (bool)hasExclusiveAccess(puVar25);
    } while (!bVar2);
    *puVar25 = uVar4 + 1;
    uVar23 = 1;
    if (0x7fffffff < uVar4) {
LAB_011d8d4c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11d8d4c);
      (*pcVar1)();
    }
  }
  puVar15 = (undefined4 *)thunk_FUN_01be5118(0x60);
  if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x60);
  }
  puVar15[0x17] = param_2;
  puVar15[0xf] = uVar29;
  puVar15[0x10] = uVar23;
  puVar15[0x12] = uVar5;
  puVar15[0x13] = uVar6;
  puVar15[0x14] = uVar7;
  puVar15[0x15] = uVar8;
  puVar15[0x16] = param_1;
  puVar15[7] = local_8c;
  puVar15[10] = uVar14;
  puVar15[0xc] = uVar11;
  puVar15[0xd] = local_9c;
  *(short *)(puVar15 + 6) = (short)uVar3;
  puVar15[0x11] = puVar25;
  *puVar15 = uVar19;
  puVar15[1] = piVar20;
  puVar15[2] = uVar18;
  puVar15[3] = uVar13;
  puVar15[5] = uVar28;
  puVar15[8] = piVar21;
  puVar15[9] = uVar9;
  puVar15[0xb] = piVar27;
  puVar15[0xe] = piVar24;
  puVar15[4] = piVar26;
  FUN_00f80ea8(param_3);
  return CONCAT44(&DAT_01c1bda8,puVar15);
}

