// FUN_012c704c @ 012c704c size=504 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_012c704c(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_1c [2];
  undefined4 local_14;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x14);
  if (uVar8 <= uVar7) {
LAB_012c7160:
    local_1c[0] = 0xd;
    uVar5 = FUN_012c6bfc(param_1,local_1c);
    return uVar5;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  uVar6 = uVar7 + 1;
  *(uint *)(param_1 + 0x14) = uVar6;
  if (*(byte *)(iVar9 + uVar7) == 0x30) {
    if ((uVar6 < uVar8) && (*(byte *)(iVar9 + uVar6) - 0x30 < 10)) goto LAB_012c7094;
  }
  else {
    if (8 < *(byte *)(iVar9 + uVar7) - 0x31) goto LAB_012c7160;
    if (uVar6 < uVar8) {
      while (*(byte *)(iVar9 + uVar6) - 0x30 < 10) {
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + 0x14) = uVar6;
        if (uVar8 == uVar6) {
          return 0;
        }
      }
    }
  }
  if (uVar8 <= uVar6) {
    return 0;
  }
  cVar1 = *(char *)(iVar9 + uVar6);
  if (cVar1 != 'e' && cVar1 != 'E') {
    if (cVar1 != '.') {
      return 0;
    }
    bVar4 = false;
    do {
      bVar3 = bVar4;
      uVar6 = uVar6 + 1;
      if (uVar8 == uVar6) {
        *(uint *)(param_1 + 0x14) = uVar8;
        if (bVar3) {
          return 0;
        }
        goto LAB_012c7094;
      }
      bVar2 = *(byte *)(iVar9 + uVar6);
      bVar4 = true;
    } while (bVar2 - 0x30 < 10);
    *(uint *)(param_1 + 0x14) = uVar6;
    if (!bVar3) {
LAB_012c7094:
      local_1c[0] = 0xd;
      uVar5 = FUN_012c6b30(param_1,local_1c);
      return uVar5;
    }
    if ((bVar2 | 0x20) != 0x65) {
      return 0;
    }
  }
  iVar9 = *(int *)(param_1 + 0x14);
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar7 = iVar9 + 1;
  *(uint *)(param_1 + 0x14) = uVar7;
  if ((uVar7 < uVar8) &&
     (cVar1 = *(char *)(*(int *)(param_1 + 0xc) + uVar7), cVar1 == '+' || cVar1 == '-')) {
    uVar7 = iVar9 + 2;
    *(uint *)(param_1 + 0x14) = uVar7;
  }
  if (uVar7 < uVar8) {
    bVar2 = *(byte *)(*(int *)(param_1 + 0xc) + uVar7);
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0x14) = uVar7;
    if (bVar2 - 0x30 < 10) {
      if (uVar8 <= uVar7) {
        return 0;
      }
      do {
        if (9 < *(byte *)(*(int *)(param_1 + 0xc) + uVar7) - 0x30) {
          return 0;
        }
        uVar7 = uVar7 + 1;
        *(uint *)(param_1 + 0x14) = uVar7;
      } while (uVar8 != uVar7);
      return 0;
    }
  }
  local_14 = 0xd;
  uVar5 = FUN_012c6bfc(param_1,&local_14);
  return uVar5;
}

