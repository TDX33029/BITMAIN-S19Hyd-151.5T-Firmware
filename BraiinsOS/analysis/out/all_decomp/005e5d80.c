// FUN_005e5d80 @ 005e5d80 size=364 calls_out=1 calls_in=22
// strings: 

void FUN_005e5d80(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_24 [3];
  
  iVar1 = *param_2;
  uVar4 = *(uint *)(iVar1 + 0x10);
  uVar5 = *(uint *)(iVar1 + 0x14);
  if (uVar5 < uVar4) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) + uVar5);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x5d) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
        if ((char)param_2[1] != '\0') {
          param_1[1] = 1;
          *(undefined1 *)(param_2 + 1) = 0;
          *param_1 = 0;
          return;
        }
        if (uVar3 == 0x2c) {
          uVar5 = uVar5 + 1;
          *(uint *)(iVar1 + 0x14) = uVar5;
          if (uVar5 < uVar4) goto LAB_005e5e68;
          goto LAB_005e5e90;
        }
        local_24[0] = 7;
        goto LAB_005e5e94;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(iVar1 + 0x14) = uVar5;
    } while (uVar4 != uVar5);
  }
  local_24[0] = 2;
  uVar2 = FUN_008f9984(iVar1,local_24);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
LAB_005e5e68:
  uVar6 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) + uVar5);
  uVar3 = uVar6 - 9;
  if ((0x17 < uVar3) || ((1 << (uVar3 & 0xff) & 0x800013U) == 0)) {
    if (uVar6 != 0x5d) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    local_24[0] = 0x15;
    goto LAB_005e5e94;
  }
  uVar5 = uVar5 + 1;
  *(uint *)(iVar1 + 0x14) = uVar5;
  if (uVar4 == uVar5) {
LAB_005e5e90:
    local_24[0] = 5;
LAB_005e5e94:
    uVar2 = FUN_008f9984(iVar1,local_24);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *param_1 = 1;
    return;
  }
  goto LAB_005e5e68;
}

