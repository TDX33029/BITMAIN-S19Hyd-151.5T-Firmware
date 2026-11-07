// FUN_015d171c @ 015d171c size=332 calls_out=1 calls_in=1
// strings: 

longlong FUN_015d171c(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  
  uVar2 = 0;
  if (DAT_018d8bf0 != 0) {
    if (DAT_018d8bf0 != 1) {
      uVar3 = DAT_018d8bf0;
      uVar4 = 0;
      do {
        uVar2 = uVar4 + (uVar3 >> 1);
        uVar3 = uVar3 - (uVar3 >> 1);
        puVar5 = (uint *)(DAT_018d8bec + uVar2 * 0x18);
        uVar6 = puVar5[1];
        if (param_2 <= uVar6 && (uint)(*puVar5 <= param_1) <= param_2 - uVar6) {
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
      } while (1 < uVar3);
    }
    puVar5 = (uint *)(DAT_018d8bec + uVar2 * 0x18);
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    if (uVar3 != param_1 || uVar4 != param_2) {
      if (uVar4 <= param_2 && (uint)(param_1 <= uVar3) <= uVar4 - param_2) {
        uVar2 = uVar2 + 1;
      }
      if (uVar2 == 0) {
        return (ulonglong)param_2 << 0x20;
      }
      uVar2 = uVar2 - 1;
    }
    if (uVar2 < DAT_018d8bf0) {
      puVar5 = (uint *)(DAT_018d8bec + uVar2 * 0x18);
      uVar3 = *puVar5;
      uVar2 = puVar5[1];
      if (uVar2 < param_2 || param_2 - uVar2 < (uint)(uVar3 <= param_1)) {
        uVar4 = puVar5[3] + uVar2 + (uint)CARRY4(puVar5[2],uVar3);
        bVar7 = param_1 <= puVar5[2] + uVar3;
        uVar2 = uVar4 - param_2;
        bVar1 = uVar4 <= param_2;
        param_2 = uVar4 - (param_2 + !bVar7);
        if (bVar1 && bVar7 <= uVar2) {
          return (ulonglong)param_2 << 0x20;
        }
        if (DAT_018d8bd0 != 0) {
          uVar2 = puVar5[4];
          param_2 = (uint)CARRY4(DAT_018d8bdc,(uint)CARRY4(DAT_018d8bd8,uVar2));
          if (param_2 == 0) {
            lVar8 = FUN_0127b808(DAT_018d8bd0,DAT_018d8bd4,DAT_018d8bd8 + uVar2,
                                 DAT_018d8bdc + CARRY4(DAT_018d8bd8,uVar2),DAT_018d8be0,DAT_018d8be4
                                );
            return lVar8;
          }
        }
      }
    }
  }
  return (ulonglong)param_2 << 0x20;
}

