// FUN_012c7b64 @ 012c7b64 size=172 calls_out=1 calls_in=26
// strings: 

undefined4 FUN_012c7b64(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_14 [3];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar2);
      if (uVar3 < 0xd) {
        if (1 < uVar3 - 9) goto LAB_012c7c08;
      }
      else if (uVar3 < 0x20) {
        if (uVar3 != 0xd) goto LAB_012c7c08;
      }
      else if (uVar3 != 0x20) {
        if (uVar3 == 0x7d) {
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          return 0;
        }
        if (uVar3 == 0x2c) {
          local_14[0] = 0x15;
        }
        else {
LAB_012c7c08:
          local_14[0] = 0x16;
        }
        goto LAB_012c7bcc;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (*(uint *)(param_1 + 0x10) != uVar2);
  }
  local_14[0] = 3;
LAB_012c7bcc:
  uVar1 = FUN_012c6b30(param_1,local_14);
  return uVar1;
}

