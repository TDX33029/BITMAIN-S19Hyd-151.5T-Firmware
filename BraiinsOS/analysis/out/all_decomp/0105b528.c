// FUN_0105b528 @ 0105b528 size=180 calls_out=3 calls_in=0
// strings: Lazy instance has previously been poisoned

undefined4 FUN_0105b528(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [72];
  
  puVar5 = (undefined4 *)param_1[1];
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar4 = *(code **)(iVar2 + 0x48);
  *(undefined4 *)(iVar2 + 0x48) = 0;
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Lazy instance has previously been poisoned",0x55,&DAT_018ae384);
  }
  (*pcVar4)(auStack_58);
  psVar3 = (short *)*puVar5;
  sVar1 = *psVar3;
  if (sVar1 != 2) {
    iVar2 = 0;
    if (sVar1 != 0) {
      iVar2 = *(int *)(psVar3 + 2);
    }
    if (sVar1 != 0 && iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(psVar3 + 4));
    }
    iVar2 = 0;
    if (psVar3[0x12] != 0) {
      iVar2 = *(int *)(psVar3 + 0x14);
    }
    if (psVar3[0x12] != 0 && iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(psVar3 + 0x16));
    }
    psVar3 = (short *)*puVar5;
  }
  FUN_016dd1aa(psVar3,auStack_58,0x44);
  return 1;
}

