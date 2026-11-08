// FUN_015e95f8 @ 015e95f8 size=252 calls_out=7 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x015e96e4) */

void FUN_015e95f8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_018dd9b8 < 0x3ffffffe) {
    bVar1 = (bool)hasExclusiveAccess(0x18dd9b8);
    if (bVar1) {
      DataMemoryBarrier(0xb);
      DAT_018dd9b8 = DAT_018dd9b8 + 1;
      goto LAB_015e963c;
    }
  }
  FUN_015bebb8(&DAT_018dd9b8);
LAB_015e963c:
  iVar2 = FUN_016d2b7c(param_2);
  if (iVar2 == 0) {
    *param_1 = -0x80000000;
  }
  else {
    iVar3 = FUN_016dd8a2();
    if (iVar3 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar3);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar3);
      }
    }
    FUN_016dd1aa(iVar4,iVar2,iVar3);
    *param_1 = iVar3;
    param_1[1] = iVar4;
    param_1[2] = iVar3;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar5 = DAT_018dd9b8 - 1;
    bVar1 = (bool)hasExclusiveAccess(0x18dd9b8);
  } while (!bVar1);
  DAT_018dd9b8 = uVar5;
  if ((uVar5 & 0xbfffffff) == 0x80000000) {
    FUN_015e9814(&DAT_018dd9b8);
    return;
  }
  return;
}

