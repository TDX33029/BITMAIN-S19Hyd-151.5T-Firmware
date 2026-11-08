// FUN_005f6884 @ 005f6884 size=436 calls_out=1 calls_in=0
// strings: 

void FUN_005f6884(undefined4 *param_1,byte *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_018571a8);
  }
  if (param_5 < param_6) {
    uVar5 = (uint)*param_2;
    uVar7 = param_6 - param_5;
    puVar8 = (uint *)(param_3 + param_5);
    puVar1 = puVar8;
    if (uVar7 < 4) {
      do {
        if (uVar5 == (byte)*puVar1) goto LAB_005f69f0;
        puVar1 = (uint *)((int)puVar1 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else {
      uVar3 = uVar5 * 0x1010101;
      if ((~(0x1010100 - (*puVar8 ^ uVar3) | *puVar8 ^ uVar3) & 0x80808080) == 0) {
        puVar6 = (uint *)(param_3 + param_6);
        puVar1 = (uint *)(((uint)puVar8 & 0xfffffffc) + 4);
        if (uVar7 < 9) {
          if (puVar1 < puVar6) {
            iVar4 = ((param_6 + ((uint)puVar8 & 3)) - param_5) + -4;
            do {
              if (uVar5 == (byte)*puVar1) goto LAB_005f69f0;
              puVar1 = (uint *)((int)puVar1 + 1);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          for (; puVar1 <= puVar6 + -2; puVar1 = puVar1 + 2) {
            uVar7 = ~(0x1010100 - (*puVar1 ^ uVar3) | *puVar1 ^ uVar3);
            bVar9 = (uVar7 & 0x80808080) == 0;
            if (bVar9) {
              uVar7 = ~(0x1010100 - (puVar1[1] ^ uVar3) | puVar1[1] ^ uVar3);
            }
            if (!bVar9 || (uVar7 & 0x80808080) != 0) break;
          }
          if (puVar1 < puVar6) {
            do {
              if (uVar5 == (byte)*puVar1) goto LAB_005f69f0;
              puVar1 = (uint *)((int)puVar1 + 1);
            } while (puVar1 != puVar6);
          }
        }
      }
      else {
        do {
          if (uVar5 == (byte)*puVar1) {
LAB_005f69f0:
            pbVar2 = (byte *)((int)puVar1 + (param_5 - (int)puVar8));
            uVar5 = (int)pbVar2 - (int)(uint)param_2[1];
            if (pbVar2 < (byte *)(uint)param_2[1]) {
              uVar5 = 0;
            }
            if (uVar5 <= param_5) {
              uVar5 = param_5;
            }
            param_1[1] = uVar5;
            *param_1 = 2;
            return;
          }
          puVar1 = (uint *)((int)puVar1 + 1);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  *param_1 = 0;
  return;
}

