// FUN_014db6fc @ 014db6fc size=292 calls_out=1 calls_in=41
// strings: 

void FUN_014db6fc(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_24 [3];
  
  iVar2 = *param_2;
  uVar4 = *(uint *)(iVar2 + 0x10);
  uVar7 = *(uint *)(iVar2 + 0x14);
  if (uVar7 < uVar4) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(iVar2 + 0xc) + uVar7);
      if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x5d) {
          uVar1 = 0;
          param_1[1] = 0;
          goto LAB_014db804;
        }
        if ((char)param_2[1] != '\0') {
          param_1[1] = 1;
          uVar1 = 0;
          *(undefined1 *)(param_2 + 1) = 0;
          goto LAB_014db804;
        }
        if (uVar5 == 0x2c) {
          uVar7 = uVar7 + 1;
          *(uint *)(iVar2 + 0x14) = uVar7;
          if (uVar7 < uVar4) goto LAB_014db7c0;
          goto LAB_014db7e8;
        }
        local_24[0] = 7;
        goto LAB_014db758;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(iVar2 + 0x14) = uVar7;
    } while (uVar4 != uVar7);
  }
  local_24[0] = 2;
  goto LAB_014db758;
  while( true ) {
    uVar7 = uVar7 + 1;
    *(uint *)(iVar2 + 0x14) = uVar7;
    if (uVar4 == uVar7) break;
LAB_014db7c0:
    uVar6 = (uint)*(byte *)(*(int *)(iVar2 + 0xc) + uVar7);
    uVar5 = uVar6 - 9;
    if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
      if (uVar6 == 0x5d) {
        local_24[0] = 0x15;
        goto LAB_014db758;
      }
      param_1[1] = 1;
      uVar1 = 0;
      goto LAB_014db804;
    }
  }
LAB_014db7e8:
  local_24[0] = 5;
LAB_014db758:
  uVar3 = FUN_012c6b30(iVar2,local_24);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014db804:
  *param_1 = uVar1;
  return;
}

