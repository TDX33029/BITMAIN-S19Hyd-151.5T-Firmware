// FUN_006ef760 @ 006ef760 size=1372 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ef760(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 extraout_r1;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  ulonglong uVar25;
  
  if ((*param_1 == 1) && (uVar19 = 1, (uint)param_1[2] <= (uint)param_1[1])) goto LAB_006efc64;
  iVar23 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar3 = param_1[0x23];
  iVar17 = 0;
  iVar14 = 0;
  uVar20 = param_1[5];
  if (iVar23 == iVar3) {
    iVar14 = param_1[8];
    iVar17 = param_1[0xb];
  }
  uVar9 = uVar20;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar20 == param_1[3]) {
      FUN_0161d664();
    }
    puVar4 = (undefined1 *)(param_1[4] + uVar20 * 0x14);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(int *)(puVar4 + 8) = iVar23;
    iVar3 = param_1[0x23];
    param_1[5] = uVar20 + 1;
    uVar9 = uVar20 + 1;
  }
  bVar24 = iVar3 == iVar23;
  iVar7 = 0;
  if (bVar24) {
    iVar3 = param_1[8];
    iVar7 = param_1[0xb];
  }
  iVar22 = param_1[0x17];
  if (bVar24) {
    iVar7 = iVar7 + iVar3;
  }
  uVar21 = param_1[0x1e];
  if ((*param_1 != 1) || (bVar24 = true, (uint)param_1[1] < (uint)param_1[2])) {
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar3 = param_1[0x20];
    iVar15 = param_1[0x21];
    iVar18 = param_1[0x22];
    uVar25 = FUN_006f5094(param_1,"E",1);
    uVar8 = (uint)(uVar25 >> 0x20);
    if ((uVar25 & 1) == 0) {
      uVar25 = (ulonglong)uVar8 << 0x20;
    }
    else {
      uVar25 = FUN_006f5094(uVar8,&DAT_0052bdbb,1);
    }
    uVar19 = (undefined4)(uVar25 >> 0x20);
    if ((uVar25 & 1) == 0) {
      uVar25 = FUN_006f5184(uVar19);
    }
    else {
      uVar25 = CONCAT44(uVar19,1);
    }
    piVar12 = (int *)(uVar25 >> 0x20);
    if ((uVar25 & 1) == 0) {
      if ((*piVar12 == 1) && ((uint)piVar12[2] <= (uint)piVar12[1])) goto LAB_006ef8f4;
      if (*piVar12 != 0) {
        piVar12[1] = piVar12[1] + 1;
      }
      uVar25 = FUN_006f5094(piVar12,"+",1);
      uVar19 = (undefined4)(uVar25 >> 0x20);
      if ((uVar25 & 1) != 0) {
        FUN_006f5094(uVar19,"-",1);
        uVar19 = extraout_r1;
      }
      uVar25 = FUN_006f5184(uVar19);
    }
    else {
LAB_006ef8f4:
      uVar25 = CONCAT44(piVar12,1);
    }
    uVar19 = (undefined4)(uVar25 >> 0x20);
    if ((uVar25 & 1) == 0) {
      uVar25 = FUN_006f4f54(uVar19,0x30,0x39);
    }
    else {
      uVar25 = CONCAT44(uVar19,1);
    }
    uVar19 = (undefined4)(uVar25 >> 0x20);
    if ((uVar25 & 1) == 0) {
      uVar25 = FUN_006f5184(uVar19);
    }
    else {
      uVar25 = CONCAT44(uVar19,1);
    }
    param_1 = (int *)(uVar25 >> 0x20);
    bVar1 = true;
    if ((uVar25 & 1) == 0) {
      uVar8 = param_1[1];
      if ((*param_1 != 1) || (uVar8 < (uint)param_1[2])) {
        if (*param_1 != 0) {
          param_1[1] = uVar8 + 1;
          if ((uint)param_1[2] <= uVar8 + 1) goto LAB_006efae0;
          param_1[1] = uVar8 + 2;
        }
        uVar25 = FUN_006f4f54(param_1,0x30,0x39);
        param_1 = (int *)(uVar25 >> 0x20);
        bVar1 = false;
        if ((uVar25 & 1) == 0) {
          if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
            if (*param_1 != 0) {
              param_1[1] = param_1[1] + 1;
            }
            uVar25 = FUN_006f5944(param_1);
            param_1 = (int *)(uVar25 >> 0x20);
            while ((uVar25 & 1) == 0) {
              if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
                uVar25 = CONCAT44(param_1,1);
              }
              else {
                if (*param_1 != 0) {
                  param_1[1] = param_1[1] + 1;
                }
                uVar8 = param_1[5];
                iVar10 = param_1[0x20];
                iVar11 = param_1[0x21];
                iVar16 = param_1[0x22];
                uVar25 = FUN_006f5184(param_1);
                uVar19 = (undefined4)(uVar25 >> 0x20);
                if ((uVar25 & 1) == 0) {
                  uVar25 = FUN_006f4f54(uVar19,0x30,0x39);
                }
                else {
                  uVar25 = CONCAT44(uVar19,1);
                }
                iVar13 = (int)(uVar25 >> 0x20);
                if ((uVar25 & 1) != 0) {
                  *(int *)(iVar13 + 0x80) = iVar10;
                  *(int *)(iVar13 + 0x84) = iVar11;
                  *(int *)(iVar13 + 0x88) = iVar16;
                  uVar25 = CONCAT44(iVar13,1);
                  if (uVar8 <= *(uint *)(iVar13 + 0x14)) {
                    *(uint *)(iVar13 + 0x14) = uVar8;
                    uVar25 = CONCAT44(iVar13,1);
                  }
                }
              }
              param_1 = (int *)(uVar25 >> 0x20);
            }
          }
        }
      }
    }
LAB_006efae0:
    bVar24 = false;
    if (bVar1) {
      bVar24 = true;
      param_1[0x20] = iVar3;
      param_1[0x21] = iVar15;
      param_1[0x22] = iVar18;
      if (uVar9 <= (uint)param_1[5]) {
        param_1[5] = uVar9;
      }
    }
  }
  cVar2 = (char)param_1[0x24];
  if (bVar24) {
    uVar19 = 1;
    if (cVar2 != '\x01') {
      FUN_006e82ec(param_1,0x34,iVar23,iVar14,iVar17,iVar7);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar21 < (uint)param_1[0x1e]) {
          iVar22 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x34,iVar22);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar20 <= (uint)param_1[5])) {
        param_1[5] = uVar20;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      FUN_006e82ec(param_1,0x34,iVar23,iVar14,iVar17,iVar7);
      cVar2 = (char)param_1[0x24];
    }
    if ((cVar2 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar9 = param_1[5];
      if (uVar9 <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar20,uVar9,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar20 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar9;
      iVar23 = param_1[5];
      iVar14 = param_1[0x22];
      if (iVar23 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar23 * 0x14);
      *puVar6 = 0x3401;
      *(uint *)(puVar6 + 2) = uVar20;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(int *)(puVar6 + 8) = iVar14;
      param_1[5] = iVar23 + 1;
    }
    uVar19 = 0;
    bVar24 = (char)param_1[0x1f] != '\0';
    cVar2 = '\0';
    if (bVar24) {
      cVar2 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar24 && cVar2 != '\0') {
      if (uVar21 < (uint)param_1[0x1e]) {
        iVar22 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x34,iVar22);
    }
  }
LAB_006efc64:
  return CONCAT44(param_1,uVar19);
}

