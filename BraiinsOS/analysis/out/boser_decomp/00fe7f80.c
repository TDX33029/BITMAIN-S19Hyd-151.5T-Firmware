// FUN_00fe7f80 @ 00fe7f80 size=244 calls_out=3 calls_in=1
// strings: 

void FUN_00fe7f80(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = *param_2;
  uVar1 = 0x15;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      uVar1 = param_2[1];
      FUN_00db3aac(&local_38);
      if ((char)local_38 == '\x06') {
        param_1[1] = local_34;
        *(undefined1 *)param_1 = 7;
      }
      else {
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = uStack_30;
        param_1[3] = uStack_2c;
        param_1[4] = uStack_28;
        param_1[5] = uStack_24;
      }
      thunk_FUN_01be4678(uVar1);
      goto LAB_00fe8054;
    }
    if (uVar1 != 0x12) {
      FUN_00db3aac(&local_38,param_2);
      if ((char)local_38 == '\x06') {
        param_1[1] = local_34;
        *(undefined1 *)param_1 = 7;
        return;
      }
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      param_1[4] = uStack_28;
      param_1[5] = uStack_24;
      return;
    }
  }
  *(undefined1 *)param_1 = 6;
LAB_00fe8054:
  if (uVar2 == 0x80000011) {
    return;
  }
  FUN_00db3970(param_2);
  return;
}

