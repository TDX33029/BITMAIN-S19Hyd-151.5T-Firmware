// FUN_01aac4ec @ 01aac4ec size=428 calls_out=3 calls_in=2
// strings: 

void FUN_01aac4ec(int param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint local_30;
  int *local_2c;
  int local_28;
  
  if (param_1 == 0) {
    DataMemoryBarrier(0xb);
    puVar11 = DAT_01d50f84;
    if ((DAT_01d51af4 == 2) && (DAT_01d50f7c != 0)) {
      puVar10 = (undefined4 *)
                ((int)DAT_01d50f80 + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8);
    }
    else {
      puVar10 = DAT_01d50f80;
      if (DAT_01d51af4 != 2) {
        puVar10 = &DAT_005312da;
        puVar11 = &DAT_01d2e6fc;
      }
    }
    cVar6 = (**(code **)(puVar11 + 0x10))(puVar10,param_3);
    cVar1 = *param_4;
    cVar12 = cVar1;
    if (cVar1 != cVar6) {
      cVar12 = '\x01';
    }
    if (cVar1 == '\x03') {
      cVar12 = cVar6;
    }
    *param_4 = cVar12;
  }
  else {
    if (param_1 == 1) {
      iVar13 = 8;
      iVar7 = 4;
    }
    else {
      iVar13 = 0x14;
      iVar7 = 0x10;
    }
    iVar13 = *(int *)(param_2 + iVar13);
    if (iVar13 != 0) {
      iVar14 = *(int *)(param_2 + iVar7);
      iVar7 = 0;
      do {
        FUN_01aaaac0(&local_30,iVar14 + iVar7 * 0xc);
        iVar5 = local_28;
        piVar4 = local_2c;
        uVar3 = local_30;
        if (local_30 != 2) {
          piVar8 = local_2c;
          if ((local_30 & 1) != 0) {
            piVar8 = (int *)((int)local_2c + (*(int *)(local_28 + 8) - 1U & 0xfffffff8) + 8);
          }
          cVar6 = (**(code **)(local_28 + 0x10))(piVar8,param_3);
          cVar1 = *param_4;
          cVar12 = cVar1;
          if (cVar1 != cVar6) {
            cVar12 = '\x01';
          }
          if (cVar1 == '\x03') {
            cVar12 = cVar6;
          }
          *param_4 = cVar12;
          if (uVar3 != 0) {
            DataMemoryBarrier(0xb);
            do {
              iVar9 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar9 + -1;
            if (iVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(piVar4,iVar5);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar13);
    }
  }
  return;
}

