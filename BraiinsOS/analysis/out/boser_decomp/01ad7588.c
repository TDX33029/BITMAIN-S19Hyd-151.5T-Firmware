// FUN_01ad7588 @ 01ad7588 size=432 calls_out=2 calls_in=1
// strings: 

void FUN_01ad7588(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar5 = param_2[3];
    uVar6 = *param_2;
    uVar1 = param_2[2];
    *param_2 = 0;
    if ((uVar6 & 1) != 0) {
      uVar6 = param_2[1];
      if (param_2[1] == 0) {
        if (uVar5 == 0) {
          uVar6 = uVar1;
        }
        else {
          do {
            uVar1 = *(uint *)(uVar1 + 0x1168);
            uVar5 = uVar5 - 1;
            uVar6 = uVar1;
          } while (uVar5 != 0);
        }
      }
      uVar1 = uVar6;
      uVar5 = *(uint *)(uVar6 + 0x10d8);
      if (*(uint *)(uVar6 + 0x10d8) != 0) {
        do {
          uVar6 = uVar5;
          thunk_FUN_01be4678(uVar1);
          uVar1 = uVar6;
          uVar5 = *(uint *)(uVar6 + 0x10d8);
        } while (*(uint *)(uVar6 + 0x10d8) != 0);
      }
      thunk_FUN_01be4678(uVar6);
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
      uVar1 = *(uint *)(uVar1 + 0x1168);
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
  if (uVar6 < *(ushort *)(uVar1 + 0x1162)) {
    uVar4 = uVar1;
  }
  else {
    do {
      uVar4 = *(uint *)(uVar1 + 0x10d8);
      if (uVar4 == 0) {
        thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d30454);
      }
      uVar6 = (uint)*(ushort *)(uVar1 + 0x1160);
      thunk_FUN_01be4678();
      uVar5 = uVar5 + 1;
      uVar1 = uVar4;
    } while (*(ushort *)(uVar4 + 0x1162) <= uVar6);
  }
  if (uVar5 == 0) {
    uVar3 = uVar6 + 1;
    uVar1 = uVar4;
  }
  else {
    puVar2 = (uint *)(uVar4 + uVar6 * 4 + 0x116c);
    uVar3 = uVar5;
    do {
      uVar1 = *puVar2;
      uVar3 = uVar3 - 1;
      puVar2 = (uint *)(uVar1 + 0x1168);
    } while (uVar3 != 0);
    uVar3 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_2[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = uVar3;
  return;
}

