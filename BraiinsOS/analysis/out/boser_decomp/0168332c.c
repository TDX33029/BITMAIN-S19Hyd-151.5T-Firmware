// FUN_0168332c @ 0168332c size=396 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0168332c(uint param_1,byte *param_2,uint param_3,byte *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = 0;
  if (param_5 != 0) {
    uVar6 = (uint)param_2 & 0xff;
    param_2 = param_4 + param_5;
    param_1 = param_1 & 0xff;
    param_3 = param_3 & 0xff;
    if (param_5 < 4) {
      do {
        if (param_2 <= param_4) goto LAB_016834b0;
        param_2 = param_2 + -1;
        uVar3 = (uint)*param_2;
      } while ((param_3 != uVar3 && param_1 != uVar3) && (uVar6 != uVar3));
    }
    else {
      uVar5 = *(uint *)(param_2 + -4);
      uVar3 = uVar5 ^ param_1 * 0x1010101;
      if ((((~(0x1010100 - uVar3 | uVar3) & 0x80808080) == 0) &&
          (uVar3 = uVar5 ^ uVar6 * 0x1010101, (~(0x1010100 - uVar3 | uVar3) & 0x80808080) == 0)) &&
         (uVar5 = uVar5 ^ param_3 * 0x1010101, (~(0x1010100 - uVar5 | uVar5) & 0x80808080) == 0)) {
        iVar1 = param_5 - ((uint)param_2 & 3);
        while (iVar4 = iVar1, 3 < iVar4) {
          uVar5 = *(uint *)(param_4 + iVar4 + -4);
          uVar3 = uVar5 ^ param_1 * 0x1010101;
          uVar3 = ~(0x1010100 - uVar3 | uVar3);
          bVar7 = (uVar3 & 0x80808080) != 0;
          if (!bVar7) {
            uVar3 = uVar5 ^ uVar6 * 0x1010101;
            uVar3 = ~(0x1010100 - uVar3 | uVar3);
          }
          if ((bVar7 || (uVar3 & 0x80808080) != 0) ||
             (uVar5 = uVar5 ^ param_3 * 0x1010101, iVar1 = iVar4 + -4,
             (~(0x1010100 - uVar5 | uVar5) & 0x80808080) != 0)) break;
        }
        param_2 = param_4 + iVar4;
        do {
          if (param_2 <= param_4) goto LAB_016834b0;
          param_2 = param_2 + -1;
          uVar3 = (uint)*param_2;
        } while ((param_3 != uVar3 && param_1 != uVar3) && (uVar6 != uVar3));
      }
      else {
        do {
          if (param_2 <= param_4) goto LAB_016834b0;
          param_2 = param_2 + -1;
          uVar3 = (uint)*param_2;
        } while ((param_3 != uVar3 && param_1 != uVar3) && (uVar6 != uVar3));
      }
    }
    param_2 = param_2 + -(int)param_4;
    uVar2 = 1;
  }
LAB_016834b0:
  return CONCAT44(param_2,uVar2);
}

