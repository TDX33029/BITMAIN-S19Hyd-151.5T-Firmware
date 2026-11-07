// FUN_006ec1d0 @ 006ec1d0 size=1112 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ec1d0(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined2 *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  ulonglong uVar25;
  
  iVar11 = *param_1;
  uVar10 = param_1[1];
  if ((iVar11 == 1) && (uVar3 = 1, (uint)param_1[2] <= uVar10)) goto LAB_006ec590;
  cVar1 = *(char *)((int)param_1 + 0x91);
  if (iVar11 != 0) {
    uVar10 = uVar10 + 1;
    param_1[1] = uVar10;
  }
  if (cVar1 != '\x01') {
    *(undefined1 *)((int)param_1 + 0x91) = 1;
  }
  if ((iVar11 == 0) || (uVar10 < (uint)param_1[2])) {
    iVar23 = param_1[0x22];
    if (iVar11 != 0) {
      param_1[1] = uVar10 + 1;
    }
    iVar4 = param_1[0x23];
    iVar16 = 0;
    uVar21 = param_1[5];
    iVar11 = 0;
    uVar10 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar23 == iVar4) {
      iVar11 = param_1[8];
      iVar16 = param_1[0xb];
    }
    uVar22 = uVar21;
    if (uVar10 == 2) {
      if (uVar21 == param_1[3]) {
        FUN_0161d664();
      }
      uVar10 = uVar21 * 5;
      puVar5 = (undefined1 *)(param_1[4] + uVar21 * 0x14);
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *(int *)(puVar5 + 8) = iVar23;
      uVar22 = uVar21 + 1;
      iVar4 = param_1[0x23];
      param_1[5] = uVar22;
    }
    bVar24 = iVar4 == iVar23;
    iVar18 = 0;
    if (bVar24) {
      iVar4 = param_1[8];
      uVar10 = param_1[0xb];
    }
    if (bVar24) {
      iVar18 = uVar10 + iVar4;
    }
    iVar4 = param_1[0x17];
    uVar10 = param_1[0x1e];
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      uVar6 = 1;
    }
    else {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar13 = param_1[0x20];
      iVar17 = param_1[0x21];
      iVar19 = param_1[0x22];
      uVar25 = FUN_006f5094(param_1,"on",2);
      piVar15 = (int *)(uVar25 >> 0x20);
      if ((uVar25 & 1) == 0) {
        if ((*piVar15 != 1) || (bVar24 = true, (uint)piVar15[1] < (uint)piVar15[2])) {
          if (*piVar15 != 0) {
            piVar15[1] = piVar15[1] + 1;
          }
          uVar6 = piVar15[5];
          iVar12 = piVar15[0x20];
          iVar14 = piVar15[0x21];
          iVar20 = piVar15[0x22];
          uVar25 = FUN_006e8630(piVar15);
          piVar15 = (int *)(uVar25 >> 0x20);
          bVar2 = true;
          if ((uVar25 & 1) == 0) {
            if ((*piVar15 != 1) || ((uint)piVar15[1] < (uint)piVar15[2])) {
              if (*piVar15 != 0) {
                piVar15[1] = piVar15[1] + 1;
              }
              uVar25 = FUN_006e8630(piVar15);
              piVar15 = (int *)(uVar25 >> 0x20);
              bVar2 = false;
              while ((uVar25 & 1) == 0) {
                uVar25 = FUN_006e8630(piVar15);
                piVar15 = (int *)(uVar25 >> 0x20);
              }
            }
          }
          bVar24 = false;
          if (bVar2) {
            bVar24 = true;
            piVar15[0x20] = iVar12;
            piVar15[0x21] = iVar14;
            piVar15[0x22] = iVar20;
            if (uVar6 <= (uint)piVar15[5]) {
              piVar15[5] = uVar6;
            }
          }
        }
        if (bVar24) goto LAB_006ec3ec;
        uVar25 = FUN_006f4a10(piVar15);
      }
      else {
LAB_006ec3ec:
        uVar25 = CONCAT44(piVar15,1);
      }
      param_1 = (int *)(uVar25 >> 0x20);
      uVar6 = (uint)uVar25;
      if ((uVar25 & 1) != 0) {
        param_1[0x20] = iVar13;
        param_1[0x21] = iVar17;
        param_1[0x22] = iVar19;
        uVar6 = 1;
        if (uVar22 <= (uint)param_1[5]) {
          param_1[5] = uVar22;
        }
      }
    }
    cVar9 = (char)param_1[0x24];
    if ((uVar6 & 1) != 0) {
      if (cVar9 != '\x01') {
        FUN_006e82ec(param_1,0x11,iVar23,iVar11,iVar16,iVar18);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar10 < (uint)param_1[0x1e]) {
            iVar4 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x11,iVar4);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar21 <= (uint)param_1[5])) {
          param_1[5] = uVar21;
        }
      }
      goto LAB_006ec224;
    }
    if (cVar9 == '\x01') {
      FUN_006e82ec(param_1,0x11,iVar23,iVar11,iVar16,iVar18);
      cVar9 = (char)param_1[0x24];
    }
    if ((cVar9 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar22 = param_1[5];
      if (uVar22 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar21,uVar22,&DAT_01c061d0);
      }
      pcVar7 = (char *)(param_1[4] + uVar21 * 0x14);
      if (*pcVar7 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar7 + 4) = uVar22;
      iVar11 = param_1[5];
      iVar23 = param_1[0x22];
      if (iVar11 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar8 = (undefined2 *)(param_1[4] + iVar11 * 0x14);
      *puVar8 = 0x1101;
      *(uint *)(puVar8 + 2) = uVar21;
      *(int *)(puVar8 + 8) = iVar23;
      *(undefined4 *)(puVar8 + 4) = 0;
      param_1[5] = iVar11 + 1;
    }
    bVar24 = (char)param_1[0x1f] != '\0';
    cVar9 = '\0';
    if (bVar24) {
      cVar9 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar24 && cVar9 != '\0') {
      if (uVar10 < (uint)param_1[0x1e]) {
        iVar4 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x11,iVar4);
    }
    uVar3 = 0;
  }
  else {
LAB_006ec224:
    uVar3 = 1;
  }
  if (cVar1 != '\x01') {
    *(char *)((int)param_1 + 0x91) = cVar1;
  }
LAB_006ec590:
  return CONCAT44(param_1,uVar3);
}

