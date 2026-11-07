// FUN_0180edb4 @ 0180edb4 size=152 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0180edb4(undefined4 *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar5 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar2 = *(code **)(iVar5 + 8);
  *(undefined4 *)(iVar5 + 8) = 0;
  if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  uVar3 = (*pcVar2)();
  puVar7 = (undefined4 *)param_1[1];
  piVar4 = (int *)*puVar7;
  piVar6 = (int *)*piVar4;
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01783f14(*piVar4);
    }
  }
  *(undefined4 *)*puVar7 = uVar3;
  return 1;
}

