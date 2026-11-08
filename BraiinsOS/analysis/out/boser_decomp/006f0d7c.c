// FUN_006f0d7c @ 006f0d7c size=1132 calls_out=10 calls_in=1
// strings: internal error: entered unreachable code

undefined8 FUN_006f0d7c(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  bool bVar20;
  ulonglong uVar21;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  uVar19 = 1;
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) goto LAB_006f1190;
  iVar12 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar1 = param_1[0x23];
  iVar15 = 0;
  iVar16 = 0;
  uVar17 = param_1[5];
  if (iVar12 == iVar1) {
    iVar16 = param_1[8];
    iVar15 = param_1[0xb];
  }
  uVar8 = uVar17;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar17 == param_1[3]) {
      FUN_0161d664();
    }
    puVar2 = (undefined1 *)(param_1[4] + uVar17 * 0x14);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(int *)(puVar2 + 8) = iVar12;
    iVar1 = param_1[0x23];
    param_1[5] = uVar17 + 1;
    uVar8 = uVar17 + 1;
  }
  iVar6 = 0;
  if (iVar1 == iVar12) {
    iVar6 = param_1[0xb] + param_1[8];
  }
  iVar18 = param_1[0x17];
  uVar13 = param_1[0x1e];
  iVar1 = *param_1;
  uVar10 = param_1[1];
  if ((iVar1 == 1) && ((uint)param_1[2] <= uVar10)) {
    uVar10 = 1;
  }
  else {
    piVar14 = param_1 + 0x20;
    if (iVar1 == 0) {
      local_40 = *piVar14;
      iStack_3c = param_1[0x21];
      iStack_38 = param_1[0x22];
LAB_006f0ef4:
      iVar1 = param_1[0x24];
      *(bool *)(param_1 + 0x24) = (char)iVar1 != '\x01';
      iVar7 = *piVar14;
      iVar9 = param_1[0x21];
      iVar11 = param_1[0x22];
      FUN_00700e8c(param_1 + 0xc);
      uVar21 = FUN_006f5094(param_1,&DAT_0052d60d,3);
      uVar10 = (uint)(uVar21 >> 0x20);
      if ((uVar21 & 1) == 0) {
        uVar21 = (ulonglong)uVar10 << 0x20;
      }
      else {
        uVar21 = FUN_006f5094(uVar10,&DAT_0056ed2c,4);
      }
      param_1 = (int *)(uVar21 >> 0x20);
      param_1[0x20] = iVar7;
      param_1[0x21] = iVar9;
      param_1[0x22] = iVar11;
      *(char *)(param_1 + 0x24) = (char)iVar1;
      if ((uVar21 & 1) == 0) {
        FUN_00700d14(param_1 + 0xc);
        goto LAB_006f0fbc;
      }
      FUN_00700d14(param_1 + 0xc);
      uVar21 = FUN_006f5184(param_1);
    }
    else {
      param_1[1] = uVar10 + 1;
      local_40 = *piVar14;
      iStack_3c = param_1[0x21];
      iStack_38 = param_1[0x22];
      if ((iVar1 == 0) || (uVar10 + 1 < (uint)param_1[2])) {
        param_1[1] = uVar10 + 2;
        goto LAB_006f0ef4;
      }
LAB_006f0fbc:
      uVar21 = CONCAT44(param_1,1);
    }
    uVar19 = (undefined4)(uVar21 >> 0x20);
    if ((uVar21 & 1) == 0) {
      uVar21 = FUN_006f581c(uVar19);
    }
    else {
      uVar21 = CONCAT44(uVar19,1);
    }
    param_1 = (int *)(uVar21 >> 0x20);
    uVar10 = (uint)uVar21;
    if ((uVar21 & 1) != 0) {
      param_1[0x20] = local_40;
      param_1[0x21] = iStack_3c;
      param_1[0x22] = iStack_38;
      uVar10 = 1;
      if (uVar8 <= (uint)param_1[5]) {
        param_1[5] = uVar8;
      }
    }
  }
  uVar19 = 1;
  if ((uVar10 & 1) == 0) {
    uVar21 = ZEXT48(param_1) << 0x20;
  }
  else {
    uVar21 = FUN_006f5094(param_1,&DAT_0056ed2c,4);
  }
  param_1 = (int *)(uVar21 >> 0x20);
  cVar5 = (char)param_1[0x24];
  if ((uVar21 & 1) == 0) {
    if (cVar5 == '\x01') {
      FUN_006e82ec(param_1,0x38,iVar12,iVar16,iVar15,iVar6);
      cVar5 = (char)param_1[0x24];
    }
    if ((cVar5 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar8 = param_1[5];
      if (uVar8 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,uVar8,&DAT_01c061d0);
      }
      pcVar3 = (char *)(param_1[4] + uVar17 * 0x14);
      if (*pcVar3 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar3 + 4) = uVar8;
      iVar12 = param_1[5];
      iVar16 = param_1[0x22];
      if (iVar12 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar4 = (undefined2 *)(param_1[4] + iVar12 * 0x14);
      *puVar4 = 0x3801;
      *(uint *)(puVar4 + 2) = uVar17;
      *(int *)(puVar4 + 8) = iVar16;
      *(undefined4 *)(puVar4 + 4) = 0;
      param_1[5] = iVar12 + 1;
    }
    uVar19 = 0;
    bVar20 = (char)param_1[0x1f] != '\0';
    cVar5 = '\0';
    if (bVar20) {
      cVar5 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar20 && cVar5 != '\0') {
      if (uVar13 < (uint)param_1[0x1e]) {
        iVar18 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x38,iVar18);
    }
  }
  else if (cVar5 != '\x01') {
    FUN_006e82ec(param_1,0x38,iVar12,iVar16,iVar15,iVar6);
    if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar13 < (uint)param_1[0x1e]) {
        iVar18 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x38,iVar18);
    }
    if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
       (uVar17 <= (uint)param_1[5])) {
      param_1[5] = uVar17;
    }
  }
LAB_006f1190:
  return CONCAT44(param_1,uVar19);
}

