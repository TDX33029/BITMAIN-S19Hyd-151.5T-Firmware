// FUN_00a066d8 @ 00a066d8 size=456 calls_out=4 calls_in=4
// strings: 

void FUN_00a066d8(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (uVar8 == 0) {
    local_40 = *param_2;
    uStack_3c = param_2[1];
    uStack_38 = param_2[2];
    uVar2 = 0;
    local_34 = param_2[3];
    uStack_30 = param_2[4];
    uStack_2c = param_2[5];
    uStack_28 = param_2[6];
    if (param_1[1] == 0) goto LAB_00a0680c;
  }
  else {
    uVar2 = 0;
    if (uVar8 != 1) {
      uVar4 = uVar8;
      uVar6 = 0;
      do {
        uVar2 = uVar6 + (uVar4 >> 1);
        cVar1 = FUN_016a0370(uVar7 + uVar2 * 0x1c,param_2);
        if (cVar1 == '\x01') {
          uVar2 = uVar6;
        }
        uVar4 = uVar4 - (uVar4 >> 1);
        uVar6 = uVar2;
      } while (1 < uVar4);
    }
    puVar5 = (uint *)(uVar7 + uVar2 * 0x1c);
    cVar1 = FUN_016a0370(puVar5,param_2);
    if (cVar1 == '\0') {
      if ((puVar5[4] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar5[5]);
      }
      uVar7 = puVar5[2];
      puVar3 = (undefined4 *)(uVar7 + 4);
      for (uVar8 = puVar5[3]; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (puVar3[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar3);
        }
        puVar3 = puVar3 + 3;
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      *puVar5 = *param_2;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar2 = param_2[6];
      puVar5[3] = param_2[3];
      puVar5[4] = uVar7;
      puVar5[5] = uVar8;
      puVar5[6] = uVar2;
      return;
    }
    local_40 = *param_2;
    uStack_3c = param_2[1];
    uStack_38 = param_2[2];
    if (cVar1 == -1) {
      uVar2 = uVar2 + 1;
    }
    local_34 = param_2[3];
    uStack_30 = param_2[4];
    uStack_2c = param_2[5];
    uStack_28 = param_2[6];
    if (uVar8 == param_1[1]) {
LAB_00a0680c:
      FUN_016a82f4();
      puVar5 = (uint *)(param_1[2] + uVar2 * 0x1c);
      goto joined_r0x00a067a4;
    }
  }
  puVar5 = (uint *)(uVar7 + uVar2 * 0x1c);
joined_r0x00a067a4:
  if (uVar2 < uVar8) {
    FUN_016dd52c(puVar5 + 7,puVar5,(uVar8 - uVar2) * 0x1c);
  }
  *puVar5 = local_40;
  puVar5[1] = uStack_3c;
  puVar5[2] = uStack_38;
  puVar5[3] = local_34;
  puVar5[4] = uStack_30;
  puVar5[5] = uStack_2c;
  puVar5[6] = uStack_28;
  param_1[3] = uVar8 + 1;
  return;
}

