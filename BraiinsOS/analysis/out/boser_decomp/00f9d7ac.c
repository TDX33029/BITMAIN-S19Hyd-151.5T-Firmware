// FUN_00f9d7ac @ 00f9d7ac size=316 calls_out=0 calls_in=1
// strings: 

void FUN_00f9d7ac(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  
  piVar3 = *(int **)(param_2 + 0x210);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar15 = *(int **)(param_2 + 0x218);
    do {
      iVar4 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar10 = *(int **)(param_2 + 0x21c);
      do {
        iVar4 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = iVar4 + 1;
      if (-1 < iVar4) {
        piVar11 = *(int **)(param_2 + 0x220);
        do {
          iVar4 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = iVar4 + 1;
        if (-1 < iVar4) {
          piVar12 = *(int **)(param_2 + 0x214);
          do {
            iVar4 = *piVar12;
            bVar1 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar1);
          *piVar12 = iVar4 + 1;
          if (-1 < iVar4) {
            piVar13 = *(int **)(param_2 + 0x22c);
            do {
              iVar4 = *piVar13;
              bVar1 = (bool)hasExclusiveAccess(piVar13);
            } while (!bVar1);
            *piVar13 = iVar4 + 1;
            if (-1 < iVar4) {
              piVar14 = *(int **)(param_2 + 0x230);
              do {
                iVar4 = *piVar14;
                bVar1 = (bool)hasExclusiveAccess(piVar14);
              } while (!bVar1);
              *piVar14 = iVar4 + 1;
              if (-1 < iVar4) {
                puVar2 = *(undefined4 **)(param_2 + 0x238);
                do {
                  puVar5 = (undefined4 *)*puVar2;
                  bVar1 = (bool)hasExclusiveAccess(puVar2);
                } while (!bVar1);
                *puVar2 = (undefined1 *)((int)puVar5 + 1);
                puVar6 = puVar5;
                if (puVar5 < &DAT_80000000) {
                  param_1[4] = piVar3;
                  puVar6 = param_1;
                }
                if (-1 < (int)puVar5) {
                  uVar7 = param_3[1];
                  uVar8 = param_3[2];
                  uVar9 = param_3[3];
                  *puVar6 = *param_3;
                  puVar6[1] = uVar7;
                  puVar6[2] = uVar8;
                  puVar6[3] = uVar9;
                  param_1[0xb] = puVar2;
                  param_1[6] = piVar10;
                  param_1[7] = piVar11;
                  param_1[8] = piVar12;
                  param_1[9] = piVar13;
                  param_1[10] = piVar14;
                  param_1[5] = piVar15;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0xf9d8e4);
  return;
}

