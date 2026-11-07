// FUN_006bd784 @ 006bd784 size=132 calls_out=2 calls_in=167
// strings: 

void FUN_006bd784(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  piVar1 = (int *)&SUB_00000004;
  if (*param_3 == 1) {
    iVar5 = param_3[1];
    iVar6 = param_3[2];
    piVar1 = (int *)thunk_FUN_01be5118(8);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    uVar2 = 1;
    *piVar1 = iVar5;
    piVar1[1] = iVar6;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  param_1[8] = piVar1;
  param_1[9] = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = 0;
  return;
}

