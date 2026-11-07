// FUN_0199b3ec @ 0199b3ec size=420 calls_out=2 calls_in=2
// strings: 

void FUN_0199b3ec(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar1 = param_2[3];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    *param_2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2[2];
      if (uVar6 == 0) {
        for (; uVar6 = uVar5, uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar5 = *(uint *)(uVar6 + 0x110);
        }
      }
      uVar1 = uVar6;
      uVar5 = *(uint *)(uVar6 + 0x108);
      if (*(uint *)(uVar6 + 0x108) != 0) {
        do {
          uVar6 = uVar5;
          thunk_FUN_01be4678(uVar1);
          uVar1 = uVar6;
          uVar5 = *(uint *)(uVar6 + 0x108);
        } while (*(uint *)(uVar6 + 0x108) != 0);
      }
      thunk_FUN_01be4678(uVar6);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] - 1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28014);
  }
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    uVar1 = param_2[2];
    for (uVar6 = param_2[3]; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar1 = *(uint *)(uVar1 + 0x110);
    }
    uVar6 = 0;
    uVar5 = 0;
    *param_2 = 1;
  }
  else {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
  }
  if (*(ushort *)(uVar1 + 0x10e) <= uVar6) {
    do {
      uVar2 = *(uint *)(uVar1 + 0x108);
      if (uVar2 == 0) {
        thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27ff4);
      }
      uVar6 = (uint)*(ushort *)(uVar1 + 0x10c);
      thunk_FUN_01be4678();
      uVar5 = uVar5 + 1;
      uVar1 = uVar2;
    } while (*(ushort *)(uVar2 + 0x10e) <= uVar6);
  }
  if (uVar5 == 0) {
    uVar4 = uVar6 + 1;
    uVar2 = uVar1;
  }
  else {
    puVar3 = (uint *)(uVar1 + uVar6 * 4 + 0x114);
    uVar4 = uVar5;
    do {
      uVar2 = *puVar3;
      uVar4 = uVar4 - 1;
      puVar3 = (uint *)(uVar2 + 0x110);
    } while (uVar4 != 0);
    uVar4 = 0;
  }
  param_2[1] = uVar2;
  param_2[2] = 0;
  param_2[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  return;
}

