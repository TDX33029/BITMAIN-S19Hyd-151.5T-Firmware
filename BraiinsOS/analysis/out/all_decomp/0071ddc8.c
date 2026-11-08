// FUN_0071ddc8 @ 0071ddc8 size=660 calls_out=3 calls_in=4
// strings: 

void FUN_0071ddc8(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_a8 [132];
  
  piVar3 = (int *)param_2[4];
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0071e058;
  iVar6 = *param_2;
  puVar17 = (uint *)param_2[1];
  if (iVar6 == 0) {
    puVar15 = puVar17 + 0x28;
    do {
      uVar9 = *puVar15;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar9 + 1;
LAB_0071de64:
    if ((int)uVar9 < 0) goto LAB_0071debc;
  }
  else {
    if (iVar6 == 1) {
      puVar15 = puVar17 + 0x20;
      do {
        uVar9 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar9 + 1;
      goto LAB_0071de64;
    }
    do {
      uVar9 = *puVar17;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar9 + 1;
    if (0x7fffffff < uVar9) goto LAB_0071debc;
  }
  iVar19 = param_2[2];
  puVar15 = (uint *)param_2[3];
  if (iVar19 == 0) {
    puVar7 = puVar15 + 0x28;
    do {
      uVar9 = *puVar7;
      bVar2 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar2);
    *puVar7 = uVar9 + 1;
LAB_0071ded8:
    if ((int)uVar9 < 0) {
LAB_0071debc:
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
  }
  else {
    if (iVar19 == 1) {
      puVar7 = puVar15 + 0x20;
      do {
        uVar9 = *puVar7;
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = uVar9 + 1;
      goto LAB_0071ded8;
    }
    do {
      uVar9 = *puVar15;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar9 + 1;
    if (0x7fffffff < uVar9) goto LAB_0071debc;
  }
  piVar8 = (int *)param_2[5];
  if (piVar8 != (int *)0x0) {
    do {
      iVar10 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_0071e058;
  }
  piVar12 = (int *)param_2[6];
  do {
    iVar10 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar10 + 1;
  if (-1 < iVar10) {
    piVar11 = (int *)param_2[7];
    do {
      iVar10 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar10 + 1;
    if (-1 < iVar10) {
      piVar14 = (int *)param_2[0x28];
      do {
        iVar10 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar10 + 1;
      if (-1 < iVar10) {
        iVar10 = param_2[0x29];
        piVar18 = (int *)param_2[0x2a];
        do {
          iVar4 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar4 + 1;
        if (-1 < iVar4) {
          iVar4 = param_2[0x2b];
          FUN_006b3c20(auStack_a8,param_2 + 8);
          piVar16 = (int *)param_2[0x2c];
          do {
            iVar5 = *piVar16;
            bVar2 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar2);
          *piVar16 = iVar5 + 1;
          if (-1 < iVar5) {
            piVar13 = (int *)param_2[0x2d];
            do {
              iVar5 = *piVar13;
              bVar2 = (bool)hasExclusiveAccess(piVar13);
            } while (!bVar2);
            *piVar13 = iVar5 + 1;
            if (-1 < iVar5) {
              FUN_016dd1aa(param_1 + 8,auStack_a8,0x80);
              iVar20 = param_2[0x2e];
              iVar5 = param_2[0x30];
              *param_1 = iVar6;
              param_1[1] = (int)puVar17;
              param_1[2] = iVar19;
              param_1[3] = (int)puVar15;
              param_1[4] = (int)piVar3;
              param_1[5] = (int)piVar8;
              param_1[6] = (int)piVar12;
              param_1[7] = (int)piVar11;
              *(char *)(param_1 + 0x30) = (char)iVar5;
              param_1[0x28] = (int)piVar14;
              param_1[0x29] = iVar10;
              param_1[0x2a] = (int)piVar18;
              param_1[0x2b] = iVar4;
              param_1[0x2c] = (int)piVar16;
              param_1[0x2d] = (int)piVar13;
              param_1[0x2e] = iVar20;
              return;
            }
          }
        }
      }
    }
  }
LAB_0071e058:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x71e058);
  (*pcVar1)();
}

