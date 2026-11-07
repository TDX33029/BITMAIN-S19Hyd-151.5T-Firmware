// FUN_01016298 @ 01016298 size=400 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01016298(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 local_1c;
  
  piVar11 = (int *)*param_1;
  piVar12 = piVar11 + 0x26;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = *piVar12 + 1;
  do {
    iVar4 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar12 = (int *)param_1[1];
    do {
      iVar4 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar6 = (int *)param_1[2];
      piVar7 = piVar6 + 0x26;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = *piVar7 + 1;
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + 1;
      if (-1 < iVar4) {
        piVar7 = (int *)param_1[3];
        uVar10 = param_1[4];
        do {
          iVar4 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar4 + 1;
        if (-1 < iVar4) {
          piVar8 = piVar7 + 0x29;
          do {
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = *piVar8 + 1;
          piVar8 = (int *)param_1[5];
          do {
            iVar4 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar4 + 1;
          if (-1 < iVar4) {
            piVar9 = (int *)param_1[6];
            piVar5 = piVar9 + 0x26;
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar2);
            *piVar5 = *piVar5 + 1;
            do {
              iVar4 = *piVar9;
              bVar2 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar2);
            *piVar9 = iVar4 + 1;
            if (-1 < iVar4) {
              local_1c = CONCAT31(local_1c._1_3_,*(undefined1 *)(param_1 + 7));
              puVar3 = (undefined4 *)thunk_FUN_01be5118(0x20);
              if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x20);
              }
              *puVar3 = piVar11;
              puVar3[1] = piVar12;
              puVar3[2] = piVar6;
              puVar3[3] = piVar7;
              puVar3[4] = uVar10;
              puVar3[5] = piVar8;
              puVar3[6] = piVar9;
              puVar3[7] = local_1c;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1016424);
  (*pcVar1)();
}

