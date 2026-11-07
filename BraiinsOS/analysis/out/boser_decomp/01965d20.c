// FUN_01965d20 @ 01965d20 size=312 calls_out=1 calls_in=24
// strings: 

void FUN_01965d20(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_24 [3];
  
  iVar1 = *param_2;
  uVar4 = *(uint *)(iVar1 + 0x10);
  uVar7 = *(uint *)(iVar1 + 0x14);
  if (uVar7 < uVar4) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) + uVar7);
      if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x7d) {
          uVar3 = 0;
          param_1[1] = 0;
          goto LAB_01965e2c;
        }
        if ((char)param_2[1] != '\0') {
          *(undefined1 *)(param_2 + 1) = 0;
          if (uVar5 == 0x22) goto LAB_01965e28;
          goto LAB_01965e48;
        }
        if (uVar5 == 0x2c) {
          uVar7 = uVar7 + 1;
          *(uint *)(iVar1 + 0x14) = uVar7;
          if (uVar7 < uVar4) goto LAB_01965de8;
          goto LAB_01965e10;
        }
        local_24[0] = 8;
        goto LAB_01965d7c;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(iVar1 + 0x14) = uVar7;
    } while (uVar4 != uVar7);
  }
  local_24[0] = 3;
LAB_01965d7c:
  uVar2 = FUN_01964674(iVar1,local_24);
  uVar3 = 1;
  *(undefined4 *)(param_1 + 4) = uVar2;
LAB_01965e2c:
  *param_1 = uVar3;
  return;
LAB_01965de8:
  uVar6 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) + uVar7);
  uVar5 = uVar6 - 9;
  if (0x19 < uVar5) {
LAB_01965e38:
    if (uVar6 == 0x7d) {
      local_24[0] = 0x15;
    }
    else {
LAB_01965e48:
      local_24[0] = 0x11;
    }
    goto LAB_01965d7c;
  }
  if ((1 << (uVar5 & 0xff) & 0x800013U) != 0) {
    uVar7 = uVar7 + 1;
    *(uint *)(iVar1 + 0x14) = uVar7;
    if (uVar4 == uVar7) goto LAB_01965e10;
    goto LAB_01965de8;
  }
  if (uVar5 != 0x19) goto LAB_01965e38;
LAB_01965e28:
  uVar3 = 0;
  param_1[1] = 1;
  goto LAB_01965e2c;
LAB_01965e10:
  local_24[0] = 5;
  goto LAB_01965d7c;
}

