// FUN_01420ea4 @ 01420ea4 size=132 calls_out=5 calls_in=2
// strings: 

void FUN_01420ea4(undefined4 param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x120);
  puVar1 = (uint *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if (((char)puVar1[0x14] != '\x01') &&
     (puVar1 = (uint *)FUN_01429058(puVar1,0), puVar1 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_019b0950(&DAT_01d301c0);
  }
  if (0x7ffffffe < *puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01cf472c);
  }
  *puVar1 = *puVar1 + 1;
  FUN_01ac6cbc(param_1,puVar1 + 0xc,0x1d);
  *puVar1 = *puVar1 - 1;
  return;
}

