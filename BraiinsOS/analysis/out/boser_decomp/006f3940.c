// FUN_006f3940 @ 006f3940 size=948 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code

undefined8 FUN_006f3940(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  if ((*param_1 != 1) || (uVar12 = 1, (uint)param_1[1] < (uint)param_1[2])) {
    iVar18 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar2 = param_1[0x23];
    iVar10 = 0;
    iVar17 = 0;
    uVar13 = param_1[5];
    uVar7 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar18 == iVar2) {
      iVar17 = param_1[8];
      iVar10 = param_1[0xb];
    }
    uVar15 = uVar13;
    if ((uVar7 == 2) && (uVar7 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar13 == param_1[3]) {
        FUN_0161d664();
      }
      uVar7 = uVar13 * 5;
      puVar3 = (undefined1 *)(param_1[4] + uVar13 * 0x14);
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(int *)(puVar3 + 8) = iVar18;
      iVar2 = param_1[0x23];
      param_1[5] = uVar13 + 1;
      uVar15 = uVar13 + 1;
    }
    bVar19 = iVar2 == iVar18;
    if (bVar19) {
      iVar2 = param_1[8];
    }
    iVar8 = 0;
    if (bVar19) {
      uVar7 = param_1[0xb];
    }
    iVar11 = param_1[0x17];
    uVar16 = param_1[0x1e];
    if (bVar19) {
      iVar8 = uVar7 + iVar2;
    }
    if ((*param_1 != 1) || (bVar19 = true, (uint)param_1[1] < (uint)param_1[2])) {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar2 = param_1[0x20];
      iVar9 = param_1[0x21];
      iVar14 = param_1[0x22];
      uVar20 = FUN_006f5094(param_1,"@",1);
      uVar12 = (undefined4)(uVar20 >> 0x20);
      uVar21 = CONCAT44(uVar12,1);
      if ((uVar20 & 1) == 0) {
        uVar21 = FUN_006f5184(uVar12);
      }
      uVar12 = (undefined4)(uVar21 >> 0x20);
      if ((uVar21 & 1) == 0) {
        uVar21 = FUN_006f4a10(uVar12);
      }
      else {
        uVar21 = CONCAT44(uVar12,1);
      }
      uVar12 = (undefined4)(uVar21 >> 0x20);
      if ((uVar21 & 1) == 0) {
        uVar21 = FUN_006f5184(uVar12);
      }
      else {
        uVar21 = CONCAT44(uVar12,1);
      }
      param_1 = (int *)(uVar21 >> 0x20);
      bVar6 = true;
      if ((uVar21 & 1) == 0) {
        if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          param_1 = (int *)FUN_006f3d44(param_1);
          bVar6 = false;
        }
      }
      bVar19 = false;
      if (bVar6) {
        param_1[0x20] = iVar2;
        param_1[0x21] = iVar9;
        param_1[0x22] = iVar14;
        bVar19 = true;
        if (uVar15 <= (uint)param_1[5]) {
          param_1[5] = uVar15;
        }
      }
    }
    cVar1 = (char)param_1[0x24];
    if (bVar19) {
      uVar12 = 1;
      if (cVar1 != '\x01') {
        FUN_006e82ec(param_1,0x48,iVar18,iVar17,iVar10,iVar8);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar16 < (uint)param_1[0x1e]) {
            iVar11 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x48,iVar11);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar13 <= (uint)param_1[5])) {
          param_1[5] = uVar13;
        }
      }
    }
    else {
      if (cVar1 == '\x01') {
        FUN_006e82ec(param_1,0x48,iVar18,iVar17,iVar10,iVar8);
        cVar1 = (char)param_1[0x24];
      }
      if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar7 = param_1[5];
        if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar13,uVar7,&DAT_01c061d0);
        }
        pcVar4 = (char *)(param_1[4] + uVar13 * 0x14);
        if (*pcVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar4 + 4) = uVar7;
        iVar17 = param_1[5];
        iVar18 = param_1[0x22];
        if (iVar17 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar5 = (undefined2 *)(param_1[4] + iVar17 * 0x14);
        *puVar5 = 0x4801;
        *(int *)(puVar5 + 8) = iVar18;
        *(uint *)(puVar5 + 2) = uVar13;
        *(undefined4 *)(puVar5 + 4) = 0;
        param_1[5] = iVar17 + 1;
      }
      uVar12 = 0;
      bVar19 = (char)param_1[0x1f] != '\0';
      cVar1 = '\0';
      if (bVar19) {
        cVar1 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar19 && cVar1 != '\0') {
        if (uVar16 < (uint)param_1[0x1e]) {
          iVar11 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x48,iVar11);
      }
    }
  }
  return CONCAT44(param_1,uVar12);
}

