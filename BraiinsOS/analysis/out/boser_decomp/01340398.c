// FUN_01340398 @ 01340398 size=364 calls_out=3 calls_in=13
// strings: 

void FUN_01340398(int *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = (int *)*param_1;
  uVar4 = param_1[1];
  iVar6 = param_1[2];
  piVar5 = (int *)0x0;
  if (piVar1 == (int *)0x0) {
    bVar3 = false;
    iVar6 = 0;
  }
  else {
    bVar3 = true;
  }
  while( true ) {
    if (iVar6 == 0) {
      if (bVar3) {
        if (piVar5 == (int *)0x0) {
          for (; piVar5 = piVar1, uVar4 != 0; uVar4 = uVar4 - 1) {
            piVar1 = (int *)piVar5[0xd];
          }
        }
        piVar1 = (int *)*piVar5;
        piVar2 = piVar5;
        if ((int *)*piVar5 != (int *)0x0) {
          do {
            piVar5 = piVar1;
            thunk_FUN_01be4678(piVar2);
            piVar1 = (int *)*piVar5;
            piVar2 = piVar5;
          } while ((int *)*piVar5 != (int *)0x0);
        }
        thunk_FUN_01be4678(piVar5);
        return;
      }
      return;
    }
    if (!bVar3) break;
    if (piVar5 == (int *)0x0) {
      uVar7 = 0;
      piVar5 = piVar1;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        piVar5 = (int *)piVar5[0xd];
      }
      piVar1 = (int *)0x0;
    }
    else {
      uVar7 = uVar4;
    }
    piVar2 = piVar5;
    if (*(ushort *)((int)piVar5 + 0x32) <= uVar7) {
      do {
        piVar5 = (int *)*piVar2;
        if (piVar5 == (int *)0x0) {
          thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d30454);
        }
        uVar7 = (uint)*(ushort *)(piVar2 + 0xc);
        thunk_FUN_01be4678();
        piVar1 = (int *)((int)piVar1 + 1);
        piVar2 = piVar5;
      } while (*(ushort *)((int)piVar5 + 0x32) <= uVar7);
    }
    iVar6 = iVar6 + -1;
    if (piVar1 == (int *)0x0) {
      uVar4 = uVar7 + 1;
      bVar3 = true;
      piVar1 = (int *)0x0;
    }
    else {
      piVar2 = piVar5 + uVar7 + 0xe;
      do {
        piVar5 = (int *)*piVar2;
        piVar1 = (int *)((int)piVar1 + -1);
        piVar2 = piVar5 + 0xd;
      } while (piVar1 != (int *)0x0);
      bVar3 = true;
      uVar4 = 0;
      piVar1 = (int *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d30464);
}

