// FUN_010b4460 @ 010b4460 size=308 calls_out=3 calls_in=2
// strings: 

void FUN_010b4460(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_660 [401];
  uint local_1c;
  
  if (param_3 < 0x65) {
    local_660[0] = 0;
    if (param_3 != 0) {
      puVar2 = (undefined4 *)((uint)local_660 | 4);
      uVar4 = param_3;
      do {
        uVar4 = uVar4 - 1;
        uVar6 = param_2[1];
        uVar5 = param_2[2];
        uVar8 = param_2[3];
        *puVar2 = *param_2;
        puVar2[1] = uVar6;
        puVar2[2] = uVar5;
        puVar2[3] = uVar8;
        puVar2 = puVar2 + 4;
      } while (uVar4 != 0);
    }
    local_1c = param_3;
    FUN_016dd1aa(param_1,local_660,0x648);
    return;
  }
  uVar4 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar4;
    bVar9 = uVar4 == 0x7ffffffc;
  }
  if (bVar10 && !bVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(uVar4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar4);
  }
  uVar4 = 1;
  puVar1 = puVar2;
  do {
    puVar3 = puVar1;
    uVar4 = uVar4 + 1;
    uVar8 = param_2[1];
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    *puVar3 = *param_2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar6;
    puVar3[3] = uVar5;
    puVar1 = puVar3 + 4;
  } while (param_3 != uVar4);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_1[0x191] = param_3;
  *param_1 = 1;
  param_1[1] = param_3;
  param_1[2] = puVar2;
  puVar3[4] = uVar5;
  puVar3[5] = uVar6;
  puVar3[6] = uVar7;
  puVar3[7] = uVar8;
  return;
}

