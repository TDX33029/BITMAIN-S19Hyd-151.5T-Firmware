// FUN_01a35774 @ 01a35774 size=368 calls_out=0 calls_in=13
// strings: 

void FUN_01a35774(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  
  piVar8 = (int *)*param_2;
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar13 = (int *)param_2[1];
    do {
      iVar3 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar10 = (int *)param_2[2];
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (-1 < iVar3) {
        piVar11 = (int *)param_2[3];
        do {
          iVar3 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar3 + 1;
        if (-1 < iVar3) {
          piVar12 = (int *)param_2[4];
          do {
            iVar3 = *piVar12;
            bVar2 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar2);
          *piVar12 = iVar3 + 1;
          if (-1 < iVar3) {
            piVar4 = (int *)param_2[5];
            do {
              iVar3 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar3 + 1;
            if (-1 < iVar3) {
              piVar5 = (int *)param_2[6];
              do {
                iVar3 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = iVar3 + 1;
              if (-1 < iVar3) {
                piVar6 = (int *)param_2[7];
                do {
                  iVar3 = *piVar6;
                  bVar2 = (bool)hasExclusiveAccess(piVar6);
                } while (!bVar2);
                *piVar6 = iVar3 + 1;
                if (-1 < iVar3) {
                  piVar7 = (int *)param_2[8];
                  do {
                    iVar3 = *piVar7;
                    bVar2 = (bool)hasExclusiveAccess(piVar7);
                  } while (!bVar2);
                  *piVar7 = iVar3 + 1;
                  if (-1 < iVar3) {
                    piVar9 = (int *)param_2[9];
                    if (piVar9 != (int *)0x0) {
                      do {
                        iVar3 = *piVar9;
                        bVar2 = (bool)hasExclusiveAccess(piVar9);
                      } while (!bVar2);
                      *piVar9 = iVar3 + 1;
                      if (iVar3 < 0) goto LAB_01a358e0;
                    }
                    param_1[8] = piVar7;
                    param_1[9] = piVar9;
                    *param_1 = piVar8;
                    param_1[1] = piVar13;
                    param_1[2] = piVar10;
                    param_1[3] = piVar11;
                    param_1[4] = piVar12;
                    param_1[5] = piVar4;
                    param_1[6] = piVar5;
                    param_1[7] = piVar6;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01a358e0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a358e0);
  (*pcVar1)();
}

