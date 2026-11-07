// FUN_0169ffa0 @ 0169ffa0 size=372 calls_out=4 calls_in=2
// strings: 

void FUN_0169ffa0(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (uVar7 == 0) {
    local_50 = *param_2;
    uStack_4c = param_2[1];
    uStack_48 = param_2[2];
    uStack_44 = param_2[3];
    uStack_40 = param_2[4];
    uVar2 = 0;
    local_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    uStack_30 = param_2[8];
    uStack_2c = param_2[9];
    if (param_1[1] == 0) goto LAB_016a00d8;
  }
  else {
    uVar2 = 0;
    if (uVar7 != 1) {
      uVar3 = uVar7;
      uVar5 = 0;
      do {
        uVar2 = uVar5 + (uVar3 >> 1);
        cVar1 = FUN_016aa3b0(uVar6 + uVar2 * 0x28,param_2);
        if (cVar1 == '\x01') {
          uVar2 = uVar5;
        }
        uVar3 = uVar3 - (uVar3 >> 1);
        uVar5 = uVar2;
      } while (1 < uVar3);
    }
    puVar4 = (uint *)(uVar6 + uVar2 * 0x28);
    cVar1 = FUN_016aa3b0(puVar4,param_2);
    if (cVar1 == '\0') {
      FUN_016a01b4(puVar4);
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar2 = param_2[3];
      uVar3 = param_2[4];
      *puVar4 = *param_2;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      puVar4[3] = uVar2;
      puVar4[4] = uVar3;
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      uVar2 = param_2[8];
      uVar3 = param_2[9];
      puVar4[5] = param_2[5];
      puVar4[6] = uVar6;
      puVar4[7] = uVar7;
      puVar4[8] = uVar2;
      puVar4[9] = uVar3;
      return;
    }
    local_50 = *param_2;
    uStack_4c = param_2[1];
    uStack_48 = param_2[2];
    uStack_44 = param_2[3];
    uStack_40 = param_2[4];
    if (cVar1 == -1) {
      uVar2 = uVar2 + 1;
    }
    local_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    uStack_30 = param_2[8];
    uStack_2c = param_2[9];
    if (uVar7 == param_1[1]) {
LAB_016a00d8:
      FUN_016a84fc();
      puVar4 = (uint *)(param_1[2] + uVar2 * 0x28);
      goto joined_r0x016a0070;
    }
  }
  puVar4 = (uint *)(uVar6 + uVar2 * 0x28);
joined_r0x016a0070:
  if (uVar2 < uVar7) {
    FUN_016dd52c(puVar4 + 10,puVar4,(uVar7 - uVar2) * 0x28);
  }
  *puVar4 = local_50;
  puVar4[1] = uStack_4c;
  puVar4[2] = uStack_48;
  puVar4[3] = uStack_44;
  puVar4[4] = uStack_40;
  puVar4[5] = local_3c;
  puVar4[6] = uStack_38;
  puVar4[7] = uStack_34;
  puVar4[8] = uStack_30;
  puVar4[9] = uStack_2c;
  param_1[3] = uVar7 + 1;
  return;
}

