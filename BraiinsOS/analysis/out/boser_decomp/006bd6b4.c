// FUN_006bd6b4 @ 006bd6b4 size=180 calls_out=5 calls_in=3
// strings: 

void FUN_006bd6b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  uVar3 = 0;
  piVar2 = (int *)&SUB_00000004;
  if (*param_4 == 1) {
    iVar5 = param_4[2];
    iVar4 = param_4[1];
    piVar2 = (int *)thunk_FUN_01be5118(8);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    uVar3 = 1;
    *piVar2 = iVar4;
    piVar2[1] = iVar5;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[4] = param_3;
  param_1[5] = iVar1;
  param_1[6] = param_3;
  param_1[7] = uVar3;
  param_1[8] = piVar2;
  param_1[9] = uVar3;
  param_1[10] = 0;
  param_1[0xb] = 4;
  *param_1 = 0;
  return;
}

