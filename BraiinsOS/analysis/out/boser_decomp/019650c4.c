// FUN_019650c4 @ 019650c4 size=172 calls_out=1 calls_in=24
// strings: 

undefined4 FUN_019650c4(int param_1)

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
        if (1 < uVar3 - 9) goto LAB_01965168;
      }
      else if (uVar3 < 0x20) {
        if (uVar3 != 0xd) goto LAB_01965168;
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
LAB_01965168:
          local_14[0] = 0x16;
        }
        goto LAB_0196512c;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (*(uint *)(param_1 + 0x10) != uVar2);
  }
  local_14[0] = 3;
LAB_0196512c:
  uVar1 = FUN_01964674(param_1,local_14);
  return uVar1;
}

