// FUN_017a2180 @ 017a2180 size=580 calls_out=2 calls_in=1
// strings: 

uint FUN_017a2180(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8)) {
    return 0xffffffba;
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  if (uVar4 < uVar5) {
    return 0xffffffb8;
  }
  if (2 < param_4) {
    return 0xffffffd6;
  }
  if (*(int *)(param_1 + 0x974) == 0) {
    iVar1 = uVar4 + *(int *)(param_1 + 0x988);
    iVar3 = iVar1 - uVar5;
    if ((*(int *)(param_1 + 0x7c) == 1) && (iVar1 - uVar5 < 0x20000 && param_4 == 0)) {
      if (*(int *)(param_1 + 0x988) != 0) {
        if (*param_3 != *(int *)(param_1 + 0x97c)) {
          return 0xffffffce;
        }
        if (uVar5 != *(uint *)(param_1 + 0x980)) {
          return 0xffffffce;
        }
      }
      param_3[2] = uVar4;
      iVar1 = param_3[1];
      iVar2 = param_3[2];
      *(int *)(param_1 + 0x97c) = *param_3;
      *(int *)(param_1 + 0x980) = iVar1;
      *(int *)(param_1 + 0x984) = iVar2;
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar4 = 6;
      }
      else {
        uVar4 = 2;
      }
      *(int *)(param_1 + 0x988) = iVar3;
      return uVar4;
    }
    uVar4 = FUN_017a15c4(param_1,param_4,iVar3);
    if (0xffffff88 < uVar4) {
      return uVar4;
    }
    if (*(int *)(param_1 + 300) != 1) {
      if (*(int *)(param_1 + 0x130) == 1) {
        *(int *)(param_1 + 0x98c) = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
      }
      goto LAB_017a226c;
    }
    iVar1 = param_3[1];
    iVar3 = param_3[2];
    *(int *)(param_1 + 0x97c) = *param_3;
    *(int *)(param_1 + 0x980) = iVar1;
    *(int *)(param_1 + 0x984) = iVar3;
    if (*(int *)(param_1 + 0x130) == 1) {
      *(int *)(param_1 + 0x98c) = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
    }
LAB_017a2358:
    if (*(int *)(param_1 + 0x97c) != *param_3) {
      return 0xffffffce;
    }
    if (*(int *)(param_1 + 0x984) != param_3[2]) {
      return 0xffffffce;
    }
  }
  else if (*(int *)(param_1 + 300) == 1) goto LAB_017a2358;
  if ((*(int *)(param_1 + 0x130) == 1) &&
     (*(int *)(param_2 + 4) - *(int *)(param_2 + 8) != *(int *)(param_1 + 0x98c))) {
    return 0xffffffce;
  }
LAB_017a226c:
  uVar4 = FUN_017a05f8(param_1,param_2,param_3,param_4);
  if (0xffffff88 < uVar4) {
    return uVar4;
  }
  if (*(int *)(param_1 + 300) == 1) {
    iVar1 = param_3[1];
    iVar3 = param_3[2];
    *(int *)(param_1 + 0x97c) = *param_3;
    *(int *)(param_1 + 0x980) = iVar1;
    *(int *)(param_1 + 0x984) = iVar3;
  }
  if (*(int *)(param_1 + 0x130) == 1) {
    *(int *)(param_1 + 0x98c) = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
  }
  return *(int *)(param_1 + 0x96c) - *(int *)(param_1 + 0x970);
}

