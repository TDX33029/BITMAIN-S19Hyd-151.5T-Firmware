// FUN_00fac518 @ 00fac518 size=676 calls_out=1 calls_in=6
// strings: 

undefined4 FUN_00fac518(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar1 = *(ushort *)(param_1 + 3);
  uVar8 = (uint)uVar1;
  if (uVar8 == 0) {
    uVar10 = FUN_00fac7cc(*param_1,param_1[1]);
    return uVar10;
  }
  puVar9 = param_1 + 2;
  local_38 = *param_2;
  iVar4 = param_2[1];
  local_30 = param_2[2];
  local_2c = param_2[3];
  uVar6 = *puVar9;
  uVar10 = param_1[3];
  uVar3 = uVar6;
  local_34 = iVar4;
  if ((uVar6 & 0x1000000) != 0) {
    iVar5 = (**(code **)(param_1[1] + 0xc))(*param_1,local_38,iVar4);
    if (iVar5 != 0) {
      return 1;
    }
    uVar1 = UnsignedSaturate(uVar1 - (short)iVar4,0x10);
    UnsignedSaturate(-(short)((uint)iVar4 >> 0x10),0x10);
    uVar8 = (uint)uVar1;
    uVar3 = uVar6 & 0x9fe00000 | 0x20000030;
    *puVar9 = uVar3;
    local_34 = 0;
    local_38 = 1;
  }
  if (local_2c == 0) {
    iVar4 = 0;
  }
  else {
    piVar12 = (int *)(local_30 + 4);
    iVar4 = 0;
    iVar5 = local_2c;
    do {
      if ((short)piVar12[-1] == 0) {
        iVar14 = *piVar12;
      }
      else if ((short)piVar12[-1] == 1) {
        uVar11 = (uint)*(ushort *)((int)piVar12 + -2);
        if (uVar11 == 0) {
          iVar14 = 1;
        }
        else {
          iVar14 = ((uVar11 + 0x5fff6 & uVar11 + 0x7ff9c ^ uVar11 + 0xdfc18 & uVar11 + 0x7d8f0) >>
                   0x11) + 1;
        }
      }
      else {
        iVar14 = piVar12[1];
      }
      iVar4 = iVar14 + iVar4;
      piVar12 = piVar12 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((uint)(iVar4 + local_34) < uVar8) {
    uVar8 = uVar8 - (iVar4 + local_34);
    uVar11 = 0;
    switch((uVar3 & 0x7fffffff) >> 0x1d) {
    case 0:
      break;
    default:
      uVar11 = uVar8;
      break;
    case 2:
      uVar11 = (uVar8 & 0xffff) >> 1;
    }
    uVar13 = *param_1;
    uVar7 = 0;
    iVar4 = param_1[1];
    while ((uVar7 & 0xffff) < (uVar11 & 0xffff)) {
      iVar5 = (**(code **)(iVar4 + 0x10))(uVar13,uVar3 & 0x1fffff);
      uVar7 = uVar7 + 1;
      if (iVar5 != 0) {
        return 1;
      }
    }
    iVar5 = FUN_00fac7cc(uVar13,iVar4,&local_38);
    if (iVar5 != 0) {
      return 1;
    }
    uVar2 = 0;
    uVar7 = 0;
    do {
      if ((uVar8 - uVar11 & 0xffff) <= (uVar7 & 0xffff)) goto LAB_00fac700;
      iVar5 = (**(code **)(iVar4 + 0x10))(uVar13,uVar3 & 0x1fffff);
      uVar7 = uVar7 + 1;
    } while (iVar5 == 0);
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00fac7cc(*param_1,param_1[1],&local_38);
  }
LAB_00fac700:
  *puVar9 = uVar6;
  param_1[3] = uVar10;
  return uVar2;
}

