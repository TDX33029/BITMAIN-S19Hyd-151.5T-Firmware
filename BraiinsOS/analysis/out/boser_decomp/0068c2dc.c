// FUN_0068c2dc @ 0068c2dc size=328 calls_out=0 calls_in=4
// strings: 

void FUN_0068c2dc(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  
  piVar12 = (int *)*param_2;
  piVar10 = piVar12 + 0x26;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = *piVar10 + 1;
  do {
    iVar3 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar10 = (int *)param_2[2];
    do {
      iVar3 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar3 + 1;
    if (-1 < iVar3) {
      uVar11 = piVar10[0x28];
      piVar4 = piVar10 + 0x29;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
      piVar4 = (int *)param_2[3];
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + 1;
      if (-1 < iVar3) {
        piVar6 = (int *)param_2[4];
        piVar7 = piVar6 + 0x26;
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = *piVar7 + 1;
        do {
          iVar3 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3 + 1;
        if (-1 < iVar3) {
          piVar7 = (int *)param_2[5];
          do {
            iVar3 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = iVar3 + 1;
          if (-1 < iVar3) {
            puVar2 = (uint *)param_2[6];
            puVar8 = puVar2 + 0x26;
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar8);
            } while (!bVar1);
            *puVar8 = *puVar8 + 1;
            do {
              uVar9 = *puVar2;
              uVar5 = uVar9 + 1;
              bVar1 = (bool)hasExclusiveAccess(puVar2);
            } while (!bVar1);
            *puVar2 = uVar5;
            if (uVar9 < 0x80000000) {
              uVar5 = uVar11 & 0xfffffffe;
              *param_1 = piVar12;
            }
            if (-1 < (int)uVar9) {
              param_1[1] = piVar4;
              param_1[2] = piVar6;
              param_1[3] = piVar10;
              param_1[4] = uVar5;
              param_1[5] = piVar7;
              param_1[6] = puVar2;
              return;
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0x68c420);
  return;
}

