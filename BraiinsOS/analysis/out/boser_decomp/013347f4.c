// FUN_013347f4 @ 013347f4 size=252 calls_out=3 calls_in=0
// strings: 

void FUN_013347f4(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_5 = param_5 - param_4;
  if (param_5 != 0) {
    uVar1 = param_3;
    if (param_3 < 3) {
      uVar1 = 2;
    }
    uVar2 = 0;
    do {
      if ((uVar1 - 1 & 0xfffffffe) == uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2 + 2,param_3,&DAT_01ce646c);
      }
      iVar4 = param_2 + uVar2 * 4;
      iVar5 = param_4 * 2 + uVar2;
      iVar3 = *(int *)(iVar4 + 8);
      if (iVar3 == 0) {
        FUN_01333e20(param_1,iVar5,0xffffffff);
        iVar4 = -1;
      }
      else {
        if (param_3 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2 + 3,param_3,&DAT_01ce647c);
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce648c);
        }
        FUN_01333e20(param_1,iVar5,iVar3 + -1);
        iVar4 = iVar4 + -1;
      }
      FUN_01333e20(param_1,iVar5 + 1,iVar4);
      param_5 = param_5 + -1;
      uVar2 = uVar2 + 2;
    } while (param_5 != 0);
  }
  return;
}

