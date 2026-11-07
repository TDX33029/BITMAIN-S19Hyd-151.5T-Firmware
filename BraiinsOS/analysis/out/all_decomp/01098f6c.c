// FUN_01098f6c @ 01098f6c size=344 calls_out=2 calls_in=0
// strings: EdnsNameNotRootFormErrorIncorrectRDataLengthReadLabelBytesTooLongPointerNotPriorToLabel

void FUN_01098f6c(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < **(ushort **)*param_1) {
    uVar1 = **(ushort **)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01098f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01098fa0 + *(int *)(&DAT_01098fa0 + (uint)uVar1 * 4)))();
  return;
}

