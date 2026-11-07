// FUN_006ec678 @ 006ec678 size=1152 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ec678(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *extraout_r1;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  
  if ((*param_1 != 1) || (uVar18 = 1, (uint)param_1[1] < (uint)param_1[2])) {
    iVar22 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar2 = param_1[0x23];
    iVar15 = 0;
    iVar21 = 0;
    uVar20 = param_1[5];
    uVar7 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar22 == iVar2) {
      iVar21 = param_1[8];
      iVar15 = param_1[0xb];
    }
    uVar19 = uVar20;
    if ((uVar7 == 2) && (uVar7 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar20 == param_1[3]) {
        FUN_0161d664();
      }
      uVar7 = uVar20 * 5;
      puVar3 = (undefined1 *)(param_1[4] + uVar20 * 0x14);
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(int *)(puVar3 + 8) = iVar22;
      iVar2 = param_1[0x23];
      param_1[5] = uVar20 + 1;
      uVar19 = uVar20 + 1;
    }
    bVar24 = iVar2 == iVar22;
    iVar23 = 0;
    if (bVar24) {
      iVar2 = param_1[8];
      uVar7 = param_1[0xb];
    }
    iVar10 = *param_1;
    iVar13 = param_1[0x17];
    if (bVar24) {
      iVar23 = uVar7 + iVar2;
    }
    uVar8 = param_1[0x1e];
    uVar7 = param_1[1];
    if ((iVar10 != 1) || (bVar24 = true, uVar7 < (uint)param_1[2])) {
      cVar1 = *(char *)((int)param_1 + 0x91);
      if (iVar10 != 0) {
        uVar7 = uVar7 + 1;
        param_1[1] = uVar7;
      }
      if (cVar1 != '\0') {
        *(undefined1 *)((int)param_1 + 0x91) = 0;
      }
      if ((iVar10 == 0) || (bVar24 = true, uVar7 < (uint)param_1[2])) {
        if (iVar10 != 0) {
          param_1[1] = uVar7 + 1;
        }
        iVar2 = param_1[0x20];
        iVar10 = param_1[0x21];
        iVar16 = param_1[0x22];
        uVar25 = FUN_006f4a10(param_1);
        piVar9 = (int *)(uVar25 >> 0x20);
        if ((uVar25 & 1) == 0) {
          uVar25 = ZEXT48(piVar9) << 0x20;
        }
        else if ((*piVar9 == 1) && ((uint)piVar9[2] <= (uint)piVar9[1])) {
          uVar25 = CONCAT44(piVar9,1);
        }
        else {
          if (*piVar9 != 0) {
            piVar9[1] = piVar9[1] + 1;
          }
          uVar7 = piVar9[5];
          iVar11 = piVar9[0x20];
          iVar14 = piVar9[0x21];
          iVar17 = piVar9[0x22];
          uVar26 = FUN_006f5094(piVar9,&DAT_0053340d,1);
          uVar18 = (undefined4)(uVar26 >> 0x20);
          uVar25 = CONCAT44(uVar18,1);
          if ((uVar26 & 1) == 0) {
            uVar25 = FUN_006ec678(uVar18);
          }
          uVar18 = (undefined4)(uVar25 >> 0x20);
          if ((uVar25 & 1) == 0) {
            uVar25 = FUN_006f5094(uVar18,"]",1);
          }
          else {
            uVar25 = CONCAT44(uVar18,1);
          }
          iVar12 = (int)(uVar25 >> 0x20);
          if ((uVar25 & 1) != 0) {
            *(int *)(iVar12 + 0x80) = iVar11;
            *(int *)(iVar12 + 0x84) = iVar14;
            *(int *)(iVar12 + 0x88) = iVar17;
            uVar25 = CONCAT44(iVar12,1);
            if (uVar7 <= *(uint *)(iVar12 + 0x14)) {
              *(uint *)(iVar12 + 0x14) = uVar7;
              uVar25 = CONCAT44(iVar12,1);
            }
          }
        }
        param_1 = (int *)(uVar25 >> 0x20);
        bVar6 = true;
        if ((uVar25 & 1) == 0) {
          if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
            if (*param_1 != 0) {
              param_1[1] = param_1[1] + 1;
            }
            FUN_006f5094(param_1,"!",1);
            bVar6 = false;
            param_1 = extraout_r1;
          }
        }
        bVar24 = false;
        if (bVar6) {
          param_1[0x20] = iVar2;
          param_1[0x21] = iVar10;
          param_1[0x22] = iVar16;
          bVar24 = true;
          if (uVar19 <= (uint)param_1[5]) {
            param_1[5] = uVar19;
          }
        }
      }
      if (cVar1 != '\0') {
        *(char *)((int)param_1 + 0x91) = cVar1;
      }
    }
    cVar1 = (char)param_1[0x24];
    if (bVar24) {
      uVar18 = 1;
      if (cVar1 != '\x01') {
        FUN_006e82ec(param_1,0x2d,iVar22,iVar21,iVar15,iVar23);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar8 < (uint)param_1[0x1e]) {
            iVar13 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x2d,iVar13);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar20 <= (uint)param_1[5])) {
          param_1[5] = uVar20;
        }
      }
    }
    else {
      if (cVar1 == '\x01') {
        FUN_006e82ec(param_1,0x2d,iVar22,iVar21,iVar15,iVar23);
        cVar1 = (char)param_1[0x24];
      }
      if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar7 = param_1[5];
        if (uVar7 <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar20,uVar7,&DAT_01c061d0);
        }
        pcVar4 = (char *)(param_1[4] + uVar20 * 0x14);
        if (*pcVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar4 + 4) = uVar7;
        iVar22 = param_1[5];
        iVar21 = param_1[0x22];
        if (iVar22 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar5 = (undefined2 *)(param_1[4] + iVar22 * 0x14);
        *puVar5 = 0x2d01;
        *(int *)(puVar5 + 8) = iVar21;
        *(uint *)(puVar5 + 2) = uVar20;
        *(undefined4 *)(puVar5 + 4) = 0;
        param_1[5] = iVar22 + 1;
      }
      uVar18 = 0;
      bVar24 = (char)param_1[0x1f] != '\0';
      cVar1 = '\0';
      if (bVar24) {
        cVar1 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar24 && cVar1 != '\0') {
        if (uVar8 < (uint)param_1[0x1e]) {
          iVar13 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x2d,iVar13);
      }
    }
  }
  return CONCAT44(param_1,uVar18);
}

