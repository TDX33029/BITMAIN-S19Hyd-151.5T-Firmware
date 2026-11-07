// FUN_00940af4 @ 00940af4 size=340 calls_out=3 calls_in=2
// strings: 

void FUN_00940af4(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
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
  
  uVar2 = *param_2;
  uVar1 = 0x15;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      puVar3 = (undefined4 *)param_2[1];
      local_70 = *puVar3;
      uStack_6c = puVar3[1];
      uStack_68 = puVar3[2];
      uStack_64 = puVar3[3];
      FUN_00902450(&local_60,&local_70);
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
      thunk_FUN_016d3fb4(puVar3);
      goto joined_r0x00940c34;
    }
    if (uVar1 != 0x12) {
      FUN_00902450(&local_60);
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
        return;
      }
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
  }
  *param_1 = 3;
  param_1[1] = 0;
joined_r0x00940c34:
  if (uVar2 == 0x80000011) {
    return;
  }
  FUN_008f7448(param_2);
  return;
}

