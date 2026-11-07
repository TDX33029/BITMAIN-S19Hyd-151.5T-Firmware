// FUN_00c48ab0 @ 00c48ab0 size=440 calls_out=2 calls_in=4
// strings: 

void FUN_00c48ab0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar1 = param_2[3];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    *param_2 = 0;
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2[2];
      if (uVar4 == 0) {
        for (; uVar4 = uVar3, uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar3 = *(uint *)(uVar4 + 0x718);
        }
      }
      uVar1 = uVar4;
      uVar3 = *(uint *)(uVar4 + 0x6e0);
      if (*(uint *)(uVar4 + 0x6e0) != 0) {
        do {
          uVar4 = uVar3;
          thunk_FUN_016d3fb4(uVar1);
          uVar1 = uVar4;
          uVar3 = *(uint *)(uVar4 + 0x6e0);
        } while (*(uint *)(uVar4 + 0x6e0) != 0);
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
      uVar1 = *(uint *)(uVar1 + 0x718);
    }
    uVar6 = 0;
    uVar3 = 0;
    *param_2 = 1;
    param_2[1] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar4 = uVar1;
    if (*(short *)(uVar1 + 0x712) != 0) goto joined_r0x00c48b04;
  }
  else {
    uVar3 = param_2[2];
    uVar6 = param_2[3];
    uVar4 = uVar1;
    if (uVar6 < *(ushort *)(uVar1 + 0x712)) goto joined_r0x00c48b04;
  }
  do {
    uVar4 = *(uint *)(uVar1 + 0x6e0);
    if (uVar4 == 0) {
      thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af358);
    }
    uVar6 = (uint)*(ushort *)(uVar1 + 0x710);
    thunk_FUN_016d3fb4();
    uVar3 = uVar3 + 1;
    uVar1 = uVar4;
  } while (*(ushort *)(uVar4 + 0x712) <= uVar6);
joined_r0x00c48b04:
  if (uVar3 == 0) {
    uVar5 = uVar6 + 1;
    uVar1 = uVar4;
  }
  else {
    puVar2 = (uint *)(uVar4 + uVar6 * 4 + 0x71c);
    uVar5 = uVar3;
    do {
      uVar1 = *puVar2;
      uVar5 = uVar5 - 1;
      puVar2 = (uint *)(uVar1 + 0x718);
    } while (uVar5 != 0);
    uVar5 = 0;
  }
  param_2[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = uVar5;
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  return;
}

