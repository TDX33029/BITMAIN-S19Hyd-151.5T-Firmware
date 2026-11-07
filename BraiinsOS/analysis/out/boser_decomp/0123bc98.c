// FUN_0123bc98 @ 0123bc98 size=388 calls_out=4 calls_in=2
// strings: 

void FUN_0123bc98(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_80;
  undefined4 *local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar5 = *param_2;
  *param_2 = 0x80000015;
  if (uVar5 == 0x80000015) {
    FUN_01a429c4(param_1 + 2,&DAT_0056ad38,0x10);
LAB_0123bccc:
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar1 = 0x15;
  if ((int)uVar5 < 0) {
    uVar1 = uVar5 ^ 0x80000000;
  }
  puVar2 = (uint *)((uint)&local_80 | 4);
  *puVar2 = param_2[1];
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_80 = uVar5;
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      local_70 = *local_7c;
      uStack_6c = local_7c[1];
      uStack_68 = local_7c[2];
      uStack_64 = local_7c[3];
      FUN_012289a0(&local_60);
      if (local_60 == 3 && local_5c == 0) {
        param_1[2] = local_58;
        param_1[3] = iStack_54;
        param_1[4] = iStack_50;
        param_1[5] = local_4c;
        param_1[6] = iStack_48;
        param_1[7] = iStack_44;
        param_1[8] = local_40;
        param_1[9] = iStack_3c;
        param_1[10] = local_38;
        param_1[0xb] = iStack_34;
        param_1[0xc] = iStack_30;
        param_1[0xd] = iStack_2c;
        *param_1 = 4;
        param_1[1] = 0;
      }
      else {
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        param_1[3] = iStack_54;
        param_1[4] = iStack_50;
        param_1[5] = local_4c;
        param_1[6] = iStack_48;
        param_1[7] = iStack_44;
        param_1[8] = local_40;
        param_1[9] = iStack_3c;
        param_1[10] = local_38;
        param_1[0xb] = iStack_34;
        param_1[0xc] = iStack_30;
        param_1[0xd] = iStack_2c;
        param_1[0xe] = iStack_28;
        param_1[0xf] = iStack_24;
      }
      thunk_FUN_01be4678(local_7c);
      goto LAB_0123be04;
    }
    if (uVar1 != 0x12) {
      FUN_012289a0(&local_60,&local_80);
      if (local_60 != 3 || local_5c != 0) {
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        param_1[3] = iStack_54;
        param_1[4] = iStack_50;
        param_1[5] = local_4c;
        param_1[6] = iStack_48;
        param_1[7] = iStack_44;
        param_1[8] = local_40;
        param_1[9] = iStack_3c;
        param_1[10] = local_38;
        param_1[0xb] = iStack_34;
        param_1[0xc] = iStack_30;
        param_1[0xd] = iStack_2c;
        param_1[0xe] = iStack_28;
        param_1[0xf] = iStack_24;
        return;
      }
      param_1[2] = local_58;
      param_1[3] = iStack_54;
      param_1[4] = iStack_50;
      param_1[5] = local_4c;
      param_1[6] = iStack_48;
      param_1[7] = iStack_44;
      param_1[8] = local_40;
      param_1[9] = iStack_3c;
      param_1[10] = local_38;
      param_1[0xb] = iStack_34;
      param_1[0xc] = iStack_30;
      param_1[0xd] = iStack_2c;
      goto LAB_0123bccc;
    }
  }
  *param_1 = 3;
  param_1[1] = 0;
LAB_0123be04:
  if (uVar5 != 0x80000011) {
    FUN_012222e0(&local_80);
  }
  return;
}

