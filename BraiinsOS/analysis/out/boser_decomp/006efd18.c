// FUN_006efd18 @ 006efd18 size=1236 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code

undefined8 FUN_006efd18(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 extraout_r1;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  if ((*param_1 == 1) && (uVar15 = 1, (uint)param_1[2] <= (uint)param_1[1])) goto LAB_006f00a8;
  iVar19 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar3 = param_1[0x23];
  iVar14 = 0;
  iVar18 = 0;
  uVar17 = param_1[5];
  if (iVar19 == iVar3) {
    iVar18 = param_1[8];
    iVar14 = param_1[0xb];
  }
  uVar9 = uVar17;
  if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar17 == param_1[3]) {
      FUN_0161d664();
    }
    puVar4 = (undefined1 *)(param_1[4] + uVar17 * 0x14);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(int *)(puVar4 + 8) = iVar19;
    iVar3 = param_1[0x23];
    param_1[5] = uVar17 + 1;
    uVar9 = uVar17 + 1;
  }
  iVar13 = 0;
  if (iVar3 == iVar19) {
    iVar13 = param_1[0xb] + param_1[8];
  }
  iVar3 = param_1[0x17];
  uVar5 = param_1[0x1e];
  iVar8 = *param_1;
  uVar11 = param_1[1];
  if ((iVar8 != 1) || (bVar20 = true, uVar11 < (uint)param_1[2])) {
    if (iVar8 == 0) {
      local_40 = param_1[0x20];
      iStack_3c = param_1[0x21];
      iStack_38 = param_1[0x22];
LAB_006efe6c:
      FUN_006f5094(param_1,"-",1);
      uVar21 = FUN_006f5184(extraout_r1);
      param_1 = (int *)((ulonglong)uVar21 >> 0x20);
      uVar11 = (uint)uVar21;
    }
    else {
      param_1[1] = uVar11 + 1;
      local_40 = param_1[0x20];
      iStack_3c = param_1[0x21];
      iStack_38 = param_1[0x22];
      if ((iVar8 == 0) || (uVar11 + 1 < (uint)param_1[2])) {
        param_1[1] = uVar11 + 2;
        goto LAB_006efe6c;
      }
      uVar11 = 1;
    }
    bVar1 = true;
    if ((uVar11 & 1) == 0) {
      uVar22 = FUN_006f5094(param_1,"0",1);
      param_1 = (int *)(uVar22 >> 0x20);
      if ((uVar22 & 1) == 0) {
        bVar1 = false;
      }
      else if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        uVar11 = param_1[5];
        iVar8 = param_1[0x20];
        iVar12 = param_1[0x21];
        iVar16 = param_1[0x22];
        uVar22 = FUN_006f4f54(param_1,0x31,0x39);
        uVar15 = (undefined4)(uVar22 >> 0x20);
        if ((uVar22 & 1) == 0) {
          uVar22 = FUN_006f5184(uVar15);
        }
        else {
          uVar22 = CONCAT44(uVar15,1);
        }
        param_1 = (int *)(uVar22 >> 0x20);
        bVar20 = true;
        if ((uVar22 & 1) == 0) {
          uVar10 = param_1[1];
          if ((*param_1 != 1) || (uVar10 < (uint)param_1[2])) {
            if (*param_1 != 0) {
              param_1[1] = uVar10 + 1;
              if ((uint)param_1[2] <= uVar10 + 1) goto LAB_006f0198;
              param_1[1] = uVar10 + 2;
            }
            uVar22 = FUN_006f4f54(param_1,0x30,0x39);
            param_1 = (int *)(uVar22 >> 0x20);
            bVar20 = false;
            if ((uVar22 & 1) == 0) {
              if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
                if (*param_1 != 0) {
                  param_1[1] = param_1[1] + 1;
                }
                do {
                  uVar22 = FUN_006f5944(param_1);
                  param_1 = (int *)(uVar22 >> 0x20);
                } while ((uVar22 & 1) == 0);
              }
            }
          }
        }
LAB_006f0198:
        bVar1 = false;
        if (bVar20) {
          bVar1 = true;
          param_1[0x20] = iVar8;
          param_1[0x21] = iVar12;
          param_1[0x22] = iVar16;
          if (uVar11 <= (uint)param_1[5]) {
            param_1[5] = uVar11;
          }
        }
      }
    }
    bVar20 = false;
    if (bVar1) {
      bVar20 = true;
      param_1[0x20] = local_40;
      param_1[0x21] = iStack_3c;
      param_1[0x22] = iStack_38;
      if (uVar9 <= (uint)param_1[5]) {
        param_1[5] = uVar9;
      }
    }
  }
  cVar2 = (char)param_1[0x24];
  if (bVar20) {
    uVar15 = 1;
    if (cVar2 != '\x01') {
      FUN_006e82ec(param_1,0x35,iVar19,iVar18,iVar14,iVar13);
      if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        if (uVar5 < (uint)param_1[0x1e]) {
          iVar3 = 0;
        }
        FUN_006e83b8(param_1 + 0x15,0x35,iVar3);
      }
      if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
         (uVar17 <= (uint)param_1[5])) {
        param_1[5] = uVar17;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      FUN_006e82ec(param_1,0x35,iVar19,iVar18,iVar14,iVar13);
      cVar2 = (char)param_1[0x24];
    }
    if ((cVar2 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
      uVar9 = param_1[5];
      if (uVar9 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,uVar9,&DAT_01c061d0);
      }
      pcVar6 = (char *)(param_1[4] + uVar17 * 0x14);
      if (*pcVar6 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
      }
      *(uint *)(pcVar6 + 4) = uVar9;
      iVar19 = param_1[5];
      iVar18 = param_1[0x22];
      if (iVar19 == param_1[3]) {
        FUN_0161d664(param_1 + 3);
      }
      puVar7 = (undefined2 *)(param_1[4] + iVar19 * 0x14);
      *puVar7 = 0x3501;
      *(int *)(puVar7 + 8) = iVar18;
      *(uint *)(puVar7 + 2) = uVar17;
      *(undefined4 *)(puVar7 + 4) = 0;
      param_1[5] = iVar19 + 1;
    }
    uVar15 = 0;
    bVar20 = (char)param_1[0x1f] != '\0';
    cVar2 = '\0';
    if (bVar20) {
      cVar2 = *(char *)((int)param_1 + 0x91);
    }
    if (bVar20 && cVar2 != '\0') {
      if (uVar5 < (uint)param_1[0x1e]) {
        iVar3 = 0;
      }
      FUN_006e83b8(param_1 + 0x15,0x35,iVar3);
    }
  }
LAB_006f00a8:
  return CONCAT44(param_1,uVar15);
}

