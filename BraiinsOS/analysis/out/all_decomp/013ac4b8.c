// FUN_013ac4b8 @ 013ac4b8 size=432 calls_out=1 calls_in=5
// strings: 

void FUN_013ac4b8(undefined4 *param_1,byte *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_01893700);
  }
  if (param_5 < param_6) {
    uVar4 = (uint)*param_2;
    uVar6 = param_6 - param_5;
    puVar8 = (uint *)(param_3 + param_5);
    puVar2 = puVar8;
    if (uVar6 < 4) {
      do {
        if (uVar4 == (byte)*puVar2) goto LAB_013ac630;
        puVar2 = (uint *)((int)puVar2 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    else {
      uVar5 = uVar4 * 0x1010101;
      if ((~(0x1010100 - (*puVar8 ^ uVar5) | *puVar8 ^ uVar5) & 0x80808080) == 0) {
        puVar7 = (uint *)(param_3 + param_6);
        puVar2 = (uint *)(((uint)puVar8 & 0xfffffffc) + 4);
        if (uVar6 < 9) {
          if (puVar2 < puVar7) {
            iVar1 = ((param_6 + ((uint)puVar8 & 3)) - param_5) + -4;
            do {
              if (uVar4 == (byte)*puVar2) goto LAB_013ac630;
              puVar2 = (uint *)((int)puVar2 + 1);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
        else {
          for (; puVar2 <= puVar7 + -2; puVar2 = puVar2 + 2) {
            uVar6 = ~(0x1010100 - (*puVar2 ^ uVar5) | *puVar2 ^ uVar5);
            bVar9 = (uVar6 & 0x80808080) == 0;
            if (bVar9) {
              uVar6 = ~(0x1010100 - (puVar2[1] ^ uVar5) | puVar2[1] ^ uVar5);
            }
            if (!bVar9 || (uVar6 & 0x80808080) != 0) break;
          }
          if (puVar2 < puVar7) {
            do {
              if (uVar4 == (byte)*puVar2) goto LAB_013ac630;
              puVar2 = (uint *)((int)puVar2 + 1);
            } while (puVar2 != puVar7);
          }
        }
      }
      else {
        do {
          if (uVar4 == (byte)*puVar2) {
LAB_013ac630:
            pbVar3 = (byte *)((int)puVar2 + (param_5 - (int)puVar8));
            param_1[1] = pbVar3;
            param_1[2] = pbVar3 + 1;
            *param_1 = 1;
            return;
          }
          puVar2 = (uint *)((int)puVar2 + 1);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  *param_1 = 0;
  return;
}

