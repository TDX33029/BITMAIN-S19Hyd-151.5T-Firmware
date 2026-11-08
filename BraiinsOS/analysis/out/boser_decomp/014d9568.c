// FUN_014d9568 @ 014d9568 size=252 calls_out=1 calls_in=26
// strings: 

undefined4 FUN_014d9568(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_1c [3];
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 < uVar4) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar3);
      if (uVar2 < 0xd) {
        if (1 < uVar2 - 9) goto LAB_014d965c;
      }
      else if (uVar2 < 0x20) {
        if (uVar2 != 0xd) goto LAB_014d965c;
      }
      else if (uVar2 != 0x20) {
        if (uVar2 == 0x5d) {
          *(uint *)(param_1 + 0x14) = uVar3 + 1;
          return 0;
        }
        if (uVar2 != 0x2c) goto LAB_014d965c;
        uVar3 = uVar3 + 1;
        *(uint *)(param_1 + 0x14) = uVar3;
        if (uVar4 <= uVar3) goto LAB_014d965c;
        goto LAB_014d9620;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x14) = uVar3;
    } while (uVar4 != uVar3);
  }
  local_1c[0] = 2;
  goto LAB_014d95d0;
  while( true ) {
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 0x14) = uVar3;
    if (uVar4 == uVar3) break;
LAB_014d9620:
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar3);
    uVar5 = uVar2 - 9;
    if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
      if (uVar2 == 0x5d) {
        local_1c[0] = 0x15;
        goto LAB_014d95d0;
      }
      break;
    }
  }
LAB_014d965c:
  local_1c[0] = 0x16;
LAB_014d95d0:
  uVar1 = FUN_012c6b30(param_1,local_1c);
  return uVar1;
}

