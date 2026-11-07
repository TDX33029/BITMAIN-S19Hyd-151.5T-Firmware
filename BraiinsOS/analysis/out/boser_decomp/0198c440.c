// FUN_0198c440 @ 0198c440 size=316 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0198c440(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar1 = 0;
  if (DAT_01d4fec0 != 0) {
    if (DAT_01d4fec0 != 1) {
      uVar3 = DAT_01d4fec0;
      uVar4 = 0;
      do {
        uVar1 = uVar4 + (uVar3 >> 1);
        uVar3 = uVar3 - (uVar3 >> 1);
        puVar5 = (uint *)(DAT_01d4febc + uVar1 * 0x18);
        uVar6 = puVar5[1];
        if (param_2 <= uVar6 && (uint)(*puVar5 <= param_1) <= param_2 - uVar6) {
          uVar1 = uVar4;
        }
        uVar4 = uVar1;
      } while (1 < uVar3);
    }
    puVar5 = (uint *)(DAT_01d4febc + uVar1 * 0x18);
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    if (!(uVar3 == param_1 && uVar4 == param_2)) {
      if (uVar4 <= param_2 && (uint)(param_1 <= uVar3) <= uVar4 - param_2) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = uVar1 - 1;
    }
    if (uVar1 < DAT_01d4fec0) {
      puVar5 = (uint *)(DAT_01d4febc + uVar1 * 0x18);
      uVar3 = *puVar5;
      uVar1 = puVar5[1];
      if (uVar1 < param_2 || param_2 - uVar1 < (uint)(uVar3 <= param_1)) {
        uVar1 = puVar5[3] + uVar1 + (uint)CARRY4(puVar5[2],uVar3);
        if (uVar1 <= param_2 && (uint)(param_1 <= puVar5[2] + uVar3) <= uVar1 - param_2) {
          return 0;
        }
        if (DAT_01d4fea0 != 0) {
          uVar1 = puVar5[4];
          if (!CARRY4(DAT_01d4feac,(uint)CARRY4(DAT_01d4fea8,uVar1))) {
            uVar2 = FUN_0164bbd8(DAT_01d4fea0,DAT_01d4fea4,DAT_01d4fea8 + uVar1,
                                 DAT_01d4feac + CARRY4(DAT_01d4fea8,uVar1),DAT_01d4feb0,DAT_01d4feb4
                                );
            return uVar2;
          }
        }
      }
    }
  }
  return 0;
}

