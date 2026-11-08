// FUN_01a49970 @ 01a49970 size=600 calls_out=0 calls_in=1
// strings: 

void FUN_01a49970(undefined1 *param_1,byte *param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_3 == 1) {
    bVar7 = *param_2;
    if (bVar7 == 0x2d || bVar7 == 0x2b) {
LAB_01a499a4:
      uVar3 = 1;
      param_1[1] = 1;
      goto LAB_01a49ba0;
    }
  }
  else {
    if (param_3 == 0) {
      uVar3 = 0;
LAB_01a49988:
      param_1[1] = uVar3;
      uVar3 = 1;
      goto LAB_01a49ba0;
    }
    bVar7 = *param_2;
  }
  if (bVar7 == 0x2d) {
    iVar10 = param_3 - 1;
    param_2 = param_2 + 1;
    if (param_3 < 0x11) {
      if (iVar10 == 0) goto LAB_01a49b10;
      uVar4 = 0;
      iVar8 = 0;
      do {
        uVar5 = (uint)*param_2;
        uVar6 = uVar5 - 0x30;
        if (0x39 < uVar5) {
          uVar6 = (uVar5 - 0x41 & 0xffffffdf) + 10;
        }
        if (param_4 < 0xb) {
          uVar6 = uVar5 - 0x30;
        }
        if (param_4 <= uVar6) goto LAB_01a499a4;
        uVar1 = (ulonglong)uVar4;
        uVar5 = (uint)(param_4 * uVar1);
        param_2 = param_2 + 1;
        uVar4 = uVar5 - uVar6;
        iVar8 = (iVar8 * param_4 + (int)(param_4 * uVar1 >> 0x20)) - (uint)(uVar5 < uVar6);
        uVar1 = CONCAT44(iVar8,uVar4);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      do {
        uVar11 = (uint)((ulonglong)param_4 * (ulonglong)uVar4);
        lVar2 = (ulonglong)param_4 * (ulonglong)uVar6 +
                ((ulonglong)(((int)uVar6 >> 0x1f) * param_4) << 0x20 |
                (ulonglong)param_4 * (ulonglong)uVar4 >> 0x20);
        uVar5 = (uint)lVar2;
        uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar9 = (uint)*param_2;
        uVar6 = uVar9 - 0x30;
        if (0x39 < uVar9) {
          uVar6 = (uVar9 - 0x41 & 0xffffffdf) + 10;
        }
        if (param_4 < 0xb) {
          uVar6 = uVar9 - 0x30;
        }
        if (uVar4 != (int)uVar5 >> 0x1f || (int)(uVar4 ^ uVar5) < 0) {
          if (param_4 <= uVar6) goto LAB_01a499a4;
LAB_01a49bc0:
          uVar3 = 3;
          goto LAB_01a49988;
        }
        if (param_4 <= uVar6) goto LAB_01a499a4;
        uVar4 = uVar11 - uVar6;
        uVar6 = uVar5 - (uVar11 < uVar6);
        uVar1 = CONCAT44(uVar6,uVar4);
        if ((int)(uVar5 & (uVar5 ^ uVar6)) < 0) goto LAB_01a49bc0;
        iVar10 = iVar10 + -1;
        param_2 = param_2 + 1;
      } while (iVar10 != 0);
    }
  }
  else {
    if (bVar7 == 0x2b) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    }
    if (param_3 < 0x10) {
      if (param_3 == 0) {
LAB_01a49b10:
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        do {
          uVar6 = (uint)*param_2;
          uVar4 = uVar6 - 0x30;
          if (0x39 < uVar6) {
            uVar4 = (uVar6 - 0x41 & 0xffffffdf) + 10;
          }
          if (param_4 < 0xb) {
            uVar4 = uVar6 - 0x30;
          }
          if (param_4 <= uVar4) goto LAB_01a499a4;
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
          uVar1 = (ulonglong)param_4 * (uVar1 & 0xffffffff) +
                  CONCAT44((int)(uVar1 >> 0x20) * param_4,uVar4);
        } while (param_3 != 0);
      }
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      do {
        uVar11 = (uint)((ulonglong)param_4 * (ulonglong)uVar4);
        lVar2 = (ulonglong)param_4 * (ulonglong)uVar6 +
                ((ulonglong)(((int)uVar6 >> 0x1f) * param_4) << 0x20 |
                (ulonglong)param_4 * (ulonglong)uVar4 >> 0x20);
        uVar5 = (uint)lVar2;
        uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar9 = (uint)*param_2;
        uVar6 = uVar9 - 0x30;
        if (0x39 < uVar9) {
          uVar6 = (uVar9 - 0x41 & 0xffffffdf) + 10;
        }
        if (param_4 < 0xb) {
          uVar6 = uVar9 - 0x30;
        }
        if (uVar4 != (int)uVar5 >> 0x1f || (int)(uVar4 ^ uVar5) < 0) {
          if (param_4 <= uVar6) goto LAB_01a499a4;
LAB_01a49bb0:
          uVar3 = 2;
          goto LAB_01a49988;
        }
        if (param_4 <= uVar6) goto LAB_01a499a4;
        uVar4 = uVar11 + uVar6;
        uVar6 = uVar5 + CARRY4(uVar11,uVar6);
        uVar1 = CONCAT44(uVar6,uVar4);
        if ((int)((uVar5 ^ uVar6) & ~uVar5) < 0) goto LAB_01a49bb0;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  uVar3 = 0;
  *(ulonglong *)(param_1 + 8) = uVar1;
LAB_01a49ba0:
  *param_1 = uVar3;
  return;
}

