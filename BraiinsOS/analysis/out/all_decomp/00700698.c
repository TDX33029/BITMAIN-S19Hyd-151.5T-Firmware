// FUN_00700698 @ 00700698 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_00700698(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_a0 [144];
  
  param_1 = (undefined4 *)*param_1;
  piVar1 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  *param_1 = 0;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  iVar3 = *piVar1;
  *piVar1 = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a78a8);
  }
  FUN_016dd1aa(auStack_a0,piVar1 + 1,0x90);
  *piVar2 = iVar3;
  FUN_016dd1aa(piVar2 + 1,auStack_a0,0x90);
  return;
}

