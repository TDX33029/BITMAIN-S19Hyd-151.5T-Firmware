// FUN_014db5e8 @ 014db5e8 size=276 calls_out=5 calls_in=1
// strings: 

void FUN_014db5e8(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char local_38;
  undefined1 local_37;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3);
      uVar4 = uVar5 - 9;
      if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x22) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar3 + 1;
          FUN_01968828(&local_30,(int *)(param_2 + 0xc),param_2);
          if (local_30 == 2) {
            uVar1 = 1;
            *(undefined4 *)(param_1 + 4) = local_2c;
            goto LAB_014db6c8;
          }
          FUN_014dc390(&local_38,local_2c,local_28);
          if (local_38 != '\x01') {
            param_1[1] = local_37;
            uVar1 = 0;
            goto LAB_014db6c8;
          }
        }
        else {
          local_34 = FUN_014da614(param_2,&uStack_21);
        }
        uVar2 = FUN_0127dee8(local_34,param_2);
        *(undefined4 *)(param_1 + 4) = uVar2;
        uVar1 = 1;
LAB_014db6c8:
        *param_1 = uVar1;
        return;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_2 + 0x14) = uVar3;
    } while (*(uint *)(param_2 + 0x10) != uVar3);
  }
  local_30 = 5;
  uVar2 = FUN_012c6b30(param_2,&local_30);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

