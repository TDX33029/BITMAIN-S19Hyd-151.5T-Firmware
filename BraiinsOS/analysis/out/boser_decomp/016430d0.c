// FUN_016430d0 @ 016430d0 size=344 calls_out=5 calls_in=1
// strings: 

void FUN_016430d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          *(uint *)(param_2 + 0x14) = uVar2 + 1;
          FUN_01964ce0(&local_30,param_2,0);
          if (local_30 == 3 && local_2c == 0) goto LAB_01643178;
LAB_016431c4:
          FUN_01643014(&local_40,&local_30);
          if (local_40 != 1) {
            param_1[2] = local_38;
            param_1[3] = local_34;
            uVar1 = 0;
            goto LAB_016431ec;
          }
        }
        else {
          if (uVar3 - 0x30 < 10) {
            FUN_01964ce0(&local_30,param_2,1);
            if (local_30 == 3 && local_2c == 0) {
              *param_1 = 1;
              param_1[1] = local_28;
              return;
            }
            goto LAB_016431c4;
          }
          local_3c = FUN_019659c8(param_2,&uStack_19,&DAT_01d064f8);
        }
        uVar1 = FUN_01966f00(local_3c,param_2);
        param_1[1] = uVar1;
        uVar1 = 1;
LAB_016431ec:
        *param_1 = uVar1;
        return;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_2 + 0x14) = uVar2;
    } while (*(uint *)(param_2 + 0x10) != uVar2);
  }
  local_30 = 5;
  local_28 = FUN_01964674(param_2,&local_30);
LAB_01643178:
  *param_1 = 1;
  param_1[1] = local_28;
  return;
}

