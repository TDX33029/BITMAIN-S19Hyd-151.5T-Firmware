// FUN_016aa3b0 @ 016aa3b0 size=716 calls_out=1 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x016aa660 */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_016aa3b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    if (*(int *)(param_2 + 0x1c) != -0x80000000) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0x1c) == -0x80000000) {
      return 0xff;
    }
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar6 = *(uint *)(param_2 + 0x24);
    if (uVar3 != uVar6) {
      return -((uint)(uVar3 >= uVar6 && uVar3 != uVar6) - (uint)(uVar3 < uVar6));
    }
  }
  iVar11 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_2 + 0x10);
  uVar3 = (uint)(iVar11 != -0x80000000);
  if (iVar8 != -0x80000000) {
    uVar3 = uVar3 - 1;
  }
  uVar6 = 0;
  if (iVar8 != -0x80000000) {
    uVar6 = 0xffffffff;
  }
  if (uVar3 != 0) {
    if ((uVar3 & 0xff) == 1) {
      return 0xff;
    }
    return 1;
  }
  uVar13 = *(uint *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 != uVar13) {
LAB_016aa7d8:
    return -((uint)(uVar3 >= uVar13 && uVar3 != uVar13) - (uint)(uVar3 < uVar13));
  }
  if (*(int *)(param_1 + 0x1c) != -0x80000000) {
    uVar10 = *(uint *)(param_2 + 0x24);
    uVar12 = *(uint *)(param_1 + 0x24);
    uVar5 = uVar10;
    if (uVar12 < uVar10) {
      uVar5 = uVar12;
    }
    iVar2 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),uVar5);
    if (iVar2 == 0) {
      iVar2 = uVar12 - uVar10;
    }
    if (iVar2 != 0) {
      uVar6 = (uint)(0 < iVar2) - (uint)(iVar2 < 0);
      goto LAB_016aa554;
    }
  }
  if (iVar11 != -0x80000000) {
    if (iVar8 == -0x80000000) {
      return 0xff;
    }
    uVar5 = *(uint *)(param_2 + 0x18);
    uVar10 = *(uint *)(param_1 + 0x18);
    uVar6 = uVar5;
    if (uVar10 < uVar5) {
      uVar6 = uVar10;
    }
    iVar8 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),uVar6);
    if (iVar8 == 0) {
      iVar8 = uVar10 - uVar5;
    }
    uVar6 = (uint)(0 < iVar8) - (uint)(iVar8 < 0);
  }
LAB_016aa554:
  if ((uVar6 & 0xff) == 0) {
    iVar8 = *(int *)(param_2 + 8);
    iVar11 = *(int *)(param_1 + 8);
    iVar2 = 0;
    do {
      if (uVar3 << 5 == iVar2) goto LAB_016aa7d8;
      cVar1 = *(char *)(iVar11 + iVar2);
      cVar9 = *(char *)(iVar8 + iVar2);
      if (cVar1 == '\a') {
        bVar14 = cVar9 != '\a';
        cVar9 = '\a';
        if (bVar14) {
          return 1;
        }
      }
      else if (cVar9 == '\a') {
        return 0xff;
      }
      iVar7 = iVar8 + iVar2;
      iVar4 = iVar11 + iVar2;
      uVar10 = *(uint *)(iVar7 + 0x18);
      uVar5 = *(uint *)(iVar4 + 0x18);
      uVar6 = uVar10;
      if (uVar5 < uVar10) {
        uVar6 = uVar5;
      }
      iVar4 = FUN_016dd50a(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar7 + 0x14),uVar6);
      if (iVar4 == 0) {
        iVar4 = uVar5 - uVar10;
      }
      if (iVar4 == 0) {
        if (cVar1 != '\a') {
          if (cVar9 != '\a') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          return 0xff;
        }
        uVar6 = 0;
        if (cVar9 != '\a') {
          uVar6 = 0xffffffff;
        }
      }
      else {
        uVar6 = (uint)(0 < iVar4) - (uint)(iVar4 < 0);
      }
      iVar2 = iVar2 + 0x20;
    } while ((uVar6 & 0xff) == 0);
  }
  return -uVar6;
}

