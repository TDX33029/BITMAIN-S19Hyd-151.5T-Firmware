// FUN_006f3d44 @ 006f3d44 size=1336 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_006f3d44(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
    return param_1;
  }
  iVar27 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar2 = param_1[0x23];
  iVar19 = 0;
  iVar18 = 0;
  uVar25 = param_1[5];
  if (iVar27 == iVar2) {
    iVar18 = param_1[8];
    iVar19 = param_1[0xb];
  }
  uVar9 = uVar25;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar25 == param_1[3]) {
      FUN_0161d664();
    }
    puVar3 = (undefined1 *)(param_1[4] + uVar25 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar27;
    iVar2 = param_1[0x23];
    param_1[5] = uVar25 + 1;
    uVar9 = uVar25 + 1;
  }
  iVar26 = 0;
  if (iVar2 == iVar27) {
    iVar26 = param_1[0xb] + param_1[8];
  }
  iVar2 = param_1[0x17];
  uVar20 = param_1[0x1e];
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
    uVar4 = 1;
    goto LAB_006f40e4;
  }
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar12 = param_1[0x20];
  iVar21 = param_1[0x21];
  iVar23 = param_1[0x22];
  uVar29 = FUN_006f5094(param_1,"(",1);
  uVar17 = (undefined4)(uVar29 >> 0x20);
  uVar30 = CONCAT44(uVar17,1);
  if ((uVar29 & 1) == 0) {
    uVar30 = FUN_006f5184(uVar17);
  }
  piVar16 = (int *)(uVar30 >> 0x20);
  if ((uVar30 & 1) == 0) {
    if ((*piVar16 != 1) || (bVar28 = true, (uint)piVar16[1] < (uint)piVar16[2])) {
      uVar4 = piVar16[5];
      if (*piVar16 != 0) {
        piVar16[1] = piVar16[1] + 1;
      }
      iVar10 = piVar16[0x20];
      iVar13 = piVar16[0x21];
      iVar24 = piVar16[0x22];
      uVar30 = FUN_006f42d0(piVar16);
      uVar17 = (undefined4)(uVar30 >> 0x20);
      if ((uVar30 & 1) == 0) {
        uVar30 = FUN_006f5184(uVar17);
      }
      else {
        uVar30 = CONCAT44(uVar17,1);
      }
      piVar16 = (int *)(uVar30 >> 0x20);
      bVar1 = true;
      if ((uVar30 & 1) == 0) {
        uVar8 = piVar16[1];
        if ((*piVar16 != 1) || (uVar8 < (uint)piVar16[2])) {
          if (*piVar16 != 0) {
            piVar16[1] = uVar8 + 1;
            if ((uint)piVar16[2] <= uVar8 + 1) goto LAB_006f4044;
            piVar16[1] = uVar8 + 2;
          }
          uVar30 = FUN_006f42d0(piVar16);
          piVar16 = (int *)(uVar30 >> 0x20);
          bVar1 = false;
          if ((uVar30 & 1) == 0) {
            if ((*piVar16 != 1) || ((uint)piVar16[1] < (uint)piVar16[2])) {
              if (*piVar16 != 0) {
                piVar16[1] = piVar16[1] + 1;
              }
              uVar30 = FUN_006f548c(piVar16);
              piVar16 = (int *)(uVar30 >> 0x20);
              while ((uVar30 & 1) == 0) {
                if ((*piVar16 == 1) && ((uint)piVar16[2] <= (uint)piVar16[1])) {
                  uVar30 = CONCAT44(piVar16,1);
                }
                else {
                  if (*piVar16 != 0) {
                    piVar16[1] = piVar16[1] + 1;
                  }
                  uVar8 = piVar16[5];
                  iVar11 = piVar16[0x20];
                  iVar14 = piVar16[0x21];
                  iVar22 = piVar16[0x22];
                  uVar30 = FUN_006f5184(piVar16);
                  uVar17 = (undefined4)(uVar30 >> 0x20);
                  if ((uVar30 & 1) == 0) {
                    uVar30 = FUN_006f42d0(uVar17);
                  }
                  else {
                    uVar30 = CONCAT44(uVar17,1);
                  }
                  iVar15 = (int)(uVar30 >> 0x20);
                  if ((uVar30 & 1) != 0) {
                    *(int *)(iVar15 + 0x80) = iVar11;
                    *(int *)(iVar15 + 0x84) = iVar14;
                    *(int *)(iVar15 + 0x88) = iVar22;
                    uVar30 = CONCAT44(iVar15,1);
                    if (uVar8 <= *(uint *)(iVar15 + 0x14)) {
                      *(uint *)(iVar15 + 0x14) = uVar8;
                      uVar30 = CONCAT44(iVar15,1);
                    }
                  }
                }
                piVar16 = (int *)(uVar30 >> 0x20);
              }
            }
          }
        }
      }
LAB_006f4044:
      bVar28 = false;
      if (bVar1) {
        bVar28 = true;
        piVar16[0x20] = iVar10;
        piVar16[0x21] = iVar13;
        piVar16[0x22] = iVar24;
        if (uVar4 <= (uint)piVar16[5]) {
          piVar16[5] = uVar4;
        }
      }
    }
    if (bVar28) goto LAB_006f4074;
    uVar30 = FUN_006f5184(piVar16);
  }
  else {
LAB_006f4074:
    uVar30 = CONCAT44(piVar16,1);
  }
  uVar17 = (undefined4)(uVar30 >> 0x20);
  if ((uVar30 & 1) == 0) {
    uVar30 = FUN_006f5094(uVar17,&DAT_0053341b,1);
  }
  else {
    uVar30 = CONCAT44(uVar17,1);
  }
  param_1 = (int *)(uVar30 >> 0x20);
  uVar4 = (uint)uVar30;
  if ((uVar30 & 1) != 0) {
    param_1[0x20] = iVar12;
    param_1[0x21] = iVar21;
    param_1[0x22] = iVar23;
    uVar4 = 1;
    if (uVar9 <= (uint)param_1[5]) {
      param_1[5] = uVar9;
    }
  }
LAB_006f40e4:
  cVar7 = (char)param_1[0x24];
  if ((uVar4 & 1) == 0) {
    if (cVar7 == '\x01') {
      FUN_006e82ec(param_1,0x4a,iVar27,iVar18,iVar19,iVar26);
      cVar7 = (char)param_1[0x24];
    }
    if ((cVar7 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar9 = param_1[5];
      if (uVar9 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar25,uVar9,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar25 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar9;
      iVar27 = param_1[5];
      iVar18 = param_1[0x22];
      if (iVar27 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar27 * 0x14);
      *puVar6 = 0x4a01;
      *(int *)(puVar6 + 8) = iVar18;
      *(uint *)(puVar6 + 2) = uVar25;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar27 + 1;
    }
    bVar28 = (char)param_1[0x1f] != '\0';
    cVar7 = '\0';
    if (bVar28) {
      cVar7 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar28 && cVar7 != '\0') {
      if (uVar20 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x4a,iVar2);
    }
  }
  else if (cVar7 != '\x01') {
    FUN_006e82ec(param_1,0x4a,iVar27,iVar18,iVar19,iVar26);
    if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar20 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x4a,iVar2);
    }
    if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
       (uVar25 <= (uint)param_1[5])) {
      param_1[5] = uVar25;
    }
  }
  return param_1;
}

