// FUN_01aba450 @ 01aba450 size=404 calls_out=4 calls_in=1
// strings: 

void FUN_01aba450(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar4 = DAT_01d51af4;
  piVar2 = param_1 + 2;
  if (*piVar2 != 0 || param_1[3] != 0) {
    DataMemoryBarrier(0xb);
    puVar5 = (undefined4 *)&UNK_01d2ee94;
    if (DAT_01d51af4 == 2) {
      puVar5 = &DAT_01d50f7c;
    }
    uVar11 = DAT_01d51af4 == 2 & DAT_01d50f7c;
    if (uVar11 == 1) {
      piVar6 = (int *)puVar5[1];
      do {
        iVar8 = *piVar6;
        bVar12 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar12);
      *piVar6 = iVar8 + 1;
      puVar9 = DAT_01d50f84;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1aba5e0);
        (*pcVar1)();
      }
      *piVar2 = 0;
      param_1[3] = 0;
      if (iVar4 != 2) {
        puVar9 = &DAT_01d2e6fc;
      }
      piVar3 = (int *)((int)piVar6 + (*(int *)(puVar9 + 8) - 1U & 0xfffffff8) + 8);
    }
    else {
      piVar3 = (int *)puVar5[1];
      bVar12 = DAT_01d51af4 != 2;
      *piVar2 = 0;
      param_1[3] = 0;
      piVar6 = piVar3;
      puVar9 = DAT_01d50f84;
      if (bVar12) {
        puVar9 = &DAT_01d2e6fc;
      }
    }
    (**(code **)(puVar9 + 0x40))(piVar3);
    if (uVar11 != 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar12 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar12);
      *piVar6 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(piVar6,puVar9);
      }
    }
  }
  if (param_1[0xb] != 0) {
    uVar7 = param_1[8];
    FUN_01aae298(uVar7);
    uVar10 = param_1[9];
    uVar11 = 0;
    if (uVar10 != 0) {
      FUN_01bed93e(uVar7,0xff,uVar10 + 5);
      uVar11 = uVar10;
      if (7 < uVar10) {
        uVar11 = (uVar10 + 1 & 0xfffffff8) - (uVar10 + 1 >> 3);
      }
    }
    param_1[10] = uVar11;
    param_1[0xb] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

