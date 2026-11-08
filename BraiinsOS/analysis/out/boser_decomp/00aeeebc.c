// FUN_00aeeebc @ 00aeeebc size=264 calls_out=5 calls_in=5
// strings: 

void FUN_00aeeebc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  if (uVar1 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar1);
      uVar3 = uVar2 - 9;
      if ((0x17 < uVar3) || ((1 << (uVar3 & 0xff) & 0x800013U) == 0)) {
        if (uVar2 == 0x22) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar1 + 1;
          FUN_01968828(&local_24,param_2 + 0xc,param_2);
          if (local_24 == 2) goto LAB_00aeef64;
          FUN_012c1060(&local_30,local_20,local_1c);
          if (local_30 != -0x80000000) {
            *param_1 = local_30;
            param_1[1] = local_2c;
            param_1[2] = iStack_28;
            return;
          }
        }
        else {
          local_2c = FUN_012c7788(param_2,&local_24,&DAT_01cf9914);
        }
        local_20 = FUN_0127dee8(local_2c,param_2);
        goto LAB_00aeef64;
      }
      uVar1 = uVar1 + 1;
      *(uint *)(param_2 + 0x14) = uVar1;
    } while (*(uint *)(param_2 + 0x10) != uVar1);
  }
  local_24 = 5;
  local_20 = FUN_012c6b30(param_2,&local_24);
LAB_00aeef64:
  *param_1 = -0x80000000;
  param_1[1] = local_20;
  return;
}

