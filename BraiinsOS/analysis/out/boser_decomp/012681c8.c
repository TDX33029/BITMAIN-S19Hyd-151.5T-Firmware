// FUN_012681c8 @ 012681c8 size=364 calls_out=3 calls_in=3
// strings: 

void FUN_012681c8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = *param_1;
  uVar5 = param_1[1];
  iVar7 = param_1[2];
  iVar6 = 0;
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
          for (; iVar6 = iVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
            iVar1 = *(int *)(iVar6 + 0x60);
          }
        }
        iVar7 = *(int *)(iVar6 + 0x58);
        iVar1 = iVar6;
        if (*(int *)(iVar6 + 0x58) != 0) {
          do {
            iVar6 = iVar7;
            thunk_FUN_01be4678(iVar1);
            iVar7 = *(int *)(iVar6 + 0x58);
            iVar1 = iVar6;
          } while (*(int *)(iVar6 + 0x58) != 0);
        }
        thunk_FUN_01be4678(iVar6);
        return;
      }
      return;
    }
    if (!bVar4) break;
    if (iVar6 == 0) {
      uVar8 = 0;
      iVar6 = iVar1;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        iVar6 = *(int *)(iVar6 + 0x60);
      }
      iVar1 = 0;
    }
    else {
      uVar8 = uVar5;
    }
    iVar2 = iVar6;
    if (*(ushort *)(iVar6 + 0x5e) <= uVar8) {
      do {
        iVar6 = *(int *)(iVar2 + 0x58);
        if (iVar6 == 0) {
          thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d30454);
        }
        uVar8 = (uint)*(ushort *)(iVar2 + 0x5c);
        thunk_FUN_01be4678();
        iVar1 = iVar1 + 1;
        iVar2 = iVar6;
      } while (*(ushort *)(iVar6 + 0x5e) <= uVar8);
    }
    iVar7 = iVar7 + -1;
    if (iVar1 == 0) {
      uVar5 = uVar8 + 1;
      bVar4 = true;
      iVar1 = 0;
    }
    else {
      piVar3 = (int *)(iVar6 + uVar8 * 4 + 100);
      do {
        iVar6 = *piVar3;
        iVar1 = iVar1 + -1;
        piVar3 = (int *)(iVar6 + 0x60);
      } while (iVar1 != 0);
      bVar4 = true;
      uVar5 = 0;
      iVar1 = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d30464);
}

