// FUN_01643800 @ 01643800 size=436 calls_out=6 calls_in=2
// strings: 

void FUN_01643800(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 uStack_19;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < uVar3) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      uVar6 = uVar5 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 != 0x6e) goto LAB_01643868;
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
        iVar2 = FUN_01964c70(param_2,"ull",3);
        if (iVar2 == 0) {
          uVar1 = 0;
          goto LAB_01643980;
        }
        param_1[2] = iVar2;
        goto LAB_01643914;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (uVar3 != uVar4);
  }
  else {
LAB_01643868:
    if (uVar4 < uVar3) {
      do {
        uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
        if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar5 == 0x2d) {
            *(uint *)(param_2 + 0x14) = uVar4 + 1;
            uVar1 = 0;
LAB_016438f0:
            FUN_01964ce0(&local_30,param_2,uVar1);
            if (local_30 == 3 && local_2c == 0) goto LAB_0164390c;
            FUN_01642f54(&local_40,&local_30);
            if (local_40 != 1) {
              param_1[2] = local_38;
              param_1[3] = local_34;
              uVar1 = 1;
              goto LAB_01643980;
            }
          }
          else {
            if (uVar5 - 0x30 < 10) {
              uVar1 = 1;
              goto LAB_016438f0;
            }
            local_3c = FUN_019659c8(param_2,&uStack_19,&DAT_01d06508);
          }
          local_28 = FUN_01966f00(local_3c,param_2);
          goto LAB_0164390c;
        }
        uVar4 = uVar4 + 1;
        *(uint *)(param_2 + 0x14) = uVar4;
      } while (uVar3 != uVar4);
    }
  }
  local_30 = 5;
  local_28 = FUN_01964674(param_2,&local_30);
LAB_0164390c:
  param_1[2] = local_28;
LAB_01643914:
  uVar1 = 2;
LAB_01643980:
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

