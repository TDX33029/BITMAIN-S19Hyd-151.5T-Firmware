// FUN_019a31b0 @ 019a31b0 size=256 calls_out=7 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x019a32a0) */

void FUN_019a31b0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_01d51a70 < 0x3ffffffe) {
    bVar1 = (bool)hasExclusiveAccess(0x1d51a70);
    if (bVar1) {
      DataMemoryBarrier(0xb);
      DAT_01d51a70 = DAT_01d51a70 + 1;
      goto LAB_019a31f4;
    }
  }
  FUN_0197a5c8(&DAT_01d51a70);
LAB_019a31f4:
  iVar2 = FUN_01be31f8(param_2);
  if (iVar2 == 0) {
    *param_1 = -0x80000000;
  }
  else {
    iVar3 = FUN_01bedbda();
    if (iVar3 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_01298504(iVar3,1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,iVar3);
      }
    }
    FUN_01bed4e2(iVar4,iVar2,iVar3);
    *param_1 = iVar3;
    param_1[1] = iVar4;
    param_1[2] = iVar3;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar5 = DAT_01d51a70 - 1;
    bVar1 = (bool)hasExclusiveAccess(0x1d51a70);
  } while (!bVar1);
  DAT_01d51a70 = uVar5;
  if ((uVar5 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(&DAT_01d51a70);
    return;
  }
  return;
}

