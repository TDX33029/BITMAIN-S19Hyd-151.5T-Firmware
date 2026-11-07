// FUN_006ea90c @ 006ea90c size=1196 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ea90c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  
  uVar21 = 1;
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) goto LAB_006ead5c;
  iVar24 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar2 = param_1[0x23];
  iVar22 = 0;
  iVar17 = 0;
  uVar23 = param_1[5];
  uVar9 = (uint)*(byte *)(param_1 + 0x24);
  if (iVar24 == iVar2) {
    iVar17 = param_1[8];
    iVar22 = param_1[0xb];
  }
  uVar11 = uVar23;
  if ((uVar9 == 2) && (uVar9 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar23 == param_1[3]) {
      FUN_0161d664();
    }
    uVar9 = uVar23 * 5;
    puVar3 = (undefined1 *)(param_1[4] + uVar23 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar24;
    iVar2 = param_1[0x23];
    param_1[5] = uVar23 + 1;
    uVar11 = uVar23 + 1;
  }
  bVar25 = iVar2 == iVar24;
  iVar16 = 0;
  if (bVar25) {
    iVar2 = param_1[8];
    uVar9 = param_1[0xb];
  }
  if (bVar25) {
    iVar16 = uVar9 + iVar2;
  }
  iVar2 = param_1[0x17];
  uVar9 = param_1[0x1e];
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
LAB_006eac0c:
    uVar27 = CONCAT44(param_1,1);
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar13 = param_1[0x20];
    iVar18 = param_1[0x21];
    iVar19 = param_1[0x22];
    uVar26 = FUN_006f5094(param_1,"{",1);
    uVar15 = (undefined4)(uVar26 >> 0x20);
    uVar27 = CONCAT44(uVar15,1);
    if ((uVar26 & 1) == 0) {
      uVar27 = FUN_006f5184(uVar15);
    }
    piVar5 = (int *)(uVar27 >> 0x20);
    if ((uVar27 & 1) == 0) {
      if ((*piVar5 != 1) || (bVar25 = true, (uint)piVar5[1] < (uint)piVar5[2])) {
        if (*piVar5 != 0) {
          piVar5[1] = piVar5[1] + 1;
        }
        uVar4 = piVar5[5];
        iVar12 = piVar5[0x20];
        iVar14 = piVar5[0x21];
        iVar20 = piVar5[0x22];
        uVar27 = FUN_006eae0c(piVar5);
        uVar15 = (undefined4)(uVar27 >> 0x20);
        if ((uVar27 & 1) == 0) {
          uVar27 = FUN_006f5184(uVar15);
        }
        else {
          uVar27 = CONCAT44(uVar15,1);
        }
        piVar5 = (int *)(uVar27 >> 0x20);
        bVar1 = true;
        if ((uVar27 & 1) == 0) {
          uVar10 = piVar5[1];
          if ((*piVar5 != 1) || (uVar10 < (uint)piVar5[2])) {
            if (*piVar5 != 0) {
              piVar5[1] = uVar10 + 1;
              if ((uint)piVar5[2] <= uVar10 + 1) goto LAB_006eab70;
              piVar5[1] = uVar10 + 2;
            }
            uVar27 = FUN_006eae0c(piVar5);
            piVar5 = (int *)(uVar27 >> 0x20);
            bVar1 = false;
            if ((uVar27 & 1) == 0) {
              piVar5 = (int *)FUN_006f59e4(piVar5);
            }
          }
        }
LAB_006eab70:
        bVar25 = false;
        if (bVar1) {
          bVar25 = true;
          piVar5[0x20] = iVar12;
          piVar5[0x21] = iVar14;
          piVar5[0x22] = iVar20;
          if (uVar4 <= (uint)piVar5[5]) {
            piVar5[5] = uVar4;
          }
        }
      }
      if (bVar25) goto LAB_006eaba4;
      uVar27 = FUN_006f5184(piVar5);
    }
    else {
LAB_006eaba4:
      uVar27 = CONCAT44(piVar5,1);
    }
    uVar15 = (undefined4)(uVar27 >> 0x20);
    if ((uVar27 & 1) == 0) {
      uVar27 = FUN_006f5094(uVar15,"}",1);
    }
    else {
      uVar27 = CONCAT44(uVar15,1);
    }
    param_1 = (int *)(uVar27 >> 0x20);
    if ((uVar27 & 1) != 0) {
      param_1[0x20] = iVar13;
      param_1[0x21] = iVar18;
      param_1[0x22] = iVar19;
      if (uVar11 <= (uint)param_1[5]) {
        param_1[5] = uVar11;
      }
      goto LAB_006eac0c;
    }
  }
  param_1 = (int *)(uVar27 >> 0x20);
  cVar8 = (char)param_1[0x24];
  if ((uVar27 & 1) == 0) {
    if (cVar8 == '\x01') {
      FUN_006e82ec(param_1,10,iVar24,iVar17,iVar22,iVar16);
      cVar8 = (char)param_1[0x24];
    }
    if ((cVar8 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar11 = param_1[5];
      if (uVar11 <= uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar23,uVar11,&DAT_01c061d0);
      }
      pcVar6 = (char *)(param_1[4] + uVar23 * 0x14);
      if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar6 + 4) = uVar11;
      iVar24 = param_1[5];
      iVar17 = param_1[0x22];
      if (iVar24 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar7 = (undefined2 *)(param_1[4] + iVar24 * 0x14);
      *puVar7 = 0xa01;
      *(int *)(puVar7 + 8) = iVar17;
      *(uint *)(puVar7 + 2) = uVar23;
      *(undefined4 *)(puVar7 + 4) = 0;
      param_1[5] = iVar24 + 1;
    }
    uVar21 = 0;
    bVar25 = (char)param_1[0x1f] != '\0';
    cVar8 = '\0';
    if (bVar25) {
      cVar8 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar25 && cVar8 != '\0') {
      if (uVar9 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,10,iVar2);
    }
  }
  else if (cVar8 != '\x01') {
    FUN_006e82ec(param_1,10,iVar24,iVar17,iVar22,iVar16);
    if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar9 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,10,iVar2);
    }
    if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
       (uVar23 <= (uint)param_1[5])) {
      param_1[5] = uVar23;
    }
  }
LAB_006ead5c:
  return CONCAT44(param_1,uVar21);
}

