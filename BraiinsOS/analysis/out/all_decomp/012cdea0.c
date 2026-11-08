// FUN_012cdea0 @ 012cdea0 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_012cdea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = *(undefined4 **)*param_1;
  *(int *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  piVar3 = (int *)*puVar1;
  iVar2 = FUN_016d2558(0x1e);
  *piVar3 = iVar2;
  piVar3[1] = iVar2 >> 0x1f;
  return;
}

