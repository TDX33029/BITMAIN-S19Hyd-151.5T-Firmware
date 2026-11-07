// FUN_01551788 @ 01551788 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_01551788(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_80 [112];
  
  param_1 = (undefined4 *)*param_1;
  piVar1 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  *param_1 = 0;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  iVar3 = *piVar1;
  *piVar1 = 2;
  if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d24074);
  }
  FUN_01bed4e2(auStack_80,piVar1 + 1,0x6c);
  *piVar2 = iVar3;
  FUN_01bed4e2(piVar2 + 1,auStack_80,0x6c);
  return;
}

