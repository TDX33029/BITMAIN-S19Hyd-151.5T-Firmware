// FUN_01aac154 @ 01aac154 size=200 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01aac154(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar1 = *(code **)(iVar2 + 0x20);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (pcVar1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar1)(&local_38);
  puVar4 = (undefined4 *)param_1[1];
  piVar3 = (int *)*puVar4;
  if (*piVar3 != 0) {
    iVar2 = piVar3[5];
    iVar5 = piVar3[6];
    if (iVar5 != 0) {
      iVar2 = iVar2 + 4;
      do {
        if (*(int *)(iVar2 + -4) != 0) {
          FUN_01aac480(iVar2);
        }
        iVar2 = iVar2 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar2 = piVar3[5];
    }
    FUN_0134aee0(piVar3[4],iVar2,4,0xc);
    piVar3 = (int *)*puVar4;
  }
  *piVar3 = 1;
  piVar3[1] = local_38;
  piVar3[2] = iStack_34;
  piVar3[3] = iStack_30;
  piVar3[4] = iStack_2c;
  piVar3[5] = iStack_28;
  piVar3[6] = iStack_24;
  return 1;
}

