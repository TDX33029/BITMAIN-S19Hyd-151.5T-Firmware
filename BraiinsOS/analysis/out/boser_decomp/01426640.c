// FUN_01426640 @ 01426640 size=244 calls_out=3 calls_in=2
// strings: 

void FUN_01426640(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_670 [401];
  uint local_2c;
  
  if (param_3 < 0x65) {
    local_670[0] = 0;
    if (param_3 != 0) {
      puVar2 = (undefined4 *)((uint)local_670 | 4);
      uVar3 = param_3;
      do {
        uVar7 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar3 = uVar3 - 1;
        *puVar2 = *param_2;
        puVar2[1] = uVar7;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar2 = puVar2 + 4;
      } while (uVar3 != 0);
    }
    local_2c = param_3;
    FUN_01bed4e2(param_1,local_670,0x648);
    return;
  }
  uVar3 = param_3 * 0x10;
  bVar9 = 0xffffffe < param_3;
  bVar8 = param_3 == 0xfffffff;
  uVar7 = 0;
  if (param_3 < 0x10000000) {
    bVar9 = 0x7ffffffb < uVar3;
    bVar8 = uVar3 == 0x7ffffffc;
  }
  if (!bVar9 || bVar8) {
    uVar7 = 4;
    puVar2 = (undefined4 *)FUN_01298504(uVar3,4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 1;
      puVar1 = puVar2;
      do {
        puVar6 = puVar1;
        uVar7 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar3 = uVar3 + 1;
        *puVar6 = *param_2;
        puVar6[1] = uVar7;
        puVar6[2] = uVar4;
        puVar6[3] = uVar5;
        puVar1 = puVar6 + 4;
      } while (param_3 != uVar3);
      uVar7 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      puVar6[4] = *param_2;
      puVar6[5] = uVar7;
      puVar6[6] = uVar4;
      puVar6[7] = uVar5;
      param_1[0x191] = param_3;
      *param_1 = 1;
      param_1[1] = param_3;
      param_1[2] = puVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar7,uVar3);
}

