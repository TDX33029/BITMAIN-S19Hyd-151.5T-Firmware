// FUN_00748610 @ 00748610 size=120 calls_out=3 calls_in=0
// strings: Lazy instance has previously been poisoned

undefined4 FUN_00748610(undefined4 *param_1)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_b0 [160];
  
  puVar4 = (undefined4 *)param_1[1];
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar3 = *(code **)(iVar1 + 0xa0);
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Lazy instance has previously been poisoned",0x55,&DAT_018ae384);
  }
  (*pcVar3)(auStack_b0);
  psVar2 = (short *)*puVar4;
  if (*psVar2 != 0x1b) {
    FUN_00728ed0();
    psVar2 = (short *)*puVar4;
  }
  FUN_016dd1aa(psVar2,auStack_b0,0x9c);
  return 1;
}

