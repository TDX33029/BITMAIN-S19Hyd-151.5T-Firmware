// FUN_00e62c24 @ 00e62c24 size=320 calls_out=4 calls_in=0
// strings: event_typeInPauseResumePausePauseQuicklyPauseUltraQuicklyTargetSwitchOverheating

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00e62c24(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
    piVar3[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_20,*puVar4,
               "event_typeInPauseResumePausePauseQuicklyPauseUltraQuicklyTargetSwitchOverheating",10
              );
  if ((char)local_20 == '\x04') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
    piVar3[2] = iVar2 + 1;
    FUN_00e5d350(&local_20,*puVar4,param_2,param_3);
    if ((char)local_20 == '\x04') {
      return 0;
    }
  }
  uVar1 = FUN_0157c4a0(local_20,uStack_1c);
  return uVar1;
}

