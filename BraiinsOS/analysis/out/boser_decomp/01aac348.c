// FUN_01aac348 @ 01aac348 size=148 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01aac348(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar3 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar2 = *(code **)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar2)(&local_28);
  puVar4 = (undefined4 *)param_1[1];
  piVar1 = (int *)*puVar4;
  if (*piVar1 != 0) {
    FUN_0134aee0(piVar1[3],piVar1[4],4,8);
    piVar1 = (int *)*puVar4;
  }
  *piVar1 = 1;
  piVar1[1] = local_28;
  piVar1[2] = iStack_24;
  piVar1[3] = iStack_20;
  piVar1[4] = iStack_1c;
  piVar1[5] = iStack_18;
  return 1;
}

