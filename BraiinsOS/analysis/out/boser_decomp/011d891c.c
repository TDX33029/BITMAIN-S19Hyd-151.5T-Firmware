// FUN_011d891c @ 011d891c size=432 calls_out=3 calls_in=6
// strings: 

undefined8 FUN_011d891c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 local_24;
  
  piVar11 = (int *)*param_3;
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
    piVar12 = (int *)param_3[1];
    do {
      iVar4 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar10 = (int *)param_3[2];
      piVar7 = piVar10 + 0x26;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = *piVar7 + 1;
      do {
        iVar4 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar4 + 1;
      if (-1 < iVar4) {
        piVar7 = (int *)param_3[3];
        uVar9 = param_3[4];
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
          piVar8 = (int *)param_3[5];
          do {
            iVar4 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar4 + 1;
          if (-1 < iVar4) {
            piVar6 = (int *)param_3[6];
            piVar5 = piVar6 + 0x26;
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar2);
            *piVar5 = *piVar5 + 1;
            do {
              iVar4 = *piVar6;
              bVar2 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar2);
            *piVar6 = iVar4 + 1;
            if (-1 < iVar4) {
              local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(param_3 + 7));
              puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
              if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x28);
              }
              *puVar3 = piVar11;
              puVar3[1] = piVar12;
              puVar3[2] = piVar10;
              puVar3[3] = piVar7;
              puVar3[4] = uVar9;
              puVar3[5] = piVar8;
              puVar3[6] = piVar6;
              puVar3[7] = param_1;
              puVar3[8] = param_2;
              puVar3[9] = local_24;
              FUN_006763fc(param_3);
              return CONCAT44(&DAT_01c1c408,puVar3);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11d8ac8);
  (*pcVar1)();
}

