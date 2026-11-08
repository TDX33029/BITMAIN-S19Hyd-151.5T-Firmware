// FUN_006f4a10 @ 006f4a10 size=1168 calls_out=8 calls_in=10
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006f4a10(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  ulonglong uVar20;
  
  if ((*param_1 != 1) || (uVar14 = 1, (uint)param_1[1] < (uint)param_1[2])) {
    iVar18 = param_1[0x22];
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    iVar3 = param_1[0x23];
    iVar12 = 0;
    iVar17 = 0;
    uVar16 = param_1[5];
    uVar7 = (uint)*(byte *)(param_1 + 0x24);
    if (iVar18 == iVar3) {
      iVar17 = param_1[8];
      iVar12 = param_1[0xb];
    }
    uVar15 = uVar16;
    if ((uVar7 == 2) && (uVar7 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
      if (uVar16 == param_1[3]) {
        FUN_0161d664();
      }
      uVar7 = uVar16 * 5;
      puVar4 = (undefined1 *)(param_1[4] + uVar16 * 0x14);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(int *)(puVar4 + 8) = iVar18;
      iVar3 = param_1[0x23];
      param_1[5] = uVar16 + 1;
      uVar15 = uVar16 + 1;
    }
    bVar19 = iVar3 == iVar18;
    iVar11 = 0;
    if (bVar19) {
      iVar3 = param_1[8];
      uVar7 = param_1[0xb];
    }
    iVar8 = param_1[0x17];
    if (bVar19) {
      iVar11 = uVar7 + iVar3;
    }
    iVar3 = *param_1;
    uVar9 = param_1[0x1e];
    uVar7 = param_1[1];
    if ((iVar3 != 1) || (bVar19 = true, uVar7 < (uint)param_1[2])) {
      cVar2 = *(char *)((int)param_1 + 0x91);
      if (iVar3 != 0) {
        uVar7 = uVar7 + 1;
        param_1[1] = uVar7;
      }
      if (cVar2 != '\0') {
        *(undefined1 *)((int)param_1 + 0x91) = 0;
      }
      if ((iVar3 == 0) || (bVar19 = true, uVar7 < (uint)param_1[2])) {
        if (iVar3 != 0) {
          param_1[1] = uVar7 + 1;
        }
        iVar3 = param_1[0x20];
        iVar10 = param_1[0x21];
        iVar13 = param_1[0x22];
        uVar20 = FUN_006f46a8(param_1);
        param_1 = (int *)(uVar20 >> 0x20);
        bVar1 = true;
        if ((uVar20 & 1) == 0) {
          if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
            if (*param_1 != 0) {
              param_1[1] = param_1[1] + 1;
            }
            uVar20 = FUN_006f4f54(param_1,0x61,0x7a);
            uVar7 = (uint)(uVar20 >> 0x20);
            if ((uVar20 & 1) == 0) {
              uVar20 = (ulonglong)uVar7 << 0x20;
            }
            else {
              uVar20 = FUN_006f4f54(uVar7,0x41,0x5a);
            }
            uVar7 = (uint)(uVar20 >> 0x20);
            if ((uVar20 & 1) == 0) {
              uVar20 = (ulonglong)uVar7 << 0x20;
            }
            else {
              uVar20 = FUN_006f4f54(uVar7,0x30,0x39);
            }
            uVar7 = (uint)(uVar20 >> 0x20);
            if ((uVar20 & 1) == 0) {
              uVar20 = (ulonglong)uVar7 << 0x20;
            }
            else {
              uVar20 = FUN_006f5094(uVar7,"_",1);
            }
            param_1 = (int *)(uVar20 >> 0x20);
            bVar1 = false;
            while ((uVar20 & 1) == 0) {
              uVar20 = FUN_006f4f54(param_1,0x61,0x7a);
              uVar7 = (uint)(uVar20 >> 0x20);
              if ((uVar20 & 1) == 0) {
                uVar20 = (ulonglong)uVar7 << 0x20;
              }
              else {
                uVar20 = FUN_006f4f54(uVar7,0x41,0x5a);
              }
              uVar7 = (uint)(uVar20 >> 0x20);
              if ((uVar20 & 1) == 0) {
                uVar20 = (ulonglong)uVar7 << 0x20;
              }
              else {
                uVar20 = FUN_006f4f54(uVar7,0x30,0x39);
              }
              uVar7 = (uint)(uVar20 >> 0x20);
              if ((uVar20 & 1) == 0) {
                uVar20 = (ulonglong)uVar7 << 0x20;
              }
              else {
                uVar20 = FUN_006f5094(uVar7,"_",1);
              }
              param_1 = (int *)(uVar20 >> 0x20);
            }
          }
        }
        bVar19 = false;
        if (bVar1) {
          bVar19 = true;
          param_1[0x20] = iVar3;
          param_1[0x21] = iVar10;
          param_1[0x22] = iVar13;
          if (uVar15 <= (uint)param_1[5]) {
            param_1[5] = uVar15;
          }
        }
      }
      if (cVar2 != '\0') {
        *(char *)((int)param_1 + 0x91) = cVar2;
      }
    }
    cVar2 = (char)param_1[0x24];
    if (bVar19) {
      uVar14 = 1;
      if (cVar2 != '\x01') {
        FUN_006e82ec(param_1,0x4e,iVar18,iVar17,iVar12,iVar11);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar9 < (uint)param_1[0x1e]) {
            iVar8 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x4e,iVar8);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar16 <= (uint)param_1[5])) {
          param_1[5] = uVar16;
        }
      }
    }
    else {
      if (cVar2 == '\x01') {
        FUN_006e82ec(param_1,0x4e,iVar18,iVar17,iVar12,iVar11);
        cVar2 = (char)param_1[0x24];
      }
      if ((cVar2 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        uVar7 = param_1[5];
        if (uVar7 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar16,uVar7,&DAT_01c061d0);
        }
        pcVar5 = (char *)(param_1[4] + uVar16 * 0x14);
        if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
        }
        *(uint *)(pcVar5 + 4) = uVar7;
        iVar18 = param_1[5];
        iVar17 = param_1[0x22];
        if (iVar18 == param_1[3]) {
          FUN_0161d664(param_1 + 3);
        }
        puVar6 = (undefined2 *)(param_1[4] + iVar18 * 0x14);
        *puVar6 = 0x4e01;
        *(int *)(puVar6 + 8) = iVar17;
        *(uint *)(puVar6 + 2) = uVar16;
        *(undefined4 *)(puVar6 + 4) = 0;
        param_1[5] = iVar18 + 1;
      }
      uVar14 = 0;
      bVar19 = (char)param_1[0x1f] != '\0';
      cVar2 = '\0';
      if (bVar19) {
        cVar2 = *(char *)((int)param_1 + 0x91);
      }
      if (bVar19 && cVar2 != '\0') {
        if (uVar9 < (uint)param_1[0x1e]) {
          iVar8 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x4e,iVar8);
      }
    }
  }
  return CONCAT44(param_1,uVar14);
}

