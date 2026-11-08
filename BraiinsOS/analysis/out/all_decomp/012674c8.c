// FUN_012674c8 @ 012674c8 size=496 calls_out=1 calls_in=0
// strings: 

longlong FUN_012674c8(int param_1,int param_2,byte *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  puVar1 = (uint *)(uint)*(byte *)(param_1 + 5);
  uVar3 = (uint)*(byte *)(param_1 + 6);
  puVar7 = (uint *)(param_3 + param_2);
  pbVar8 = (byte *)0x0;
  uVar9 = uVar3 * 0x1010101;
  puVar2 = puVar1;
  do {
    if (param_3 <= pbVar8) goto LAB_01267698;
    uVar5 = (int)param_3 - (int)pbVar8;
    puVar6 = (uint *)(pbVar8 + param_2);
    puVar2 = puVar6;
    if (uVar5 < 4) {
      while (uVar3 != (byte)*puVar2) {
        puVar2 = (uint *)((int)puVar2 + 1);
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_01267698;
      }
    }
    else if ((~(0x1010100 - (*puVar6 ^ uVar9) | *puVar6 ^ uVar9) & 0x80808080) == 0) {
      puVar2 = (uint *)(((uint)puVar6 & 0xfffffffc) + 4);
      if (uVar5 < 9) {
        if (puVar7 <= puVar2) goto LAB_01267698;
        pbVar4 = param_3 + ((((uint)puVar6 & 3) - 4) - (int)pbVar8);
        while (uVar3 != (byte)*puVar2) {
          puVar2 = (uint *)((int)puVar2 + 1);
          pbVar4 = pbVar4 + -1;
          if (pbVar4 == (byte *)0x0) goto LAB_01267698;
        }
      }
      else {
        for (; puVar2 <= puVar7 + -2; puVar2 = puVar2 + 2) {
          uVar5 = ~(0x1010100 - (*puVar2 ^ uVar9) | *puVar2 ^ uVar9);
          bVar10 = (uVar5 & 0x80808080) != 0;
          if (!bVar10) {
            uVar5 = ~(0x1010100 - (puVar2[1] ^ uVar9) | puVar2[1] ^ uVar9);
          }
          if (bVar10 || (uVar5 & 0x80808080) != 0) break;
        }
        if (puVar7 <= puVar2) {
LAB_01267698:
          return ZEXT48(puVar2) << 0x20;
        }
        while (uVar3 != (byte)*puVar2) {
          puVar2 = (uint *)((int)puVar2 + 1);
          if (puVar2 == puVar7) goto LAB_01267698;
        }
      }
    }
    else {
      while (uVar3 != (byte)*puVar2) {
        puVar2 = (uint *)((int)puVar2 + 1);
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_01267698;
      }
    }
    pbVar4 = pbVar8 + ((int)puVar2 - (int)puVar6);
    if ((byte *)(uint)*(byte *)(param_1 + 4) <= pbVar4) {
      puVar2 = (uint *)(pbVar4 + -(int)(uint)*(byte *)(param_1 + 4));
      if ((!CARRY4((uint)puVar2,(uint)puVar1) && (byte *)((int)puVar2 + (int)puVar1) < param_3) &&
         (((byte *)((int)puVar2 + (int)puVar1))[param_2] == *(byte *)(param_1 + 7))) {
        return CONCAT44(puVar2,1);
      }
    }
    pbVar8 = pbVar4 + 1;
    if (param_3 <= pbVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(pbVar8,param_3,param_3,&DAT_0188af9c);
    }
  } while( true );
}

