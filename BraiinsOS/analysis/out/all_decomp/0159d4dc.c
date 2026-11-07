// FUN_0159d4dc @ 0159d4dc size=424 calls_out=2 calls_in=2
// strings: 

void FUN_0159d4dc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar1 = param_2[3];
    uVar5 = *param_2;
    uVar4 = param_2[1];
    *param_2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2[2];
      if (uVar4 == 0) {
        for (; uVar4 = uVar5, uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar5 = *(uint *)(uVar4 + 0x110);
        }
      }
      uVar1 = uVar4;
      uVar5 = *(uint *)(uVar4 + 0x108);
      if (*(uint *)(uVar4 + 0x108) != 0) {
        do {
          uVar4 = uVar5;
          thunk_FUN_016d3fb4(uVar1);
          uVar1 = uVar4;
          uVar5 = *(uint *)(uVar4 + 0x108);
        } while (*(uint *)(uVar4 + 0x108) != 0);
      }
      thunk_FUN_016d3fb4(uVar4);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] - 1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af368);
  }
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    uVar1 = param_2[2];
    for (uVar4 = param_2[3]; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar1 = *(uint *)(uVar1 + 0x110);
    }
    uVar6 = 0;
    uVar5 = 0;
    *param_2 = 1;
    param_2[1] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar4 = uVar1;
    if (*(short *)(uVar1 + 0x10e) != 0) goto joined_r0x0159d52c;
  }
  else {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar4 = uVar1;
    if (uVar6 < *(ushort *)(uVar1 + 0x10e)) goto joined_r0x0159d52c;
  }
  do {
    uVar4 = *(uint *)(uVar1 + 0x108);
    if (uVar4 == 0) {
      thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af358);
    }
    uVar6 = (uint)*(ushort *)(uVar1 + 0x10c);
    thunk_FUN_016d3fb4();
    uVar5 = uVar5 + 1;
    uVar1 = uVar4;
  } while (*(ushort *)(uVar4 + 0x10e) <= uVar6);
joined_r0x0159d52c:
  if (uVar5 == 0) {
    uVar3 = uVar6 + 1;
    uVar1 = uVar4;
  }
  else {
    puVar2 = (uint *)(uVar4 + uVar6 * 4 + 0x114);
    uVar3 = uVar5;
    do {
      uVar1 = *puVar2;
      uVar3 = uVar3 - 1;
      puVar2 = (uint *)(uVar1 + 0x110);
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

