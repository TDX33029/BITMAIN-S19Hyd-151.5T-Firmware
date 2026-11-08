// FUN_0094170c @ 0094170c size=284 calls_out=3 calls_in=3
// strings: 

void FUN_0094170c(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
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
      local_60 = *puVar3;
      uStack_5c = puVar3[1];
      uStack_58 = puVar3[2];
      uStack_54 = puVar3[3];
      FUN_008f7be0(&local_50,&local_60);
      if (local_50 == 2) {
        param_1[1] = 1;
        *param_1 = 2;
        param_1[2] = local_4c;
      }
      else {
        *param_1 = local_50;
        param_1[1] = local_4c;
        param_1[2] = iStack_48;
        param_1[3] = iStack_44;
        param_1[4] = iStack_40;
        param_1[5] = iStack_3c;
        param_1[6] = local_38;
        param_1[7] = iStack_34;
        param_1[8] = iStack_30;
        param_1[9] = iStack_2c;
        param_1[10] = iStack_28;
        param_1[0xb] = iStack_24;
      }
      thunk_FUN_016d3fb4(puVar3);
      goto joined_r0x00941814;
    }
    if (uVar1 != 0x12) {
      FUN_008f7be0(&local_50);
      if (local_50 == 2) {
        param_1[1] = 1;
        *param_1 = 2;
        param_1[2] = local_4c;
        return;
      }
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      param_1[6] = local_38;
      param_1[7] = iStack_34;
      param_1[8] = iStack_30;
      param_1[9] = iStack_2c;
      param_1[10] = iStack_28;
      param_1[0xb] = iStack_24;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = 0;
joined_r0x00941814:
  if (uVar2 == 0x80000011) {
    return;
  }
  FUN_008f7448(param_2);
  return;
}

