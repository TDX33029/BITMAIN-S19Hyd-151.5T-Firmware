// FUN_006f0240 @ 006f0240 size=2640 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

undefined8 FUN_006f0240(int *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  undefined1 *puVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int local_50;
  
  iVar16 = *param_1;
  uVar13 = param_1[1];
  if ((iVar16 == 1) && (uVar4 = 1, (uint)param_1[2] <= uVar13)) goto LAB_006f0ba8;
  cVar1 = *(char *)((int)param_1 + 0x91);
  if (iVar16 != 0) {
    uVar13 = uVar13 + 1;
    param_1[1] = uVar13;
  }
  if (cVar1 != '\x01') {
    *(undefined1 *)((int)param_1 + 0x91) = 1;
  }
  if ((iVar16 == 0) || (uVar13 < (uint)param_1[2])) {
    iVar28 = param_1[0x22];
    if (iVar16 != 0) {
      param_1[1] = uVar13 + 1;
    }
    iVar5 = param_1[0x23];
    iVar16 = 0;
    uVar13 = param_1[5];
    iVar29 = 0;
    if (iVar28 == iVar5) {
      iVar16 = param_1[0xb];
      iVar29 = param_1[8];
    }
    uVar14 = (uint)*(byte *)(param_1 + 0x24);
    uVar27 = uVar13;
    if (uVar14 == 2) {
      if (uVar13 == param_1[3]) {
        FUN_0161d664();
      }
      uVar14 = uVar13 * 5;
      uVar27 = uVar13 + 1;
      puVar6 = (undefined1 *)(param_1[4] + uVar13 * 0x14);
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(int *)(puVar6 + 8) = iVar28;
      iVar5 = param_1[0x23];
      param_1[5] = uVar27;
    }
    bVar30 = iVar5 == iVar28;
    iVar22 = 0;
    if (bVar30) {
      iVar5 = param_1[8];
      uVar14 = param_1[0xb];
    }
    if (bVar30) {
      iVar22 = uVar14 + iVar5;
    }
    iVar5 = param_1[0x17];
    uVar14 = param_1[0x1e];
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      uVar7 = 1;
    }
    else {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar18 = param_1[0x20];
      iVar23 = param_1[0x21];
      iVar26 = param_1[0x22];
      uVar32 = FUN_006f5094(param_1,&DAT_0052d60d,3);
      piVar24 = (int *)(uVar32 >> 0x20);
      if ((uVar32 & 1) == 0) {
        iVar8 = *piVar24;
        if ((iVar8 == 1) && ((uint)piVar24[2] <= (uint)piVar24[1])) goto LAB_006f0558;
        iVar19 = piVar24[0x22];
        iVar9 = 0;
        if (iVar8 != 0) {
          iVar9 = piVar24[1] + 1;
        }
        iVar15 = piVar24[0x23];
        if (iVar8 != 0) {
          piVar24[1] = iVar9;
        }
        iVar8 = 0;
        uVar7 = piVar24[5];
        if (iVar19 == iVar15) {
          iVar8 = piVar24[8];
        }
        iVar9 = 0;
        puVar6 = (undefined1 *)(uint)*(byte *)(piVar24 + 0x24);
        if (iVar19 == iVar15) {
          iVar9 = piVar24[0xb];
        }
        if ((puVar6 == (undefined1 *)0x2) &&
           (puVar6 = (undefined1 *)0x0, *(char *)((int)piVar24 + 0x91) != '\0')) {
          if (uVar7 == piVar24[3]) {
            FUN_0161d664();
            iVar15 = piVar24[0x23];
          }
          piVar24[5] = uVar7 + 1;
          puVar6 = (undefined1 *)(piVar24[4] + uVar7 * 0x14);
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 4) = 0;
          *(int *)(puVar6 + 8) = iVar19;
        }
        bVar30 = iVar15 == iVar19;
        if (bVar30) {
          puVar6 = (undefined1 *)piVar24[8];
        }
        puVar25 = (undefined1 *)0x0;
        if (bVar30) {
          iVar15 = piVar24[0xb];
        }
        iVar20 = piVar24[0x17];
        if (bVar30) {
          puVar25 = puVar6 + iVar15;
        }
        iVar15 = *piVar24;
        uVar21 = piVar24[0x1e];
        uVar10 = piVar24[1];
        uVar17 = piVar24[2];
        if ((iVar15 == 1) && (uVar17 <= uVar10)) {
LAB_006f04d0:
          if ((char)piVar24[0x24] != '\x01') {
            FUN_006e82ec(piVar24,0x37,iVar19,iVar8,iVar9,puVar25);
            if (((char)piVar24[0x1f] == '\x01') && (*(char *)((int)piVar24 + 0x91) != '\0')) {
              if (uVar21 < (uint)piVar24[0x1e]) {
                iVar20 = 0;
              }
              FUN_006e83b8(piVar24 + 0x15,0x37,iVar20);
            }
            if ((((char)piVar24[0x24] == '\x02') && (*(char *)((int)piVar24 + 0x91) != '\0')) &&
               (uVar7 <= (uint)piVar24[5])) {
              piVar24[5] = uVar7;
            }
          }
          goto LAB_006f0558;
        }
        cVar2 = *(char *)((int)piVar24 + 0x91);
        if (iVar15 != 0) {
          uVar10 = uVar10 + 1;
          piVar24[1] = uVar10;
        }
        if (cVar2 == '\0') {
          if ((iVar15 != 0) && (uVar17 <= uVar10)) goto LAB_006f04d0;
        }
        else {
          *(undefined1 *)((int)piVar24 + 0x91) = 0;
          if ((iVar15 != 0) && (uVar17 <= uVar10)) {
            *(char *)((int)piVar24 + 0x91) = cVar2;
            goto LAB_006f04d0;
          }
        }
        if (iVar15 != 0) {
          piVar24[1] = uVar10 + 1;
        }
        uVar32 = FUN_006f0d7c(piVar24);
        iVar15 = (int)(uVar32 >> 0x20);
        if ((uVar32 & 1) == 0) {
          do {
            uVar32 = FUN_006f0d7c(iVar15);
            iVar15 = (int)(uVar32 >> 0x20);
          } while ((uVar32 & 1) == 0);
        }
        if (cVar2 != '\0') {
          *(char *)(iVar15 + 0x91) = cVar2;
        }
        cVar2 = *(char *)(iVar15 + 0x90);
        if (cVar2 == '\x01') {
          FUN_006e82ec(iVar15,0x37,iVar19,iVar8,iVar9,puVar25);
          cVar2 = *(char *)(iVar15 + 0x90);
        }
        if ((cVar2 == '\x02') && (*(char *)(iVar15 + 0x91) != '\0')) {
          uVar10 = *(uint *)(iVar15 + 0x14);
          if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,uVar10,&DAT_01c061d0);
          }
          pcVar11 = (char *)(*(int *)(iVar15 + 0x10) + uVar7 * 0x14);
          if (*pcVar11 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar11 + 4) = uVar10;
          iVar8 = *(int *)(iVar15 + 0x14);
          uVar4 = *(undefined4 *)(iVar15 + 0x88);
          if (iVar8 == *(int *)(iVar15 + 0xc)) {
            FUN_0161d664(iVar15 + 0xc);
          }
          puVar12 = (undefined2 *)(*(int *)(iVar15 + 0x10) + iVar8 * 0x14);
          *puVar12 = 0x3701;
          *(uint *)(puVar12 + 2) = uVar7;
          *(undefined4 *)(puVar12 + 8) = uVar4;
          *(undefined4 *)(puVar12 + 4) = 0;
          *(int *)(iVar15 + 0x14) = iVar8 + 1;
        }
        bVar30 = *(char *)(iVar15 + 0x7c) != '\0';
        cVar2 = '\0';
        if (bVar30) {
          cVar2 = *(char *)(iVar15 + 0x91);
        }
        if (bVar30 && cVar2 != '\0') {
          if (uVar21 < *(uint *)(iVar15 + 0x78)) {
            iVar20 = 0;
          }
          FUN_006e83b8(iVar15 + 0x54,0x37,iVar20);
        }
        uVar32 = FUN_006f5094(iVar15,&DAT_0052d60d,3);
      }
      else {
LAB_006f0558:
        uVar32 = CONCAT44(piVar24,1);
      }
      param_1 = (int *)(uVar32 >> 0x20);
      uVar7 = (uint)uVar32;
      if ((uVar32 & 1) != 0) {
        param_1[0x20] = iVar18;
        param_1[0x21] = iVar23;
        param_1[0x22] = iVar26;
        uVar7 = 1;
        if (uVar27 <= (uint)param_1[5]) {
          param_1[5] = uVar27;
        }
      }
    }
    if ((uVar7 & 1) == 0) {
      uVar32 = ZEXT48(param_1) << 0x20;
    }
    else {
      if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        uVar27 = param_1[5];
        iVar18 = param_1[0x20];
        iVar23 = param_1[0x21];
        iVar26 = param_1[0x22];
        uVar31 = FUN_006f5094(param_1,"\"",1);
        piVar24 = (int *)(uVar31 >> 0x20);
        uVar32 = CONCAT44(piVar24,1);
        if ((uVar31 & 1) == 0) {
          iVar8 = *piVar24;
          if ((iVar8 != 1) || (uVar32 = CONCAT44(piVar24,1), (uint)piVar24[1] < (uint)piVar24[2])) {
            iVar19 = piVar24[0x22];
            iVar9 = 0;
            if (iVar8 != 0) {
              iVar9 = piVar24[1] + 1;
            }
            iVar15 = piVar24[0x23];
            if (iVar8 != 0) {
              piVar24[1] = iVar9;
            }
            iVar8 = 0;
            local_50 = 0;
            if (iVar19 == iVar15) {
              iVar8 = piVar24[8];
            }
            uVar7 = piVar24[5];
            if (iVar19 == iVar15) {
              local_50 = piVar24[0xb];
            }
            if (((char)piVar24[0x24] == '\x02') && (*(char *)((int)piVar24 + 0x91) != '\0')) {
              if (uVar7 == piVar24[3]) {
                FUN_0161d664();
                iVar15 = piVar24[0x23];
              }
              piVar24[5] = uVar7 + 1;
              puVar6 = (undefined1 *)(piVar24[4] + uVar7 * 0x14);
              *puVar6 = 0;
              *(undefined4 *)(puVar6 + 4) = 0;
              *(int *)(puVar6 + 8) = iVar19;
            }
            iVar9 = 0;
            if (iVar15 == iVar19) {
              iVar9 = piVar24[0xb] + piVar24[8];
            }
            iVar15 = *piVar24;
            iVar20 = piVar24[0x17];
            uVar10 = piVar24[1];
            uVar17 = piVar24[2];
            uVar21 = piVar24[0x1e];
            if ((iVar15 != 1) || (uVar10 < uVar17)) {
              cVar2 = *(char *)((int)piVar24 + 0x91);
              if (iVar15 != 0) {
                uVar10 = uVar10 + 1;
                piVar24[1] = uVar10;
              }
              if (cVar2 == '\0') {
                if ((iVar15 == 0) || (uVar10 < uVar17)) goto LAB_006f0910;
              }
              else {
                *(undefined1 *)((int)piVar24 + 0x91) = 0;
                if ((iVar15 == 0) || (uVar10 < uVar17)) {
LAB_006f0910:
                  if (iVar15 != 0) {
                    piVar24[1] = uVar10 + 1;
                  }
                  do {
                    uVar32 = FUN_006f127c(piVar24);
                    piVar24 = (int *)(uVar32 >> 0x20);
                  } while ((uVar32 & 1) == 0);
                  cVar3 = (char)piVar24[0x24];
                  if (cVar2 != '\0') {
                    *(char *)((int)piVar24 + 0x91) = cVar2;
                  }
                  if (cVar3 == '\x01') {
                    FUN_006e82ec(piVar24,0x39,iVar19,iVar8,local_50,iVar9);
                    cVar3 = (char)piVar24[0x24];
                  }
                  if ((cVar3 == '\x02') && (*(char *)((int)piVar24 + 0x91) != '\0')) {
                    uVar10 = piVar24[5];
                    if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar7,uVar10,&DAT_01c061d0);
                    }
                    pcVar11 = (char *)(piVar24[4] + uVar7 * 0x14);
                    if (*pcVar11 == '\x01') {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
                    }
                    *(uint *)(pcVar11 + 4) = uVar10;
                    iVar9 = piVar24[5];
                    iVar8 = piVar24[0x22];
                    if (iVar9 == piVar24[3]) {
                      FUN_0161d664(piVar24 + 3);
                    }
                    puVar12 = (undefined2 *)(piVar24[4] + iVar9 * 0x14);
                    *puVar12 = 0x3901;
                    *(uint *)(puVar12 + 2) = uVar7;
                    *(int *)(puVar12 + 8) = iVar8;
                    *(undefined4 *)(puVar12 + 4) = 0;
                    piVar24[5] = iVar9 + 1;
                  }
                  bVar30 = (char)piVar24[0x1f] != '\0';
                  cVar2 = '\0';
                  if (bVar30) {
                    cVar2 = *(char *)((int)piVar24 + 0x91);
                  }
                  if (bVar30 && cVar2 != '\0') {
                    if (uVar21 < (uint)piVar24[0x1e]) {
                      iVar20 = 0;
                    }
                    FUN_006e83b8(piVar24 + 0x15,0x39,iVar20);
                  }
                  uVar32 = FUN_006f5094(piVar24,"\"",1);
                  goto LAB_006f0a24;
                }
                *(char *)((int)piVar24 + 0x91) = cVar2;
              }
            }
            uVar32 = CONCAT44(piVar24,1);
            if ((char)piVar24[0x24] != '\x01') {
              FUN_006e82ec(piVar24,0x39,iVar19,iVar8,local_50,iVar9);
              if (((char)piVar24[0x1f] == '\x01') && (*(char *)((int)piVar24 + 0x91) != '\0')) {
                if (uVar21 < (uint)piVar24[0x1e]) {
                  iVar20 = 0;
                }
                FUN_006e83b8(piVar24 + 0x15,0x39,iVar20);
              }
              uVar32 = CONCAT44(piVar24,1);
              if ((((char)piVar24[0x24] == '\x02') &&
                  (uVar32 = CONCAT44(piVar24,1), *(char *)((int)piVar24 + 0x91) != '\0')) &&
                 (uVar32 = CONCAT44(piVar24,1), uVar7 <= (uint)piVar24[5])) {
                piVar24[5] = uVar7;
                uVar32 = CONCAT44(piVar24,1);
              }
            }
          }
        }
LAB_006f0a24:
        param_1 = (int *)(uVar32 >> 0x20);
        if ((uVar32 & 1) == 0) goto LAB_006f0a50;
        param_1[0x20] = iVar18;
        param_1[0x21] = iVar23;
        param_1[0x22] = iVar26;
        if (uVar27 <= (uint)param_1[5]) {
          param_1[5] = uVar27;
        }
      }
      uVar32 = CONCAT44(param_1,1);
    }
LAB_006f0a50:
    param_1 = (int *)(uVar32 >> 0x20);
    cVar2 = (char)param_1[0x24];
    if ((uVar32 & 1) != 0) {
      if (cVar2 != '\x01') {
        FUN_006e82ec(param_1,0x36,iVar28,iVar29,iVar16,iVar22);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar14 < (uint)param_1[0x1e]) {
            iVar5 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x36,iVar5);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar13 <= (uint)param_1[5])) {
          param_1[5] = uVar13;
        }
      }
      goto LAB_006f0294;
    }
    if (cVar2 == '\x01') {
      FUN_006e82ec(param_1,0x36,iVar28,iVar29,iVar16,iVar22);
      cVar2 = (char)param_1[0x24];
    }
    if ((cVar2 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar27 = param_1[5];
      if (uVar27 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar13,uVar27,&DAT_01c061d0);
      }
      pcVar11 = (char *)(param_1[4] + uVar13 * 0x14);
      if (*pcVar11 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar11 + 4) = uVar27;
      iVar16 = param_1[5];
      iVar28 = param_1[0x22];
      if (iVar16 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar12 = (undefined2 *)(param_1[4] + iVar16 * 0x14);
      *puVar12 = 0x3601;
      *(uint *)(puVar12 + 2) = uVar13;
      *(int *)(puVar12 + 8) = iVar28;
      *(undefined4 *)(puVar12 + 4) = 0;
      param_1[5] = iVar16 + 1;
    }
    bVar30 = (char)param_1[0x1f] != '\0';
    cVar2 = '\0';
    if (bVar30) {
      cVar2 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar30 && cVar2 != '\0') {
      if (uVar14 < (uint)param_1[0x1e]) {
        iVar5 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x36,iVar5);
    }
    uVar4 = 0;
  }
  else {
LAB_006f0294:
    uVar4 = 1;
  }
  if (cVar1 != '\x01') {
    *(char *)((int)param_1 + 0x91) = cVar1;
  }
LAB_006f0ba8:
  return CONCAT44(param_1,uVar4);
}

