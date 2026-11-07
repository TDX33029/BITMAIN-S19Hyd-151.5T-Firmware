// FUN_01aad10c @ 01aad10c size=344 calls_out=6 calls_in=1
// strings: 

uint FUN_01aad10c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1[3];
  iVar4 = param_1[2];
  if (uVar3 < (uint)param_1[1]) {
    if (uVar3 == 0) {
      thunk_FUN_01be4678(iVar4);
      iVar4 = 4;
    }
    else {
      iVar4 = FUN_01298554(iVar4,param_1[1] * 0xc,4,uVar3 * 0xc);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,uVar3 * 0xc);
      }
    }
  }
  piVar2 = (int *)thunk_FUN_01be5118(8);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar2 = iVar4;
  piVar2[1] = uVar3;
  iVar4 = DAT_01d51174;
  do {
    if (DAT_01d51174 != 0) {
      uVar3 = 0;
      ClearExclusiveLocal();
      goto LAB_01aad1dc;
    }
    bVar1 = (bool)hasExclusiveAccess(0x1d51174);
  } while (!bVar1);
  DAT_01d51174 = 1;
  DataMemoryBarrier(0xb);
  uVar3 = 1;
LAB_01aad1dc:
  if (uVar3 == 0) {
    if (iVar4 == 1) {
      while (DAT_01d51174 == 1) {
        HintYield();
      }
    }
    FUN_01aad2a4(piVar2);
    thunk_FUN_01be4678(piVar2);
  }
  else {
    DAT_01d4edc8 = &DAT_01d2ea04;
    DataMemoryBarrier(0xb);
    DAT_01d51174 = 2;
    DAT_01d51b00 = *param_1;
    DAT_01d4edc4 = piVar2;
  }
  return uVar3 ^ 1;
}

