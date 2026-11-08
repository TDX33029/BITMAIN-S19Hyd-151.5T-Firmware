// FUN_00791600 @ 00791600 size=240 calls_out=4 calls_in=1
// strings: 

void FUN_00791600(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_r6;
  undefined4 uVar6;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int *local_20;
  int *local_1c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c != 0) {
    return;
  }
  piVar5 = *(int **)(param_1 + 0x304);
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (-1 < iVar3) {
    if (*(int *)(param_1 + 0x2f8) == -0x80000000) {
      iVar3 = -0x80000000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x300);
      uVar6 = *(undefined4 *)(param_1 + 0x2fc);
      if (iVar3 == 0) {
        unaff_r6 = 1;
      }
      else {
        unaff_r6 = thunk_FUN_016d4a50(iVar3);
        if (unaff_r6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar3);
        }
      }
      FUN_016dd1aa(unaff_r6,uVar6,iVar3);
    }
    local_1c = *(int **)(param_1 + 0x308);
    do {
      iVar4 = *local_1c;
      bVar2 = (bool)hasExclusiveAccess(local_1c);
    } while (!bVar2);
    *local_1c = iVar4 + 1;
    if (-1 < iVar4) {
      iStack_2c = iVar3;
      iStack_28 = unaff_r6;
      local_24 = iVar3;
      local_20 = piVar5;
      FUN_00773780(&iStack_2c);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x7916ec);
  (*pcVar1)();
}

