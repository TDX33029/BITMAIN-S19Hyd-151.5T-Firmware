// FUN_008c8930 @ 008c8930 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_008c8930(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0x18);
  piVar1 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x10);
  }
  *piVar1 = *piVar3 * 0x3c;
  piVar1[1] = piVar3[1] * 0x3c;
  piVar1[2] = piVar3[2] * 0x3c;
  iVar2 = piVar3[3];
  *param_1 = 4;
  param_1[1] = piVar1;
  param_1[2] = 4;
  piVar1[3] = iVar2 * 0x3c;
  return;
}

