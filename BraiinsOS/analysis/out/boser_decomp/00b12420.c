// FUN_00b12420 @ 00b12420 size=152 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00b12420(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar1 = *(code **)(iVar2 + 0x30);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  if (pcVar1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar1)(&local_38);
  puVar4 = (undefined4 *)param_1[1];
  piVar3 = (int *)*puVar4;
  if (*piVar3 != 0) {
    FUN_01961a9c(*piVar3,piVar3[1]);
    FUN_01961a9c(piVar3[2],piVar3[3]);
    piVar3 = (int *)*puVar4;
  }
  *piVar3 = local_38;
  piVar3[1] = iStack_34;
  piVar3[2] = iStack_30;
  piVar3[3] = iStack_2c;
  piVar3[4] = iStack_28;
  piVar3[5] = local_24;
  piVar3[6] = iStack_20;
  piVar3[7] = iStack_1c;
  piVar3[8] = iStack_18;
  piVar3[9] = iStack_14;
  return 1;
}

