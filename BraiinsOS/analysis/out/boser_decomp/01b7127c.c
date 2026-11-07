// FUN_01b7127c @ 01b7127c size=268 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01b7127c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b8 [156];
  int local_1c;
  
  local_1c = DAT_01d53560;
  DAT_01d53458 = 2;
  DAT_01d53454 = 0;
  uVar1 = FUN_01b71264();
  iVar2 = FUN_01bead1c(uVar1,auStack_b8);
  if (iVar2 == 0) {
    DAT_01d53458 = 0;
    uVar1 = FUN_01b71264();
    iVar2 = FUN_01be34a6(uVar1,0);
    if (iVar2 != -1) {
      iVar3 = FUN_01be6c88(0,4,1,1,iVar2);
      FUN_01bf01d6(iVar2);
      if (iVar3 != -1) {
        DAT_01d53458 = 1;
        DAT_01d53454 = iVar3;
      }
    }
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

