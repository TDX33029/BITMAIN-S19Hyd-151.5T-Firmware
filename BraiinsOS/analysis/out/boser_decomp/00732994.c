// FUN_00732994 @ 00732994 size=76 calls_out=2 calls_in=2
// strings: assertion failed: slot.get()Encoded text cannot have a 6-bit remainder.Impossible: must only have 0 to 8 input bytes in last chunk; with no invalid lengths

void FUN_00732994(undefined4 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x88);
  pcVar1 = (char *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if (pcVar1[1] == '\0') {
    pcVar1[0] = '\0';
    pcVar1[1] = '\x01';
  }
  if (*pcVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: slot.get()Encoded text cannot have a 6-bit remainder.Impossible: must only have 0 to 8 input bytes in last chunk, with no invalid lengths"
                 ,0x1c,&DAT_01c07958);
  }
  *pcVar1 = '\0';
  return;
}

