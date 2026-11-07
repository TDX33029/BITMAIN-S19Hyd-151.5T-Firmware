// FUN_0127c4cc @ 0127c4cc size=220 calls_out=4 calls_in=0
// strings: Lazy instance has previously been poisoned

undefined4 FUN_0127c4cc(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_60 [72];
  
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar1 = *(code **)(iVar2 + 0x50);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  if (pcVar1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Lazy instance has previously been poisoned",0x55,&DAT_018ae384);
  }
  (*pcVar1)(auStack_60);
  puVar4 = (undefined4 *)param_1[1];
  piVar3 = (int *)*puVar4;
  iVar2 = piVar3[0xc];
  if (iVar2 != 2) {
    if (*piVar3 != -0x80000000) {
      FUN_0127c5e0(piVar3);
      if (*piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
      iVar2 = piVar3[0xc];
    }
    if (iVar2 != 0) {
      iVar2 = piVar3[0xf];
      puVar5 = (undefined4 *)piVar3[0x10];
      pcVar1 = (code *)*puVar5;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(iVar2);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(iVar2);
      }
    }
  }
  FUN_016dd1aa(*puVar4,auStack_60,0x48);
  return 1;
}

