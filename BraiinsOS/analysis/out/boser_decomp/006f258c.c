// FUN_006f258c @ 006f258c size=636 calls_out=6 calls_in=3
// strings: internal error: entered unreachable code

undefined8 FUN_006f258c(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  ulonglong uVar16;
  
  uVar12 = 1;
  if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
    iVar8 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[0x23];
    iVar13 = 0;
    iVar10 = 0;
    uVar11 = param_1[5];
    uVar6 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar8 == iVar1) {
      iVar10 = param_1[8];
      iVar13 = param_1[0xb];
    }
    if ((uVar6 == 2) && (uVar6 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar11 == param_1[3]) {
        FUN_0161d664();
      }
      puVar2 = (undefined1 *)(param_1[4] + uVar11 * 0x14);
      *puVar2 = 0;
      uVar6 = uVar11 + 1;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(int *)(puVar2 + 8) = iVar8;
      iVar1 = param_1[0x23];
      param_1[5] = uVar6;
    }
    bVar15 = iVar1 == iVar8;
    iVar14 = 0;
    if (bVar15) {
      iVar1 = param_1[8];
      uVar6 = param_1[0xb];
    }
    iVar9 = param_1[0x17];
    if (bVar15) {
      iVar14 = uVar6 + iVar1;
    }
    uVar6 = param_1[0x1e];
    uVar16 = FUN_006f5094(param_1,&DAT_0056d030,4);
    param_1 = (int *)(uVar16 >> 0x20);
    cVar5 = (char)param_1[0x24];
    if ((uVar16 & 1) == 0) {
      if (cVar5 == '\x01') {
        FUN_006e82ec(param_1,0x3d,iVar8,iVar10,iVar13,iVar14);
        cVar5 = (char)param_1[0x24];
      }
      if ((cVar5 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar7 = param_1[5];
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,uVar7,&DAT_01c061d0);
        }
        pcVar3 = (char *)(param_1[4] + uVar11 * 0x14);
        if (*pcVar3 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar3 + 4) = uVar7;
        iVar8 = param_1[5];
        iVar10 = param_1[0x22];
        if (iVar8 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar4 = (undefined2 *)(param_1[4] + iVar8 * 0x14);
        *puVar4 = 0x3d01;
        *(int *)(puVar4 + 8) = iVar10;
        *(uint *)(puVar4 + 2) = uVar11;
        *(undefined4 *)(puVar4 + 4) = 0;
        param_1[5] = iVar8 + 1;
      }
      uVar12 = 0;
      bVar15 = (char)param_1[0x1f] != '\0';
      cVar5 = '\0';
      if (bVar15) {
        cVar5 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar15 && cVar5 != '\0') {
        if (uVar6 < (uint)param_1[0x1e]) {
          iVar9 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x3d,iVar9);
      }
    }
    else if (cVar5 != '\x01') {
      FUN_006e82ec(param_1,0x3d,iVar8,iVar10,iVar13,iVar14);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar6 < (uint)param_1[0x1e]) {
          iVar9 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x3d,iVar9);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar11 <= (uint)param_1[5])) {
        param_1[5] = uVar11;
      }
    }
  }
  return CONCAT44(param_1,uVar12);
}

