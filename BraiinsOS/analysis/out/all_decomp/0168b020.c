// FUN_0168b020 @ 0168b020 size=88 calls_out=2 calls_in=0
// strings: 

int * FUN_0168b020(int param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_01681dec(param_1 + 8);
  uVar2 = (uint)(uVar3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    return (int *)0x0;
  }
  if (*(uint *)(param_1 + 0x20) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x20),&DAT_018adba8);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + uVar2 * 0xc0);
  if (*piVar1 == 0) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

