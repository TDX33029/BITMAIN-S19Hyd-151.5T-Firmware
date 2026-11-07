// FUN_0169c064 @ 0169c064 size=140 calls_out=2 calls_in=0
// strings: Lazy instance has previously been poisoned

undefined4 FUN_0169c064(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  puVar4 = (undefined4 *)param_1[1];
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar3 = *(code **)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Lazy instance has previously been poisoned",0x55,&DAT_018ae384);
  }
  (*pcVar3)(&local_28);
  piVar2 = (int *)*puVar4;
  iVar1 = 0;
  if (*piVar2 != 0) {
    iVar1 = piVar2[3];
  }
  if (*piVar2 != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(piVar2[4]);
    piVar2 = (int *)*puVar4;
  }
  *piVar2 = 1;
  piVar2[1] = local_28;
  piVar2[2] = iStack_24;
  piVar2[3] = iStack_20;
  piVar2[4] = iStack_1c;
  piVar2[5] = iStack_18;
  return 1;
}

