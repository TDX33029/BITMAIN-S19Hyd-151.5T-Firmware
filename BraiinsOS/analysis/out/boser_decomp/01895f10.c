// FUN_01895f10 @ 01895f10 size=184 calls_out=2 calls_in=3
// strings: 

int FUN_01895f10(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_2;
  do {
    uVar9 = uVar8 - 1;
    uVar3 = uVar8;
    if (uVar9 != 0) {
      uVar3 = uVar9;
    }
    if (param_2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,param_2,&DAT_01d2182c);
    }
    uVar7 = *(undefined4 *)(param_1 + uVar9 * 4);
    bVar2 = false;
    iVar6 = 0x20;
    while ((iVar5 = iVar6, !bVar2 && (iVar5 != 0))) {
      iVar4 = iVar5 + -1;
      iVar6 = iVar5;
      if (iVar4 != 0) {
        iVar6 = iVar4;
      }
      iVar1 = FUN_01bd54ec(uVar7,iVar4);
      bVar2 = iVar4 == 0;
      if (iVar1 != 0) {
        return iVar5 + uVar9 * 0x20;
      }
    }
    if ((uVar8 == 1) || (uVar8 = uVar3, uVar3 == 0)) {
      return 0;
    }
  } while( true );
}

