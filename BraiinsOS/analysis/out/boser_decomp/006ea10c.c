// FUN_006ea10c @ 006ea10c size=1892 calls_out=11 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006ea10c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  
  if ((*param_1 == 1) && (uVar23 = 1, (uint)param_1[2] <= (uint)param_1[1])) goto LAB_006ea7ec;
  iVar20 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar2 = param_1[0x23];
  iVar28 = 0;
  iVar21 = 0;
  uVar27 = param_1[5];
  if (iVar20 == iVar2) {
    iVar21 = param_1[8];
    iVar28 = param_1[0xb];
  }
  uVar13 = uVar27;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar27 == param_1[3]) {
      FUN_0161d664();
    }
    puVar3 = (undefined1 *)(param_1[4] + uVar27 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar20;
    iVar2 = param_1[0x23];
    param_1[5] = uVar27 + 1;
    uVar13 = uVar27 + 1;
  }
  iVar26 = 0;
  if (iVar2 == iVar20) {
    iVar26 = param_1[0xb] + param_1[8];
  }
  iVar2 = param_1[0x17];
  uVar4 = param_1[0x1e];
  if ((*param_1 != 1) || (bVar30 = true, (uint)param_1[1] < (uint)param_1[2])) {
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar14 = param_1[0x20];
    iVar17 = param_1[0x21];
    iVar24 = param_1[0x22];
    uVar31 = FUN_006ee634(param_1);
    uVar23 = (undefined4)(uVar31 >> 0x20);
    if ((uVar31 & 1) == 0) {
      uVar31 = FUN_006f5184(uVar23);
    }
    else {
      uVar31 = CONCAT44(uVar23,1);
    }
    uVar23 = (undefined4)(uVar31 >> 0x20);
    if ((uVar31 & 1) == 0) {
      uVar31 = FUN_006f5094(uVar23,":",1);
    }
    else {
      uVar31 = CONCAT44(uVar23,1);
    }
    uVar23 = (undefined4)(uVar31 >> 0x20);
    if ((uVar31 & 1) == 0) {
      uVar31 = FUN_006f5184(uVar23);
    }
    else {
      uVar31 = CONCAT44(uVar23,1);
    }
    uVar23 = (undefined4)(uVar31 >> 0x20);
    if ((uVar31 & 1) == 0) {
      uVar31 = FUN_006ec678(uVar23);
    }
    else {
      uVar31 = CONCAT44(uVar23,1);
    }
    uVar23 = (undefined4)(uVar31 >> 0x20);
    if ((uVar31 & 1) == 0) {
      uVar31 = FUN_006f5184(uVar23);
    }
    else {
      uVar31 = CONCAT44(uVar23,1);
    }
    piVar19 = (int *)(uVar31 >> 0x20);
    if ((uVar31 & 1) == 0) {
      if ((*piVar19 == 1) && ((uint)piVar19[2] <= (uint)piVar19[1])) goto LAB_006ea2e4;
      if (*piVar19 != 0) {
        piVar19[1] = piVar19[1] + 1;
      }
      FUN_006f34ac(piVar19);
      uVar31 = FUN_006f5184();
    }
    else {
LAB_006ea2e4:
      uVar31 = CONCAT44(piVar19,1);
    }
    param_1 = (int *)(uVar31 >> 0x20);
    bVar1 = true;
    if ((uVar31 & 1) == 0) {
      iVar9 = *param_1;
      uVar15 = param_1[1];
      if ((iVar9 != 1) || (uVar15 < (uint)param_1[2])) {
        if (iVar9 != 0) {
          param_1[1] = uVar15 + 1;
          if ((iVar9 != 0) && (bVar1 = false, (uint)param_1[2] <= uVar15 + 1)) goto LAB_006ea66c;
          param_1[1] = uVar15 + 2;
        }
        iVar10 = param_1[0x22];
        iVar16 = 0;
        iVar9 = param_1[0x23];
        iVar11 = 0;
        if (iVar10 == iVar9) {
          iVar11 = param_1[8];
        }
        uVar15 = param_1[5];
        if (iVar10 == iVar9) {
          iVar16 = param_1[0xb];
        }
        uVar12 = uVar15;
        if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar15 == param_1[3]) {
            FUN_0161d664();
          }
          puVar3 = (undefined1 *)(param_1[4] + uVar15 * 0x14);
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 4) = 0;
          *(int *)(puVar3 + 8) = iVar10;
          iVar9 = param_1[0x23];
          param_1[5] = uVar15 + 1;
          uVar12 = uVar15 + 1;
        }
        iVar29 = 0;
        if (iVar9 == iVar10) {
          iVar29 = param_1[0xb] + param_1[8];
        }
        iVar9 = param_1[0x17];
        uVar5 = param_1[0x1e];
        if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
LAB_006ea4e0:
          uVar31 = CONCAT44(param_1,1);
        }
        else {
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          iVar18 = param_1[0x20];
          iVar22 = param_1[0x21];
          iVar25 = param_1[0x22];
          uVar32 = FUN_006f5094(param_1,&DAT_00531a0c,1);
          uVar23 = (undefined4)(uVar32 >> 0x20);
          uVar31 = CONCAT44(uVar23,1);
          if ((uVar32 & 1) == 0) {
            uVar31 = FUN_006f5184(uVar23);
          }
          uVar23 = (undefined4)(uVar31 >> 0x20);
          if ((uVar31 & 1) == 0) {
            uVar31 = FUN_006ecb50(uVar23);
          }
          else {
            uVar31 = CONCAT44(uVar23,1);
          }
          param_1 = (int *)(uVar31 >> 0x20);
          if ((uVar31 & 1) != 0) {
            param_1[0x20] = iVar18;
            param_1[0x21] = iVar22;
            param_1[0x22] = iVar25;
            if (uVar12 <= (uint)param_1[5]) {
              param_1[5] = uVar12;
            }
            goto LAB_006ea4e0;
          }
        }
        param_1 = (int *)(uVar31 >> 0x20);
        cVar8 = (char)param_1[0x24];
        if ((uVar31 & 1) == 0) {
          if (cVar8 == '\x01') {
            FUN_006e82ec(param_1,0x2c,iVar10,iVar11,iVar16,iVar29);
            cVar8 = (char)param_1[0x24];
          }
          if ((cVar8 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            uVar12 = param_1[5];
            if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar15,uVar12,&DAT_01c061d0);
            }
            pcVar6 = (char *)(param_1[4] + uVar15 * 0x14);
            if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
            }
            *(uint *)(pcVar6 + 4) = uVar12;
            iVar10 = param_1[5];
            iVar11 = param_1[0x22];
            if (iVar10 == param_1[3]) {
              FUN_0161d664(param_1 + 3);
            }
            puVar7 = (undefined2 *)(param_1[4] + iVar10 * 0x14);
            *puVar7 = 0x2c01;
            *(uint *)(puVar7 + 2) = uVar15;
            *(int *)(puVar7 + 8) = iVar11;
            *(undefined4 *)(puVar7 + 4) = 0;
            param_1[5] = iVar10 + 1;
          }
          bVar30 = (char)param_1[0x1f] != '\0';
          cVar8 = '\0';
          if (bVar30) {
            cVar8 = *(char *)((int)param_1 + 0x91);
          }
          if (bVar30 && cVar8 != '\0') {
            if (uVar5 < (uint)param_1[0x1e]) {
              iVar9 = 0;
            }
            FUN_006e83b8(param_1 + 0x15,0x2c,iVar9);
          }
        }
        else {
          bVar1 = false;
          if (cVar8 != '\x01') {
            FUN_006e82ec(param_1,0x2c,iVar10,iVar11,iVar16,iVar29);
            if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
              if (uVar5 < (uint)param_1[0x1e]) {
                iVar9 = 0;
              }
              FUN_006e83b8(param_1 + 0x15,0x2c,iVar9);
            }
            if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
               (uVar15 <= (uint)param_1[5])) {
              param_1[5] = uVar15;
            }
            goto LAB_006ea66c;
          }
        }
        bVar1 = false;
      }
    }
LAB_006ea66c:
    bVar30 = false;
    if (bVar1) {
      bVar30 = true;
      param_1[0x20] = iVar14;
      param_1[0x21] = iVar17;
      param_1[0x22] = iVar24;
      if (uVar13 <= (uint)param_1[5]) {
        param_1[5] = uVar13;
      }
    }
  }
  cVar8 = (char)param_1[0x24];
  if (bVar30) {
    uVar23 = 1;
    if (cVar8 != '\x01') {
      FUN_006e82ec(param_1,9,iVar20,iVar21,iVar28,iVar26);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar4 < (uint)param_1[0x1e]) {
          iVar2 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,9,iVar2);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar27 <= (uint)param_1[5])) {
        param_1[5] = uVar27;
      }
    }
  }
  else {
    if (cVar8 == '\x01') {
      FUN_006e82ec(param_1,9,iVar20,iVar21,iVar28,iVar26);
      cVar8 = (char)param_1[0x24];
    }
    if ((cVar8 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar13 = param_1[5];
      if (uVar13 <= uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar27,uVar13,&DAT_01c061d0);
      }
      pcVar6 = (char *)(param_1[4] + uVar27 * 0x14);
      if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar6 + 4) = uVar13;
      iVar20 = param_1[5];
      iVar21 = param_1[0x22];
      if (iVar20 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar7 = (undefined2 *)(param_1[4] + iVar20 * 0x14);
      *puVar7 = 0x901;
      *(int *)(puVar7 + 8) = iVar21;
      *(uint *)(puVar7 + 2) = uVar27;
      *(undefined4 *)(puVar7 + 4) = 0;
      param_1[5] = iVar20 + 1;
    }
    uVar23 = 0;
    bVar30 = (char)param_1[0x1f] != '\0';
    cVar8 = '\0';
    if (bVar30) {
      cVar8 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar30 && cVar8 != '\0') {
      if (uVar4 < (uint)param_1[0x1e]) {
        iVar2 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,9,iVar2);
    }
  }
LAB_006ea7ec:
  return CONCAT44(param_1,uVar23);
}

