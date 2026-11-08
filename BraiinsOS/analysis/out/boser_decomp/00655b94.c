// FUN_00655b94 @ 00655b94 size=436 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_00655b94(uint param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = 0;
  if (param_5 != 0) {
    uVar7 = param_2 & 0xff;
    param_3 = param_3 & 0xff;
    param_2 = param_1 & 0xff;
    puVar2 = param_4;
    if (param_5 < 4) {
      do {
        uVar6 = (uint)(byte)*puVar2;
        if ((param_3 == uVar6) || (param_2 == uVar6 || uVar7 == uVar6)) goto LAB_00655d38;
        puVar2 = (uint *)((int)puVar2 + 1);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    else {
      uVar6 = *param_4;
      uVar5 = uVar6 ^ param_2 * 0x1010101;
      if ((((~(0x1010100 - uVar5 | uVar5) & 0x80808080) == 0) &&
          (uVar5 = uVar6 ^ uVar7 * 0x1010101, (~(0x1010100 - uVar5 | uVar5) & 0x80808080) == 0)) &&
         (uVar6 = uVar6 ^ param_3 * 0x1010101, (~(0x1010100 - uVar6 | uVar6) & 0x80808080) == 0)) {
        puVar3 = (uint *)((int)param_4 + param_5);
        puVar2 = (uint *)((uint)param_4 & 0xfffffffc);
        while (puVar2 = puVar2 + 1, puVar2 <= puVar3 + -1) {
          uVar6 = *puVar2;
          uVar5 = uVar6 ^ param_2 * 0x1010101;
          bVar8 = (~(0x1010100 - uVar5 | uVar5) & 0x80808080) == 0;
          puVar4 = puVar3 + -1;
          if (bVar8) {
            uVar5 = uVar6 ^ uVar7 * 0x1010101;
            puVar4 = (uint *)~(0x1010100 - uVar5 | uVar5);
          }
          if ((!bVar8 || ((uint)puVar4 & 0x80808080) != 0) ||
             (uVar6 = uVar6 ^ param_3 * 0x1010101, (~(0x1010100 - uVar6 | uVar6) & 0x80808080) != 0)
             ) break;
        }
        if (puVar2 < puVar3) {
          do {
            uVar6 = (uint)(byte)*puVar2;
            if ((param_3 == uVar6) || (param_2 == uVar6 || uVar7 == uVar6)) goto LAB_00655d38;
            puVar2 = (uint *)((int)puVar2 + 1);
          } while (puVar2 != puVar3);
        }
      }
      else {
        do {
          uVar6 = (uint)(byte)*puVar2;
          if ((param_3 == uVar6) || (param_2 == uVar6 || uVar7 == uVar6)) goto LAB_00655d38;
          puVar2 = (uint *)((int)puVar2 + 1);
          param_5 = param_5 - 1;
        } while (param_5 != 0);
      }
    }
  }
LAB_00655d40:
  return CONCAT44(param_2,uVar1);
LAB_00655d38:
  param_2 = (int)puVar2 - (int)param_4;
  uVar1 = 1;
  goto LAB_00655d40;
}

