// FUN_015fc818 @ 015fc818 size=480 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_015fc818(int param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  bool bVar11;
  
  uVar3 = (uint)*(byte *)(param_1 + 6);
  puVar9 = (uint *)(param_3 + param_2);
  pbVar10 = (byte *)0x0;
  uVar6 = uVar3 * 0x1010101;
  puVar2 = puVar9 + -2;
  do {
    uVar7 = (int)param_3 - (int)pbVar10;
    if (uVar7 == 0) goto LAB_015fc9e0;
    puVar8 = (uint *)(pbVar10 + param_2);
    puVar2 = puVar8;
    if (uVar7 < 4) {
      while (uVar3 != (byte)*puVar2) {
        puVar2 = (uint *)((int)puVar2 + 1);
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_015fc9e0;
      }
    }
    else if ((~(0x1010100 - (*puVar8 ^ uVar6) | *puVar8 ^ uVar6) & 0x80808080) == 0) {
      uVar4 = 4 - ((uint)puVar8 & 3);
      puVar2 = (uint *)((int)puVar8 + uVar4);
      if (uVar7 < 9) {
        if (uVar7 <= uVar4) goto LAB_015fc9e0;
        pbVar5 = param_3 + ((((uint)puVar8 & 3) - 4) - (int)pbVar10);
        while (uVar3 != (byte)*puVar2) {
          puVar2 = (uint *)((int)puVar2 + 1);
          pbVar5 = pbVar5 + -1;
          if (pbVar5 == (byte *)0x0) goto LAB_015fc9e0;
        }
      }
      else {
        for (; puVar2 <= puVar9 + -2; puVar2 = puVar2 + 2) {
          uVar7 = ~(0x1010100 - (*puVar2 ^ uVar6) | *puVar2 ^ uVar6);
          bVar11 = (uVar7 & 0x80808080) != 0;
          if (!bVar11) {
            uVar7 = ~(0x1010100 - (puVar2[1] ^ uVar6) | puVar2[1] ^ uVar6);
          }
          if (bVar11 || (uVar7 & 0x80808080) != 0) break;
        }
        if (puVar9 <= puVar2) {
LAB_015fc9e0:
          uVar1 = 0;
          goto LAB_015fc9e4;
        }
        while (uVar3 != (byte)*puVar2) {
          puVar2 = (uint *)((int)puVar2 + 1);
          if (puVar2 == puVar9) goto LAB_015fc9e0;
        }
      }
    }
    else {
      while (uVar3 != (byte)*puVar2) {
        puVar2 = (uint *)((int)puVar2 + 1);
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_015fc9e0;
      }
    }
    pbVar5 = pbVar10 + ((int)puVar2 - (int)puVar8);
    puVar2 = (uint *)(pbVar5 + -(int)(uint)*(byte *)(param_1 + 4));
    if ((((byte *)(uint)*(byte *)(param_1 + 4) <= pbVar5) &&
        (pbVar10 = (byte *)((int)puVar2 + (uint)*(byte *)(param_1 + 5)),
        !CARRY4((uint)puVar2,(uint)*(byte *)(param_1 + 5)) && pbVar10 < param_3)) &&
       (pbVar10[param_2] == *(byte *)(param_1 + 7))) {
      uVar1 = 1;
LAB_015fc9e4:
      return CONCAT44(puVar2,uVar1);
    }
    pbVar10 = pbVar5 + 1;
    if (param_3 <= pbVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(pbVar10,param_3,param_3,&DAT_01cfdd28);
    }
  } while( true );
}

