// FUN_0167a21c @ 0167a21c size=724 calls_out=0 calls_in=1
// strings: 

void FUN_0167a21c(undefined1 *param_1,byte *param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (param_3 == 1) {
    bVar5 = *param_2;
    if (bVar5 == 0x2d || bVar5 == 0x2b) {
LAB_0167a254:
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
    bVar5 = *param_2;
  }
  if (bVar5 == 0x2d) {
    iVar9 = param_3 - 1;
    param_2 = param_2 + 1;
    if (0x10 < param_3) {
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar10 = (uint)((ulonglong)param_4 * (ulonglong)uVar7);
        lVar2 = (ulonglong)param_4 * (ulonglong)uVar6 +
                ((ulonglong)(((int)uVar6 >> 0x1f) * param_4) << 0x20 |
                (ulonglong)param_4 * (ulonglong)uVar7 >> 0x20);
        uVar3 = (uint)lVar2;
        uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar8 = (uint)*param_2;
        uVar6 = uVar8 - 0x30;
        if (0x39 < uVar8) {
          uVar6 = (uVar8 - 0x41 & 0xffffffdf) + 10;
        }
        if (param_4 < 0xb) {
          uVar6 = uVar8 - 0x30;
        }
        if (uVar7 != (int)uVar3 >> 0x1f || (int)(uVar7 ^ uVar3) < 0) {
          if (uVar6 < param_4) {
LAB_0167a4dc:
            param_1[1] = 3;
            *param_1 = 1;
            return;
          }
          goto LAB_0167a254;
        }
        if (param_4 <= uVar6) goto LAB_0167a254;
        uVar7 = uVar10 - uVar6;
        uVar6 = uVar3 - (uVar10 < uVar6);
        uVar1 = CONCAT44(uVar6,uVar7);
        if ((int)(uVar3 & (uVar3 ^ uVar6)) < 0) goto LAB_0167a4dc;
        iVar9 = iVar9 + -1;
        param_2 = param_2 + 1;
      } while (iVar9 != 0);
      goto LAB_0167a4a4;
    }
    if (iVar9 != 0) {
      uVar6 = 0;
      iVar4 = 0;
      if (param_4 < 0xb) {
        do {
          uVar7 = *param_2 - 0x30;
          if (param_4 <= uVar7) goto LAB_0167a254;
          uVar1 = (ulonglong)uVar6;
          uVar3 = (uint)(param_4 * uVar1);
          param_2 = param_2 + 1;
          uVar6 = uVar3 - uVar7;
          iVar4 = (iVar4 * param_4 + (int)(param_4 * uVar1 >> 0x20)) - (uint)(uVar3 < uVar7);
          uVar1 = CONCAT44(iVar4,uVar6);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      else {
        do {
          uVar7 = (uint)*param_2;
          uVar3 = uVar7 - 0x30;
          if (0x39 < uVar7) {
            uVar3 = (uVar7 - 0x41 & 0xffffffdf) + 10;
          }
          if (param_4 <= uVar3) goto LAB_0167a254;
          uVar1 = (ulonglong)uVar6;
          uVar7 = (uint)(param_4 * uVar1);
          param_2 = param_2 + 1;
          uVar6 = uVar7 - uVar3;
          iVar4 = (iVar4 * param_4 + (int)(param_4 * uVar1 >> 0x20)) - (uint)(uVar7 < uVar3);
          uVar1 = CONCAT44(iVar4,uVar6);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      goto LAB_0167a4a4;
    }
  }
  else {
    if (bVar5 == 0x2b) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    }
    if (0xf < param_3) {
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar10 = (uint)((ulonglong)param_4 * (ulonglong)uVar7);
        lVar2 = (ulonglong)param_4 * (ulonglong)uVar6 +
                ((ulonglong)(((int)uVar6 >> 0x1f) * param_4) << 0x20 |
                (ulonglong)param_4 * (ulonglong)uVar7 >> 0x20);
        uVar3 = (uint)lVar2;
        uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar7 = (uint)*param_2;
        uVar6 = uVar7 - 0x30;
        if (0x39 < uVar7) {
          uVar6 = (uVar7 - 0x41 & 0xffffffdf) + 10;
        }
        if (param_4 < 0xb) {
          uVar6 = uVar7 - 0x30;
        }
        if (uVar8 != (int)uVar3 >> 0x1f || (int)(uVar8 ^ uVar3) < 0) {
          if (uVar6 < param_4) {
LAB_0167a4c0:
            param_1[1] = 2;
            *param_1 = 1;
            return;
          }
          goto LAB_0167a254;
        }
        if (param_4 <= uVar6) goto LAB_0167a254;
        uVar7 = uVar10 + uVar6;
        uVar6 = uVar3 + CARRY4(uVar10,uVar6);
        uVar1 = CONCAT44(uVar6,uVar7);
        if ((int)((uVar3 ^ uVar6) & ~uVar3) < 0) goto LAB_0167a4c0;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
      goto LAB_0167a4a4;
    }
    if (param_3 != 0) {
      if (param_4 < 0xb) {
        uVar1 = 0;
        do {
          bVar5 = *param_2;
          if (param_4 <= bVar5 - 0x30) goto LAB_0167a254;
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
          uVar1 = (ulonglong)param_4 * (uVar1 & 0xffffffff) +
                  CONCAT44((int)(uVar1 >> 0x20) * param_4,bVar5 - 0x30);
        } while (param_3 != 0);
      }
      else {
        uVar1 = 0;
        do {
          uVar7 = (uint)*param_2;
          uVar6 = uVar7 - 0x30;
          if (0x39 < uVar7) {
            uVar6 = (uVar7 - 0x41 & 0xffffffdf) + 10;
          }
          if (param_4 <= uVar6) goto LAB_0167a254;
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
          uVar1 = (ulonglong)param_4 * (uVar1 & 0xffffffff) +
                  CONCAT44((int)(uVar1 >> 0x20) * param_4,uVar6);
        } while (param_3 != 0);
      }
      goto LAB_0167a4a4;
    }
  }
  uVar1 = 0;
LAB_0167a4a4:
  *(ulonglong *)(param_1 + 8) = uVar1;
  *param_1 = 0;
  return;
}

