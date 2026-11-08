// FUN_007251fc @ 007251fc size=464 calls_out=4 calls_in=2
// strings: 

void FUN_007251fc(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_28;
  
  iVar7 = *param_1;
  uVar5 = param_1[1];
  local_28 = param_1[2];
  if (iVar7 == 0) {
    local_28 = 0;
  }
  bVar2 = iVar7 != 0;
  iVar4 = 0;
  while( true ) {
    if (local_28 == 0) {
      if (bVar2) {
        if (iVar4 == 0) {
          for (; iVar4 = iVar7, uVar5 != 0; uVar5 = uVar5 - 1) {
            iVar7 = *(int *)(iVar4 + 0x4d8);
          }
        }
        iVar7 = *(int *)(iVar4 + 0x4d0);
        iVar3 = iVar4;
        if (*(int *)(iVar4 + 0x4d0) != 0) {
          do {
            iVar4 = iVar7;
            thunk_FUN_01be4678(iVar3);
            iVar7 = *(int *)(iVar4 + 0x4d0);
            iVar3 = iVar4;
          } while (*(int *)(iVar4 + 0x4d0) != 0);
        }
        thunk_FUN_01be4678(iVar4);
        return;
      }
      return;
    }
    if (!bVar2) break;
    iVar3 = iVar7;
    uVar6 = uVar5;
    if (iVar4 == 0) {
      uVar6 = 0;
      if (uVar5 == 0) {
        iVar3 = 0;
        iVar4 = iVar7;
      }
      else {
        do {
          iVar7 = *(int *)(iVar7 + 0x4d8);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        iVar3 = 0;
        iVar4 = iVar7;
      }
    }
    iVar7 = iVar4;
    if (*(ushort *)(iVar4 + 0x4d6) <= uVar6) {
      do {
        iVar4 = *(int *)(iVar7 + 0x4d0);
        if (iVar4 == 0) {
          thunk_FUN_01be4678(iVar7);
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d30454);
        }
        uVar6 = (uint)*(ushort *)(iVar7 + 0x4d4);
        thunk_FUN_01be4678(iVar7);
        iVar3 = iVar3 + 1;
        iVar7 = iVar4;
      } while (*(ushort *)(iVar4 + 0x4d6) <= uVar6);
    }
    if (iVar3 == 0) {
      uVar5 = uVar6 + 1;
      iVar8 = iVar4;
    }
    else {
      piVar1 = (int *)(iVar4 + uVar6 * 4 + 0x4dc);
      do {
        iVar8 = *piVar1;
        iVar3 = iVar3 + -1;
        piVar1 = (int *)(iVar8 + 0x4d8);
      } while (iVar3 != 0);
      uVar5 = 0;
    }
    bVar2 = true;
    iVar7 = 0;
    local_28 = local_28 + -1;
    iVar3 = uVar6 * 0x68 + iVar4;
    iVar4 = iVar8;
    if (*(int *)(iVar3 + 0x58) != 0) {
      FUN_0134c054(*(undefined4 *)(iVar3 + 0x5c),*(undefined4 *)(iVar3 + 0x60),8,0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d30464);
}

