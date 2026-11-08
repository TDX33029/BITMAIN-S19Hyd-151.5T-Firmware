// FUN_01446f44 @ 01446f44 size=1016 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01446f44(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar4 = 0;
  if (*param_1 != 1) goto LAB_01447244;
  uVar7 = param_1[1];
  param_2 = param_2 & 0xffff;
  if (param_1[2] == 1) {
    uVar1 = param_1[5];
    if (uVar1 <= uVar7) goto LAB_01447244;
    iVar2 = param_1[4];
    param_4 = (uint)*(ushort *)(iVar2 + uVar7 * 2);
    if (param_2 != param_4) {
LAB_01447240:
      uVar4 = 0;
      *param_1 = 0;
      goto LAB_01447244;
    }
    param_4 = param_1[3];
    uVar7 = uVar7 + 1;
    uVar4 = 1;
    *param_1 = 1;
    param_1[1] = uVar7;
    if (param_4 != 0) {
      param_1[2] = 1;
      param_1[3] = param_4 - 1;
      goto LAB_01447244;
    }
    uVar4 = 0;
    param_1[2] = 0;
    if ((uVar1 <= uVar7) || (uVar4 = 1, *(ushort *)(iVar2 + uVar7 * 2) < 0x40)) goto LAB_01447244;
  }
  else {
    uVar1 = param_1[5];
    if (uVar1 <= uVar7) goto LAB_01447244;
    iVar2 = param_1[4];
    uVar5 = (uint)*(ushort *)(iVar2 + uVar7 * 2);
    uVar3 = uVar7 + 1;
    if (0x2f < uVar5) {
      param_4 = uVar5 & 0x3f;
      do {
        if (uVar5 < 0x40) {
          if (uVar1 <= uVar3) goto LAB_01447244;
          param_4 = (uint)*(ushort *)(iVar2 + uVar3 * 2);
          if (param_2 != param_4) goto LAB_01447240;
          uVar7 = uVar3 + 1;
          if (uVar5 != 0x30) {
            uVar4 = 1;
            *param_1 = 1;
            param_1[1] = uVar7;
            param_1[2] = 1;
            param_1[3] = uVar5 - 0x31;
            goto LAB_01447244;
          }
          param_4 = 1;
          uVar4 = 0;
          *param_1 = 1;
          param_1[1] = uVar7;
          param_1[2] = 0;
          if ((uVar1 <= uVar7) || (uVar4 = 1, *(ushort *)(iVar2 + uVar7 * 2) < 0x40))
          goto LAB_01447244;
          goto LAB_014472cc;
        }
        if ((short)uVar5 < 0) goto LAB_01447240;
        if (0x403f < uVar5) {
          if (uVar5 < 0x7fc0) {
            uVar3 = uVar3 + 1;
          }
          else {
            uVar3 = uVar3 + 2;
          }
        }
        uVar5 = param_4;
      } while (0x2f < param_4);
    }
    if (uVar5 == 0) {
      if (uVar1 <= uVar3) goto LAB_01447244;
      iVar8 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      uVar5 = (uint)*(ushort *)(iVar2 + iVar8);
    }
    param_4 = uVar5 + 1;
    if (4 < uVar5) {
      do {
        if (uVar1 <= uVar3) goto LAB_01447244;
        uVar7 = uVar3 + 1;
        if (param_2 < *(ushort *)(iVar2 + uVar3 * 2)) {
          if (uVar1 <= uVar7) goto LAB_01447244;
          uVar7 = (uint)*(ushort *)(iVar2 + uVar7 * 2);
          if (uVar7 < 0xfc00) {
            uVar3 = uVar3 + uVar7 + 2;
          }
          else {
            uVar5 = uVar3 + 2;
            if (uVar7 == 0xffff) {
              uVar7 = 0xffff;
              if (uVar1 > uVar5) {
                uVar7 = uVar3 + 3;
              }
              if (uVar1 <= uVar5 || uVar1 <= uVar7) goto LAB_01447244;
              uVar3 = uVar3 + (uint)*(ushort *)(iVar2 + uVar5 * 2) * 0x10000 +
                      (uint)*(ushort *)(iVar2 + uVar7 * 2) + 4;
            }
            else {
              if (uVar1 <= uVar5) goto LAB_01447244;
              uVar3 = uVar3 + (uVar7 + 0x400) * 0x10000 + (uint)*(ushort *)(iVar2 + uVar5 * 2) + 3;
            }
          }
          param_4 = param_4 >> 1;
        }
        else {
          if (uVar1 <= uVar7) goto LAB_01447244;
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
        }
      } while (5 < param_4);
    }
    do {
      if (uVar1 <= uVar3) goto LAB_01447244;
      uVar7 = uVar3 + 1;
      if (param_2 == *(ushort *)(iVar2 + uVar3 * 2)) {
        if (uVar1 <= uVar7) goto LAB_01447244;
        uVar6 = *(ushort *)(iVar2 + uVar7 * 2);
        if ((short)uVar6 < 0) {
          *param_1 = 1;
          param_1[1] = uVar7;
          goto LAB_014472cc;
        }
        uVar7 = (uint)uVar6;
        param_4 = uVar3 + 2;
        if (uVar7 < 0x4000) {
          uVar7 = param_4 + uVar7;
        }
        else if (uVar7 == 0x7fff) {
          uVar7 = 0x7fff;
          if (uVar1 > param_4) {
            uVar7 = uVar3 + 3;
          }
          if (uVar1 <= param_4 || uVar1 <= uVar7) goto LAB_01447244;
          param_4 = CONCAT22(*(undefined2 *)(iVar2 + param_4 * 2),*(undefined2 *)(iVar2 + uVar7 * 2)
                            );
          uVar7 = uVar3 + param_4 + 4;
        }
        else {
          if (uVar1 <= param_4) goto LAB_01447244;
          param_4 = (uint)*(ushort *)(iVar2 + param_4 * 2);
          uVar7 = uVar3 + (uVar7 - 0x4000) * 0x10000 + param_4 + 3;
        }
        if (uVar1 <= uVar7) goto LAB_01447244;
        uVar4 = 1;
        *param_1 = 1;
        param_1[1] = uVar7;
        if (*(ushort *)(iVar2 + uVar7 * 2) < 0x40) goto LAB_01447244;
        goto LAB_014472cc;
      }
      if (uVar1 <= uVar7) goto LAB_01447244;
      uVar6 = *(ushort *)(iVar2 + uVar7 * 2) & 0x7fff;
      if (uVar6 < 0x4000) {
        uVar3 = uVar3 + 2;
      }
      else if (uVar6 == 0x7fff) {
        uVar3 = uVar3 + 4;
      }
      else {
        uVar3 = uVar3 + 3;
      }
      param_4 = param_4 - 1;
    } while (1 < param_4);
    if (uVar1 <= uVar3) goto LAB_01447244;
    param_4 = (uint)*(ushort *)(iVar2 + uVar3 * 2);
    if (param_2 != param_4) goto LAB_01447240;
    uVar7 = uVar3 + 1;
    *param_1 = 1;
    param_1[1] = uVar7;
    if ((uVar1 <= uVar7) || (uVar4 = 1, *(ushort *)(iVar2 + uVar7 * 2) < 0x40)) goto LAB_01447244;
  }
LAB_014472cc:
  uVar9 = FUN_0144733c(iVar2,uVar1,uVar7);
  param_4 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar4 = (undefined4)uVar9;
LAB_01447244:
  return CONCAT44(param_4,uVar4);
}

