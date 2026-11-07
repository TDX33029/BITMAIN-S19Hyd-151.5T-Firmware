// FUN_009cbbdc @ 009cbbdc size=372 calls_out=3 calls_in=1
// strings: 

void FUN_009cbbdc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = *param_1;
  uVar5 = param_1[1];
  iVar8 = param_1[2];
  iVar6 = 0;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  bVar4 = iVar1 != 0;
  while( true ) {
    if (iVar8 == 0) {
      if (bVar4) {
        if (iVar6 == 0) {
          for (; iVar6 = iVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
            iVar1 = *(int *)(iVar6 + 0x378);
          }
        }
        iVar8 = *(int *)(iVar6 + 0x370);
        iVar1 = iVar6;
        if (*(int *)(iVar6 + 0x370) != 0) {
          do {
            iVar6 = iVar8;
            thunk_FUN_01be4678(iVar1);
            iVar8 = *(int *)(iVar6 + 0x370);
            iVar1 = iVar6;
          } while (*(int *)(iVar6 + 0x370) != 0);
        }
        thunk_FUN_01be4678(iVar6);
        return;
      }
      return;
    }
    if (!bVar4) break;
    if (iVar6 == 0) {
      uVar7 = 0;
      iVar6 = iVar1;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        iVar6 = *(int *)(iVar6 + 0x378);
      }
      iVar1 = 0;
    }
    else {
      uVar7 = uVar5;
    }
    iVar2 = iVar6;
    if (*(ushort *)(iVar6 + 0x376) <= uVar7) {
      do {
        iVar6 = *(int *)(iVar2 + 0x370);
        if (iVar6 == 0) {
          thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d30454);
        }
        uVar7 = (uint)*(ushort *)(iVar2 + 0x374);
        thunk_FUN_01be4678();
        iVar1 = iVar1 + 1;
        iVar2 = iVar6;
      } while (*(ushort *)(iVar6 + 0x376) <= uVar7);
    }
    iVar8 = iVar8 + -1;
    if (iVar1 == 0) {
      uVar5 = uVar7 + 1;
      bVar4 = true;
      iVar1 = 0;
    }
    else {
      piVar3 = (int *)(iVar6 + uVar7 * 4 + 0x37c);
      do {
        iVar6 = *piVar3;
        iVar1 = iVar1 + -1;
        piVar3 = (int *)(iVar6 + 0x378);
      } while (iVar1 != 0);
      bVar4 = true;
      uVar5 = 0;
      iVar1 = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d30464);
}

