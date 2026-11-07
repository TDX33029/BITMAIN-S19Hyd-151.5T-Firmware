// FUN_018c3e74 @ 018c3e74 size=128 calls_out=4 calls_in=9
// strings: 

void FUN_018c3e74(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = FUN_018c3188(param_2);
  iVar2 = (int)((ulonglong)lVar5 >> 0x20);
  uVar3 = 0;
  if (lVar5 < 0) {
LAB_018c3e94:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar2);
  }
  if (iVar2 == 0) {
    iVar1 = 1;
    iVar4 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(iVar2,1);
    iVar4 = iVar2;
    if (iVar1 == 0) goto LAB_018c3e94;
  }
  FUN_01bed4e2(iVar1,(int)lVar5,iVar2);
  *param_1 = iVar4;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

