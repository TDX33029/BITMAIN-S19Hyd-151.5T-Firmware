// FUN_01676ff0 @ 01676ff0 size=84 calls_out=2 calls_in=0
// strings: 

int * FUN_01676ff0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_01681dec();
  uVar2 = (uint)(uVar4 >> 0x20);
  if ((uVar4 & 1) == 0) {
    return (int *)0x0;
  }
  if (*(uint *)(param_1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x18),&DAT_018adbb8);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + uVar2 * 0xc0);
  piVar1 = (int *)0x0;
  if (*piVar3 != 0) {
    piVar1 = piVar3 + 0x1c;
  }
  return piVar1;
}

