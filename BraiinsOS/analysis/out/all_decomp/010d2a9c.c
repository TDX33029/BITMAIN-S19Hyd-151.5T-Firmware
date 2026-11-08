// FUN_010d2a9c @ 010d2a9c size=1172 calls_out=1 calls_in=3
// strings: 

longlong FUN_010d2a9c(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar4 = 0;
  if (*param_1 != 1) goto LAB_010d2f24;
  uVar7 = param_1[1];
  param_2 = param_2 & 0xffff;
  if (param_1[2] == 1) {
    uVar1 = param_1[5];
    if (uVar1 <= uVar7) goto LAB_010d2e54;
    iVar2 = param_1[4];
    param_4 = (uint)*(ushort *)(iVar2 + uVar7 * 2);
    if (param_2 != param_4) goto LAB_010d2e88;
    param_4 = param_1[3];
    uVar7 = uVar7 + 1;
    uVar4 = 1;
    *param_1 = 1;
    param_1[1] = uVar7;
    if (param_4 == 0) {
      uVar4 = 0;
      param_1[2] = 0;
      if ((uVar1 <= uVar7) || (uVar4 = 1, *(ushort *)(iVar2 + uVar7 * 2) < 0x40)) goto LAB_010d2e54;
      goto LAB_010d2ea8;
    }
    param_1[2] = 1;
    param_1[3] = param_4 - 1;
    goto LAB_010d2e54;
  }
  uVar1 = param_1[5];
  if (uVar1 <= uVar7) goto LAB_010d2f24;
  iVar2 = param_1[4];
  uVar6 = *(ushort *)(iVar2 + uVar7 * 2);
  param_4 = (uint)uVar6;
  uVar3 = uVar7 + 1;
  if (param_4 < 0x30) {
    uVar5 = param_4;
LAB_010d2b30:
    param_4 = 0xffff;
    if (uVar5 == 0) {
      if (uVar1 <= uVar3) goto LAB_010d2f24;
      iVar8 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      uVar5 = (uint)*(ushort *)(iVar2 + iVar8);
    }
    param_4 = uVar5 + 1;
    if (4 < uVar5) {
      do {
        while( true ) {
          if (uVar1 <= uVar3) goto LAB_010d2f24;
          uVar7 = uVar3 + 1;
          if (param_2 < *(ushort *)(iVar2 + uVar3 * 2)) break;
          if (uVar1 <= uVar7) goto LAB_010d2f24;
          iVar8 = 3;
          param_4 = param_4 - (param_4 >> 1);
          uVar6 = *(ushort *)(iVar2 + uVar7 * 2);
          if (uVar6 == 0xffff) {
            iVar8 = 4;
          }
          if (uVar6 < 0xfc00) {
            iVar8 = 2;
          }
          uVar3 = iVar8 + uVar3;
joined_r0x010d2b7c:
          if (param_4 < 6) goto LAB_010d2c68;
        }
        if (uVar1 <= uVar7) goto LAB_010d2f24;
        uVar7 = (uint)*(ushort *)(iVar2 + uVar7 * 2);
        if (uVar7 < 0xfc00) {
          uVar3 = uVar3 + uVar7 + 2;
joined_r0x010d2b7c:
          param_4 = param_4 >> 1;
          goto joined_r0x010d2b7c;
        }
        uVar5 = uVar3 + 2;
        if (uVar7 == 0xffff) {
          if ((uVar5 < uVar1) && (uVar3 + 3 < uVar1)) {
            uVar3 = uVar3 + CONCAT22(*(undefined2 *)(iVar2 + uVar5 * 2),
                                     *(undefined2 *)(iVar2 + (uVar3 + 3) * 2)) + 4;
            goto joined_r0x010d2b7c;
          }
          goto LAB_010d2f24;
        }
        if (uVar1 <= uVar5) goto LAB_010d2f24;
        uVar3 = uVar3 + (uVar7 + 0x400) * 0x10000 + (uint)*(ushort *)(iVar2 + uVar5 * 2) + 3;
        param_4 = param_4 >> 1;
      } while (5 < param_4);
    }
LAB_010d2c68:
    do {
      if (uVar1 <= uVar3) goto LAB_010d2f24;
      uVar7 = uVar3 + 1;
      if (param_2 == *(ushort *)(iVar2 + uVar3 * 2)) {
        if (uVar1 <= uVar7) goto LAB_010d2f24;
        uVar6 = *(ushort *)(iVar2 + uVar7 * 2);
        if ((short)uVar6 < 0) {
          *param_1 = 1;
          param_1[1] = uVar7;
          goto LAB_010d2ea8;
        }
        uVar7 = (uint)uVar6;
        param_4 = uVar3 + 2;
        if (uVar7 < 0x4000) {
          uVar7 = param_4 + uVar7;
        }
        else if (uVar7 == 0x7fff) {
          if ((uVar1 <= param_4) || (uVar1 <= uVar3 + 3)) goto LAB_010d2f24;
          param_4 = CONCAT22(*(undefined2 *)(iVar2 + param_4 * 2),
                             *(undefined2 *)(iVar2 + (uVar3 + 3) * 2));
          uVar7 = uVar3 + param_4 + 4;
        }
        else {
          if (uVar1 <= param_4) goto LAB_010d2f24;
          param_4 = (uint)*(ushort *)(iVar2 + param_4 * 2);
          uVar7 = uVar3 + (uVar7 - 0x4000) * 0x10000 + param_4 + 3;
        }
        if (uVar1 <= uVar7) goto LAB_010d2e54;
        *param_1 = 1;
        param_1[1] = uVar7;
        uVar6 = *(ushort *)(iVar2 + uVar7 * 2);
        goto joined_r0x010d2e44;
      }
      if (uVar1 <= uVar7) goto LAB_010d2f24;
      iVar8 = 3;
      param_4 = param_4 - 1;
      uVar6 = *(ushort *)(iVar2 + uVar7 * 2) & 0x7fff;
      if (uVar6 == 0x7fff) {
        iVar8 = 4;
      }
      if (uVar6 < 0x4000) {
        iVar8 = 2;
      }
      uVar3 = iVar8 + uVar3;
    } while (1 < param_4);
    if (uVar1 <= uVar3) {
LAB_010d2f24:
      return (ulonglong)param_4 << 0x20;
    }
    param_4 = (uint)*(ushort *)(iVar2 + uVar3 * 2);
    if (param_2 != param_4) goto LAB_010d2e88;
    uVar7 = uVar3 + 1;
    *param_1 = 1;
    param_1[1] = uVar7;
    if (uVar7 < uVar1) {
      uVar6 = *(ushort *)(iVar2 + uVar7 * 2);
joined_r0x010d2e44:
      uVar4 = 1;
      if (uVar6 < 0x40) goto LAB_010d2e54;
      goto LAB_010d2ea8;
    }
    goto LAB_010d2e54;
  }
  uVar5 = param_4 & 0x3f;
  if (uVar5 < 0x30) {
    if (0x3f < param_4) {
      if ((short)uVar6 < 0) goto LAB_010d2e88;
      if (0x403f < param_4) {
        if (param_4 < 0x7fc0) {
          uVar3 = uVar7 + 2;
        }
        else {
          uVar3 = uVar7 + 3;
        }
      }
      goto LAB_010d2b30;
    }
LAB_010d2d48:
    uVar5 = param_4;
  }
  else {
    if (param_4 < 0x40) goto LAB_010d2d48;
    if ((short)uVar6 < 0) goto LAB_010d2e88;
    if (0x403f < param_4) {
      if (param_4 < 0x7fc0) {
        uVar3 = uVar7 + 2;
      }
      else {
        uVar3 = uVar7 + 3;
      }
    }
  }
  if (uVar3 < uVar1) {
    param_4 = (uint)*(ushort *)(iVar2 + uVar3 * 2);
    if (param_2 != param_4) {
LAB_010d2e88:
      *param_1 = 0;
      return (ulonglong)param_4 << 0x20;
    }
    uVar7 = uVar3 + 1;
    if (uVar5 != 0x30) {
      *param_1 = 1;
      param_1[1] = uVar7;
      param_1[2] = 1;
      param_1[3] = uVar5 - 0x31;
      return CONCAT44(uVar5,1);
    }
    param_4 = 1;
    param_1[1] = uVar7;
    param_1[2] = 0;
    *param_1 = 1;
    if ((uVar7 < uVar1) && (uVar4 = 1, 0x3f < *(ushort *)(iVar2 + uVar7 * 2))) {
LAB_010d2ea8:
      lVar9 = FUN_010d2f30(iVar2,uVar1,uVar7);
      return lVar9;
    }
  }
LAB_010d2e54:
  return CONCAT44(param_4,uVar4);
}

