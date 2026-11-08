// FUN_0199964c @ 0199964c size=544 calls_out=3 calls_in=2
// strings: 

void FUN_0199964c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  iVar6 = param_1[1];
  iVar7 = param_1[2];
  if (iVar7 != 0) {
    piVar5 = (int *)(iVar6 + 4);
    do {
      iVar1 = 0;
      if (piVar5[-1] != 0) {
        iVar1 = *piVar5;
      }
      if (piVar5[-1] != 0 && iVar1 != 0) {
        thunk_FUN_01be4678(piVar5[1]);
      }
      piVar5 = piVar5 + 0x1a;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_01be4678(iVar6);
  }
  iVar1 = param_1[3];
  iVar7 = param_1[5];
  iVar6 = 0;
  uVar8 = param_1[4];
  if (iVar1 == 0) {
    bVar4 = false;
    iVar7 = 0;
  }
  else {
    bVar4 = true;
  }
  while( true ) {
    if (iVar7 == 0) {
      if (bVar4) {
        if (iVar6 == 0) {
          for (; iVar6 = iVar1, uVar8 != 0; uVar8 = uVar8 - 1) {
            iVar1 = *(int *)(iVar6 + 0x4d8);
          }
        }
        iVar7 = *(int *)(iVar6 + 0x4d0);
        iVar1 = iVar6;
        if (*(int *)(iVar6 + 0x4d0) != 0) {
          do {
            iVar6 = iVar7;
            thunk_FUN_01be4678(iVar1);
            iVar7 = *(int *)(iVar6 + 0x4d0);
            iVar1 = iVar6;
          } while (*(int *)(iVar6 + 0x4d0) != 0);
        }
        thunk_FUN_01be4678(iVar6);
        return;
      }
      return;
    }
    if (!bVar4) break;
    if (iVar6 == 0) {
      if (uVar8 == 0) {
        iVar6 = iVar1;
        iVar1 = 0;
        uVar8 = 0;
      }
      else {
        do {
          iVar1 = *(int *)(iVar1 + 0x4d8);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        iVar6 = iVar1;
        iVar1 = 0;
        uVar8 = 0;
      }
    }
    iVar10 = iVar6;
    if (*(ushort *)(iVar6 + 0x4d6) <= uVar8) {
      do {
        iVar6 = *(int *)(iVar10 + 0x4d0);
        if (iVar6 == 0) {
          thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d27ff4);
        }
        uVar8 = (uint)*(ushort *)(iVar10 + 0x4d4);
        thunk_FUN_01be4678();
        iVar1 = iVar1 + 1;
        iVar10 = iVar6;
      } while (*(ushort *)(iVar6 + 0x4d6) <= uVar8);
    }
    if (iVar1 == 0) {
      uVar9 = uVar8 + 1;
      iVar10 = iVar6;
    }
    else {
      piVar5 = (int *)(iVar6 + uVar8 * 4 + 0x4dc);
      do {
        iVar10 = *piVar5;
        iVar1 = iVar1 + -1;
        piVar5 = (int *)(iVar10 + 0x4d8);
      } while (iVar1 != 0);
      uVar9 = 0;
    }
    iVar2 = uVar8 * 0x68 + iVar6;
    bVar4 = true;
    iVar7 = iVar7 + -1;
    iVar1 = 0;
    bVar11 = *(int *)(iVar2 + 0x58) != 0;
    iVar3 = 0;
    if (bVar11) {
      iVar3 = *(int *)(iVar2 + 0x5c);
    }
    uVar8 = uVar9;
    iVar6 = iVar10;
    if (bVar11 && iVar3 != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(iVar2 + 0x60));
      iVar1 = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d28014);
}

