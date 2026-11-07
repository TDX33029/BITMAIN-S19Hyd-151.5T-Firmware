// FUN_01b8c6b8 @ 01b8c6b8 size=1600 calls_out=5 calls_in=2
// strings: 

uint FUN_01b8c6b8(int param_1,int *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_40;
  int local_34;
  int local_2c;
  
  if ((uint)param_2[1] < (uint)param_2[2]) {
    return 0xffffffba;
  }
  uVar9 = param_3[1];
  uVar10 = param_3[2];
  if (uVar9 < uVar10) {
    return 0xffffffb8;
  }
  if (2 < param_4) {
    return 0xffffffd6;
  }
  if (*(int *)(param_1 + 0x974) == 0) {
    uVar5 = (uVar9 + *(int *)(param_1 + 0x988)) - uVar10;
    if ((*(int *)(param_1 + 0x7c) == 1) && (uVar5 < 0x20000 && param_4 == 0)) {
      if (*(int *)(param_1 + 0x988) != 0) {
        if (*param_3 != *(int *)(param_1 + 0x97c)) {
          return 0xffffffce;
        }
        if (uVar10 != *(uint *)(param_1 + 0x980)) {
          return 0xffffffce;
        }
      }
      param_3[2] = uVar9;
      iVar2 = param_3[1];
      iVar3 = param_3[2];
      *(int *)(param_1 + 0x97c) = *param_3;
      *(int *)(param_1 + 0x980) = iVar2;
      *(int *)(param_1 + 0x984) = iVar3;
      *(uint *)(param_1 + 0x988) = uVar5;
      if (*(int *)(param_1 + 0xc) == 0) {
        return 6;
      }
      return 2;
    }
    uVar9 = FUN_01b8c328(param_1,param_4,uVar5);
    if (0xffffff88 < uVar9) {
      return uVar9;
    }
    if (*(int *)(param_1 + 300) == 1) {
      iVar2 = param_3[1];
      iVar3 = param_3[2];
      *(int *)(param_1 + 0x97c) = *param_3;
      *(int *)(param_1 + 0x980) = iVar2;
      *(int *)(param_1 + 0x984) = iVar3;
    }
    if (*(int *)(param_1 + 0x130) == 1) {
      *(int *)(param_1 + 0x98c) = param_2[1] - param_2[2];
    }
  }
  if (((*(int *)(param_1 + 300) == 1) &&
      ((*(int *)(param_1 + 0x97c) != *param_3 || (*(int *)(param_1 + 0x984) != param_3[2])))) ||
     ((*(int *)(param_1 + 0x130) == 1 && (param_2[1] - param_2[2] != *(int *)(param_1 + 0x98c))))) {
    return 0xffffffce;
  }
  iVar2 = *param_3;
  if (iVar2 == 0) {
    iVar3 = 0;
    local_2c = 0;
  }
  else {
    iVar3 = iVar2 + param_3[2];
    local_2c = iVar2 + param_3[1];
  }
  iVar4 = *param_2;
  if (iVar4 == 0) {
    iVar6 = 0;
    local_40 = 0;
  }
  else {
    iVar6 = iVar4 + param_2[2];
    local_40 = iVar4 + param_2[1];
  }
  if (*(int *)(param_1 + 300) == 1) {
    if (iVar3 != 0) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x988);
    }
    param_3[2] = param_3[2] - *(int *)(param_1 + 0x988);
    *(undefined4 *)(param_1 + 0x988) = 0;
  }
  do {
    while (iVar7 = *(int *)(param_1 + 0x974), iVar7 != 1) {
      while (iVar7 != 2) {
        if (iVar7 == 0) {
          return 0xffffffc2;
        }
      }
LAB_01b8cc3c:
      uVar10 = local_40 - iVar6;
      uVar9 = *(int *)(param_1 + 0x96c) - *(int *)(param_1 + 0x970);
      if (uVar9 < uVar10) {
        uVar5 = uVar9;
      }
      else {
        uVar5 = uVar10;
      }
      if (uVar5 != 0) {
        FUN_01bed4e2(iVar6,*(int *)(param_1 + 0x964) + *(int *)(param_1 + 0x970));
      }
      iVar6 = iVar6 + uVar5;
      *(uint *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + uVar5;
      if (uVar10 < uVar9) goto LAB_01b8c9f4;
      *(undefined4 *)(param_1 + 0x970) = 0;
      *(undefined4 *)(param_1 + 0x96c) = 0;
      if (*(int *)(param_1 + 0x978) != 0) {
        *(undefined4 *)(param_1 + 0x974) = 0;
        goto LAB_01b8cb68;
      }
      *(undefined4 *)(param_1 + 0x974) = 1;
    }
    if ((param_4 == 2) &&
       (((uVar9 = FUN_01b87828(local_2c - iVar3,local_2c - iVar3,local_40 - iVar6),
         uVar9 <= extraout_r2 || (*(int *)(param_1 + 0x130) == 1)) &&
        (*(int *)(param_1 + 0x95c) == 0)))) {
      uVar9 = FUN_01b8b940(param_1,iVar6);
      if (0xffffff88 < uVar9) {
        return uVar9;
      }
      *(undefined4 *)(param_1 + 0x978) = 1;
      iVar6 = iVar6 + uVar9;
      *(undefined4 *)(param_1 + 0x974) = 0;
      *(undefined4 *)(param_1 + 600) = 0;
      *(undefined4 *)(param_1 + 0x25c) = 0;
LAB_01b8c97c:
      iVar3 = local_2c;
      goto LAB_01b8c9f4;
    }
    if (*(int *)(param_1 + 300) == 0) {
      uVar9 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
      if ((uint)(local_2c - iVar3) <= uVar9) {
        uVar9 = local_2c - iVar3;
      }
      if (uVar9 != 0) {
        FUN_01bed4e2(*(int *)(param_1 + 0x950) + *(int *)(param_1 + 0x95c),iVar3,uVar9);
      }
      if (iVar3 != 0) {
        iVar3 = iVar3 + uVar9;
      }
      uVar9 = uVar9 + *(int *)(param_1 + 0x95c);
      *(uint *)(param_1 + 0x95c) = uVar9;
      if (param_4 == 0) {
        if (uVar9 < *(uint *)(param_1 + 0x960)) goto LAB_01b8c9f4;
      }
      else if ((param_4 == 1) && (uVar9 == *(uint *)(param_1 + 0x958))) goto LAB_01b8c9f4;
    }
    else if (param_4 == 0) {
      if ((uint)(local_2c - iVar3) < *(uint *)(param_1 + 0x250)) {
        *(int *)(param_1 + 0x988) = local_2c - iVar3;
        goto LAB_01b8c97c;
      }
    }
    else if (param_4 == 1 && local_2c == iVar3) goto LAB_01b8c9f4;
    if (*(int *)(param_1 + 300) == 0) {
      uVar9 = *(int *)(param_1 + 0x95c) - *(int *)(param_1 + 0x958);
    }
    else {
      uVar9 = local_2c - iVar3;
      if (*(uint *)(param_1 + 0x250) <= (uint)(local_2c - iVar3)) {
        uVar9 = *(uint *)(param_1 + 0x250);
      }
    }
    uVar11 = FUN_01b87828(uVar9,*(int *)(param_1 + 300),local_40 - iVar6);
    if ((extraout_r2_00 < (uint)uVar11) && (*(int *)(param_1 + 0x130) != 1)) {
      local_34 = *(int *)(param_1 + 0x964);
    }
    else {
      local_34 = iVar6;
    }
    if ((int)((ulonglong)uVar11 >> 0x20) == 0) {
      bVar1 = param_4 == 2 && local_2c == iVar3;
      if (bVar1) {
        uVar10 = FUN_01b8b940();
      }
      else {
        uVar10 = FUN_01b8aeac(param_1,local_34);
      }
      if (0xffffff88 < uVar10) {
        return uVar10;
      }
      iVar7 = *(int *)(param_1 + 0x95c);
      uVar9 = iVar7 + *(int *)(param_1 + 0x250);
      *(uint *)(param_1 + 0x978) = (uint)bVar1;
      *(uint *)(param_1 + 0x960) = uVar9;
      if (*(uint *)(param_1 + 0x954) < uVar9) {
        iVar7 = 0;
        *(int *)(param_1 + 0x960) = *(int *)(param_1 + 0x250);
        *(undefined4 *)(param_1 + 0x95c) = 0;
      }
      *(int *)(param_1 + 0x958) = iVar7;
    }
    else {
      if ((param_4 == 2) && (local_2c == iVar3 + uVar9)) {
        uVar10 = FUN_01b8b940(param_1,local_34);
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        uVar10 = FUN_01b8aeac(param_1,local_34);
      }
      if (iVar3 != 0) {
        iVar3 = iVar3 + uVar9;
      }
      if (0xffffff88 < uVar10) {
        return uVar10;
      }
      *(undefined4 *)(param_1 + 0x978) = uVar8;
    }
    if (iVar6 != local_34) {
      *(uint *)(param_1 + 0x96c) = uVar10;
      *(undefined4 *)(param_1 + 0x970) = 0;
      *(undefined4 *)(param_1 + 0x974) = 2;
      goto LAB_01b8cc3c;
    }
    iVar6 = iVar6 + uVar10;
  } while (*(int *)(param_1 + 0x978) == 0);
  *(undefined4 *)(param_1 + 0x974) = 0;
LAB_01b8cb68:
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
LAB_01b8c9f4:
  param_3[2] = iVar3 - iVar2;
  iVar2 = *(int *)(param_1 + 0x978);
  param_2[2] = iVar6 - iVar4;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 300) != 1) {
      uVar9 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x250);
      }
      if (0xffffff88 < uVar9) {
        return uVar9;
      }
      goto LAB_01b8ca34;
    }
    uVar9 = *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x988);
    if (0xffffff88 < uVar9) {
      return uVar9;
    }
  }
  else if (*(int *)(param_1 + 300) != 1) goto LAB_01b8ca34;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  *(int *)(param_1 + 0x97c) = *param_3;
  *(int *)(param_1 + 0x980) = iVar2;
  *(int *)(param_1 + 0x984) = iVar3;
LAB_01b8ca34:
  if (*(int *)(param_1 + 0x130) == 1) {
    *(int *)(param_1 + 0x98c) = param_2[1] - param_2[2];
  }
  return *(int *)(param_1 + 0x96c) - *(int *)(param_1 + 0x970);
}

