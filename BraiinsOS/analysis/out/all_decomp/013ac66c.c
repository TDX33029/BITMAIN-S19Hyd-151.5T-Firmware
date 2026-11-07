// FUN_013ac66c @ 013ac66c size=472 calls_out=1 calls_in=5
// strings: 

void FUN_013ac66c(undefined4 *param_1,byte *param_2,int param_3,uint param_4,uint param_5,
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
  bool bVar9;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_01893710);
  }
  if (param_5 < param_6) {
    uVar4 = (uint)*param_2;
    uVar7 = param_6 - param_5;
    uVar5 = (uint)param_2[1];
    puVar8 = (uint *)(param_3 + param_5);
    puVar6 = puVar8;
    if (uVar7 < 4) {
      do {
        if (uVar4 == (byte)*puVar6 || uVar5 == (byte)*puVar6) goto LAB_013ac7fc;
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
          bVar9 = (uVar7 & 0x80808080) == 0;
          if (bVar9) {
            uVar7 = *puVar6 ^ uVar5 * 0x1010101;
            uVar7 = ~(0x1010100 - uVar7 | uVar7);
          }
          if (!bVar9 || (uVar7 & 0x80808080) != 0) break;
        }
        if (puVar1 <= puVar6) {
          *param_1 = 0;
          return;
        }
        do {
          if (uVar4 == (byte)*puVar6 || uVar5 == (byte)*puVar6) goto LAB_013ac7fc;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while (puVar6 != puVar1);
      }
      else {
        do {
          if (uVar4 == (byte)*puVar6 || uVar5 == (byte)*puVar6) {
LAB_013ac7fc:
            pbVar2 = (byte *)((int)puVar6 + (param_5 - (int)puVar8));
            param_1[1] = pbVar2;
            param_1[2] = pbVar2 + 1;
            *param_1 = 1;
            return;
          }
          uVar7 = uVar7 - 1;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while (uVar7 != 0);
      }
    }
  }
  *param_1 = 0;
  return;
}

