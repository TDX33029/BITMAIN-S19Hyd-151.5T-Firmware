// FUN_01551c20 @ 01551c20 size=204 calls_out=3 calls_in=0
// strings: 

void FUN_01551c20(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int *piVar10;
  
  param_1 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)*param_1;
  piVar10 = (int *)param_1[1];
  *param_1 = 0;
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  iVar2 = FUN_01785780(*puVar8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004a5bf1,0x1d,&DAT_01cfb884);
  }
  piVar3 = (int *)puVar8[1];
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar5 = (int *)puVar8[4];
    iVar4 = puVar8[2];
    if (piVar5 != (int *)0x0) {
      do {
        iVar6 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01551cc4;
    }
    puVar9 = (uint *)puVar8[3];
    do {
      uVar7 = *puVar9;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = uVar7 + 1;
    if (uVar7 < 0x80000000) {
      *piVar10 = iVar2;
      piVar10[1] = (int)piVar3;
      piVar10[2] = iVar4;
      piVar10[3] = (int)puVar9;
    }
    if (-1 < (int)uVar7) {
      piVar10[4] = (int)piVar5;
      return;
    }
  }
LAB_01551cc4:
  software_udf(0xfdee,0x1551cc4);
  return;
}

