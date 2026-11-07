// FUN_006ee634 @ 006ee634 size=836 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code

undefined8 FUN_006ee634(int *param_1)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  uVar16 = 1;
  if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
    iVar18 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[0x23];
    iVar13 = 0;
    iVar11 = 0;
    uVar15 = param_1[5];
    uVar7 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar18 == iVar1) {
      iVar11 = param_1[8];
      iVar13 = param_1[0xb];
    }
    uVar8 = uVar15;
    if ((uVar7 == 2) && (uVar7 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar15 == param_1[3]) {
        FUN_0161d664();
      }
      uVar7 = uVar15 * 5;
      puVar2 = (undefined1 *)(param_1[4] + uVar15 * 0x14);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(int *)(puVar2 + 8) = iVar18;
      iVar1 = param_1[0x23];
      param_1[5] = uVar15 + 1;
      uVar8 = uVar15 + 1;
    }
    bVar19 = iVar1 == iVar18;
    iVar17 = 0;
    if (bVar19) {
      iVar1 = param_1[8];
      uVar7 = param_1[0xb];
    }
    if (bVar19) {
      iVar17 = uVar7 + iVar1;
    }
    iVar1 = param_1[0x17];
    uVar7 = param_1[0x1e];
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      uVar3 = 1;
    }
    else {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar9 = param_1[0x20];
      iVar12 = param_1[0x21];
      iVar14 = param_1[0x22];
      uVar20 = FUN_006f5094(param_1,"$",1);
      uVar10 = (undefined4)(uVar20 >> 0x20);
      uVar21 = CONCAT44(uVar10,1);
      if ((uVar20 & 1) == 0) {
        uVar21 = FUN_006f5184(uVar10);
      }
      uVar10 = (undefined4)(uVar21 >> 0x20);
      if ((uVar21 & 1) == 0) {
        uVar21 = FUN_006f4a10(uVar10);
      }
      else {
        uVar21 = CONCAT44(uVar10,1);
      }
      param_1 = (int *)(uVar21 >> 0x20);
      uVar3 = (uint)uVar21;
      if ((uVar21 & 1) != 0) {
        param_1[0x20] = iVar9;
        param_1[0x21] = iVar12;
        param_1[0x22] = iVar14;
        uVar3 = 1;
        if (uVar8 <= (uint)param_1[5]) {
          param_1[5] = uVar8;
        }
      }
    }
    cVar6 = (char)param_1[0x24];
    if ((uVar3 & 1) == 0) {
      if (cVar6 == '\x01') {
        FUN_006e82ec(param_1,0x30,iVar18,iVar11,iVar13,iVar17);
        cVar6 = (char)param_1[0x24];
      }
      if ((cVar6 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar8 = param_1[5];
        if (uVar8 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar15,uVar8,&DAT_01c061d0);
        }
        pcVar4 = (char *)(param_1[4] + uVar15 * 0x14);
        if (*pcVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar4 + 4) = uVar8;
        iVar18 = param_1[5];
        iVar11 = param_1[0x22];
        if (iVar18 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar5 = (undefined2 *)(param_1[4] + iVar18 * 0x14);
        *puVar5 = 0x3001;
        *(uint *)(puVar5 + 2) = uVar15;
        *(int *)(puVar5 + 8) = iVar11;
        *(undefined4 *)(puVar5 + 4) = 0;
        param_1[5] = iVar18 + 1;
      }
      uVar16 = 0;
      bVar19 = (char)param_1[0x1f] != '\0';
      cVar6 = '\0';
      if (bVar19) {
        cVar6 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar19 && cVar6 != '\0') {
        if (uVar7 < (uint)param_1[0x1e]) {
          iVar1 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x30,iVar1);
      }
    }
    else if (cVar6 != '\x01') {
      FUN_006e82ec(param_1,0x30,iVar18,iVar11,iVar13,iVar17);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar7 < (uint)param_1[0x1e]) {
          iVar1 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x30,iVar1);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar15 <= (uint)param_1[5])) {
        param_1[5] = uVar15;
      }
    }
  }
  return CONCAT44(param_1,uVar16);
}

