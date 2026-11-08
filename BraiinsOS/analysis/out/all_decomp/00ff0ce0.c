// FUN_00ff0ce0 @ 00ff0ce0 size=268 calls_out=3 calls_in=0
// strings: 

void FUN_00ff0ce0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  param_5 = param_5 - param_4;
  if (param_5 != 0) {
    uVar1 = param_3;
    if (param_3 < 3) {
      uVar1 = 2;
    }
    uVar2 = 0;
    do {
      while( true ) {
        uVar6 = uVar2 + 2;
        if ((uVar1 - 1 & 0xfffffffe) == uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,param_3,&DAT_01881ab8);
        }
        iVar4 = param_2 + uVar2 * 4;
        iVar5 = param_4 * 2 + uVar2;
        iVar3 = *(int *)(iVar4 + 8);
        if (iVar3 == 0) break;
        if (param_3 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2 + 3,param_3,&DAT_01881ac8);
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01881ad8);
        }
        FUN_00fef4d8(param_1,iVar5,iVar3 + -1);
        FUN_00fef4d8(param_1,iVar5 + 1,iVar4 + -1);
        param_5 = param_5 + -1;
        uVar2 = uVar6;
        if (param_5 == 0) {
          return;
        }
      }
      FUN_00fef4d8(param_1,iVar5,0xffffffff);
      FUN_00fef4d8(param_1,iVar5 + 1,0xffffffff);
      param_5 = param_5 + -1;
      uVar2 = uVar6;
    } while (param_5 != 0);
  }
  return;
}

