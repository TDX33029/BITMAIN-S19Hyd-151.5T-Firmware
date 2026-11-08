// FUN_0167ca50 @ 0167ca50 size=340 calls_out=0 calls_in=1
// strings: 

longlong FUN_0167ca50(uint param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_3 == 0) {
    return ZEXT48(param_2) << 0x20;
  }
  param_1 = param_1 & 0xff;
  puVar3 = param_2;
  if (param_3 < 4) {
    do {
      if (param_1 == (byte)*puVar3) goto LAB_0167cb98;
      puVar3 = (uint *)((int)puVar3 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    uVar4 = param_1 * 0x1010101;
    if ((~(0x1010100 - (*param_2 ^ uVar4) | *param_2 ^ uVar4) & 0x80808080) == 0) {
      uVar5 = 4 - ((uint)param_2 & 3);
      puVar3 = (uint *)((int)param_2 + uVar5);
      if (param_3 < 9) {
        if (uVar5 < param_3) {
          iVar1 = param_3 + ((uint)param_2 & 3) + -4;
          do {
            if (param_1 == (byte)*puVar3) goto LAB_0167cb98;
            puVar3 = (uint *)((int)puVar3 + 1);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        puVar2 = (uint *)((int)param_2 + param_3);
        for (; puVar3 <= puVar2 + -2; puVar3 = puVar3 + 2) {
          uVar5 = ~(0x1010100 - (*puVar3 ^ uVar4) | *puVar3 ^ uVar4);
          bVar6 = (uVar5 & 0x80808080) != 0;
          if (!bVar6) {
            uVar5 = ~(0x1010100 - (puVar3[1] ^ uVar4) | puVar3[1] ^ uVar4);
          }
          if (bVar6 || (uVar5 & 0x80808080) != 0) break;
        }
        if (puVar3 < puVar2) {
          do {
            if (param_1 == (byte)*puVar3) goto LAB_0167cb98;
            puVar3 = (uint *)((int)puVar3 + 1);
          } while (puVar3 != puVar2);
        }
      }
    }
    else {
      do {
        if (param_1 == (byte)*puVar3) {
LAB_0167cb98:
          return CONCAT44((int)puVar3 - (int)param_2,1);
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  return ZEXT48(param_2) << 0x20;
}

