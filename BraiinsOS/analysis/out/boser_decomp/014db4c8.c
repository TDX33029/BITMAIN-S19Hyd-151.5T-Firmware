// FUN_014db4c8 @ 014db4c8 size=284 calls_out=5 calls_in=1
// strings: 

void FUN_014db4c8(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3);
      uVar5 = uVar4 - 9;
      if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 == 0x22) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar3 + 1;
          FUN_019686b4(&local_28,param_2 + 0xc,param_2);
          if (local_28 == 2) {
            uVar1 = 1;
            *(undefined4 *)(param_1 + 4) = local_24;
            goto LAB_014db5a8;
          }
          FUN_014dc390(&local_30,local_24,local_20);
          if (local_30 != '\x01') {
            param_1[1] = local_2f;
            uVar1 = 0;
            goto LAB_014db5a8;
          }
        }
        else {
          local_2c = FUN_019659c8(param_2,&uStack_19,&DAT_01cfa03c);
        }
        uVar2 = FUN_01966f00(local_2c,param_2);
        *(undefined4 *)(param_1 + 4) = uVar2;
        uVar1 = 1;
LAB_014db5a8:
        *param_1 = uVar1;
        return;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_2 + 0x14) = uVar3;
    } while (*(uint *)(param_2 + 0x10) != uVar3);
  }
  local_28 = 5;
  uVar2 = FUN_01964674(param_2,&local_28);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

