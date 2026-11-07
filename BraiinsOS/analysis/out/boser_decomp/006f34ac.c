// FUN_006f34ac @ 006f34ac size=1096 calls_out=8 calls_in=3
// strings: internal error: entered unreachable code

int * FUN_006f34ac(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  ulonglong uVar24;
  
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
    return param_1;
  }
  iVar21 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar3 = param_1[0x23];
  iVar18 = 0;
  iVar15 = 0;
  uVar20 = param_1[5];
  if (iVar21 == iVar3) {
    iVar15 = param_1[8];
    iVar18 = param_1[0xb];
  }
  uVar9 = uVar20;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar20 == param_1[3]) {
      FUN_0161d664();
    }
    puVar4 = (undefined1 *)(param_1[4] + uVar20 * 0x14);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(int *)(puVar4 + 8) = iVar21;
    iVar3 = param_1[0x23];
    param_1[5] = uVar20 + 1;
    uVar9 = uVar20 + 1;
  }
  iVar22 = 0;
  if (iVar3 == iVar21) {
    iVar22 = param_1[0xb] + param_1[8];
  }
  iVar3 = param_1[0x17];
  uVar16 = param_1[0x1e];
  if ((*param_1 == 1) && (bVar23 = true, (uint)param_1[2] <= (uint)param_1[1])) goto LAB_006f3754;
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar10 = param_1[0x20];
  iVar12 = param_1[0x21];
  iVar19 = param_1[0x22];
  uVar24 = FUN_006f3940(param_1);
  uVar7 = (undefined4)(uVar24 >> 0x20);
  if ((uVar24 & 1) == 0) {
    uVar24 = FUN_006f5184(uVar7);
  }
  else {
    uVar24 = CONCAT44(uVar7,1);
  }
  param_1 = (int *)(uVar24 >> 0x20);
  bVar1 = true;
  if ((uVar24 & 1) == 0) {
    uVar8 = param_1[1];
    if ((*param_1 != 1) || (uVar8 < (uint)param_1[2])) {
      if (*param_1 != 0) {
        param_1[1] = uVar8 + 1;
        if ((uint)param_1[2] <= uVar8 + 1) goto LAB_006f372c;
        param_1[1] = uVar8 + 2;
      }
      uVar24 = FUN_006f3940(param_1);
      param_1 = (int *)(uVar24 >> 0x20);
      bVar1 = false;
      if ((uVar24 & 1) == 0) {
        if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          uVar24 = FUN_006f5524(param_1);
          param_1 = (int *)(uVar24 >> 0x20);
          while ((uVar24 & 1) == 0) {
            if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
              uVar24 = CONCAT44(param_1,1);
            }
            else {
              if (*param_1 != 0) {
                param_1[1] = param_1[1] + 1;
              }
              uVar8 = param_1[5];
              iVar11 = param_1[0x20];
              iVar13 = param_1[0x21];
              iVar17 = param_1[0x22];
              uVar24 = FUN_006f5184(param_1);
              uVar7 = (undefined4)(uVar24 >> 0x20);
              if ((uVar24 & 1) == 0) {
                uVar24 = FUN_006f3940(uVar7);
              }
              else {
                uVar24 = CONCAT44(uVar7,1);
              }
              iVar14 = (int)(uVar24 >> 0x20);
              if ((uVar24 & 1) != 0) {
                *(int *)(iVar14 + 0x80) = iVar11;
                *(int *)(iVar14 + 0x84) = iVar13;
                *(int *)(iVar14 + 0x88) = iVar17;
                uVar24 = CONCAT44(iVar14,1);
                if (uVar8 <= *(uint *)(iVar14 + 0x14)) {
                  *(uint *)(iVar14 + 0x14) = uVar8;
                  uVar24 = CONCAT44(iVar14,1);
                }
              }
            }
            param_1 = (int *)(uVar24 >> 0x20);
          }
        }
      }
    }
  }
LAB_006f372c:
  bVar23 = false;
  if (bVar1) {
    bVar23 = true;
    param_1[0x20] = iVar10;
    param_1[0x21] = iVar12;
    param_1[0x22] = iVar19;
    if (uVar9 <= (uint)param_1[5]) {
      param_1[5] = uVar9;
    }
  }
LAB_006f3754:
  cVar2 = (char)param_1[0x24];
  if (bVar23) {
    if (cVar2 != '\x01') {
      FUN_006e82ec(param_1,0x46,iVar21,iVar15,iVar18,iVar22);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar16 < (uint)param_1[0x1e]) {
          iVar3 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x46,iVar3);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar20 <= (uint)param_1[5])) {
        param_1[5] = uVar20;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      FUN_006e82ec(param_1,0x46,iVar21,iVar15,iVar18,iVar22);
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
      iVar21 = param_1[5];
      iVar15 = param_1[0x22];
      if (iVar21 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar21 * 0x14);
      *puVar6 = 0x4601;
      *(int *)(puVar6 + 8) = iVar15;
      *(uint *)(puVar6 + 2) = uVar20;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar21 + 1;
    }
    bVar23 = (char)param_1[0x1f] != '\0';
    cVar2 = '\0';
    if (bVar23) {
      cVar2 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar23 && cVar2 != '\0') {
      if (uVar16 < (uint)param_1[0x1e]) {
        iVar3 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x46,iVar3);
    }
  }
  return param_1;
}

