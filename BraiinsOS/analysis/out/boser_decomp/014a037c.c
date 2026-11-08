// FUN_014a037c @ 014a037c size=96 calls_out=3 calls_in=0
// strings: 

void FUN_014a037c(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_014a0414();
  if (iVar1 != -1) {
    FUN_01bf01d6();
  }
  FUN_01781558(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_01bf01d6();
  }
  puVar2 = (uint *)(param_1 + 0x14);
  if ((*puVar2 & 6) == 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014a0600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_014a0604 + *(int *)(&LAB_014a0604 + *puVar2 * 4)))
            (puVar2,*(undefined4 *)(param_1 + 0x1c));
  return;
}

