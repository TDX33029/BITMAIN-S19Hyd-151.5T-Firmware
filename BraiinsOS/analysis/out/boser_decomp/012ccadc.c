// FUN_012ccadc @ 012ccadc size=72 calls_out=1 calls_in=2
// strings: 

int * FUN_012ccadc(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  
  iVar3 = *param_1;
  if (param_2 != iVar3) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_2 + 0xc) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = param_2;
    }
    *param_1 = param_2;
    if (param_1[1] == 0) {
      param_1[1] = param_2;
    }
    return param_1;
  }
  local_c = param_2;
  piVar1 = (int *)FUN_012ccbcc(param_1,&local_c);
  piVar2 = (int *)piVar1[2];
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b728);
  }
  if (piVar2 == piVar1) {
    return (int *)0x0;
  }
  iVar3 = piVar2[2];
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b738);
  }
  piVar1[2] = iVar3;
  *(int **)(iVar3 + 0xc) = piVar1;
  piVar2[2] = 0;
  piVar2[3] = 0;
  return piVar2;
}

