// FUN_01224810 @ 01224810 size=384 calls_out=6 calls_in=6
// strings: 

void FUN_01224810(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          *(uint *)(param_2 + 0x14) = uVar2 + 1;
          FUN_01964ce0(&local_38,param_2,0);
          uVar4 = CONCAT44(uStack_2c,local_30);
          if (local_38 == 3 && local_34 == 0) goto LAB_012248bc;
          if (local_38 != 0) {
            if (local_38 != 1) goto LAB_0122494c;
LAB_01224944:
            uVar4 = FUN_01bf0e80();
          }
        }
        else {
          if (9 < uVar3 - 0x30) {
            uVar1 = FUN_019659c8(param_2,&uStack_21,&DAT_01c2497c);
            uVar1 = FUN_01966f00(uVar1,param_2);
            param_1[1] = uVar1;
            uVar1 = 1;
            goto LAB_0122495c;
          }
          FUN_01964ce0(&local_38,param_2,1);
          uVar4 = CONCAT44(uStack_2c,local_30);
          if (local_38 == 3 && local_34 == 0) {
            *param_1 = 1;
            param_1[1] = local_30;
            return;
          }
          if (local_38 == 2) {
LAB_0122494c:
            uVar4 = FUN_01bf0cac();
          }
          else if (local_38 == 1) goto LAB_01224944;
        }
        uVar1 = 0;
        *(undefined8 *)(param_1 + 2) = uVar4;
LAB_0122495c:
        *param_1 = uVar1;
        return;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_2 + 0x14) = uVar2;
    } while (*(uint *)(param_2 + 0x10) != uVar2);
  }
  local_38 = 5;
  local_30 = FUN_01964674(param_2,&local_38);
LAB_012248bc:
  *param_1 = 1;
  param_1[1] = local_30;
  return;
}

