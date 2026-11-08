// FUN_006553b0 @ 006553b0 size=436 calls_out=1 calls_in=0
// strings: 

void FUN_006553b0(undefined4 *param_1,byte *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01c03658);
  }
  uVar8 = param_6 - param_5;
  if (uVar8 != 0) {
    uVar6 = (uint)*param_2;
    puVar10 = (uint *)(param_3 + param_5);
    puVar7 = puVar10;
    if (uVar8 < 4) {
      do {
        if (uVar6 == (byte)*puVar7) goto LAB_00655518;
        puVar7 = (uint *)((int)puVar7 + 1);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    else {
      uVar5 = uVar6 * 0x1010101;
      if ((~(0x1010100 - (*puVar10 ^ uVar5) | *puVar10 ^ uVar5) & 0x80808080) == 0) {
        uVar9 = 4 - ((uint)puVar10 & 3);
        puVar7 = (uint *)((int)puVar10 + uVar9);
        if (uVar8 < 9) {
          if (uVar9 < uVar8) {
            iVar2 = ((param_6 + ((uint)puVar10 & 3)) - param_5) + -4;
            do {
              if (uVar6 == (byte)*puVar7) goto LAB_00655518;
              puVar7 = (uint *)((int)puVar7 + 1);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          puVar3 = (uint *)(param_3 + param_6);
          for (; puVar7 <= puVar3 + -2; puVar7 = puVar7 + 2) {
            uVar8 = ~(0x1010100 - (*puVar7 ^ uVar5) | *puVar7 ^ uVar5);
            bVar11 = (uVar8 & 0x80808080) != 0;
            if (!bVar11) {
              uVar8 = ~(0x1010100 - (puVar7[1] ^ uVar5) | puVar7[1] ^ uVar5);
            }
            if (bVar11 || (uVar8 & 0x80808080) != 0) break;
          }
          if (puVar7 < puVar3) {
            do {
              if (uVar6 == (byte)*puVar7) goto LAB_00655518;
              puVar7 = (uint *)((int)puVar7 + 1);
            } while (puVar7 != puVar3);
          }
        }
      }
      else {
        do {
          if (uVar6 == (byte)*puVar7) goto LAB_00655518;
          puVar7 = (uint *)((int)puVar7 + 1);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  uVar1 = 0;
LAB_0065553c:
  *param_1 = uVar1;
  return;
LAB_00655518:
  pbVar4 = (byte *)((int)puVar7 + (param_5 - (int)puVar10));
  uVar8 = (int)pbVar4 - (int)(uint)param_2[1];
  if (pbVar4 < (byte *)(uint)param_2[1]) {
    uVar8 = 0;
  }
  if (uVar8 <= param_5) {
    uVar8 = param_5;
  }
  param_1[1] = uVar8;
  uVar1 = 2;
  goto LAB_0065553c;
}

