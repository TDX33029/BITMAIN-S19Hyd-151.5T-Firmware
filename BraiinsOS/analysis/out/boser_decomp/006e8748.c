// FUN_006e8748 @ 006e8748 size=800 calls_out=6 calls_in=3
// strings: MissingSlashMissingEqualMissingQuote | internal error: entered unreachable code

undefined8 FUN_006e8748(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  uVar9 = 1;
  if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
    iVar14 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[0x23];
    iVar13 = 0;
    iVar12 = 0;
    uVar11 = param_1[5];
    uVar7 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar14 == iVar1) {
      iVar12 = param_1[8];
      iVar13 = param_1[0xb];
    }
    if ((uVar7 == 2) && (uVar7 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar11 == param_1[3]) {
        FUN_0161d664();
      }
      puVar2 = (undefined1 *)(param_1[4] + uVar11 * 0x14);
      *puVar2 = 0;
      uVar7 = uVar11 + 1;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(int *)(puVar2 + 8) = iVar14;
      iVar1 = param_1[0x23];
      param_1[5] = uVar7;
    }
    bVar15 = iVar1 == iVar14;
    iVar10 = 0;
    if (bVar15) {
      iVar1 = param_1[8];
      uVar7 = param_1[0xb];
    }
    iVar8 = param_1[0x17];
    if (bVar15) {
      iVar10 = uVar7 + iVar1;
    }
    uVar7 = param_1[0x1e];
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      uVar3 = 1;
    }
    else {
      cVar6 = *(char *)((int)param_1 + 0x91);
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      if (cVar6 != '\0') {
        *(undefined1 *)((int)param_1 + 0x91) = 0;
      }
      uVar16 = FUN_006f5094(param_1,&DAT_00531047,2);
      uVar3 = (uint)(uVar16 >> 0x20);
      if ((uVar16 & 1) == 0) {
        uVar16 = (ulonglong)uVar3 << 0x20;
      }
      else {
        uVar16 = FUN_006f5094(uVar3,"\rMissingSlashMissingEqualMissingQuote",1);
      }
      uVar3 = (uint)(uVar16 >> 0x20);
      if ((uVar16 & 1) == 0) {
        lVar17 = (ulonglong)uVar3 << 0x20;
      }
      else {
        lVar17 = FUN_006f5094(uVar3,"\n",1);
      }
      param_1 = (int *)((ulonglong)lVar17 >> 0x20);
      uVar3 = (uint)lVar17;
      if (cVar6 != '\0') {
        *(char *)((int)param_1 + 0x91) = cVar6;
      }
    }
    cVar6 = (char)param_1[0x24];
    if ((uVar3 & 1) == 0) {
      if (cVar6 == '\x01') {
        FUN_006e82ec(param_1,3,iVar14,iVar12,iVar13,iVar10);
        cVar6 = (char)param_1[0x24];
      }
      if ((cVar6 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar3 = param_1[5];
        if (uVar3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,uVar3,&DAT_01c061d0);
        }
        pcVar4 = (char *)(param_1[4] + uVar11 * 0x14);
        if (*pcVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar4 + 4) = uVar3;
        iVar14 = param_1[5];
        iVar12 = param_1[0x22];
        if (iVar14 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar5 = (undefined2 *)(param_1[4] + iVar14 * 0x14);
        *puVar5 = 0x301;
        *(int *)(puVar5 + 8) = iVar12;
        *(uint *)(puVar5 + 2) = uVar11;
        *(undefined4 *)(puVar5 + 4) = 0;
        param_1[5] = iVar14 + 1;
      }
      uVar9 = 0;
      bVar15 = (char)param_1[0x1f] != '\0';
      cVar6 = '\0';
      if (bVar15) {
        cVar6 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar15 && cVar6 != '\0') {
        if (uVar7 < (uint)param_1[0x1e]) {
          iVar8 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,3,iVar8);
      }
    }
    else if (cVar6 != '\x01') {
      FUN_006e82ec(param_1,3,iVar14,iVar12,iVar13,iVar10);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar7 < (uint)param_1[0x1e]) {
          iVar8 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,3,iVar8);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar11 <= (uint)param_1[5])) {
        param_1[5] = uVar11;
      }
    }
  }
  return CONCAT44(param_1,uVar9);
}

