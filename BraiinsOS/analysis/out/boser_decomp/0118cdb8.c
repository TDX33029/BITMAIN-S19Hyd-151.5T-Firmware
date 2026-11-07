// FUN_0118cdb8 @ 0118cdb8 size=136 calls_out=2 calls_in=1
// strings: invalid usageii_button_drvPinpin_numNoInterruptRisingEdgeFallingEdgeBothEdgesInvalid button event

bool FUN_0118cdb8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar2 = 0;
  if (*param_1 != 0) {
    uVar8 = thunk_FUN_01bee35a();
    iVar2 = (int)((ulonglong)uVar8 >> 0x20);
    piVar1 = *(int **)((int)uVar8 + extraout_r3);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("invalid usageii_button_drvPinpin_numNoInterruptRisingEdgeFallingEdgeBothEdgesInvalid button event"
                   ,0xd,&DAT_01cf933c);
    }
    if (*piVar1 == 0) {
      iVar3 = *param_1;
      iVar4 = param_1[1];
      iVar5 = param_1[2];
      iVar6 = param_1[3];
      iVar7 = param_1[4];
      *param_1 = 0;
      *piVar1 = iVar3;
      piVar1[1] = iVar4;
      piVar1[2] = iVar5;
      piVar1[3] = iVar6;
      piVar1[4] = iVar7;
    }
  }
  return iVar2 != 0;
}

