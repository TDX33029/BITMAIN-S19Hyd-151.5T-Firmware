// FUN_012254b8 @ 012254b8 size=184 calls_out=4 calls_in=10
// strings: 

void FUN_012254b8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_20 [3];
  undefined1 uStack_11;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar3);
      uVar4 = uVar2 - 9;
      if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
        if (uVar2 == 0x6e) {
          *(uint *)(param_1 + 0x14) = uVar3 + 1;
          FUN_01964c70(param_1,"ull",3);
          return;
        }
        uVar1 = FUN_019659c8(param_1,&uStack_11,&DAT_01cf9cd4);
        FUN_01966f00(uVar1,param_1);
        return;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x14) = uVar3;
    } while (*(uint *)(param_1 + 0x10) != uVar3);
  }
  local_20[0] = 5;
  FUN_01964674(param_1,local_20);
  return;
}

