// FUN_006f2cfc @ 006f2cfc size=904 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code

undefined8 FUN_006f2cfc(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined4 local_34;
  
  local_34 = 1;
  if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
    iVar17 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[0x23];
    iVar16 = 0;
    iVar14 = 0;
    uVar11 = param_1[5];
    uVar7 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar17 == iVar1) {
      iVar14 = param_1[8];
      iVar16 = param_1[0xb];
    }
    uVar8 = uVar11;
    if ((uVar7 == 2) && (uVar7 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar11 == param_1[3]) {
        FUN_0161d664();
      }
      uVar7 = uVar11 * 5;
      puVar2 = (undefined1 *)(param_1[4] + uVar11 * 0x14);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(int *)(puVar2 + 8) = iVar17;
      iVar1 = param_1[0x23];
      param_1[5] = uVar11 + 1;
      uVar8 = uVar11 + 1;
    }
    bVar18 = iVar1 == iVar17;
    iVar12 = 0;
    if (bVar18) {
      iVar1 = param_1[8];
      uVar7 = param_1[0xb];
    }
    iVar15 = param_1[0x17];
    if (bVar18) {
      iVar12 = uVar7 + iVar1;
    }
    uVar7 = param_1[0x1e];
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      uVar3 = 1;
    }
    else {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[0x20];
      iVar9 = param_1[0x21];
      iVar13 = param_1[0x22];
      uVar19 = FUN_006f4a10(param_1);
      uVar10 = (undefined4)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        uVar19 = FUN_006f5184(uVar10);
      }
      else {
        uVar19 = CONCAT44(uVar10,1);
      }
      uVar10 = (undefined4)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        uVar19 = FUN_006f5094(uVar10,":",1);
      }
      else {
        uVar19 = CONCAT44(uVar10,1);
      }
      uVar10 = (undefined4)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        uVar19 = FUN_006f5184(uVar10);
      }
      else {
        uVar19 = CONCAT44(uVar10,1);
      }
      uVar10 = (undefined4)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        uVar19 = FUN_006ecb50(uVar10);
      }
      else {
        uVar19 = CONCAT44(uVar10,1);
      }
      param_1 = (int *)(uVar19 >> 0x20);
      uVar3 = (uint)uVar19;
      if ((uVar19 & 1) != 0) {
        param_1[0x20] = iVar1;
        param_1[0x21] = iVar9;
        param_1[0x22] = iVar13;
        uVar3 = 1;
        if (uVar8 <= (uint)param_1[5]) {
          param_1[5] = uVar8;
        }
      }
    }
    cVar6 = (char)param_1[0x24];
    if ((uVar3 & 1) == 0) {
      if (cVar6 == '\x01') {
        FUN_006e82ec(param_1,0x43,iVar17,iVar14,iVar16,iVar12);
        cVar6 = (char)param_1[0x24];
      }
      if ((cVar6 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar8 = param_1[5];
        if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,uVar8,&DAT_01c061d0);
        }
        pcVar4 = (char *)(param_1[4] + uVar11 * 0x14);
        if (*pcVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar4 + 4) = uVar8;
        iVar14 = param_1[5];
        iVar17 = param_1[0x22];
        if (iVar14 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar5 = (undefined2 *)(param_1[4] + iVar14 * 0x14);
        *puVar5 = 0x4301;
        *(int *)(puVar5 + 8) = iVar17;
        *(uint *)(puVar5 + 2) = uVar11;
        *(undefined4 *)(puVar5 + 4) = 0;
        param_1[5] = iVar14 + 1;
      }
      local_34 = 0;
      bVar18 = (char)param_1[0x1f] != '\0';
      cVar6 = '\0';
      if (bVar18) {
        cVar6 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar18 && cVar6 != '\0') {
        if (uVar7 < (uint)param_1[0x1e]) {
          iVar15 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x43,iVar15);
      }
    }
    else if (cVar6 != '\x01') {
      FUN_006e82ec(param_1,0x43,iVar17,iVar14,iVar16,iVar12);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar7 < (uint)param_1[0x1e]) {
          iVar15 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x43,iVar15);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar11 <= (uint)param_1[5])) {
        param_1[5] = uVar11;
      }
    }
  }
  return CONCAT44(param_1,local_34);
}

