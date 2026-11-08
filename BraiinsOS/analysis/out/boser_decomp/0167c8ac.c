// FUN_0167c8ac @ 0167c8ac size=416 calls_out=1 calls_in=5
// strings: 

void FUN_0167c8ac(undefined4 *param_1,byte *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01d0745c);
  }
  uVar6 = param_6 - param_5;
  uVar8 = 0;
  if (uVar6 != 0) {
    uVar4 = (uint)*param_2;
    puVar10 = (uint *)(param_3 + param_5);
    puVar5 = puVar10;
    if (uVar6 < 4) {
      do {
        if (uVar4 == (byte)*puVar5) goto LAB_0167ca14;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    else {
      uVar7 = uVar4 * 0x1010101;
      if ((~(0x1010100 - (*puVar10 ^ uVar7) | *puVar10 ^ uVar7) & 0x80808080) == 0) {
        uVar9 = 4 - ((uint)puVar10 & 3);
        puVar5 = (uint *)((int)puVar10 + uVar9);
        if (uVar6 < 9) {
          if (uVar9 < uVar6) {
            iVar1 = ((param_6 + ((uint)puVar10 & 3)) - param_5) + -4;
            do {
              if (uVar4 == (byte)*puVar5) goto LAB_0167ca14;
              puVar5 = (uint *)((int)puVar5 + 1);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
        else {
          puVar2 = (uint *)(param_3 + param_6);
          for (; puVar5 <= puVar2 + -2; puVar5 = puVar5 + 2) {
            uVar6 = ~(0x1010100 - (*puVar5 ^ uVar7) | *puVar5 ^ uVar7);
            bVar11 = (uVar6 & 0x80808080) != 0;
            if (!bVar11) {
              uVar6 = ~(0x1010100 - (puVar5[1] ^ uVar7) | puVar5[1] ^ uVar7);
            }
            if (bVar11 || (uVar6 & 0x80808080) != 0) break;
          }
          if (puVar5 < puVar2) {
            do {
              if (uVar4 == (byte)*puVar5) goto LAB_0167ca14;
              puVar5 = (uint *)((int)puVar5 + 1);
            } while (puVar5 != puVar2);
          }
        }
      }
      else {
        do {
          if (uVar4 == (byte)*puVar5) goto LAB_0167ca14;
          puVar5 = (uint *)((int)puVar5 + 1);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
LAB_0167ca28:
  *param_1 = uVar8;
  return;
LAB_0167ca14:
  uVar8 = 1;
  pbVar3 = (byte *)((int)puVar5 + (param_5 - (int)puVar10));
  param_1[1] = pbVar3;
  param_1[2] = pbVar3 + 1;
  goto LAB_0167ca28;
}

