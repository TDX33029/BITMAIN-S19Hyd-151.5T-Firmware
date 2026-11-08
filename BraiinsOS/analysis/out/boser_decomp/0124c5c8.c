// FUN_0124c5c8 @ 0124c5c8 size=324 calls_out=7 calls_in=1
// strings: 

void FUN_0124c5c8(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_34;
  undefined4 local_30;
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
          if (local_28 == 2) goto LAB_0124c670;
          FUN_012c1060(&local_34,local_24,local_20);
          if (local_34 != -0x80000000) {
            local_24 = local_30;
            local_28 = local_34;
            local_20 = local_2c;
            FUN_0124ae50(&local_34,&local_28);
            if ((char)local_34 == '\0') {
              *(undefined2 *)(param_1 + 1) = local_34._1_2_;
              uVar1 = 0;
            }
            else {
              uVar2 = FUN_0124a164(local_30);
              *(undefined4 *)(param_1 + 4) = uVar2;
              uVar1 = 1;
            }
            goto LAB_0124c6cc;
          }
        }
        else {
          local_30 = FUN_019659c8(param_2,&uStack_19,&DAT_01cf9914);
        }
        local_24 = FUN_01966f00(local_30,param_2);
        goto LAB_0124c670;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_2 + 0x14) = uVar3;
    } while (*(uint *)(param_2 + 0x10) != uVar3);
  }
  local_28 = 5;
  local_24 = FUN_01964674(param_2,&local_28);
LAB_0124c670:
  uVar1 = 1;
  *(undefined4 *)(param_1 + 4) = local_24;
LAB_0124c6cc:
  *param_1 = uVar1;
  return;
}

