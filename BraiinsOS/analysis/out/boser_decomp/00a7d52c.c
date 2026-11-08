// FUN_00a7d52c @ 00a7d52c size=320 calls_out=0 calls_in=3
// strings: 

void FUN_00a7d52c(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  
  if (*(char *)(param_2 + 2) != '\x02') {
    uVar10 = param_2[1];
    uVar12 = param_2[2];
    uVar7 = param_2[3];
    uVar14 = param_2[4];
    uVar11 = param_2[5];
    uVar13 = param_2[6];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1[2] = uVar12;
    param_1[3] = uVar7;
    param_1[4] = uVar14;
    param_1[5] = uVar11;
    param_1[6] = uVar13;
    *(undefined1 *)((int)param_1 + 0x35) = 2;
    return;
  }
  piVar15 = (int *)*param_2;
  piVar16 = (int *)param_2[1];
  uVar2 = *(undefined1 *)((int)param_2 + 0x19);
  uVar3 = *(undefined1 *)(param_2 + 6);
  if (param_2[3] == 0) {
    uVar7 = 0;
    puVar5 = param_2;
  }
  else {
    uVar17 = (**(code **)(param_2[4] + 0xc))();
    uVar7 = (undefined4)uVar17;
    puVar5 = (undefined4 *)((ulonglong)uVar17 >> 0x20);
  }
  piVar6 = (int *)param_2[5];
  do {
    iVar8 = *piVar6;
    bVar4 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar4);
  *piVar6 = iVar8 + 1;
  if (-1 < iVar8) {
    do {
      iVar8 = *piVar15;
      bVar4 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar4);
    *piVar15 = iVar8 + 1;
    if (-1 < iVar8) {
      piVar9 = piVar16 + 0x21;
      do {
        bVar4 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar4);
      *piVar9 = *piVar9 + 1;
      do {
        iVar8 = *piVar16;
        bVar4 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar4);
      *piVar16 = iVar8 + 1;
      if (-1 < iVar8) {
        *(undefined1 *)((int)param_1 + 0x35) = uVar2;
        param_1[10] = uVar7;
        param_1[0xb] = puVar5;
        param_1[0xc] = piVar6;
        *(undefined1 *)(param_1 + 0xd) = uVar3;
        uVar7 = param_2[4];
        uVar10 = param_2[5];
        uVar14 = param_2[6];
        param_1[3] = param_2[3];
        param_1[4] = uVar7;
        param_1[5] = uVar10;
        param_1[6] = uVar14;
        *(undefined1 *)(param_1 + 9) = 2;
        param_1[7] = piVar15;
        param_1[8] = piVar16;
        *(undefined1 *)(param_1 + 2) = 2;
        *param_1 = piVar15;
        param_1[1] = piVar16;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xa7d668);
  (*pcVar1)();
}

