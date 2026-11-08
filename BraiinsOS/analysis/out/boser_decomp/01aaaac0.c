// FUN_01aaaac0 @ 01aaaac0 size=200 calls_out=1 calls_in=2
// strings: 

void FUN_01aaaac0(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined *local_10;
  undefined1 *local_c;
  
  iVar6 = param_2[2];
  piVar7 = (int *)param_2[1];
  uVar3 = 0;
  if (*param_2 == 1) {
    if (piVar7 == (int *)&DAT_ffffffff) {
LAB_01aaab48:
      *param_1 = 2;
      return;
    }
    iVar4 = *piVar7;
    do {
      if (iVar4 == 0) goto LAB_01aaab48;
      if (iVar4 < 0) {
        local_c = &LAB_018a13b8;
        local_10 = &DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_10,&DAT_01d2e890);
      }
      iVar5 = *piVar7;
      if (iVar5 == iVar4) {
        bVar1 = (bool)hasExclusiveAccess(piVar7);
        if (bVar1) {
          *piVar7 = iVar4 + 1;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      iVar4 = iVar5;
    } while (!bVar2);
    uVar3 = 1;
  }
  *param_1 = uVar3;
  param_1[1] = piVar7;
  param_1[2] = iVar6;
  return;
}

