// FUN_0102a47c @ 0102a47c size=312 calls_out=2 calls_in=0
// strings: 

void FUN_0102a47c(uint *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  piVar1 = (int *)thunk_FUN_016d4a50(param_3 * 0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,param_3 * 0xc);
  }
  uVar4 = 1;
  piVar3 = piVar1;
  if (1 < param_3) {
    if (*param_2 == 0) {
      uVar4 = 1;
      piVar2 = piVar1;
      do {
        uVar4 = uVar4 + 1;
        piVar3 = piVar2 + 3;
        *piVar2 = 0;
        piVar2 = piVar3;
      } while (param_3 != uVar4);
    }
    else {
      iVar5 = param_2[1];
      iVar6 = param_2[2];
      uVar4 = 1;
      do {
        uVar4 = uVar4 + 1;
        *piVar3 = 1;
        piVar3[1] = iVar5;
        piVar3[2] = iVar6;
        piVar3 = piVar3 + 3;
      } while (param_3 != uVar4);
    }
    uVar4 = param_3;
  }
  iVar6 = param_2[1];
  iVar5 = param_2[2];
  *piVar3 = *param_2;
  piVar3[1] = iVar6;
  piVar3[2] = iVar5;
  *param_1 = param_3;
  param_1[1] = (uint)piVar1;
  param_1[2] = uVar4;
  return;
}

