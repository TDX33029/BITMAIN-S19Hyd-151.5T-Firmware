// FUN_01aaa77c @ 01aaa77c size=316 calls_out=2 calls_in=12
// strings: 

void FUN_01aaa77c(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  DataMemoryBarrier(0xb);
  puVar4 = (undefined4 *)&UNK_01d2ee94;
  if (DAT_01d51af4 == 2) {
    puVar4 = &DAT_01d50f7c;
  }
  uVar9 = DAT_01d51af4 == 2 & DAT_01d50f7c;
  puVar8 = DAT_01d50f84;
  if (uVar9 == 1) {
    puVar5 = (uint *)((int)puVar4[1] + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8);
    puVar7 = (uint *)puVar4[1];
  }
  else {
    puVar5 = (uint *)puVar4[1];
    if (DAT_01d51af4 != 2) {
      puVar8 = &DAT_01d2e6fc;
    }
    puVar7 = puVar5;
  }
  (**(code **)(puVar8 + 0x44))(&local_28,puVar5);
  uVar3 = local_24;
  if (local_28 == 0) {
    local_28 = local_20;
    local_24 = local_1c;
    if (uVar9 == 0) {
      uVar10 = (**(code **)(puVar8 + 0x38))(puVar7,&local_28);
      uVar6 = 0;
    }
    else {
      uVar10 = (**(code **)(puVar8 + 0x38))
                         ((int)puVar7 + (*(int *)(puVar8 + 8) - 1U & 0xfffffff8) + 8,&local_28);
      do {
        uVar9 = *puVar7;
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = uVar9 + 1;
      uVar6 = 1;
      if (0x7fffffff < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1aaa890);
        (*pcVar1)();
      }
    }
    *(undefined4 *)(param_1 + 3) = uVar3;
    *param_1 = uVar10;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(uint **)((int)param_1 + 0xc) = puVar7;
    *(undefined **)(param_1 + 2) = puVar8;
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 1) = 2;
  }
  return;
}

