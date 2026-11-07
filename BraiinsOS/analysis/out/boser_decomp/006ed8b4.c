// FUN_006ed8b4 @ 006ed8b4 size=3220 calls_out=17 calls_in=4
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ed8b4(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int local_44;
  
  uVar25 = 1;
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) goto LAB_006ee230;
  iVar27 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar2 = param_1[0x23];
  iVar9 = 0;
  iVar22 = 0;
  uVar26 = param_1[5];
  if (iVar27 == iVar2) {
    iVar9 = param_1[0xb];
    iVar22 = param_1[8];
  }
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar26 == param_1[3]) {
      FUN_0161d664();
    }
    puVar3 = (undefined1 *)(param_1[4] + uVar26 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar27;
    iVar2 = param_1[0x23];
    param_1[5] = uVar26 + 1;
  }
  local_44 = 0;
  if (iVar2 == iVar27) {
    local_44 = param_1[0xb] + param_1[8];
  }
  iVar2 = param_1[0x17];
  uVar4 = param_1[0x1e];
  uVar31 = FUN_006ee634(param_1);
  uVar28 = (uint)(uVar31 >> 0x20);
  if ((uVar31 & 1) == 0) {
    uVar31 = (ulonglong)uVar28 << 0x20;
  }
  else {
    uVar31 = FUN_006ee9c8(uVar28);
  }
  uVar28 = (uint)(uVar31 >> 0x20);
  if ((uVar31 & 1) == 0) {
    uVar31 = (ulonglong)uVar28 << 0x20;
  }
  else {
    uVar31 = FUN_006f0240(uVar28);
  }
  uVar28 = (uint)(uVar31 >> 0x20);
  if ((uVar31 & 1) == 0) {
    uVar31 = (ulonglong)uVar28 << 0x20;
  }
  else {
    uVar31 = FUN_006f228c(uVar28);
  }
  uVar28 = (uint)(uVar31 >> 0x20);
  if ((uVar31 & 1) == 0) {
    uVar31 = (ulonglong)uVar28 << 0x20;
  }
  else {
    uVar31 = FUN_006f258c(uVar28);
  }
  uVar28 = (uint)(uVar31 >> 0x20);
  if ((uVar31 & 1) == 0) {
    uVar31 = (ulonglong)uVar28 << 0x20;
  }
  else {
    uVar31 = FUN_006f2858(uVar28);
  }
  param_1 = (int *)(uVar31 >> 0x20);
  if ((uVar31 & 1) == 0) {
LAB_006ee164:
    cVar1 = (char)param_1[0x24];
    if (cVar1 == '\x01') {
      FUN_006e82ec(param_1,0x2f,iVar27,iVar22,iVar9,local_44);
      cVar1 = (char)param_1[0x24];
    }
    if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar28 = param_1[5];
      if (uVar28 <= uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar26,uVar28,&DAT_01c061d0);
      }
      pcVar6 = (char *)(param_1[4] + uVar26 * 0x14);
      if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar6 + 4) = uVar28;
      iVar27 = param_1[5];
      iVar9 = param_1[0x22];
      if (iVar27 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar7 = (undefined2 *)(param_1[4] + iVar27 * 0x14);
      *puVar7 = 0x2f01;
      *(uint *)(puVar7 + 2) = uVar26;
      *(int *)(puVar7 + 8) = iVar9;
      *(undefined4 *)(puVar7 + 4) = 0;
      param_1[5] = iVar27 + 1;
    }
    uVar25 = 0;
    bVar30 = (char)param_1[0x1f] != '\0';
    cVar1 = '\0';
    if (bVar30) {
      cVar1 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar30 && cVar1 != '\0') {
      if (uVar4 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x2f,iVar2);
    }
  }
  else {
    if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
      iVar29 = param_1[0x22];
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar10 = param_1[0x23];
      iVar5 = 0;
      iVar15 = 0;
      uVar28 = param_1[5];
      if (iVar29 == iVar10) {
        iVar5 = param_1[0xb];
        iVar15 = param_1[8];
      }
      uVar11 = (uint)*(byte *)(param_1 + 0x24);
      uVar13 = uVar28;
      if ((uVar11 == 2) && (uVar11 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar28 == param_1[3]) {
          FUN_0161d664();
        }
        uVar11 = uVar28 * 5;
        puVar3 = (undefined1 *)(param_1[4] + uVar28 * 0x14);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(int *)(puVar3 + 8) = iVar29;
        iVar10 = param_1[0x23];
        param_1[5] = uVar28 + 1;
        uVar13 = uVar28 + 1;
      }
      bVar30 = iVar10 == iVar29;
      iVar19 = 0;
      if (bVar30) {
        iVar10 = param_1[8];
        uVar11 = param_1[0xb];
      }
      if (bVar30) {
        iVar19 = uVar11 + iVar10;
      }
      iVar10 = param_1[0x17];
      uVar11 = param_1[0x1e];
      if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
        uVar31 = CONCAT44(param_1,1);
      }
      else {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        iVar17 = param_1[0x20];
        iVar20 = param_1[0x21];
        iVar23 = param_1[0x22];
        uVar32 = FUN_006f5094(param_1,&DAT_0053340d,1);
        uVar16 = (undefined4)(uVar32 >> 0x20);
        uVar31 = CONCAT44(uVar16,1);
        if ((uVar32 & 1) == 0) {
          uVar31 = FUN_006f5184(uVar16);
        }
        piVar8 = (int *)(uVar31 >> 0x20);
        if ((uVar31 & 1) == 0) {
          uVar12 = piVar8[1];
          if ((*piVar8 == 1) && ((uint)piVar8[2] <= uVar12)) goto LAB_006edcf4;
          if (*piVar8 != 0) {
            piVar8[1] = uVar12 + 1;
            if ((uint)piVar8[2] <= uVar12 + 1) goto LAB_006edcf4;
            piVar8[1] = uVar12 + 2;
          }
          uVar31 = FUN_006ed8b4(piVar8);
          piVar8 = (int *)(uVar31 >> 0x20);
          if ((uVar31 & 1) == 0) {
            if ((*piVar8 != 1) || ((uint)piVar8[1] < (uint)piVar8[2])) {
              if (*piVar8 != 0) {
                piVar8[1] = piVar8[1] + 1;
              }
              uVar31 = FUN_006f56ec();
              while (piVar8 = (int *)(uVar31 >> 0x20), (uVar31 & 1) == 0) {
                if ((*piVar8 == 1) && ((uint)piVar8[2] <= (uint)piVar8[1])) {
                  uVar31 = CONCAT44(piVar8,1);
                }
                else {
                  uVar12 = piVar8[5];
                  if (*piVar8 != 0) {
                    piVar8[1] = piVar8[1] + 1;
                  }
                  iVar18 = piVar8[0x20];
                  iVar21 = piVar8[0x21];
                  iVar24 = piVar8[0x22];
                  uVar31 = FUN_006f5184();
                  if ((uVar31 & 1) == 0) {
                    uVar31 = FUN_006ed8b4();
                  }
                  else {
                    uVar31 = CONCAT44((int)(uVar31 >> 0x20),1);
                  }
                  iVar14 = (int)(uVar31 >> 0x20);
                  uVar16 = (undefined4)uVar31;
                  if ((uVar31 & 1) != 0) {
                    uVar16 = 1;
                    *(int *)(iVar14 + 0x80) = iVar18;
                    *(int *)(iVar14 + 0x84) = iVar21;
                    *(int *)(iVar14 + 0x88) = iVar24;
                    if (uVar12 <= *(uint *)(iVar14 + 0x14)) {
                      *(uint *)(iVar14 + 0x14) = uVar12;
                    }
                  }
                  uVar31 = CONCAT44(iVar14,uVar16);
                }
              }
            }
          }
          uVar31 = FUN_006f5184();
        }
        else {
LAB_006edcf4:
          uVar31 = CONCAT44(piVar8,1);
        }
        uVar16 = (undefined4)(uVar31 >> 0x20);
        if ((uVar31 & 1) == 0) {
          uVar31 = FUN_006f5094(uVar16,"]",1);
        }
        else {
          uVar31 = CONCAT44(uVar16,1);
        }
        iVar18 = (int)(uVar31 >> 0x20);
        if ((uVar31 & 1) != 0) {
          *(int *)(iVar18 + 0x80) = iVar17;
          *(int *)(iVar18 + 0x84) = iVar20;
          *(int *)(iVar18 + 0x88) = iVar23;
          uVar31 = CONCAT44(iVar18,1);
          if (uVar13 <= *(uint *)(iVar18 + 0x14)) {
            *(uint *)(iVar18 + 0x14) = uVar13;
            uVar31 = CONCAT44(iVar18,1);
          }
        }
      }
      param_1 = (int *)(uVar31 >> 0x20);
      cVar1 = (char)param_1[0x24];
      if ((uVar31 & 1) == 0) {
        if (cVar1 == '\x01') {
          FUN_006e82ec(param_1,0x40,iVar29,iVar15,iVar5,iVar19);
          cVar1 = (char)param_1[0x24];
        }
        if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          uVar13 = param_1[5];
          if (uVar13 <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar28,uVar13,&DAT_01c061d0);
          }
          pcVar6 = (char *)(param_1[4] + uVar28 * 0x14);
          if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar6 + 4) = uVar13;
          iVar29 = param_1[5];
          iVar5 = param_1[0x22];
          if (iVar29 == param_1[3]) {
            FUN_0161d664(param_1 + 3);
          }
          puVar7 = (undefined2 *)(param_1[4] + iVar29 * 0x14);
          *puVar7 = 0x4001;
          *(int *)(puVar7 + 8) = iVar5;
          *(uint *)(puVar7 + 2) = uVar28;
          *(undefined4 *)(puVar7 + 4) = 0;
          param_1[5] = iVar29 + 1;
        }
        bVar30 = (char)param_1[0x1f] != '\0';
        cVar1 = '\0';
        if (bVar30) {
          cVar1 = *(char *)((int)param_1 + 0x91);
        }
        if (bVar30 && cVar1 != '\0') {
          if (uVar11 < (uint)param_1[0x1e]) {
            iVar10 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x40,iVar10);
        }
        goto LAB_006ee164;
      }
      if (cVar1 != '\x01') {
        FUN_006e82ec(param_1,0x40,iVar29,iVar15,iVar5,iVar19);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar11 < (uint)param_1[0x1e]) {
            iVar10 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x40,iVar10);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar28 <= (uint)param_1[5])) {
          param_1[5] = uVar28;
        }
      }
    }
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      cVar1 = (char)param_1[0x24];
LAB_006eda5c:
      if (cVar1 == '\x01') goto LAB_006ee230;
    }
    else {
      iVar29 = param_1[0x22];
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar5 = param_1[0x23];
      iVar10 = 0;
      uVar28 = param_1[5];
      iVar15 = 0;
      if (iVar29 == iVar5) {
        iVar10 = param_1[8];
      }
      uVar11 = (uint)*(byte *)(param_1 + 0x24);
      if (iVar29 == iVar5) {
        iVar15 = param_1[0xb];
      }
      uVar13 = uVar28;
      if ((uVar11 == 2) && (uVar11 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar28 == param_1[3]) {
          FUN_0161d664();
        }
        uVar11 = uVar28 * 5;
        puVar3 = (undefined1 *)(param_1[4] + uVar28 * 0x14);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(int *)(puVar3 + 8) = iVar29;
        iVar5 = param_1[0x23];
        param_1[5] = uVar28 + 1;
        uVar13 = uVar28 + 1;
      }
      bVar30 = iVar5 == iVar29;
      iVar19 = 0;
      if (bVar30) {
        iVar5 = param_1[8];
        uVar11 = param_1[0xb];
      }
      if (bVar30) {
        iVar19 = uVar11 + iVar5;
      }
      iVar5 = param_1[0x17];
      uVar11 = param_1[0x1e];
      if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
        uVar31 = CONCAT44(param_1,1);
      }
      else {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        iVar17 = param_1[0x20];
        iVar20 = param_1[0x21];
        iVar23 = param_1[0x22];
        uVar32 = FUN_006f5094(param_1,"{",1);
        uVar16 = (undefined4)(uVar32 >> 0x20);
        uVar31 = CONCAT44(uVar16,1);
        if ((uVar32 & 1) == 0) {
          uVar31 = FUN_006f5184(uVar16);
        }
        piVar8 = (int *)(uVar31 >> 0x20);
        if ((uVar31 & 1) == 0) {
          uVar12 = piVar8[1];
          if ((*piVar8 == 1) && ((uint)piVar8[2] <= uVar12)) goto LAB_006edde8;
          if (*piVar8 != 0) {
            piVar8[1] = uVar12 + 1;
            if ((uint)piVar8[2] <= uVar12 + 1) goto LAB_006edde8;
            piVar8[1] = uVar12 + 2;
          }
          uVar31 = FUN_006f30d4(piVar8);
          piVar8 = (int *)(uVar31 >> 0x20);
          if ((uVar31 & 1) == 0) {
            if ((*piVar8 != 1) || ((uint)piVar8[1] < (uint)piVar8[2])) {
              if (*piVar8 != 0) {
                piVar8[1] = piVar8[1] + 1;
              }
              uVar31 = FUN_006f55bc();
              while (piVar8 = (int *)(uVar31 >> 0x20), (uVar31 & 1) == 0) {
                if ((*piVar8 == 1) && ((uint)piVar8[2] <= (uint)piVar8[1])) {
                  uVar31 = CONCAT44(piVar8,1);
                }
                else {
                  uVar12 = piVar8[5];
                  if (*piVar8 != 0) {
                    piVar8[1] = piVar8[1] + 1;
                  }
                  iVar18 = piVar8[0x20];
                  iVar21 = piVar8[0x21];
                  iVar24 = piVar8[0x22];
                  uVar31 = FUN_006f5184();
                  if ((uVar31 & 1) == 0) {
                    uVar31 = FUN_006f30d4();
                  }
                  else {
                    uVar31 = CONCAT44((int)(uVar31 >> 0x20),1);
                  }
                  iVar14 = (int)(uVar31 >> 0x20);
                  uVar16 = (undefined4)uVar31;
                  if ((uVar31 & 1) != 0) {
                    uVar16 = 1;
                    *(int *)(iVar14 + 0x80) = iVar18;
                    *(int *)(iVar14 + 0x84) = iVar21;
                    *(int *)(iVar14 + 0x88) = iVar24;
                    if (uVar12 <= *(uint *)(iVar14 + 0x14)) {
                      *(uint *)(iVar14 + 0x14) = uVar12;
                    }
                  }
                  uVar31 = CONCAT44(iVar14,uVar16);
                }
              }
            }
          }
          uVar31 = FUN_006f5184();
        }
        else {
LAB_006edde8:
          uVar31 = CONCAT44(piVar8,1);
        }
        uVar16 = (undefined4)(uVar31 >> 0x20);
        if ((uVar31 & 1) == 0) {
          uVar31 = FUN_006f5094(uVar16,"}",1);
        }
        else {
          uVar31 = CONCAT44(uVar16,1);
        }
        iVar18 = (int)(uVar31 >> 0x20);
        if ((uVar31 & 1) != 0) {
          *(int *)(iVar18 + 0x80) = iVar17;
          *(int *)(iVar18 + 0x84) = iVar20;
          *(int *)(iVar18 + 0x88) = iVar23;
          uVar31 = CONCAT44(iVar18,1);
          if (uVar13 <= *(uint *)(iVar18 + 0x14)) {
            *(uint *)(iVar18 + 0x14) = uVar13;
            uVar31 = CONCAT44(iVar18,1);
          }
        }
      }
      param_1 = (int *)(uVar31 >> 0x20);
      cVar1 = (char)param_1[0x24];
      if ((uVar31 & 1) == 0) {
        if (cVar1 == '\x01') {
          FUN_006e82ec(param_1,0x42,iVar29,iVar10,iVar15,iVar19);
          cVar1 = (char)param_1[0x24];
        }
        if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          uVar13 = param_1[5];
          if (uVar13 <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar28,uVar13,&DAT_01c061d0);
          }
          pcVar6 = (char *)(param_1[4] + uVar28 * 0x14);
          if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar6 + 4) = uVar13;
          iVar29 = param_1[5];
          iVar10 = param_1[0x22];
          if (iVar29 == param_1[3]) {
            FUN_0161d664(param_1 + 3);
          }
          puVar7 = (undefined2 *)(param_1[4] + iVar29 * 0x14);
          *puVar7 = 0x4201;
          *(uint *)(puVar7 + 2) = uVar28;
          *(int *)(puVar7 + 8) = iVar10;
          *(undefined4 *)(puVar7 + 4) = 0;
          param_1[5] = iVar29 + 1;
        }
        bVar30 = (char)param_1[0x1f] != '\0';
        cVar1 = '\0';
        if (bVar30) {
          cVar1 = *(char *)((int)param_1 + 0x91);
        }
        if (bVar30 && cVar1 != '\0') {
          if (uVar11 < (uint)param_1[0x1e]) {
            iVar5 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x42,iVar5);
        }
        goto LAB_006ee164;
      }
      if (cVar1 == '\x01') goto LAB_006ee230;
      FUN_006e82ec(param_1,0x42,iVar29,iVar10,iVar15,iVar19);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar11 < (uint)param_1[0x1e]) {
          iVar5 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x42,iVar5);
      }
      cVar1 = (char)param_1[0x24];
      if (cVar1 != '\x02') goto LAB_006eda5c;
      if ((*(char *)((int)param_1 + 0x91) != '\0') && (uVar28 <= (uint)param_1[5])) {
        param_1[5] = uVar28;
      }
    }
    FUN_006e82ec(param_1,0x2f,iVar27,iVar22,iVar9,local_44);
    if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar4 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x2f,iVar2);
    }
    if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
       (uVar26 <= (uint)param_1[5])) {
      param_1[5] = uVar26;
    }
  }
LAB_006ee230:
  return CONCAT44(param_1,uVar25);
}

