// FUN_016ccc94 @ 016ccc94 size=248 calls_out=2 calls_in=0
// strings: 

void FUN_016ccc94(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 **ppuVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *local_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  uint *local_2c;
  uint *local_28;
  
  param_1 = (undefined4 *)*param_1;
  local_30 = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  puVar4 = (uint *)*param_1;
  local_2d = 1;
  local_2f = 0;
  puVar6 = puVar4 + 1;
  uVar7 = ~*puVar4 & 0x80808080;
  ppuVar2 = &local_34;
  local_34 = param_2;
  for (iVar3 = param_1[3]; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar5 = puVar6;
    if (uVar7 == 0) {
      do {
        puVar6 = puVar5 + 1;
        uVar7 = *puVar5;
        puVar4 = puVar4 + -0xc;
        puVar5 = puVar6;
      } while ((uVar7 & 0x80808080) == 0x80808080);
      uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                          | uVar7 >> 0x18) >> 3;
    local_2c = puVar4 + uVar1 * -3 + -3;
    local_28 = puVar4 + uVar1 * -3 + -1;
    ppuVar2 = (undefined4 **)FUN_01302ea4(ppuVar2,&local_2c,&LAB_016bbb34,&local_28,FUN_016cbbf8);
    uVar7 = uVar7 - 1 & uVar7;
  }
  FUN_01303100(&local_34);
  return;
}

