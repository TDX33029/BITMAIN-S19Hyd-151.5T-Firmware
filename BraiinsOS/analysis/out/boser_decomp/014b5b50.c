// FUN_014b5b50 @ 014b5b50 size=296 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_014b5b50(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_28;
  int iStack_24;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          FUN_01964ce0(&local_28,param_1,0);
          if (local_28 == 3 && iStack_24 == 0) {
            return 1;
          }
        }
        else {
          if (9 < uVar3 - 0x30) {
            uVar1 = FUN_019659c8(param_1,&local_28,&DAT_01cf9934);
            goto LAB_014b5c68;
          }
          FUN_01964ce0(&local_28,param_1,1);
          if (local_28 == 3 && iStack_24 == 0) {
            return 1;
          }
        }
        uVar4 = FUN_014b5780(&local_28);
        uVar1 = (undefined4)(uVar4 >> 0x20);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
LAB_014b5c68:
        FUN_01966f00(uVar1,param_1);
        return 1;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (*(uint *)(param_1 + 0x10) != uVar2);
  }
  local_28 = 5;
  FUN_01964674(param_1,&local_28);
  return 1;
}

