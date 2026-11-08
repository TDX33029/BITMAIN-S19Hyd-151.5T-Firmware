// FUN_015fb70c @ 015fb70c size=248 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015fb70c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *local_30;
  char local_2c;
  undefined1 local_2b;
  uint *local_28;
  
  ppuVar1 = &local_30;
  param_1 = (undefined4 *)*param_1;
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  puVar3 = (uint *)*param_1;
  iVar7 = param_1[3];
  local_2b = 0;
  puVar5 = puVar3 + 1;
  uVar6 = ~*puVar3 & 0x80808080;
  local_30 = param_2;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = puVar5;
    if (uVar6 == 0) {
      do {
        puVar5 = puVar4 + 1;
        uVar6 = *puVar4;
        puVar3 = puVar3 + -0x48;
        puVar4 = puVar5;
      } while ((uVar6 & 0x80808080) == 0x80808080);
      uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
    }
    local_28 = puVar3 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                       (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) * -0x12 +
                        -0x12;
    ppuVar1 = (undefined4 **)FUN_01303170(ppuVar1,&local_28,FUN_015f3d28);
    uVar6 = uVar6 - 1 & uVar6;
  }
  uVar2 = 1;
  if (local_2c == '\0') {
    uVar2 = (**(code **)(local_30[1] + 0xc))(*local_30,"}",1);
  }
  return uVar2;
}

