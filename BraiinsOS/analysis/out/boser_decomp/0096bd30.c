// FUN_0096bd30 @ 0096bd30 size=392 calls_out=2 calls_in=1
// strings: 

void FUN_0096bd30(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar1 = param_2[3];
    uVar6 = *param_2;
    uVar5 = param_2[1];
    *param_2 = 0;
    if ((uVar6 & 1) != 0) {
      uVar6 = param_2[2];
      if (uVar5 == 0) {
        for (; uVar5 = uVar6, uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar6 = *(uint *)(uVar5 + 0x90);
        }
      }
      uVar1 = uVar5;
      uVar6 = *(uint *)(uVar5 + 0x58);
      if (*(uint *)(uVar5 + 0x58) != 0) {
        do {
          uVar5 = uVar6;
          thunk_FUN_01be4678(uVar1);
          uVar1 = uVar5;
          uVar6 = *(uint *)(uVar5 + 0x58);
        } while (*(uint *)(uVar5 + 0x58) != 0);
      }
      thunk_FUN_01be4678(uVar5);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] - 1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d30464);
  }
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    uVar1 = param_2[2];
    for (uVar5 = param_2[3]; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar1 = *(uint *)(uVar1 + 0x90);
    }
    uVar6 = 0;
    uVar5 = 0;
    *param_2 = 1;
    param_2[1] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
  }
  uVar2 = uVar1;
  if (*(ushort *)(uVar1 + 0x8a) <= uVar6) {
    do {
      uVar1 = *(uint *)(uVar2 + 0x58);
      if (uVar1 == 0) {
        thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d30454);
      }
      uVar6 = (uint)*(ushort *)(uVar2 + 0x88);
      thunk_FUN_01be4678();
      uVar5 = uVar5 + 1;
      uVar2 = uVar1;
    } while (*(ushort *)(uVar1 + 0x8a) <= uVar6);
  }
  if (uVar5 == 0) {
    uVar4 = uVar6 + 1;
    uVar2 = uVar1;
  }
  else {
    puVar3 = (uint *)(uVar1 + uVar6 * 4 + 0x94);
    uVar4 = uVar5;
    do {
      uVar2 = *puVar3;
      uVar4 = uVar4 - 1;
      puVar3 = (uint *)(uVar2 + 0x90);
    } while (uVar4 != 0);
    uVar4 = 0;
  }
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_2[1] = uVar2;
  param_2[2] = 0;
  param_2[3] = uVar4;
  return;
}

