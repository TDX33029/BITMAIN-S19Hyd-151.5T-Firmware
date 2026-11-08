// FUN_0130fe98 @ 0130fe98 size=140 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0130fe98(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar3 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar2 = *(code **)(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar2)(&local_20);
  puVar4 = (undefined4 *)param_1[1];
  piVar1 = (int *)*puVar4;
  if (*piVar1 != 0) {
    FUN_0130f9ac(piVar1 + 1);
    piVar1 = (int *)*puVar4;
  }
  *piVar1 = 1;
  piVar1[1] = local_20;
  piVar1[2] = iStack_1c;
  piVar1[3] = iStack_18;
  return 1;
}

