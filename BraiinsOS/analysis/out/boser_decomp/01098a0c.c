// FUN_01098a0c @ 01098a0c size=404 calls_out=1 calls_in=2
// strings: 

void FUN_01098a0c(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 local_30 [3];
  
  piVar12 = (int *)param_2[3];
  do {
    iVar3 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar3 + 1;
  if (-1 < iVar3) {
    FUN_015e8ad4(local_30,param_2[1],param_2[2]);
    piVar15 = (int *)param_2[4];
    do {
      iVar3 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar14 = (int *)param_2[5];
      do {
        iVar3 = *piVar14;
        bVar1 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar1);
      *piVar14 = iVar3 + 1;
      if (-1 < iVar3) {
        piVar13 = (int *)param_2[6];
        do {
          iVar3 = *piVar13;
          bVar1 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar1);
        *piVar13 = iVar3 + 1;
        if (-1 < iVar3) {
          piVar5 = (int *)param_2[7];
          do {
            iVar3 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar3 + 1;
          if (-1 < iVar3) {
            piVar11 = (int *)param_2[8];
            puVar4 = (undefined4 *)param_2[9];
            do {
              iVar3 = *piVar11;
              bVar1 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar1);
            *piVar11 = iVar3 + 1;
            if (-1 < iVar3) {
              piVar10 = piVar11 + 0x2b;
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar10);
              } while (!bVar1);
              *piVar10 = *piVar10 + 1;
              piVar10 = (int *)param_2[10];
              do {
                iVar3 = *piVar10;
                bVar1 = (bool)hasExclusiveAccess(piVar10);
              } while (!bVar1);
              *piVar10 = iVar3 + 1;
              if (-1 < iVar3) {
                puVar9 = (uint *)param_2[0xb];
                do {
                  uVar7 = *puVar9;
                  bVar1 = (bool)hasExclusiveAccess(puVar9);
                } while (!bVar1);
                *puVar9 = uVar7 + 1;
                puVar2 = puVar4;
                if (uVar7 < 0x80000000) {
                  param_2 = param_1;
                  puVar2 = local_30;
                }
                if (-1 < (int)uVar7) {
                  param_1[3] = piVar12;
                  uVar6 = puVar2[1];
                  uVar8 = puVar2[2];
                  *param_1 = *puVar2;
                  param_1[1] = uVar6;
                  param_1[2] = uVar8;
                  param_2[0xb] = puVar9;
                  param_2[10] = piVar10;
                  param_2[9] = puVar4;
                  param_2[8] = piVar11;
                  param_2[7] = piVar5;
                  param_2[6] = piVar13;
                  param_2[5] = piVar14;
                  param_2[4] = piVar15;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0x1098b9c);
  return;
}

