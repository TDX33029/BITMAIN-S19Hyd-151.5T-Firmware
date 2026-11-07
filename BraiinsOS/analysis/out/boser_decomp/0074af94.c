// FUN_0074af94 @ 0074af94 size=384 calls_out=3 calls_in=4
// strings: 

void FUN_0074af94(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  FUN_0078bd94(&local_a8);
  piVar13 = *(int **)(param_2 + 0x18);
  do {
    iVar5 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = iVar5 + 1;
  if (-1 < iVar5) {
    piVar6 = *(int **)(param_2 + 0x1c);
    do {
      iVar5 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar8 = *(int **)(param_2 + 0xa0);
      do {
        iVar5 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar5 + 1;
      if (-1 < iVar5) {
        uVar7 = *(undefined4 *)(param_2 + 0xa4);
        piVar11 = *(int **)(param_2 + 0xa8);
        do {
          iVar5 = *piVar11;
          bVar3 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar3);
        *piVar11 = iVar5 + 1;
        if (-1 < iVar5) {
          uVar4 = *(undefined4 *)(param_2 + 0xac);
          FUN_0074ad08(&local_a8,param_2 + 0x20);
          piVar9 = *(int **)(param_2 + 0xb0);
          do {
            iVar5 = *piVar9;
            bVar3 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar3);
          *piVar9 = iVar5 + 1;
          if (-1 < iVar5) {
            piVar10 = *(int **)(param_2 + 0xb4);
            do {
              iVar5 = *piVar10;
              bVar3 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar3);
            *piVar10 = iVar5 + 1;
            if (-1 < iVar5) {
              FUN_01bed4e2(param_1 + 8,&local_a8,0x80);
              uVar12 = *(undefined4 *)(param_2 + 0xb8);
              uVar2 = *(undefined1 *)(param_2 + 0xc0);
              *param_1 = local_a8;
              param_1[1] = uStack_a4;
              param_1[2] = uStack_a0;
              param_1[3] = uStack_9c;
              param_1[4] = uStack_98;
              param_1[5] = uStack_94;
              param_1[6] = piVar13;
              param_1[7] = piVar6;
              param_1[0x29] = uVar7;
              *(undefined1 *)(param_1 + 0x30) = uVar2;
              param_1[0x28] = piVar8;
              param_1[0x2a] = piVar11;
              param_1[0x2b] = uVar4;
              param_1[0x2c] = piVar9;
              param_1[0x2d] = piVar10;
              param_1[0x2e] = uVar12;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x74b110);
  (*pcVar1)();
}

