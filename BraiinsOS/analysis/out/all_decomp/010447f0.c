// FUN_010447f0 @ 010447f0 size=344 calls_out=2 calls_in=0
// strings: EdnsNameNotRootFormErrorIncorrectRDataLengthReadLabelBytesTooLongPointerNotPriorToLabel

void FUN_010447f0(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < **(ushort **)*param_1) {
    uVar1 = **(ushort **)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01044820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01044824 + *(int *)(&DAT_01044824 + (uint)uVar1 * 4)))();
  return;
}

