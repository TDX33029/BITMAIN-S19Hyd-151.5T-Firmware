// FUN_006ee9c8 @ 006ee9c8 size=2024 calls_out=12 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ee9c8(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  ulonglong uVar31;
  int local_50;
  int iStack_4c;
  int iStack_48;
  
  if ((*param_1 == 1) && (uVar23 = 1, (uint)param_1[2] <= (uint)param_1[1])) goto LAB_006ef10c;
  iVar21 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar3 = param_1[0x23];
  iVar29 = 0;
  iVar20 = 0;
  uVar28 = param_1[5];
  if (iVar21 == iVar3) {
    iVar20 = param_1[8];
    iVar29 = param_1[0xb];
  }
  uVar10 = uVar28;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar28 == param_1[3]) {
      FUN_0161d664();
    }
    puVar4 = (undefined1 *)(param_1[4] + uVar28 * 0x14);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(int *)(puVar4 + 8) = iVar21;
    iVar3 = param_1[0x23];
    param_1[5] = uVar28 + 1;
    uVar10 = uVar28 + 1;
  }
  iVar8 = 0;
  if (iVar3 == iVar21) {
    iVar8 = param_1[0xb] + param_1[8];
  }
  iVar9 = *param_1;
  uVar14 = param_1[1];
  uVar27 = param_1[2];
  iVar11 = param_1[0x17];
  uVar12 = param_1[0x1e];
  if ((iVar9 != 1) || (bVar30 = true, uVar14 < uVar27)) {
    cVar2 = *(char *)((int)param_1 + 0x91);
    if (iVar9 != 0) {
      uVar14 = uVar14 + 1;
      param_1[1] = uVar14;
    }
    if (cVar2 != '\0') {
      *(undefined1 *)((int)param_1 + 0x91) = 0;
    }
    if ((iVar9 == 0) || (bVar30 = true, uVar14 < uVar27)) {
      piVar18 = param_1 + 0x20;
      if (iVar9 == 0) {
        local_50 = *piVar18;
        iStack_4c = param_1[0x21];
        iStack_48 = param_1[0x22];
LAB_006eeb70:
        iVar26 = param_1[0x22];
        iVar25 = 0;
        iVar22 = 0;
        iVar17 = 0;
        if (iVar26 == iVar3) {
          iVar25 = param_1[8];
          iVar17 = param_1[0xb];
          iVar22 = iVar17 + iVar25;
        }
        if ((iVar9 == 0) || (uVar14 < uVar27)) {
          if (iVar9 != 0) {
            param_1[1] = uVar14 + 1;
          }
          iVar3 = *piVar18;
          iVar9 = param_1[0x21];
          iVar15 = param_1[0x22];
          uVar31 = FUN_006efd18(param_1);
          uVar23 = (undefined4)(uVar31 >> 0x20);
          if ((uVar31 & 1) == 0) {
            uVar31 = FUN_006f5184(uVar23);
          }
          else {
            uVar31 = CONCAT44(uVar23,1);
          }
          piVar18 = (int *)(uVar31 >> 0x20);
          if ((uVar31 & 1) == 0) {
            if ((*piVar18 == 1) && ((uint)piVar18[2] <= (uint)piVar18[1])) {
              uVar31 = CONCAT44(piVar18,1);
            }
            else {
              uVar14 = piVar18[5];
              if (*piVar18 != 0) {
                piVar18[1] = piVar18[1] + 1;
              }
              iVar13 = piVar18[0x20];
              iVar16 = piVar18[0x21];
              iVar24 = piVar18[0x22];
              uVar31 = FUN_006ef270(piVar18);
              uVar23 = (undefined4)(uVar31 >> 0x20);
              if ((uVar31 & 1) == 0) {
                uVar31 = FUN_006f5184(uVar23);
              }
              else {
                uVar31 = CONCAT44(uVar23,1);
              }
              uVar23 = (undefined4)(uVar31 >> 0x20);
              if ((uVar31 & 1) == 0) {
                uVar31 = FUN_006ef760(uVar23);
              }
              else {
                uVar31 = CONCAT44(uVar23,1);
              }
              iVar19 = (int)(uVar31 >> 0x20);
              if ((uVar31 & 1) != 0) {
                *(int *)(iVar19 + 0x80) = iVar13;
                *(int *)(iVar19 + 0x84) = iVar16;
                *(int *)(iVar19 + 0x88) = iVar24;
                uVar31 = CONCAT44(iVar19,1);
                if (uVar14 <= *(uint *)(iVar19 + 0x14)) {
                  *(uint *)(iVar19 + 0x14) = uVar14;
                  uVar31 = CONCAT44(iVar19,1);
                }
              }
            }
            uVar14 = (uint)(uVar31 >> 0x20);
            if ((uVar31 & 1) == 0) {
              uVar31 = (ulonglong)uVar14 << 0x20;
            }
            else {
              uVar31 = FUN_006ef270(uVar14);
            }
            uVar14 = (uint)(uVar31 >> 0x20);
            if ((uVar31 & 1) == 0) {
              uVar31 = (ulonglong)uVar14 << 0x20;
            }
            else {
              uVar31 = FUN_006ef760(uVar14);
            }
          }
          else {
            uVar31 = CONCAT44(piVar18,1);
          }
          param_1 = (int *)(uVar31 >> 0x20);
          uVar14 = (uint)uVar31;
          if ((uVar31 & 1) != 0) {
            param_1[0x20] = iVar3;
            param_1[0x21] = iVar9;
            param_1[0x22] = iVar15;
            uVar14 = 1;
            if (uVar10 <= (uint)param_1[5]) {
              param_1[5] = uVar10;
            }
          }
        }
        else {
          uVar14 = 1;
        }
        cVar7 = (char)param_1[0x24];
        if ((uVar14 & 1) != 0) {
          if (cVar7 != '\x01') {
            FUN_006e82ec(param_1,0x32,iVar26,iVar25,iVar17,iVar22);
            if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
              iVar3 = iVar11;
              if (uVar12 < (uint)param_1[0x1e]) {
                iVar3 = 0;
              }
              FUN_006e83b8(param_1 + 0x15,0x32,iVar3);
            }
            if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
               (uVar10 <= (uint)param_1[5])) {
              param_1[5] = uVar10;
            }
          }
          goto LAB_006eedf8;
        }
        if (cVar7 == '\x01') {
          FUN_006e82ec(param_1,0x32,iVar26,iVar25,iVar17,iVar22);
          cVar7 = (char)param_1[0x24];
        }
        if ((cVar7 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          uVar14 = param_1[5];
          if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar10,uVar14,&DAT_01c061d0);
          }
          pcVar5 = (char *)(param_1[4] + uVar10 * 0x14);
          if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar5 + 4) = uVar14;
          iVar3 = param_1[5];
          iVar9 = param_1[0x22];
          if (iVar3 == param_1[3]) {
            FUN_0161d664(param_1 + 3);
          }
          puVar6 = (undefined2 *)(param_1[4] + iVar3 * 0x14);
          *puVar6 = 0x3201;
          *(uint *)(puVar6 + 2) = uVar10;
          *(int *)(puVar6 + 8) = iVar9;
          *(undefined4 *)(puVar6 + 4) = 0;
          param_1[5] = iVar3 + 1;
        }
        bVar30 = (char)param_1[0x1f] != '\0';
        cVar7 = '\0';
        if (bVar30) {
          cVar7 = *(char *)((int)param_1 + 0x91);
        }
        if (bVar30 && cVar7 != '\0') {
          iVar3 = iVar11;
          if (uVar12 < (uint)param_1[0x1e]) {
            iVar3 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x32,iVar3);
        }
        uVar31 = ZEXT48(param_1) << 0x20;
      }
      else {
        param_1[1] = uVar14 + 1;
        local_50 = *piVar18;
        iStack_4c = param_1[0x21];
        iStack_48 = param_1[0x22];
        if ((iVar9 == 0) || (uVar14 + 1 < uVar27)) {
          uVar14 = uVar14 + 2;
          param_1[1] = uVar14;
          goto LAB_006eeb70;
        }
LAB_006eedf8:
        uVar31 = FUN_006efd18(param_1);
      }
      param_1 = (int *)(uVar31 >> 0x20);
      bVar1 = true;
      if ((uVar31 & 1) == 0) {
        if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
          iVar3 = param_1[0x24];
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          *(bool *)(param_1 + 0x24) = (char)iVar3 != '\x01';
          iVar9 = param_1[0x20];
          iVar17 = param_1[0x21];
          iVar25 = param_1[0x22];
          FUN_00700e8c(param_1 + 0xc);
          uVar31 = FUN_006f46a8(param_1);
          param_1 = (int *)(uVar31 >> 0x20);
          param_1[0x20] = iVar9;
          param_1[0x21] = iVar17;
          param_1[0x22] = iVar25;
          *(char *)(param_1 + 0x24) = (char)iVar3;
          if ((uVar31 & 1) == 0) {
            FUN_00700d14(param_1 + 0xc);
          }
          else {
            bVar1 = false;
            FUN_00700d14(param_1 + 0xc);
          }
        }
      }
      bVar30 = false;
      if (bVar1) {
        bVar30 = true;
        param_1[0x20] = local_50;
        param_1[0x21] = iStack_4c;
        param_1[0x22] = iStack_48;
        if (uVar10 <= (uint)param_1[5]) {
          param_1[5] = uVar10;
        }
      }
    }
    if (cVar2 != '\0') {
      *(char *)((int)param_1 + 0x91) = cVar2;
    }
  }
  cVar2 = (char)param_1[0x24];
  if (bVar30) {
    uVar23 = 1;
    if (cVar2 != '\x01') {
      FUN_006e82ec(param_1,0x31,iVar21,iVar20,iVar29,iVar8);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar12 < (uint)param_1[0x1e]) {
          iVar11 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x31,iVar11);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar28 <= (uint)param_1[5])) {
        param_1[5] = uVar28;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      FUN_006e82ec(param_1,0x31,iVar21,iVar20,iVar29,iVar8);
      cVar2 = (char)param_1[0x24];
    }
    if ((cVar2 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar10 = param_1[5];
      if (uVar10 <= uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar28,uVar10,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar28 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar10;
      iVar21 = param_1[5];
      iVar20 = param_1[0x22];
      if (iVar21 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar21 * 0x14);
      *puVar6 = 0x3101;
      *(int *)(puVar6 + 8) = iVar20;
      *(uint *)(puVar6 + 2) = uVar28;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar21 + 1;
    }
    uVar23 = 0;
    bVar30 = (char)param_1[0x1f] != '\0';
    cVar2 = '\0';
    if (bVar30) {
      cVar2 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar30 && cVar2 != '\0') {
      if (uVar12 < (uint)param_1[0x1e]) {
        iVar11 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x31,iVar11);
    }
  }
LAB_006ef10c:
  return CONCAT44(param_1,uVar23);
}

