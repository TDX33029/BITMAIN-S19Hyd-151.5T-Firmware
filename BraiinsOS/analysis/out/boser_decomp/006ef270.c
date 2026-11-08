// FUN_006ef270 @ 006ef270 size=1184 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code

undefined8 FUN_006ef270(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  
  if ((*param_1 != 1) || (uVar17 = 1, (uint)param_1[1] < (uint)param_1[2])) {
    iVar21 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar3 = param_1[0x23];
    iVar14 = 0;
    iVar12 = 0;
    uVar19 = param_1[5];
    if (iVar21 == iVar3) {
      iVar12 = param_1[8];
      iVar14 = param_1[0xb];
    }
    uVar8 = uVar19;
    if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar19 == param_1[3]) {
        FUN_0161d664();
      }
      puVar4 = (undefined1 *)(param_1[4] + uVar19 * 0x14);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(int *)(puVar4 + 8) = iVar21;
      iVar3 = param_1[0x23];
      param_1[5] = uVar19 + 1;
      uVar8 = uVar19 + 1;
    }
    iVar20 = 0;
    if (iVar3 == iVar21) {
      iVar20 = param_1[0xb] + param_1[8];
    }
    iVar3 = param_1[0x17];
    uVar13 = param_1[0x1e];
    if ((*param_1 != 1) || (bVar22 = true, (uint)param_1[1] < (uint)param_1[2])) {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      iVar10 = param_1[0x20];
      iVar15 = param_1[0x21];
      iVar18 = param_1[0x22];
      uVar23 = FUN_006f5094(param_1,".",1);
      uVar17 = (undefined4)(uVar23 >> 0x20);
      uVar24 = CONCAT44(uVar17,1);
      if ((uVar23 & 1) == 0) {
        uVar24 = FUN_006f5184(uVar17);
      }
      uVar17 = (undefined4)(uVar24 >> 0x20);
      if ((uVar24 & 1) == 0) {
        uVar24 = FUN_006f4f54(uVar17,0x30,0x39);
      }
      else {
        uVar24 = CONCAT44(uVar17,1);
      }
      uVar17 = (undefined4)(uVar24 >> 0x20);
      if ((uVar24 & 1) == 0) {
        uVar24 = FUN_006f5184(uVar17);
      }
      else {
        uVar24 = CONCAT44(uVar17,1);
      }
      param_1 = (int *)(uVar24 >> 0x20);
      bVar1 = true;
      if ((uVar24 & 1) == 0) {
        uVar7 = param_1[1];
        if ((*param_1 != 1) || (uVar7 < (uint)param_1[2])) {
          if (*param_1 == 0) {
LAB_006ef44c:
            uVar24 = FUN_006f4f54(param_1,0x30,0x39);
            param_1 = (int *)(uVar24 >> 0x20);
            bVar1 = false;
            if ((uVar24 & 1) == 0) {
              if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
                if (*param_1 != 0) {
                  param_1[1] = param_1[1] + 1;
                }
                uVar24 = FUN_006f5944(param_1);
LAB_006ef644:
                param_1 = (int *)(uVar24 >> 0x20);
                if ((uVar24 & 1) == 0) {
                  if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) goto LAB_006ef664;
                  goto LAB_006ef6e0;
                }
              }
            }
            goto LAB_006ef484;
          }
          param_1[1] = uVar7 + 1;
          if (uVar7 + 1 < (uint)param_1[2]) {
            param_1[1] = uVar7 + 2;
            goto LAB_006ef44c;
          }
        }
      }
LAB_006ef484:
      bVar22 = false;
      if (bVar1) {
        bVar22 = true;
        param_1[0x20] = iVar10;
        param_1[0x21] = iVar15;
        param_1[0x22] = iVar18;
        if (uVar8 <= (uint)param_1[5]) {
          param_1[5] = uVar8;
        }
      }
    }
    cVar2 = (char)param_1[0x24];
    if (bVar22) {
      uVar17 = 1;
      if (cVar2 != '\x01') {
        FUN_006e82ec(param_1,0x33,iVar21,iVar12,iVar14,iVar20);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar13 < (uint)param_1[0x1e]) {
            iVar3 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x33,iVar3);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar19 <= (uint)param_1[5])) {
          param_1[5] = uVar19;
        }
      }
    }
    else {
      if (cVar2 == '\x01') {
        FUN_006e82ec(param_1,0x33,iVar21,iVar12,iVar14,iVar20);
        cVar2 = (char)param_1[0x24];
      }
      if ((cVar2 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar8 = param_1[5];
        if (uVar8 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar19,uVar8,&DAT_01c061d0);
        }
        pcVar5 = (char *)(param_1[4] + uVar19 * 0x14);
        if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar5 + 4) = uVar8;
        iVar21 = param_1[5];
        iVar12 = param_1[0x22];
        if (iVar21 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar6 = (undefined2 *)(param_1[4] + iVar21 * 0x14);
        *puVar6 = 0x3301;
        *(int *)(puVar6 + 8) = iVar12;
        *(uint *)(puVar6 + 2) = uVar19;
        *(undefined4 *)(puVar6 + 4) = 0;
        param_1[5] = iVar21 + 1;
      }
      uVar17 = 0;
      bVar22 = (char)param_1[0x1f] != '\0';
      cVar2 = '\0';
      if (bVar22) {
        cVar2 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar22 && cVar2 != '\0') {
        if (uVar13 < (uint)param_1[0x1e]) {
          iVar3 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x33,iVar3);
      }
    }
  }
  return CONCAT44(param_1,uVar17);
LAB_006ef664:
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  uVar7 = param_1[5];
  iVar9 = param_1[0x20];
  iVar11 = param_1[0x21];
  iVar16 = param_1[0x22];
  uVar24 = FUN_006f5184(param_1);
  uVar17 = (undefined4)(uVar24 >> 0x20);
  if ((uVar24 & 1) == 0) {
    uVar24 = FUN_006f4f54(uVar17,0x30,0x39);
  }
  else {
    uVar24 = CONCAT44(uVar17,1);
  }
  param_1 = (int *)(uVar24 >> 0x20);
  if ((uVar24 & 1) != 0) {
    param_1[0x20] = iVar9;
    param_1[0x21] = iVar11;
    param_1[0x22] = iVar16;
    if (uVar7 <= (uint)param_1[5]) {
      param_1[5] = uVar7;
    }
LAB_006ef6e0:
    uVar24 = CONCAT44(param_1,1);
  }
  goto LAB_006ef644;
}

