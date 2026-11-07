// FUN_006f2858 @ 006f2858 size=1052 calls_out=10 calls_in=2
// strings: internal error: entered unreachable code

undefined8 FUN_006f2858(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  ulonglong uVar22;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar12 = *param_1;
  uVar8 = param_1[1];
  if ((iVar12 == 1) && (uVar2 = 1, (uint)param_1[2] <= uVar8)) goto LAB_006f2c1c;
  cVar1 = *(char *)((int)param_1 + 0x91);
  if (iVar12 != 0) {
    uVar8 = uVar8 + 1;
    param_1[1] = uVar8;
  }
  if (cVar1 != '\x01') {
    *(undefined1 *)((int)param_1 + 0x91) = 1;
  }
  if ((iVar12 == 0) || (uVar8 < (uint)param_1[2])) {
    iVar20 = param_1[0x22];
    if (iVar12 != 0) {
      param_1[1] = uVar8 + 1;
    }
    iVar3 = param_1[0x23];
    iVar16 = 0;
    iVar12 = 0;
    uVar8 = param_1[5];
    if (iVar20 == iVar3) {
      iVar12 = param_1[8];
      iVar16 = param_1[0xb];
    }
    uVar9 = uVar8;
    if ((char)param_1[0x24] == '\x02') {
      if (uVar8 == param_1[3]) {
        FUN_0161d664();
      }
      puVar4 = (undefined1 *)(param_1[4] + uVar8 * 0x14);
      *puVar4 = 0;
      uVar9 = uVar8 + 1;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(int *)(puVar4 + 8) = iVar20;
      iVar3 = param_1[0x23];
      param_1[5] = uVar9;
    }
    bVar21 = iVar3 == iVar20;
    if (bVar21) {
      iVar3 = param_1[8];
    }
    iVar18 = 0;
    uVar10 = uVar9;
    if (bVar21) {
      uVar10 = param_1[0xb];
    }
    iVar19 = param_1[0x17];
    if (bVar21) {
      iVar18 = uVar10 + iVar3;
    }
    iVar3 = *param_1;
    uVar14 = param_1[1];
    uVar10 = param_1[0x1e];
    if ((iVar3 == 1) && ((uint)param_1[2] <= uVar14)) {
      uVar14 = 1;
    }
    else {
      piVar17 = param_1 + 0x20;
      if (iVar3 == 0) {
        local_40 = *piVar17;
        iStack_3c = param_1[0x21];
        iStack_38 = param_1[0x22];
LAB_006f29e4:
        iVar3 = param_1[0x24];
        *(bool *)(param_1 + 0x24) = (char)iVar3 != '\x01';
        iVar11 = *piVar17;
        iVar13 = param_1[0x21];
        iVar15 = param_1[0x22];
        FUN_00700e8c(param_1 + 0xc);
        uVar22 = FUN_006f228c(param_1);
        uVar14 = (uint)(uVar22 >> 0x20);
        if ((uVar22 & 1) == 0) {
          uVar22 = (ulonglong)uVar14 << 0x20;
        }
        else {
          uVar22 = FUN_006f258c(uVar14);
        }
        param_1 = (int *)(uVar22 >> 0x20);
        param_1[0x20] = iVar11;
        param_1[0x21] = iVar13;
        param_1[0x22] = iVar15;
        *(char *)(param_1 + 0x24) = (char)iVar3;
        if ((uVar22 & 1) == 0) {
          FUN_00700d14(param_1 + 0xc);
          goto LAB_006f2a94;
        }
        FUN_00700d14(param_1 + 0xc);
        uVar22 = FUN_006f4a10(param_1);
      }
      else {
        param_1[1] = uVar14 + 1;
        local_40 = *piVar17;
        iStack_3c = param_1[0x21];
        iStack_38 = param_1[0x22];
        if ((iVar3 == 0) || (uVar14 + 1 < (uint)param_1[2])) {
          param_1[1] = uVar14 + 2;
          goto LAB_006f29e4;
        }
LAB_006f2a94:
        uVar22 = CONCAT44(param_1,1);
      }
      param_1 = (int *)(uVar22 >> 0x20);
      uVar14 = (uint)uVar22;
      if ((uVar22 & 1) != 0) {
        param_1[0x20] = local_40;
        param_1[0x21] = iStack_3c;
        param_1[0x22] = iStack_38;
        uVar14 = 1;
        if (uVar9 <= (uint)param_1[5]) {
          param_1[5] = uVar9;
        }
      }
    }
    cVar7 = (char)param_1[0x24];
    if ((uVar14 & 1) != 0) {
      if (cVar7 != '\x01') {
        FUN_006e82ec(param_1,0x3e,iVar20,iVar12,iVar16,iVar18);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar10 < (uint)param_1[0x1e]) {
            iVar19 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x3e,iVar19);
        }
        if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar8 <= (uint)param_1[5])) {
          param_1[5] = uVar8;
        }
      }
      goto LAB_006f28ac;
    }
    if (cVar7 == '\x01') {
      FUN_006e82ec(param_1,0x3e,iVar20,iVar12,iVar16,iVar18);
      cVar7 = (char)param_1[0x24];
    }
    if ((cVar7 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar9 = param_1[5];
      if (uVar9 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar8,uVar9,&DAT_01c061d0);
      }
      pcVar5 = (char *)(param_1[4] + uVar8 * 0x14);
      if (*pcVar5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar5 + 4) = uVar9;
      iVar12 = param_1[5];
      iVar20 = param_1[0x22];
      if (iVar12 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar6 = (undefined2 *)(param_1[4] + iVar12 * 0x14);
      *puVar6 = 0x3e01;
      *(uint *)(puVar6 + 2) = uVar8;
      *(int *)(puVar6 + 8) = iVar20;
      *(undefined4 *)(puVar6 + 4) = 0;
      param_1[5] = iVar12 + 1;
    }
    bVar21 = (char)param_1[0x1f] != '\0';
    cVar7 = '\0';
    if (bVar21) {
      cVar7 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar21 && cVar7 != '\0') {
      if (uVar10 < (uint)param_1[0x1e]) {
        iVar19 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x3e,iVar19);
    }
    uVar2 = 0;
  }
  else {
LAB_006f28ac:
    uVar2 = 1;
  }
  if (cVar1 != '\x01') {
    *(char *)((int)param_1 + 0x91) = cVar1;
  }
LAB_006f2c1c:
  return CONCAT44(param_1,uVar2);
}

