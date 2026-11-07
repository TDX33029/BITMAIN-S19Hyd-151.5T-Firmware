// FUN_019f8864 @ 019f8864 size=156 calls_out=5 calls_in=3
// strings: assertion failed: c.runtime.get().is_entered()

void FUN_019f8864(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x20);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(iVar1,&LAB_019efb68);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  if (*(char *)(iVar1 + 0x32) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: c.runtime.get().is_entered()",0x2e,&DAT_01d29b48);
  }
  *(undefined1 *)(iVar1 + 0x32) = 2;
  if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
    FUN_019e9e08();
  }
  *(undefined4 *)(iVar1 + 0x28) = param_1;
  *(undefined4 *)(iVar1 + 0x24) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = param_2;
  return;
}

