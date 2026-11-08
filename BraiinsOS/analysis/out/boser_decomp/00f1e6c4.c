// FUN_00f1e6c4 @ 00f1e6c4 size=488 calls_out=1 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f1e6c4(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar12 = (int *)param_2[0xc];
  do {
    iVar2 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar2 + 1;
  if (-1 < iVar2) {
    if (*param_2 == -0x80000000) {
      local_30 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_30,param_2[1],param_2[2]);
    }
    piVar13 = (int *)param_2[3];
    piVar3 = piVar13 + 0x26;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
    do {
      iVar2 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar2 + 1;
    if (-1 < iVar2) {
      piVar3 = (int *)param_2[4];
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + 1;
      if (-1 < iVar2) {
        piVar4 = (int *)param_2[5];
        piVar11 = piVar4 + 0x26;
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = *piVar11 + 1;
        do {
          iVar2 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar2 + 1;
        if (-1 < iVar2) {
          piVar11 = (int *)param_2[6];
          iVar2 = param_2[7];
          do {
            iVar5 = *piVar11;
            bVar1 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar1);
          *piVar11 = iVar5 + 1;
          if (-1 < iVar5) {
            piVar6 = piVar11 + 0x29;
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar1);
            *piVar6 = *piVar6 + 1;
            piVar6 = (int *)param_2[8];
            do {
              iVar5 = *piVar6;
              bVar1 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar1);
            *piVar6 = iVar5 + 1;
            if (-1 < iVar5) {
              piVar7 = (int *)param_2[9];
              piVar9 = piVar7 + 0x26;
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar1);
              *piVar9 = *piVar9 + 1;
              do {
                iVar5 = *piVar7;
                bVar1 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar1);
              *piVar7 = iVar5 + 1;
              if (-1 < iVar5) {
                puVar10 = (uint *)param_2[10];
                iVar5 = param_2[0xb];
                do {
                  uVar8 = *puVar10;
                  bVar1 = (bool)hasExclusiveAccess(puVar10);
                } while (!bVar1);
                *puVar10 = uVar8 + 1;
                if (uVar8 < 0x80000000) {
                  param_1[7] = iVar2;
                }
                if (-1 < (int)uVar8) {
                  param_1[4] = piVar3;
                  param_1[5] = piVar4;
                  param_1[6] = piVar11;
                  param_1[0xc] = piVar12;
                  param_1[9] = piVar7;
                  param_1[8] = piVar6;
                  param_1[3] = piVar13;
                  *param_1 = local_30;
                  param_1[1] = uStack_2c;
                  param_1[2] = uStack_28;
                  *(char *)(param_1 + 0xb) = (char)iVar5;
                  param_1[10] = puVar10;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0xf1e8a8);
  return;
}

