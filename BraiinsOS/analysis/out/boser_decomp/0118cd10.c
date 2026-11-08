// FUN_0118cd10 @ 0118cd10 size=156 calls_out=3 calls_in=0
// strings: invalid usageii_button_drvPinpin_numNoInterruptRisingEdgeFallingEdgeBothEdgesInvalid button event

bool FUN_0118cd10(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [144];
  
  uVar2 = param_1[1];
  uVar1 = *param_1 ^ 3;
  if (uVar1 != 0 || uVar2 != 0) {
    uVar4 = thunk_FUN_01bee35a(uVar1,0x178);
    piVar3 = *(int **)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("invalid usageii_button_drvPinpin_numNoInterruptRisingEdgeFallingEdgeBothEdgesInvalid button event"
                   ,0xd,&DAT_01cf933c);
    }
    if (*piVar3 == 3 && piVar3[1] == 0) {
      FUN_01bed4e2(auStack_a8,param_1,0x90);
      *param_1 = 3;
      param_1[1] = 0;
      FUN_01bed4e2(piVar3,auStack_a8,0x90);
    }
  }
  return uVar1 != 0 || uVar2 != 0;
}

