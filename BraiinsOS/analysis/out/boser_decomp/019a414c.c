// FUN_019a414c @ 019a414c size=160 calls_out=3 calls_in=0
// strings: 

void FUN_019a414c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  
  iVar2 = *param_1;
  if (iVar2 == -0x80000000) {
    local_20 = 0;
    local_24 = 1;
    local_28 = 0;
    FUN_012fa178(&local_28,&DAT_01d27d88,**(undefined4 **)param_1[3],(*(undefined4 **)param_1[3])[1]
                );
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
    iVar2 = *param_1;
  }
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  piVar1 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar1 = iVar2;
  piVar1[1] = iVar3;
  piVar1[2] = iVar4;
  return;
}

