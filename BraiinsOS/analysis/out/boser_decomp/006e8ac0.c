// FUN_006e8ac0 @ 006e8ac0 size=5248 calls_out=13 calls_in=2
// strings: subscription | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006e8ac0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 extraout_r1;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  uint *puVar39;
  int iVar40;
  bool bVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint local_90;
  int local_8c;
  int local_74;
  int local_60;
  int local_5c;
  undefined4 local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  
  local_54 = 1;
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) goto LAB_006e9c84;
  uVar34 = param_1[5];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar8 = param_1[0x22];
  iVar2 = param_1[0x23];
  puVar39 = (uint *)(param_1 + 3);
  iVar9 = 0;
  if (iVar8 == iVar2) {
    iVar9 = param_1[8];
  }
  local_5c = 0;
  if (iVar8 == iVar2) {
    local_5c = param_1[0xb];
  }
  uVar35 = uVar34;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar34 == *puVar39) {
      FUN_0161d664(puVar39);
    }
    uVar35 = uVar34 + 1;
    puVar3 = (undefined1 *)(param_1[4] + uVar34 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar8;
    iVar2 = param_1[0x23];
    param_1[5] = uVar35;
  }
  iVar19 = param_1[0x17];
  local_60 = 0;
  uVar20 = param_1[0x1e];
  if (iVar2 == iVar8) {
    local_60 = param_1[0xb] + param_1[8];
  }
  iVar17 = *param_1;
  if ((iVar17 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
LAB_006e8bd8:
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
      cVar1 = (char)param_1[0x24];
LAB_006e8bf4:
      if (cVar1 == '\x01') goto LAB_006e9c84;
    }
    else {
      iVar2 = param_1[0x22];
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar4 = param_1[0x23];
      iVar38 = 0;
      iVar17 = 0;
      uVar36 = param_1[5];
      uVar35 = (uint)*(byte *)(param_1 + 0x24);
      if (iVar2 == iVar4) {
        iVar17 = param_1[8];
        iVar38 = param_1[0xb];
      }
      uVar12 = uVar36;
      if ((uVar35 == 2) && (uVar35 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar36 == param_1[3]) {
          FUN_0161d664();
        }
        uVar35 = uVar36 * 5;
        puVar3 = (undefined1 *)(param_1[4] + uVar36 * 0x14);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(int *)(puVar3 + 8) = iVar2;
        iVar4 = param_1[0x23];
        param_1[5] = uVar36 + 1;
        uVar12 = uVar36 + 1;
      }
      bVar41 = iVar4 == iVar2;
      iVar30 = 0;
      if (bVar41) {
        iVar4 = param_1[8];
        uVar35 = param_1[0xb];
      }
      iVar25 = param_1[0x17];
      if (bVar41) {
        iVar30 = uVar35 + iVar4;
      }
      uVar35 = param_1[0x1e];
      if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
        uVar42 = CONCAT44(param_1,1);
      }
      else {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        iVar4 = param_1[0x20];
        iVar26 = param_1[0x21];
        iVar31 = param_1[0x22];
        uVar42 = FUN_006f5094(param_1,&DAT_005708d8,8);
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006f5184(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006f4a10(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006f5184(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006ec1d0(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006f5184(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        piVar7 = (int *)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          if ((*piVar7 == 1) && ((uint)piVar7[2] <= (uint)piVar7[1])) goto LAB_006e9044;
          if (*piVar7 != 0) {
            piVar7[1] = piVar7[1] + 1;
          }
          FUN_006f34ac(piVar7);
          uVar42 = FUN_006f5184();
        }
        else {
LAB_006e9044:
          uVar42 = CONCAT44(piVar7,1);
        }
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006ea90c(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        iVar10 = (int)(uVar42 >> 0x20);
        if ((uVar42 & 1) != 0) {
          *(int *)(iVar10 + 0x80) = iVar4;
          *(int *)(iVar10 + 0x84) = iVar26;
          *(int *)(iVar10 + 0x88) = iVar31;
          uVar42 = CONCAT44(iVar10,1);
          if (uVar12 <= *(uint *)(iVar10 + 0x14)) {
            *(uint *)(iVar10 + 0x14) = uVar12;
            uVar42 = CONCAT44(iVar10,1);
          }
        }
      }
      param_1 = (int *)(uVar42 >> 0x20);
      cVar1 = (char)param_1[0x24];
      if ((uVar42 & 1) == 0) {
        if (cVar1 == '\x01') {
          FUN_006e82ec(param_1,0x10,iVar2,iVar17,iVar38,iVar30);
          cVar1 = (char)param_1[0x24];
        }
        if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          uVar12 = param_1[5];
          if (uVar12 <= uVar36) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar36,uVar12,&DAT_01c061d0);
          }
          pcVar5 = (char *)(param_1[4] + uVar36 * 0x14);
          if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
          }
          *(uint *)(pcVar5 + 4) = uVar12;
          iVar2 = param_1[5];
          iVar17 = param_1[0x22];
          if (iVar2 == param_1[3]) {
            FUN_0161d664(param_1 + 3);
          }
          puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
          *puVar6 = 0x1001;
          *(uint *)(puVar6 + 2) = uVar36;
          *(undefined4 *)(puVar6 + 4) = 0;
          *(int *)(puVar6 + 8) = iVar17;
          param_1[5] = iVar2 + 1;
        }
        bVar41 = (char)param_1[0x1f] != '\0';
        cVar1 = '\0';
        if (bVar41) {
          cVar1 = *(char *)((int)param_1 + 0x91);
        }
        if (bVar41 && cVar1 != '\0') {
          if (uVar35 < (uint)param_1[0x1e]) {
            iVar25 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x10,iVar25);
        }
        goto LAB_006e9bb0;
      }
      if (cVar1 == '\x01') goto LAB_006e9c84;
      FUN_006e82ec(param_1,0x10,iVar2,iVar17,iVar38,iVar30);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar35 < (uint)param_1[0x1e]) {
          iVar25 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x10,iVar25);
      }
      cVar1 = (char)param_1[0x24];
      if (cVar1 != '\x02') goto LAB_006e8bf4;
      if ((*(char *)((int)param_1 + 0x91) != '\0') && (uVar36 <= (uint)param_1[5])) {
        param_1[5] = uVar36;
      }
    }
    FUN_006e82ec(param_1,5,iVar8,iVar9,local_5c,local_60);
    if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar20 < (uint)param_1[0x1e]) {
        iVar19 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,5,iVar19);
    }
    if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
       (uVar34 <= (uint)param_1[5])) {
      param_1[5] = uVar34;
    }
  }
  else {
    iVar4 = param_1[0x22];
    if (iVar17 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar38 = 0;
    local_74 = 0;
    if (iVar4 == iVar2) {
      iVar38 = param_1[8];
    }
    if (iVar4 == iVar2) {
      iVar17 = param_1[0xb];
      local_74 = iVar17;
    }
    uVar36 = uVar35;
    if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar35 == *puVar39) {
        FUN_0161d664(puVar39);
      }
      iVar17 = 0;
      puVar3 = (undefined1 *)(param_1[4] + uVar35 * 0x14);
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(int *)(puVar3 + 8) = iVar4;
      iVar2 = param_1[0x23];
      param_1[5] = uVar35 + 1;
      uVar36 = uVar35 + 1;
    }
    iVar30 = 0;
    if (iVar2 == iVar4) {
      iVar30 = param_1[8];
      iVar17 = param_1[0xb];
    }
    iVar25 = param_1[0x17];
    if (iVar2 == iVar4) {
      iVar30 = iVar17 + iVar30;
    }
    uVar12 = param_1[0x1e];
    if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
LAB_006e8dd0:
      uVar42 = FUN_006ea90c(param_1);
    }
    else {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar17 = param_1[0x22];
      iVar26 = 0;
      if (iVar17 == iVar2) {
        iVar26 = param_1[8];
      }
      local_8c = 0;
      if (iVar17 == iVar2) {
        local_8c = param_1[0xb];
      }
      local_90 = uVar36;
      if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar36 == *puVar39) {
          FUN_0161d664(puVar39);
        }
        puVar3 = (undefined1 *)(param_1[4] + uVar36 * 0x14);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(int *)(puVar3 + 8) = iVar17;
        iVar2 = param_1[0x23];
        param_1[5] = uVar36 + 1;
        local_90 = uVar36 + 1;
      }
      iVar31 = 0;
      if (iVar2 == iVar17) {
        iVar31 = param_1[0xb] + param_1[8];
      }
      iVar10 = param_1[0x17];
      uVar11 = param_1[0x1e];
      iVar18 = *param_1;
      uVar21 = param_1[1];
      if ((iVar18 == 1) && ((uint)param_1[2] <= uVar21)) {
LAB_006e9908:
        uVar42 = CONCAT44(param_1,1);
      }
      else {
        if (iVar18 == 0) {
          local_50 = param_1[0x20];
          iStack_4c = param_1[0x21];
          iStack_48 = param_1[0x22];
LAB_006e9244:
          iVar40 = param_1[0x22];
          iVar37 = 0;
          iVar18 = 0;
          if (iVar40 == iVar2) {
            iVar18 = param_1[8];
            iVar37 = param_1[0xb];
          }
          if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            if (local_90 == *puVar39) {
              FUN_0161d664(puVar39);
            }
            puVar3 = (undefined1 *)(param_1[4] + local_90 * 0x14);
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 4) = 0;
            *(int *)(puVar3 + 8) = iVar40;
            iVar2 = param_1[0x23];
            param_1[5] = local_90 + 1;
          }
          iVar27 = 0;
          if (iVar2 == iVar40) {
            iVar27 = param_1[0xb] + param_1[8];
          }
          iVar2 = param_1[0x17];
          uVar21 = param_1[0x1e];
          uVar42 = FUN_006f5094(param_1,&DAT_0050c2f4,5);
          uVar13 = (uint)(uVar42 >> 0x20);
          if ((uVar42 & 1) == 0) {
            uVar42 = (ulonglong)uVar13 << 0x20;
          }
          else {
            uVar42 = FUN_006f5094(uVar13,&DAT_005707f8,8);
          }
          uVar13 = (uint)(uVar42 >> 0x20);
          if ((uVar42 & 1) == 0) {
            uVar42 = (ulonglong)uVar13 << 0x20;
          }
          else {
            uVar42 = FUN_006f5094(uVar13,"subscription",0xc);
          }
          param_1 = (int *)(uVar42 >> 0x20);
          cVar1 = (char)param_1[0x24];
          if ((uVar42 & 1) != 0) {
            if (cVar1 != '\x01') {
              FUN_006e82ec(param_1,0x2b,iVar40,iVar18,iVar37,iVar27);
              if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
                if (uVar21 < (uint)param_1[0x1e]) {
                  iVar2 = 0;
                }
                FUN_006e83b8(param_1 + 0x15,0x2b,iVar2);
              }
              if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
                 (local_90 <= (uint)param_1[5])) {
                param_1[5] = local_90;
              }
            }
            goto LAB_006e93d0;
          }
          if (cVar1 == '\x01') {
            FUN_006e82ec(param_1,0x2b,iVar40,iVar18,iVar37,iVar27);
            cVar1 = (char)param_1[0x24];
          }
          if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            uVar13 = param_1[5];
            if (uVar13 <= local_90) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(local_90,uVar13,&DAT_01c061d0);
            }
            pcVar5 = (char *)(param_1[4] + local_90 * 0x14);
            if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
            }
            *(uint *)(pcVar5 + 4) = uVar13;
            iVar18 = param_1[5];
            iVar37 = param_1[0x22];
            if (iVar18 == param_1[3]) {
              FUN_0161d664(param_1 + 3);
            }
            puVar6 = (undefined2 *)(param_1[4] + iVar18 * 0x14);
            *puVar6 = 0x2b01;
            *(uint *)(puVar6 + 2) = local_90;
            *(int *)(puVar6 + 8) = iVar37;
            *(undefined4 *)(puVar6 + 4) = 0;
            param_1[5] = iVar18 + 1;
          }
          bVar41 = (char)param_1[0x1f] != '\0';
          cVar1 = '\0';
          if (bVar41) {
            cVar1 = *(char *)((int)param_1 + 0x91);
          }
          if (bVar41 && cVar1 != '\0') {
            if (uVar21 < (uint)param_1[0x1e]) {
              iVar2 = 0;
            }
            FUN_006e83b8(param_1 + 0x15,0x2b,iVar2);
          }
          uVar42 = FUN_006f5184(param_1);
        }
        else {
          param_1[1] = uVar21 + 1;
          local_50 = param_1[0x20];
          iStack_4c = param_1[0x21];
          iStack_48 = param_1[0x22];
          if ((iVar18 == 0) || (uVar21 + 1 < (uint)param_1[2])) {
            param_1[1] = uVar21 + 2;
            goto LAB_006e9244;
          }
LAB_006e93d0:
          uVar42 = CONCAT44(param_1,1);
        }
        piVar7 = (int *)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          if ((*piVar7 == 1) && ((uint)piVar7[2] <= (uint)piVar7[1])) goto LAB_006e94c4;
          if (*piVar7 != 0) {
            piVar7[1] = piVar7[1] + 1;
          }
          FUN_006f4a10(piVar7);
          uVar42 = FUN_006f5184(extraout_r1);
        }
        else {
LAB_006e94c4:
          uVar42 = CONCAT44(piVar7,1);
        }
        piVar7 = (int *)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar21 = piVar7[1];
          if ((*piVar7 == 1) && ((uint)piVar7[2] <= uVar21)) goto LAB_006e9510;
          if (*piVar7 == 0) {
LAB_006e953c:
            iVar40 = piVar7[0x22];
            iVar2 = 0;
            iVar18 = piVar7[0x23];
            iVar37 = 0;
            uVar21 = piVar7[5];
            if (iVar40 == iVar18) {
              iVar2 = piVar7[0xb];
              iVar37 = piVar7[8];
            }
            uVar13 = (uint)*(byte *)(piVar7 + 0x24);
            uVar15 = uVar21;
            if ((uVar13 == 2) && (uVar13 = 0, *(char *)((int)piVar7 + 0x91) != '\0')) {
              if (uVar21 == piVar7[3]) {
                FUN_0161d664();
              }
              uVar13 = uVar21 * 5;
              puVar3 = (undefined1 *)(piVar7[4] + uVar21 * 0x14);
              *puVar3 = 0;
              *(undefined4 *)(puVar3 + 4) = 0;
              *(int *)(puVar3 + 8) = iVar40;
              iVar18 = piVar7[0x23];
              piVar7[5] = uVar21 + 1;
              uVar15 = uVar21 + 1;
            }
            bVar41 = iVar18 == iVar40;
            iVar27 = 0;
            if (bVar41) {
              iVar18 = piVar7[8];
              uVar13 = piVar7[0xb];
            }
            if (bVar41) {
              iVar27 = uVar13 + iVar18;
            }
            iVar18 = piVar7[0x17];
            uVar13 = piVar7[0x1e];
            if ((*piVar7 == 1) && ((uint)piVar7[2] <= (uint)piVar7[1])) {
              uVar42 = CONCAT44(piVar7,1);
            }
            else {
              if (*piVar7 != 0) {
                piVar7[1] = piVar7[1] + 1;
              }
              iVar22 = piVar7[0x20];
              iVar28 = piVar7[0x21];
              iVar32 = piVar7[0x22];
              uVar43 = FUN_006f5094(piVar7,"(",1);
              uVar24 = (undefined4)(uVar43 >> 0x20);
              uVar42 = CONCAT44(uVar24,1);
              if ((uVar43 & 1) == 0) {
                uVar42 = FUN_006f5184(uVar24);
              }
              piVar7 = (int *)(uVar42 >> 0x20);
              if ((uVar42 & 1) == 0) {
                uVar14 = piVar7[1];
                if ((*piVar7 == 1) && ((uint)piVar7[2] <= uVar14)) goto LAB_006e9698;
                if (*piVar7 != 0) {
                  piVar7[1] = uVar14 + 1;
                  if ((uint)piVar7[2] <= uVar14 + 1) goto LAB_006e9698;
                  piVar7[1] = uVar14 + 2;
                }
                uVar42 = FUN_006ea10c(piVar7);
                piVar7 = (int *)(uVar42 >> 0x20);
                if ((uVar42 & 1) == 0) {
                  if ((*piVar7 != 1) || ((uint)piVar7[1] < (uint)piVar7[2])) {
                    if (*piVar7 != 0) {
                      piVar7[1] = piVar7[1] + 1;
                    }
                    uVar42 = FUN_006f5b3c();
                    piVar7 = (int *)(uVar42 >> 0x20);
                    while ((uVar42 & 1) == 0) {
                      if ((*piVar7 == 1) && ((uint)piVar7[2] <= (uint)piVar7[1])) {
                        uVar42 = CONCAT44(piVar7,1);
                      }
                      else {
                        uVar14 = piVar7[5];
                        if (*piVar7 != 0) {
                          piVar7[1] = piVar7[1] + 1;
                        }
                        iVar23 = piVar7[0x20];
                        iVar29 = piVar7[0x21];
                        iVar33 = piVar7[0x22];
                        uVar42 = FUN_006f5184();
                        if ((uVar42 & 1) == 0) {
                          uVar42 = FUN_006ea10c();
                        }
                        else {
                          uVar42 = CONCAT44((int)(uVar42 >> 0x20),1);
                        }
                        iVar16 = (int)(uVar42 >> 0x20);
                        if ((uVar42 & 1) != 0) {
                          *(int *)(iVar16 + 0x80) = iVar23;
                          *(int *)(iVar16 + 0x84) = iVar29;
                          *(int *)(iVar16 + 0x88) = iVar33;
                          uVar42 = CONCAT44(iVar16,1);
                          if (uVar14 <= *(uint *)(iVar16 + 0x14)) {
                            *(uint *)(iVar16 + 0x14) = uVar14;
                            uVar42 = CONCAT44(iVar16,1);
                          }
                        }
                      }
                      piVar7 = (int *)(uVar42 >> 0x20);
                    }
                  }
                }
                uVar42 = FUN_006f5184();
              }
              else {
LAB_006e9698:
                uVar42 = CONCAT44(piVar7,1);
              }
              uVar24 = (undefined4)(uVar42 >> 0x20);
              if ((uVar42 & 1) == 0) {
                uVar42 = FUN_006f5094(uVar24,&DAT_0053341b,1);
              }
              else {
                uVar42 = CONCAT44(uVar24,1);
              }
              iVar23 = (int)(uVar42 >> 0x20);
              if ((uVar42 & 1) != 0) {
                *(int *)(iVar23 + 0x80) = iVar22;
                *(int *)(iVar23 + 0x84) = iVar28;
                *(int *)(iVar23 + 0x88) = iVar32;
                uVar42 = CONCAT44(iVar23,1);
                if (uVar15 <= *(uint *)(iVar23 + 0x14)) {
                  *(uint *)(iVar23 + 0x14) = uVar15;
                  uVar42 = CONCAT44(iVar23,1);
                }
              }
            }
            piVar7 = (int *)(uVar42 >> 0x20);
            cVar1 = (char)piVar7[0x24];
            if ((uVar42 & 1) == 0) {
              if (cVar1 == '\x01') {
                FUN_006e82ec(piVar7,8,iVar40,iVar37,iVar2,iVar27);
                cVar1 = (char)piVar7[0x24];
              }
              if ((cVar1 == '\x02') && (*(char *)((int)piVar7 + 0x91) != '\0')) {
                uVar15 = piVar7[5];
                if (uVar15 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar21,uVar15,&DAT_01c061d0);
                }
                pcVar5 = (char *)(piVar7[4] + uVar21 * 0x14);
                if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
                }
                *(uint *)(pcVar5 + 4) = uVar15;
                iVar2 = piVar7[5];
                iVar37 = piVar7[0x22];
                if (iVar2 == piVar7[3]) {
                  FUN_0161d664(piVar7 + 3);
                }
                puVar6 = (undefined2 *)(piVar7[4] + iVar2 * 0x14);
                *puVar6 = 0x801;
                *(uint *)(puVar6 + 2) = uVar21;
                *(int *)(puVar6 + 8) = iVar37;
                *(undefined4 *)(puVar6 + 4) = 0;
                piVar7[5] = iVar2 + 1;
              }
              bVar41 = (char)piVar7[0x1f] != '\0';
              cVar1 = '\0';
              if (bVar41) {
                cVar1 = *(char *)((int)piVar7 + 0x91);
              }
              if (bVar41 && cVar1 != '\0') {
                if (uVar13 < (uint)piVar7[0x1e]) {
                  iVar18 = 0;
                }
                FUN_006e83b8(piVar7 + 0x15,8,iVar18);
              }
            }
            else if (cVar1 != '\x01') {
              FUN_006e82ec(piVar7,8,iVar40,iVar37,iVar2,iVar27);
              if (((char)piVar7[0x1f] == '\x01') && (*(char *)((int)piVar7 + 0x91) != '\0')) {
                if (uVar13 < (uint)piVar7[0x1e]) {
                  iVar18 = 0;
                }
                FUN_006e83b8(piVar7 + 0x15,8,iVar18);
              }
              if ((((char)piVar7[0x24] == '\x02') && (*(char *)((int)piVar7 + 0x91) != '\0')) &&
                 (uVar21 <= (uint)piVar7[5])) {
                piVar7[5] = uVar21;
              }
            }
          }
          else {
            piVar7[1] = uVar21 + 1;
            if (uVar21 + 1 < (uint)piVar7[2]) {
              piVar7[1] = uVar21 + 2;
              goto LAB_006e953c;
            }
          }
          uVar42 = FUN_006f5184(piVar7);
        }
        else {
LAB_006e9510:
          uVar42 = CONCAT44(piVar7,1);
        }
        piVar7 = (int *)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          if ((*piVar7 == 1) && ((uint)piVar7[2] <= (uint)piVar7[1])) goto LAB_006e989c;
          if (*piVar7 != 0) {
            piVar7[1] = piVar7[1] + 1;
          }
          FUN_006f34ac(piVar7);
          uVar42 = FUN_006f5184();
        }
        else {
LAB_006e989c:
          uVar42 = CONCAT44(piVar7,1);
        }
        uVar24 = (undefined4)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          uVar42 = FUN_006ea90c(uVar24);
        }
        else {
          uVar42 = CONCAT44(uVar24,1);
        }
        param_1 = (int *)(uVar42 >> 0x20);
        if ((uVar42 & 1) != 0) {
          param_1[0x20] = local_50;
          param_1[0x21] = iStack_4c;
          param_1[0x22] = iStack_48;
          if (local_90 <= (uint)param_1[5]) {
            param_1[5] = local_90;
          }
          goto LAB_006e9908;
        }
      }
      param_1 = (int *)(uVar42 >> 0x20);
      cVar1 = (char)param_1[0x24];
      if ((uVar42 & 1) != 0) {
        if (cVar1 != '\x01') {
          FUN_006e82ec(param_1,7,iVar17,iVar26,local_8c,iVar31);
          if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            if (uVar11 < (uint)param_1[0x1e]) {
              iVar10 = 0;
            }
            FUN_006e83b8(param_1 + 0x15,7,iVar10);
          }
          if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
             (uVar36 <= (uint)param_1[5])) {
            param_1[5] = uVar36;
          }
        }
        goto LAB_006e8dd0;
      }
      if (cVar1 == '\x01') {
        FUN_006e82ec(param_1,7,iVar17,iVar26,local_8c,iVar31);
        cVar1 = (char)param_1[0x24];
      }
      if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar21 = param_1[5];
        if (uVar21 <= uVar36) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar36,uVar21,&DAT_01c061d0);
        }
        pcVar5 = (char *)(param_1[4] + uVar36 * 0x14);
        if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar5 + 4) = uVar21;
        iVar2 = param_1[5];
        iVar17 = param_1[0x22];
        if (iVar2 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
        *puVar6 = 0x701;
        *(uint *)(puVar6 + 2) = uVar36;
        *(int *)(puVar6 + 8) = iVar17;
        *(undefined4 *)(puVar6 + 4) = 0;
        param_1[5] = iVar2 + 1;
      }
      bVar41 = (char)param_1[0x1f] != '\0';
      cVar1 = '\0';
      if (bVar41) {
        cVar1 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar41 && cVar1 != '\0') {
        if (uVar11 < (uint)param_1[0x1e]) {
          iVar10 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,7,iVar10);
      }
      uVar42 = ZEXT48(param_1) << 0x20;
    }
    param_1 = (int *)(uVar42 >> 0x20);
    cVar1 = (char)param_1[0x24];
    if ((uVar42 & 1) != 0) {
      if (cVar1 != '\x01') {
        FUN_006e82ec(param_1,6,iVar4,iVar38,local_74,iVar30);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar12 < (uint)param_1[0x1e]) {
            iVar25 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,6,iVar25);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar35 <= (uint)param_1[5])) {
          param_1[5] = uVar35;
        }
      }
      goto LAB_006e8bd8;
    }
    if (cVar1 == '\x01') {
      FUN_006e82ec(param_1,6,iVar4,iVar38,local_74,iVar30);
      cVar1 = (char)param_1[0x24];
    }
    if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar36 = param_1[5];
      if (uVar36 <= uVar35) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar35,uVar36,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar35 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar36;
      iVar2 = param_1[5];
      iVar17 = param_1[0x22];
      if (iVar2 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
      *puVar6 = 0x601;
      *(int *)(puVar6 + 8) = iVar17;
      *(uint *)(puVar6 + 2) = uVar35;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar2 + 1;
    }
    bVar41 = (char)param_1[0x1f] != '\0';
    cVar1 = '\0';
    if (bVar41) {
      cVar1 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar41 && cVar1 != '\0') {
      if (uVar12 < (uint)param_1[0x1e]) {
        iVar25 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,6,iVar25);
    }
LAB_006e9bb0:
    cVar1 = (char)param_1[0x24];
    if (cVar1 == '\x01') {
      FUN_006e82ec(param_1,5,iVar8,iVar9,local_5c,local_60);
      cVar1 = (char)param_1[0x24];
    }
    if ((cVar1 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar35 = param_1[5];
      if (uVar35 <= uVar34) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar34,uVar35,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar34 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar35;
      iVar2 = param_1[5];
      iVar8 = param_1[0x22];
      if (iVar2 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar2 * 0x14);
      *puVar6 = 0x501;
      *(uint *)(puVar6 + 2) = uVar34;
      *(int *)(puVar6 + 8) = iVar8;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar2 + 1;
    }
    local_54 = 0;
    bVar41 = (char)param_1[0x1f] != '\0';
    cVar1 = '\0';
    if (bVar41) {
      cVar1 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar41 && cVar1 != '\0') {
      if (uVar20 < (uint)param_1[0x1e]) {
        iVar19 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,5,iVar19);
    }
  }
LAB_006e9c84:
  return CONCAT44(param_1,local_54);
}

