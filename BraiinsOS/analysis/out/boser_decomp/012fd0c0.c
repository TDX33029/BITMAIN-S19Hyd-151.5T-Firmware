// FUN_012fd0c0 @ 012fd0c0 size=656 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_012fd0c0(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint local_4c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar1 = *(ushort *)(param_1 + 3);
  uVar7 = (uint)uVar1;
  if (uVar7 == 0) {
    uVar9 = FUN_012fd360(*param_1,param_1[1]);
    return uVar9;
  }
  puVar8 = param_1 + 2;
  local_38 = *param_2;
  iVar3 = param_2[1];
  local_30 = param_2[2];
  local_2c = param_2[3];
  uVar5 = *puVar8;
  uVar9 = param_1[3];
  local_34 = iVar3;
  if ((uVar5 & 0x1000000) == 0) {
    local_4c = uVar5;
  }
  else {
    iVar4 = (**(code **)(param_1[1] + 0xc))(*param_1,local_38,iVar3);
    if (iVar4 != 0) {
      return 1;
    }
    uVar1 = UnsignedSaturate(uVar1 - (short)iVar3,0x10);
    UnsignedSaturate(-(short)((uint)iVar3 >> 0x10),0x10);
    uVar7 = (uint)uVar1;
    local_4c = uVar5 & 0x9fe00000 | 0x20000030;
    *puVar8 = local_4c;
    local_34 = 0;
    local_38 = 1;
  }
  if (local_2c == 0) {
    iVar3 = 0;
  }
  else {
    piVar11 = (int *)(local_30 + 4);
    iVar3 = 0;
    iVar4 = local_2c;
    do {
      if ((short)piVar11[-1] == 0) {
        iVar13 = *piVar11;
      }
      else if ((short)piVar11[-1] == 1) {
        uVar10 = (uint)*(ushort *)((int)piVar11 + -2);
        if (uVar10 == 0) {
          iVar13 = 1;
        }
        else {
          iVar13 = ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^ uVar10 + 0xdfc18 & uVar10 + 0x7d8f0) >>
                   0x11) + 1;
        }
      }
      else {
        iVar13 = piVar11[1];
      }
      iVar3 = iVar13 + iVar3;
      piVar11 = piVar11 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((uint)(iVar3 + local_34) < uVar7) {
    uVar7 = uVar7 - (iVar3 + local_34);
    uVar10 = 0;
    switch((local_4c & 0x7fffffff) >> 0x1d) {
    case 0:
      break;
    default:
      uVar10 = uVar7;
      break;
    case 2:
      uVar10 = (uVar7 & 0xffff) >> 1;
    }
    uVar12 = *param_1;
    uVar6 = 0;
    iVar3 = param_1[1];
    while ((uVar6 & 0xffff) < (uVar10 & 0xffff)) {
      iVar4 = (**(code **)(iVar3 + 0x10))(uVar12,local_4c & 0x1fffff);
      uVar6 = uVar6 + 1;
      if (iVar4 != 0) {
        return 1;
      }
    }
    iVar4 = FUN_012fd360(uVar12,iVar3,&local_38);
    if (iVar4 != 0) {
      return 1;
    }
    uVar2 = 0;
    uVar6 = 0;
    do {
      if ((uVar7 - uVar10 & 0xffff) <= (uVar6 & 0xffff)) goto LAB_012fd29c;
      iVar4 = (**(code **)(iVar3 + 0x10))(uVar12,local_4c & 0x1fffff);
      uVar6 = uVar6 + 1;
    } while (iVar4 == 0);
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_012fd360(*param_1,param_1[1],&local_38);
  }
LAB_012fd29c:
  *puVar8 = uVar5;
  param_1[3] = uVar9;
  return uVar2;
}

