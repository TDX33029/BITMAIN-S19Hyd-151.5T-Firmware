// FUN_00c47d68 @ 00c47d68 size=440 calls_out=2 calls_in=1
// strings: 

void FUN_00c47d68(uint *param_1,uint *param_2)

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
          uVar3 = *(uint *)(uVar4 + 0x9d8);
        }
      }
      uVar1 = uVar4;
      uVar3 = *(uint *)(uVar4 + 0x948);
      if (*(uint *)(uVar4 + 0x948) != 0) {
        do {
          uVar4 = uVar3;
          thunk_FUN_016d3fb4(uVar1);
          uVar1 = uVar4;
          uVar3 = *(uint *)(uVar4 + 0x948);
        } while (*(uint *)(uVar4 + 0x948) != 0);
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
      uVar1 = *(uint *)(uVar1 + 0x9d8);
    }
    uVar6 = 0;
    uVar3 = 0;
    *param_2 = 1;
    param_2[1] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar4 = uVar1;
    if (*(short *)(uVar1 + 0x9d2) != 0) goto joined_r0x00c47dbc;
  }
  else {
    uVar3 = param_2[2];
    uVar6 = param_2[3];
    uVar4 = uVar1;
    if (uVar6 < *(ushort *)(uVar1 + 0x9d2)) goto joined_r0x00c47dbc;
  }
  do {
    uVar4 = *(uint *)(uVar1 + 0x948);
    if (uVar4 == 0) {
      thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af358);
    }
    uVar6 = (uint)*(ushort *)(uVar1 + 0x9d0);
    thunk_FUN_016d3fb4();
    uVar3 = uVar3 + 1;
    uVar1 = uVar4;
  } while (*(ushort *)(uVar4 + 0x9d2) <= uVar6);
joined_r0x00c47dbc:
  if (uVar3 == 0) {
    uVar5 = uVar6 + 1;
    uVar1 = uVar4;
  }
  else {
    puVar2 = (uint *)(uVar4 + uVar6 * 4 + 0x9dc);
    uVar5 = uVar3;
    do {
      uVar1 = *puVar2;
      uVar5 = uVar5 - 1;
      puVar2 = (uint *)(uVar1 + 0x9d8);
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

