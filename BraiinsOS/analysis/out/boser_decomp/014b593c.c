// FUN_014b593c @ 014b593c size=344 calls_out=5 calls_in=2
// strings: 

void FUN_014b593c(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short local_38;
  undefined2 local_36;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 uStack_19;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3);
      if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 == 0x2d) {
          *(uint *)(param_2 + 0x14) = uVar3 + 1;
          FUN_01964ce0(&local_30,param_2,0);
          if (local_30 != 3 || local_2c != 0) goto LAB_014b5a3c;
        }
        else {
          if (uVar4 - 0x30 < 10) {
            FUN_01964ce0(&local_30,param_2,1);
            if (local_30 == 3 && local_2c == 0) {
              *(undefined4 *)(param_1 + 2) = local_28;
              *param_1 = 1;
              return;
            }
LAB_014b5a3c:
            FUN_014b5858(&local_38,&local_30);
            if (local_38 != 1) {
              param_1[1] = local_36;
              uVar1 = 0;
              goto LAB_014b5a60;
            }
          }
          else {
            local_34 = FUN_019659c8(param_2,&uStack_19,&DAT_01cf9924);
          }
          local_28 = FUN_01966f00(local_34,param_2);
        }
        *(undefined4 *)(param_1 + 2) = local_28;
        uVar1 = 1;
LAB_014b5a60:
        *param_1 = uVar1;
        return;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_2 + 0x14) = uVar3;
    } while (*(uint *)(param_2 + 0x10) != uVar3);
  }
  local_30 = 5;
  uVar2 = FUN_01964674(param_2,&local_30);
  *(undefined4 *)(param_1 + 2) = uVar2;
  *param_1 = 1;
  return;
}

