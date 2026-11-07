// FUN_0147598c @ 0147598c size=356 calls_out=0 calls_in=3
// strings: 

void FUN_0147598c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  if (*(char *)(param_2 + 2) != '\x02') {
    uVar6 = param_2[1];
    uVar9 = param_2[2];
    uVar13 = param_2[3];
    uVar11 = param_2[4];
    uVar14 = param_2[5];
    uVar7 = param_2[6];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1[2] = uVar9;
    param_1[3] = uVar13;
    param_1[4] = uVar11;
    param_1[5] = uVar14;
    param_1[6] = uVar7;
    *(undefined1 *)((int)param_1 + 0x35) = 2;
    return;
  }
  piVar10 = (int *)*param_2;
  piVar12 = (int *)param_2[1];
  iVar4 = param_2[3];
  uVar1 = *(undefined1 *)((int)param_2 + 0x19);
  uVar2 = *(undefined1 *)(param_2 + 6);
  if (iVar4 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)(param_2[4] + 0xc))(iVar4);
  }
  piVar5 = (int *)param_2[5];
  do {
    iVar4 = *piVar5;
    bVar3 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar3);
  *piVar5 = iVar4 + 1;
  if (-1 < iVar4) {
    do {
      iVar4 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar8 = piVar12 + 0x21;
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = *piVar8 + 1;
      do {
        iVar4 = *piVar12;
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = iVar4 + 1;
      if (-1 < iVar4) {
        iVar4 = param_2[3];
        uVar9 = param_2[4];
        uVar6 = param_2[5];
        uVar14 = param_2[6];
        param_1[0xb] = (int)((ulonglong)uVar15 >> 0x20);
        *(undefined1 *)((int)param_1 + 0x35) = uVar1;
        *(undefined1 *)(param_1 + 0xd) = uVar2;
        param_1[10] = (int)uVar15;
        param_1[0xc] = piVar5;
        *(undefined1 *)(param_1 + 9) = 2;
        *(undefined1 *)(param_1 + 2) = 2;
        *param_1 = piVar10;
        param_1[1] = piVar12;
        param_1[3] = iVar4;
        param_1[4] = uVar9;
        param_1[5] = uVar6;
        param_1[6] = uVar14;
        param_1[7] = piVar10;
        param_1[8] = piVar12;
        return;
      }
    }
  }
  software_udf(0xfdee,0x1475aec);
  return;
}

