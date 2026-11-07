// FUN_01017050 @ 01017050 size=144 calls_out=2 calls_in=3
// strings: 

void FUN_01017050(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  iVar5 = param_2[2];
  if (iVar5 == 0) {
    iVar2 = 4;
    iVar3 = 0;
    iVar6 = 0;
  }
  else {
    iVar2 = FUN_01298504(iVar5 << 2,4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar5 << 2);
    }
    iVar3 = 0;
    do {
      *(int *)(iVar2 + iVar3 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar6 = iVar5;
    } while (iVar5 != iVar3);
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = iVar5;
  param_1[3] = iVar6;
  param_1[4] = iVar2;
  param_1[5] = 0;
  param_1[6] = iVar3;
  return;
}

