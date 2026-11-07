// FUN_0071fc64 @ 0071fc64 size=344 calls_out=2 calls_in=0
// strings: EdnsNameNotRootFormErrorIncorrectRDataLengthReadLabelBytesTooLongPointerNotPriorToLabel

void FUN_0071fc64(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < **(ushort **)*param_1) {
    uVar1 = **(ushort **)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0071fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0071fc98 + *(int *)(&DAT_0071fc98 + (uint)uVar1 * 4)))();
  return;
}

