// FUN_006eae0c @ 006eae0c size=4624 calls_out=14 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006eae0c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_r1;
  int *extraout_r1_00;
  uint uVar10;
  int iVar11;
  int extraout_r2;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  bool bVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  uint local_64;
  int local_50;
  int local_4c;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  local_44 = 1;
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) goto LAB_006ebe84;
  uVar28 = param_1[5];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar8 = param_1[0x22];
  iVar2 = param_1[0x23];
  puVar30 = (uint *)(param_1 + 3);
  iVar9 = 0;
  if (iVar8 == iVar2) {
    iVar9 = param_1[8];
  }
  local_4c = 0;
  if (iVar8 == iVar2) {
    local_4c = param_1[0xb];
  }
  uVar29 = uVar28;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar28 == *puVar30) {
      FUN_0161d664(puVar30);
    }
    uVar29 = uVar28 + 1;
    puVar3 = (undefined1 *)(param_1[4] + uVar28 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar8;
    iVar2 = param_1[0x23];
    param_1[5] = uVar29;
  }
  iVar13 = param_1[0x17];
  local_50 = 0;
  uVar14 = param_1[0x1e];
  if (iVar2 == iVar8) {
    local_50 = param_1[0xb] + param_1[8];
  }
  iVar11 = *param_1;
  if ((iVar11 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
LAB_006eaf24:
    if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
      iVar2 = param_1[0x22];
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar4 = param_1[0x23];
      iVar20 = 0;
      iVar11 = 0;
      uVar31 = param_1[5];
      uVar29 = (uint)*(byte *)(param_1 + 0x24);
      if (iVar2 == iVar4) {
        iVar11 = param_1[8];
        iVar20 = param_1[0xb];
      }
      uVar10 = uVar31;
      if ((uVar29 == 2) && (uVar29 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar31 == param_1[3]) {
          FUN_0161d664();
        }
        uVar29 = uVar31 * 5;
        puVar3 = (undefined1 *)(param_1[4] + uVar31 * 0x14);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(int *)(puVar3 + 8) = iVar2;
        iVar4 = param_1[0x23];
        param_1[5] = uVar31 + 1;
        uVar10 = uVar31 + 1;
      }
      bVar32 = iVar4 == iVar2;
      if (bVar32) {
        iVar4 = param_1[8];
      }
      iVar21 = 0;
      if (bVar32) {
        uVar29 = param_1[0xb];
      }
      iVar15 = param_1[0x17];
      if (bVar32) {
        iVar21 = uVar29 + iVar4;
      }
      uVar29 = param_1[0x1e];
      if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
        uVar33 = CONCAT44(param_1,1);
      }
      else {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        iVar4 = param_1[0x20];
        iVar22 = param_1[0x21];
        iVar26 = param_1[0x22];
        uVar33 = FUN_006f5094(param_1,"...",3);
        uVar18 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          uVar33 = FUN_006f5184(uVar18);
        }
        else {
          uVar33 = CONCAT44(uVar18,1);
        }
        piVar19 = (int *)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          if ((*piVar19 == 1) && ((uint)piVar19[2] <= (uint)piVar19[1])) goto LAB_006eb400;
          if (*piVar19 != 0) {
            piVar19[1] = piVar19[1] + 1;
          }
          FUN_006ec1d0(piVar19);
          uVar33 = FUN_006f5184(extraout_r1);
        }
        else {
LAB_006eb400:
          uVar33 = CONCAT44(piVar19,1);
        }
        piVar19 = (int *)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          if ((*piVar19 == 1) && ((uint)piVar19[2] <= (uint)piVar19[1])) goto LAB_006eb5ac;
          if (*piVar19 != 0) {
            piVar19[1] = piVar19[1] + 1;
          }
          FUN_006f34ac(piVar19);
          uVar33 = FUN_006f5184();
        }
        else {
LAB_006eb5ac:
          uVar33 = CONCAT44(piVar19,1);
        }
        uVar18 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          uVar33 = FUN_006ea90c(uVar18);
        }
        else {
          uVar33 = CONCAT44(uVar18,1);
        }
        iVar27 = (int)(uVar33 >> 0x20);
        if ((uVar33 & 1) != 0) {
          *(int *)(iVar27 + 0x80) = iVar4;
          *(int *)(iVar27 + 0x84) = iVar22;
          *(int *)(iVar27 + 0x88) = iVar26;
          uVar33 = CONCAT44(iVar27,1);
          if (uVar10 <= *(uint *)(iVar27 + 0x14)) {
            *(uint *)(iVar27 + 0x14) = uVar10;
            uVar33 = CONCAT44(iVar27,1);
          }
        }
      }
      param_1 = (int *)(uVar33 >> 0x20);
      cVar1 = (char)param_1[0x24];
      if ((uVar33 & 1) == 0) {
        if (cVar1 == '\x01') {
          FUN_006e82ec(param_1,0xf,iVar2,iVar11,iVar20,iVar21);
          cVar1 = (char)param_1[0x24];
        }
        if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          uVar10 = param_1[5];
          if (uVar10 <= uVar31) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar31,uVar10,&DAT_01c061d0);
          }
          pcVar5 = (char *)(param_1[4] + uVar31 * 0x14);
          if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar5 + 4) = uVar10;
          iVar2 = param_1[5];
          iVar11 = param_1[0x22];
          if (iVar2 == param_1[3]) {
            FUN_0161d664(param_1 + 3);
          }
          puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
          *puVar6 = 0xf01;
          *(uint *)(puVar6 + 2) = uVar31;
          *(int *)(puVar6 + 8) = iVar11;
          *(undefined4 *)(puVar6 + 4) = 0;
          param_1[5] = iVar2 + 1;
        }
        bVar32 = (char)param_1[0x1f] != '\0';
        cVar1 = '\0';
        if (bVar32) {
          cVar1 = *(char *)((int)param_1 + 0x91);
        }
        if (bVar32 && cVar1 != '\0') {
          if (uVar29 < (uint)param_1[0x1e]) {
            iVar15 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0xf,iVar15);
        }
        goto LAB_006ebdb0;
      }
      if (cVar1 != '\x01') {
        FUN_006e82ec(param_1,0xf,iVar2,iVar11,iVar20,iVar21);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar29 < (uint)param_1[0x1e]) {
            iVar15 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0xf,iVar15);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar31 <= (uint)param_1[5])) {
          param_1[5] = uVar31;
        }
      }
    }
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      cVar1 = (char)param_1[0x24];
LAB_006eaf58:
      if (cVar1 == '\x01') goto LAB_006ebe84;
    }
    else {
      iVar2 = param_1[0x22];
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar4 = param_1[0x23];
      iVar20 = 0;
      iVar11 = 0;
      uVar31 = param_1[5];
      uVar29 = (uint)*(byte *)(param_1 + 0x24);
      if (iVar2 == iVar4) {
        iVar11 = param_1[8];
        iVar20 = param_1[0xb];
      }
      uVar10 = uVar31;
      if ((uVar29 == 2) && (uVar29 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar31 == param_1[3]) {
          FUN_0161d664();
        }
        uVar29 = uVar31 * 5;
        puVar3 = (undefined1 *)(param_1[4] + uVar31 * 0x14);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(int *)(puVar3 + 8) = iVar2;
        iVar4 = param_1[0x23];
        param_1[5] = uVar31 + 1;
        uVar10 = uVar31 + 1;
      }
      bVar32 = iVar4 == iVar2;
      iVar21 = 0;
      if (bVar32) {
        iVar4 = param_1[8];
        uVar29 = param_1[0xb];
      }
      if (bVar32) {
        iVar21 = uVar29 + iVar4;
      }
      iVar4 = param_1[0x17];
      uVar29 = param_1[0x1e];
      if ((*param_1 != 1) || (bVar32 = true, (uint)param_1[1] < (uint)param_1[2])) {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        iVar15 = param_1[0x20];
        iVar22 = param_1[0x21];
        iVar26 = param_1[0x22];
        uVar33 = FUN_006f5094(param_1,"...",3);
        uVar18 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          uVar33 = FUN_006f5184(uVar18);
        }
        else {
          uVar33 = CONCAT44(uVar18,1);
        }
        piVar19 = (int *)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          if ((*piVar19 == 1) && ((uint)piVar19[2] <= (uint)piVar19[1])) goto LAB_006ebc20;
          iVar27 = piVar19[0x24];
          if (*piVar19 != 0) {
            piVar19[1] = piVar19[1] + 1;
          }
          *(bool *)(piVar19 + 0x24) = (char)iVar27 != '\x01';
          iVar12 = piVar19[0x20];
          iVar17 = piVar19[0x21];
          iVar24 = piVar19[0x22];
          FUN_00700e8c(piVar19 + 0xc);
          uVar33 = FUN_006ec1d0(piVar19);
          piVar19 = (int *)(uVar33 >> 0x20);
          piVar19[0x20] = iVar12;
          piVar19[0x21] = iVar17;
          piVar19[0x22] = iVar24;
          *(char *)(piVar19 + 0x24) = (char)iVar27;
          if ((uVar33 & 1) == 0) {
            FUN_00700d14(piVar19 + 0xc);
            goto LAB_006ebc20;
          }
          FUN_00700d14(piVar19 + 0xc);
          uVar33 = FUN_006f5184(piVar19);
        }
        else {
LAB_006ebc20:
          uVar33 = CONCAT44(piVar19,1);
        }
        uVar18 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          uVar33 = FUN_006f4a10(uVar18);
        }
        else {
          uVar33 = CONCAT44(uVar18,1);
        }
        uVar18 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) {
          uVar33 = FUN_006f5184(uVar18);
        }
        else {
          uVar33 = CONCAT44(uVar18,1);
        }
        param_1 = (int *)(uVar33 >> 0x20);
        bVar7 = true;
        if ((uVar33 & 1) == 0) {
          if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
            if (*param_1 != 0) {
              param_1[1] = param_1[1] + 1;
            }
            param_1 = (int *)FUN_006f34ac(param_1);
            bVar7 = false;
          }
        }
        bVar32 = false;
        if (bVar7) {
          param_1[0x20] = iVar15;
          param_1[0x21] = iVar22;
          param_1[0x22] = iVar26;
          bVar32 = true;
          if (uVar10 <= (uint)param_1[5]) {
            param_1[5] = uVar10;
          }
        }
      }
      cVar1 = (char)param_1[0x24];
      if (!bVar32) {
        if (cVar1 == '\x01') {
          FUN_006e82ec(param_1,0xe,iVar2,iVar11,iVar20,iVar21);
          cVar1 = (char)param_1[0x24];
        }
        if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          uVar10 = param_1[5];
          if (uVar10 <= uVar31) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar31,uVar10,&DAT_01c061d0);
          }
          pcVar5 = (char *)(param_1[4] + uVar31 * 0x14);
          if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar5 + 4) = uVar10;
          iVar2 = param_1[5];
          iVar11 = param_1[0x22];
          if (iVar2 == param_1[3]) {
            FUN_0161d664(param_1 + 3);
          }
          puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
          *puVar6 = 0xe01;
          *(uint *)(puVar6 + 2) = uVar31;
          *(int *)(puVar6 + 8) = iVar11;
          *(undefined4 *)(puVar6 + 4) = 0;
          param_1[5] = iVar2 + 1;
        }
        bVar32 = (char)param_1[0x1f] != '\0';
        cVar1 = '\0';
        if (bVar32) {
          cVar1 = *(char *)((int)param_1 + 0x91);
        }
        if (bVar32 && cVar1 != '\0') {
          if (uVar29 < (uint)param_1[0x1e]) {
            iVar4 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0xe,iVar4);
        }
        goto LAB_006ebdb0;
      }
      if (cVar1 == '\x01') {
        local_44 = 1;
        goto LAB_006ebe84;
      }
      FUN_006e82ec(param_1,0xe,iVar2,iVar11,iVar20,iVar21);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar29 < (uint)param_1[0x1e]) {
          iVar4 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0xe,iVar4);
      }
      cVar1 = (char)param_1[0x24];
      if (cVar1 != '\x02') goto LAB_006eaf58;
      if ((*(char *)((int)param_1 + 0x91) != '\0') && (uVar31 <= (uint)param_1[5])) {
        param_1[5] = uVar31;
      }
    }
    FUN_006e82ec(param_1,0xb,iVar8,iVar9,local_4c,local_50);
    if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar14 < (uint)param_1[0x1e]) {
        iVar13 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0xb,iVar13);
    }
    if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
       (uVar28 <= (uint)param_1[5])) {
      param_1[5] = uVar28;
    }
  }
  else {
    iVar4 = param_1[0x22];
    if (iVar11 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar20 = 0;
    iVar21 = 0;
    if (iVar4 == iVar2) {
      iVar20 = param_1[0xb];
      iVar21 = param_1[8];
    }
    uVar31 = (uint)*(byte *)(param_1 + 0x24);
    local_64 = uVar29;
    if ((uVar31 == 2) && (uVar31 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar29 == *puVar30) {
        FUN_0161d664(puVar30);
        iVar11 = extraout_r2;
      }
      puVar3 = (undefined1 *)(param_1[4] + uVar29 * 0x14);
      *puVar3 = 0;
      uVar31 = uVar29 + 1;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(int *)(puVar3 + 8) = iVar4;
      iVar2 = param_1[0x23];
      param_1[5] = uVar31;
      local_64 = uVar31;
    }
    bVar32 = iVar2 == iVar4;
    if (bVar32) {
      uVar31 = param_1[8];
    }
    iVar15 = 0;
    if (bVar32) {
      iVar11 = param_1[0xb];
    }
    uVar10 = param_1[0x1e];
    if (bVar32) {
      iVar15 = iVar11 + uVar31;
    }
    uVar31 = param_1[2];
    iVar22 = *param_1;
    uVar25 = param_1[1];
    iVar11 = param_1[0x17];
    if ((iVar22 != 1) || (bVar32 = true, uVar25 < uVar31)) {
      piVar19 = param_1 + 0x20;
      if (iVar22 == 0) {
        local_40 = *piVar19;
        iStack_3c = param_1[0x21];
        iStack_38 = param_1[0x22];
LAB_006eb358:
        iVar26 = param_1[0x22];
        iVar22 = 0;
        iVar27 = 0;
        if (iVar26 == iVar2) {
          iVar22 = param_1[0xb];
          iVar27 = param_1[8];
        }
        uVar31 = (uint)*(byte *)(param_1 + 0x24);
        uVar25 = local_64;
        if ((uVar31 == 2) && (uVar31 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
          if (local_64 == *puVar30) {
            FUN_0161d664(puVar30);
          }
          uVar31 = local_64 * 5;
          puVar3 = (undefined1 *)(param_1[4] + local_64 * 0x14);
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 4) = 0;
          *(int *)(puVar3 + 8) = iVar26;
          iVar2 = param_1[0x23];
          param_1[5] = local_64 + 1;
          uVar25 = local_64 + 1;
        }
        bVar32 = iVar2 == iVar26;
        iVar12 = 0;
        if (bVar32) {
          iVar2 = param_1[8];
          uVar31 = param_1[0xb];
        }
        uVar23 = param_1[0x1e];
        if (bVar32) {
          iVar12 = uVar31 + iVar2;
        }
        iVar2 = param_1[0x17];
        if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
          uVar31 = 1;
        }
        else {
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          iVar17 = *piVar19;
          iVar24 = param_1[0x21];
          iVar16 = param_1[0x22];
          uVar33 = FUN_006f4a10(param_1);
          uVar18 = (undefined4)(uVar33 >> 0x20);
          if ((uVar33 & 1) == 0) {
            uVar33 = FUN_006f5184(uVar18);
          }
          else {
            uVar33 = CONCAT44(uVar18,1);
          }
          uVar18 = (undefined4)(uVar33 >> 0x20);
          if ((uVar33 & 1) == 0) {
            uVar33 = FUN_006f5094(uVar18,":",1);
          }
          else {
            uVar33 = CONCAT44(uVar18,1);
          }
          param_1 = (int *)(uVar33 >> 0x20);
          uVar31 = (uint)uVar33;
          if ((uVar33 & 1) != 0) {
            param_1[0x20] = iVar17;
            param_1[0x21] = iVar24;
            param_1[0x22] = iVar16;
            uVar31 = 1;
            if (uVar25 <= (uint)param_1[5]) {
              param_1[5] = uVar25;
            }
          }
        }
        cVar1 = (char)param_1[0x24];
        if ((uVar31 & 1) == 0) {
          if (cVar1 == '\x01') {
            FUN_006e82ec(param_1,0xd,iVar26,iVar27,iVar22,iVar12);
            cVar1 = (char)param_1[0x24];
          }
          if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            uVar31 = param_1[5];
            if (uVar31 <= local_64) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(local_64,uVar31,&DAT_01c061d0);
            }
            pcVar5 = (char *)(param_1[4] + local_64 * 0x14);
            if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
            }
            *(uint *)(pcVar5 + 4) = uVar31;
            iVar22 = param_1[5];
            iVar26 = param_1[0x22];
            if (iVar22 == param_1[3]) {
              FUN_0161d664(param_1 + 3);
            }
            puVar6 = (undefined2 *)(param_1[4] + iVar22 * 0x14);
            *puVar6 = 0xd01;
            *(uint *)(puVar6 + 2) = local_64;
            *(int *)(puVar6 + 8) = iVar26;
            *(undefined4 *)(puVar6 + 4) = 0;
            param_1[5] = iVar22 + 1;
          }
          bVar32 = (char)param_1[0x1f] != '\0';
          cVar1 = '\0';
          if (bVar32) {
            cVar1 = *(char *)((int)param_1 + 0x91);
          }
          if (bVar32 && cVar1 != '\0') {
            if (uVar23 < (uint)param_1[0x1e]) {
              iVar2 = 0;
            }
            FUN_006e83b8(param_1 + 0x15,0xd,iVar2);
          }
        }
        else if (cVar1 != '\x01') {
          FUN_006e82ec(param_1,0xd,iVar26,iVar27,iVar22,iVar12);
          if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            if (uVar23 < (uint)param_1[0x1e]) {
              iVar2 = 0;
            }
            FUN_006e83b8(param_1 + 0x15,0xd,iVar2);
          }
          if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
             (local_64 <= (uint)param_1[5])) {
            param_1[5] = local_64;
          }
        }
LAB_006eb948:
        uVar34 = FUN_006f5184(param_1);
        param_1 = (int *)((ulonglong)uVar34 >> 0x20);
        uVar31 = (uint)uVar34;
      }
      else {
        param_1[1] = uVar25 + 1;
        local_40 = *piVar19;
        iStack_3c = param_1[0x21];
        iStack_38 = param_1[0x22];
        if ((iVar22 == 0) || (uVar25 + 1 < uVar31)) {
          param_1[1] = uVar25 + 2;
          if ((iVar22 == 0) || (uVar25 + 2 < uVar31)) {
            param_1[1] = uVar25 + 3;
            goto LAB_006eb358;
          }
          goto LAB_006eb948;
        }
        uVar31 = 1;
      }
      if ((uVar31 & 1) == 0) {
        uVar33 = FUN_006f4a10(param_1);
      }
      else {
        uVar33 = CONCAT44(param_1,1);
      }
      uVar18 = (undefined4)(uVar33 >> 0x20);
      if ((uVar33 & 1) == 0) {
        uVar33 = FUN_006f5184(uVar18);
      }
      else {
        uVar33 = CONCAT44(uVar18,1);
      }
      piVar19 = (int *)(uVar33 >> 0x20);
      if ((uVar33 & 1) == 0) {
        if ((*piVar19 == 1) && ((uint)piVar19[2] <= (uint)piVar19[1])) goto LAB_006eb9ac;
        if (*piVar19 != 0) {
          piVar19[1] = piVar19[1] + 1;
        }
        FUN_006f3d44(piVar19);
        uVar33 = FUN_006f5184();
      }
      else {
LAB_006eb9ac:
        uVar33 = CONCAT44(piVar19,1);
      }
      piVar19 = (int *)(uVar33 >> 0x20);
      if ((uVar33 & 1) == 0) {
        if ((*piVar19 == 1) && ((uint)piVar19[2] <= (uint)piVar19[1])) goto LAB_006eb9f0;
        if (*piVar19 != 0) {
          piVar19[1] = piVar19[1] + 1;
        }
        FUN_006f34ac(piVar19);
        uVar33 = FUN_006f5184();
      }
      else {
LAB_006eb9f0:
        uVar33 = CONCAT44(piVar19,1);
      }
      param_1 = (int *)(uVar33 >> 0x20);
      bVar7 = true;
      if ((uVar33 & 1) == 0) {
        if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          FUN_006ea90c(param_1);
          bVar7 = false;
          param_1 = extraout_r1_00;
        }
      }
      bVar32 = false;
      if (bVar7) {
        bVar32 = true;
        param_1[0x20] = local_40;
        param_1[0x21] = iStack_3c;
        param_1[0x22] = iStack_38;
        if (local_64 <= (uint)param_1[5]) {
          param_1[5] = local_64;
        }
      }
    }
    cVar1 = (char)param_1[0x24];
    if (bVar32) {
      if (cVar1 != '\x01') {
        FUN_006e82ec(param_1,0xc,iVar4,iVar21,iVar20,iVar15);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar10 < (uint)param_1[0x1e]) {
            iVar11 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0xc,iVar11);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar29 <= (uint)param_1[5])) {
          param_1[5] = uVar29;
        }
      }
      goto LAB_006eaf24;
    }
    if (cVar1 == '\x01') {
      FUN_006e82ec(param_1,0xc,iVar4,iVar21,iVar20,iVar15);
      cVar1 = (char)param_1[0x24];
    }
    if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar31 = param_1[5];
      if (uVar31 <= uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar29,uVar31,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar29 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar31;
      iVar2 = param_1[5];
      iVar4 = param_1[0x22];
      if (iVar2 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
      *puVar6 = 0xc01;
      *(uint *)(puVar6 + 2) = uVar29;
      *(int *)(puVar6 + 8) = iVar4;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar2 + 1;
    }
    bVar32 = (char)param_1[0x1f] != '\0';
    cVar1 = '\0';
    if (bVar32) {
      cVar1 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar32 && cVar1 != '\0') {
      if (uVar10 < (uint)param_1[0x1e]) {
        iVar11 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0xc,iVar11);
    }
LAB_006ebdb0:
    cVar1 = (char)param_1[0x24];
    if (cVar1 == '\x01') {
      FUN_006e82ec(param_1,0xb,iVar8,iVar9,local_4c,local_50);
      cVar1 = (char)param_1[0x24];
    }
    if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar29 = param_1[5];
      if (uVar29 <= uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar28,uVar29,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar28 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar29;
      iVar2 = param_1[5];
      iVar8 = param_1[0x22];
      if (iVar2 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
      *puVar6 = 0xb01;
      *(uint *)(puVar6 + 2) = uVar28;
      *(int *)(puVar6 + 8) = iVar8;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar2 + 1;
    }
    local_44 = 0;
    bVar32 = (char)param_1[0x1f] != '\0';
    cVar1 = '\0';
    if (bVar32) {
      cVar1 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar32 && cVar1 != '\0') {
      if (uVar14 < (uint)param_1[0x1e]) {
        iVar13 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0xb,iVar13);
    }
  }
LAB_006ebe84:
  return CONCAT44(param_1,local_44);
}

