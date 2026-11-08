// FUN_015fbc54 @ 015fbc54 size=252 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015fbc54(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *local_30;
  char local_2c;
  undefined1 local_2b;
  int local_28;
  
  ppuVar1 = &local_30;
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  puVar3 = (uint *)*param_1;
  local_2b = 0;
  puVar5 = puVar3 + 1;
  uVar7 = ~*puVar3 & 0x80808080;
  local_30 = param_2;
  for (iVar6 = param_1[3]; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar5;
    if (uVar7 == 0) {
      do {
        puVar5 = puVar4 + 1;
        uVar7 = *puVar4;
        puVar3 = puVar3 + -0x32;
        puVar4 = puVar5;
      } while ((uVar7 & 0x80808080) == 0x80808080);
      uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
    }
    local_28 = (int)puVar3 +
               (short)-(short)((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                             (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) *
               0x32 + -0x32;
    ppuVar1 = (undefined4 **)FUN_01303170(ppuVar1,&local_28,FUN_015f4114);
    uVar7 = uVar7 - 1 & uVar7;
  }
  uVar2 = 1;
  if (local_2c == '\0') {
    uVar2 = (**(code **)(local_30[1] + 0xc))(*local_30,"}",1);
  }
  return uVar2;
}

