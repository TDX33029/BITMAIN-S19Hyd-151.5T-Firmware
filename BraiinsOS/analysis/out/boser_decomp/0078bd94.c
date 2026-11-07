// FUN_0078bd94 @ 0078bd94 size=316 calls_out=1 calls_in=3
// strings: 

void FUN_0078bd94(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  
  piVar4 = (int *)param_2[4];
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_0078becc;
  iVar5 = *param_2;
  puVar9 = (uint *)param_2[1];
  if (iVar5 == 0) {
    puVar7 = puVar9 + 0x28;
    do {
      uVar6 = *puVar7;
      bVar2 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar2);
    *puVar7 = uVar6 + 1;
LAB_0078be20:
    if ((int)uVar6 < 0) goto LAB_0078bec8;
  }
  else {
    if (iVar5 == 1) {
      puVar7 = puVar9 + 0x20;
      do {
        uVar6 = *puVar7;
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = uVar6 + 1;
      goto LAB_0078be20;
    }
    do {
      uVar6 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar6 + 1;
    if (0x7fffffff < uVar6) goto LAB_0078bec8;
  }
  iVar10 = param_2[2];
  piVar11 = (int *)param_2[3];
  if (iVar10 == 0) {
    piVar3 = piVar11 + 0x28;
    do {
      iVar8 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar8 + 1;
  }
  else if (iVar10 == 1) {
    piVar3 = piVar11 + 0x20;
    do {
      iVar8 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar8 + 1;
  }
  else {
    do {
      iVar8 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar8 + 1;
  }
  if (-1 < iVar8) {
    piVar3 = (int *)param_2[5];
    if (piVar3 != (int *)0x0) {
      do {
        iVar8 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_0078becc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x78becc);
        (*pcVar1)();
      }
    }
    *param_1 = iVar5;
    param_1[1] = (int)puVar9;
    param_1[2] = iVar10;
    param_1[3] = (int)piVar11;
    param_1[4] = (int)piVar4;
    param_1[5] = (int)piVar3;
    return;
  }
LAB_0078bec8:
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

