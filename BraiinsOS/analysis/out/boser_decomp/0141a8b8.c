// FUN_0141a8b8 @ 0141a8b8 size=136 calls_out=6 calls_in=2
// strings: 

void FUN_0141a8b8(undefined4 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x120);
  piVar1 = (int *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if (((char)piVar1[0x14] != '\x01') &&
     (piVar1 = (int *)FUN_01429058(piVar1,0), piVar1 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_019b0950(&DAT_01d301c0);
  }
  if (*piVar1 != 0) {
    FUN_01306fc8(&DAT_01cf473c);
    *piVar1 = *piVar1 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  *piVar1 = -1;
  FUN_01420e30(piVar1 + 2);
  *piVar1 = *piVar1 + 1;
  return;
}

