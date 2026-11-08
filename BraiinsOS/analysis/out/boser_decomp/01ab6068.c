// FUN_01ab6068 @ 01ab6068 size=704 calls_out=1 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x01ab62f0 */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_01ab6068(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    bVar14 = *(int *)(param_2 + 0x1c) != -0x80000000;
    uVar3 = 0;
    if (bVar14) {
      uVar3 = 0xffffffff;
    }
    uVar10 = (uint)bVar14;
  }
  else {
    if (*(int *)(param_2 + 0x1c) == -0x80000000) {
      return 0xff;
    }
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar10 = *(uint *)(param_2 + 0x24);
    uVar3 = (uint)(uVar3 >= uVar10 && uVar3 != uVar10) - (uint)(uVar3 < uVar10);
    uVar10 = 1;
  }
  if (((uVar3 & 0xff) == 0) &&
     (uVar3 = (uint)(*(int *)(param_1 + 0x10) != -0x80000000),
     *(int *)(param_2 + 0x10) != -0x80000000)) {
    uVar3 = uVar3 - 1;
  }
  if ((uVar3 & 0xff) == 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
    uVar4 = *(uint *)(param_1 + 0xc);
    uVar3 = (uint)(uVar4 >= uVar3 && uVar4 != uVar3) - (uint)(uVar4 < uVar3);
  }
  if ((uVar3 & 0xff) == 0) {
    if (*(int *)(param_1 + 0x1c) == -0x80000000) {
      uVar3 = -uVar10;
    }
    else {
      if (uVar10 == 0) {
        return 0xff;
      }
      uVar10 = *(uint *)(param_2 + 0x24);
      uVar4 = *(uint *)(param_1 + 0x24);
      uVar3 = uVar10;
      if (uVar4 < uVar10) {
        uVar3 = uVar4;
      }
      iVar6 = FUN_01bed842(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),uVar3);
      if (iVar6 == 0) {
        iVar6 = uVar4 - uVar10;
      }
      uVar3 = (uint)(0 < iVar6) - (uint)(iVar6 < 0);
    }
    if (uVar3 == 0) {
      if (*(int *)(param_1 + 0x10) == -0x80000000) {
        uVar3 = 0;
        if (*(int *)(param_2 + 0x10) != -0x80000000) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        if (*(int *)(param_2 + 0x10) == -0x80000000) {
          return 0xff;
        }
        uVar10 = *(uint *)(param_2 + 0x18);
        uVar4 = *(uint *)(param_1 + 0x18);
        uVar3 = uVar10;
        if (uVar4 < uVar10) {
          uVar3 = uVar4;
        }
        iVar6 = FUN_01bed842(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),uVar3);
        if (iVar6 == 0) {
          iVar6 = uVar4 - uVar10;
        }
        uVar3 = (uint)(0 < iVar6) - (uint)(iVar6 < 0);
      }
    }
    if ((uVar3 & 0xff) == 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
      uVar12 = 0;
      uVar5 = *(uint *)(param_2 + 0xc);
      iVar6 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_2 + 8);
      uVar10 = uVar4;
      if (uVar5 < uVar4) {
        uVar10 = uVar5;
      }
      do {
        if (uVar10 == uVar12) {
          uVar3 = (uint)(uVar4 >= uVar5 && uVar4 != uVar5) - (uint)(uVar4 < uVar5);
          break;
        }
        cVar1 = *(char *)(iVar6 + uVar12 * 0x20);
        cVar2 = *(char *)(iVar7 + uVar12 * 0x20);
        if (cVar1 == '\a') {
          if (cVar2 != '\a') {
            return 1;
          }
        }
        else if (cVar2 == '\a') {
          return 0xff;
        }
        iVar13 = iVar7 + uVar12 * 0x20;
        iVar9 = iVar6 + uVar12 * 0x20;
        uVar11 = *(uint *)(iVar13 + 0x18);
        uVar8 = *(uint *)(iVar9 + 0x18);
        uVar3 = uVar11;
        if (uVar8 < uVar11) {
          uVar3 = uVar8;
        }
        iVar9 = FUN_01bed842(*(undefined4 *)(iVar9 + 0x14),*(undefined4 *)(iVar13 + 0x14),uVar3);
        if (iVar9 == 0) {
          iVar9 = uVar8 - uVar11;
        }
        if (iVar9 == 0) {
          if (cVar1 != '\a') {
            if (cVar2 != '\a') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return 0xff;
          }
          uVar3 = 0;
          if (cVar2 != '\a') {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = (uint)(0 < iVar9) - (uint)(iVar9 < 0);
        }
        uVar12 = uVar12 + 1;
      } while ((uVar3 & 0xff) == 0);
    }
  }
  return -uVar3;
}

