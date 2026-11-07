// FUN_0167cbd8 @ 0167cbd8 size=448 calls_out=1 calls_in=5
// strings: 

void FUN_0167cbd8(undefined4 *param_1,byte *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  bool bVar10;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01d0746c);
  }
  uVar9 = 0;
  if (param_6 != param_5) {
    uVar4 = (uint)*param_2;
    uVar7 = param_6 - param_5;
    uVar5 = (uint)param_2[1];
    puVar8 = (uint *)(param_3 + param_5);
    puVar6 = puVar8;
    if (uVar7 < 4) {
      do {
        if (uVar4 == (byte)*puVar6 || uVar5 == (byte)*puVar6) goto LAB_0167cd60;
        puVar6 = (uint *)((int)puVar6 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else {
      uVar3 = *puVar8 ^ uVar4 * 0x1010101;
      if (((~(0x1010100 - uVar3 | uVar3) & 0x80808080) == 0) &&
         (uVar3 = *puVar8 ^ uVar5 * 0x1010101, (~(0x1010100 - uVar3 | uVar3) & 0x80808080) == 0)) {
        puVar1 = (uint *)(param_3 + param_6);
        for (puVar6 = (uint *)(((uint)puVar8 & 0xfffffffc) + 4); puVar6 <= puVar1 + -1;
            puVar6 = puVar6 + 1) {
          uVar7 = *puVar6 ^ uVar4 * 0x1010101;
          uVar7 = ~(0x1010100 - uVar7 | uVar7);
          bVar10 = (uVar7 & 0x80808080) == 0;
          if (bVar10) {
            uVar7 = *puVar6 ^ uVar5 * 0x1010101;
            uVar7 = ~(0x1010100 - uVar7 | uVar7);
          }
          if (!bVar10 || (uVar7 & 0x80808080) != 0) break;
        }
        if (puVar6 < puVar1) {
          do {
            if (uVar4 == (byte)*puVar6 || uVar5 == (byte)*puVar6) goto LAB_0167cd60;
            puVar6 = (uint *)((int)puVar6 + 1);
          } while (puVar6 != puVar1);
        }
      }
      else {
        do {
          if (uVar4 == (byte)*puVar6 || uVar5 == (byte)*puVar6) goto LAB_0167cd60;
          uVar7 = uVar7 - 1;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while (uVar7 != 0);
      }
    }
  }
LAB_0167cd74:
  *param_1 = uVar9;
  return;
LAB_0167cd60:
  uVar9 = 1;
  pbVar2 = (byte *)((int)puVar6 + (param_5 - (int)puVar8));
  param_1[1] = pbVar2;
  param_1[2] = pbVar2 + 1;
  goto LAB_0167cd74;
}

