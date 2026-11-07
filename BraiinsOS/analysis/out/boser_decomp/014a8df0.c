// FUN_014a8df0 @ 014a8df0 size=452 calls_out=0 calls_in=6
// strings: 

longlong FUN_014a8df0(char *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  if (*param_1 != '\x03') {
    if (*param_1 != '\x02') {
      return ZEXT48(param_1) << 0x20;
    }
    if (((*(uint *)(param_1 + 8) & 3) == 0) || (*(uint *)(param_1 + 8) != 2)) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar2 = (undefined4)(longlong)*(double *)(param_1 + 0x10);
    }
    return CONCAT44(uVar2,1);
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  if (uVar7 == 0) {
    uVar2 = 0;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 8);
    if (uVar7 == 1) {
      bVar5 = *pbVar4;
      if (bVar5 == 0x2b) {
LAB_014a8fa8:
        return ZEXT48(param_1) << 0x20;
      }
      if (bVar5 == 0x2d) {
        return ZEXT48(param_1) << 0x20;
      }
    }
    else {
      bVar5 = *pbVar4;
    }
    if (bVar5 == 0x2d) {
      iVar6 = uVar7 - 1;
      pbVar4 = pbVar4 + 1;
      if (8 < uVar7) {
        param_1 = (char *)0x0;
        do {
          lVar1 = (longlong)(int)param_1;
          param_1 = (char *)(lVar1 * 10);
          if ((((int)((ulonglong)(lVar1 * 10) >> 0x20) != (int)param_1 >> 0x1f) ||
              (uVar7 = *pbVar4 - 0x30, 9 < uVar7)) ||
             (bVar8 = SBORROW4((int)param_1,uVar7), param_1 = param_1 + -uVar7, bVar8))
          goto LAB_014a8fa8;
          iVar6 = iVar6 + -1;
          pbVar4 = pbVar4 + 1;
        } while (iVar6 != 0);
        goto LAB_014a8fa0;
      }
      uVar2 = 1;
      if (iVar6 == 0) {
        return 1;
      }
      param_1 = (char *)0x0;
      do {
        bVar5 = *pbVar4;
        if (9 < bVar5 - 0x30) goto LAB_014a8fac;
        pbVar4 = pbVar4 + 1;
        iVar6 = iVar6 + -1;
        param_1 = (char *)((int)param_1 * 10 - (bVar5 - 0x30));
      } while (iVar6 != 0);
    }
    else {
      if (bVar5 == 0x2b) {
        uVar7 = uVar7 - 1;
        pbVar4 = pbVar4 + 1;
      }
      if (7 < uVar7) {
        param_1 = (char *)0x0;
        do {
          lVar1 = (longlong)(int)param_1;
          param_1 = (char *)(lVar1 * 10);
          if ((((int)((ulonglong)(lVar1 * 10) >> 0x20) != (int)param_1 >> 0x1f) ||
              (uVar3 = *pbVar4 - 0x30, 9 < uVar3)) ||
             (bVar8 = SCARRY4((int)param_1,uVar3), param_1 = param_1 + uVar3, bVar8))
          goto LAB_014a8fa8;
          uVar7 = uVar7 - 1;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
LAB_014a8fa0:
        return CONCAT44(param_1,1);
      }
      uVar2 = 1;
      if (uVar7 == 0) {
        return 1;
      }
      param_1 = (char *)0x0;
      do {
        bVar5 = *pbVar4;
        if (9 < bVar5 - 0x30) {
LAB_014a8fac:
          return ZEXT48(param_1) << 0x20;
        }
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar7 - 1;
        param_1 = (char *)((bVar5 - 0x30) + (int)param_1 * 10);
      } while (uVar7 != 0);
    }
  }
  return CONCAT44(param_1,uVar2);
}

