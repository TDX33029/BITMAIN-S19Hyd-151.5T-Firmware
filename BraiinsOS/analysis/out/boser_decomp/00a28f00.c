// FUN_00a28f00 @ 00a28f00 size=268 calls_out=5 calls_in=2
// strings: 

void FUN_00a28f00(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int iStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_0196aa8c(&local_50,param_3);
  if (local_50 == -0x80000000) {
    *(int *)(param_1 + 4) = local_4c;
    *param_1 = 6;
  }
  else {
    local_60 = local_50;
    local_5c = local_4c;
    local_58 = iStack_48;
    for (param_3 = param_3 * 0x38; param_3 != 0; param_3 = param_3 + -0x38) {
      FUN_00ad6d10(&local_40,param_2);
      iVar1 = local_58;
      if ((char)local_40 == '\x06') {
        *(undefined4 *)(param_1 + 4) = local_3c;
        *param_1 = 6;
        FUN_00949b70(&local_60);
        return;
      }
      if (local_58 == local_60) {
        FUN_01969b6c(&local_60);
      }
      param_2 = param_2 + 0x38;
      puVar2 = (undefined4 *)(local_5c + iVar1 * 0x18);
      *puVar2 = local_40;
      puVar2[1] = local_3c;
      puVar2[2] = uStack_38;
      puVar2[3] = uStack_34;
      puVar2[4] = uStack_30;
      puVar2[5] = uStack_2c;
      local_58 = iVar1 + 1;
    }
    FUN_01bed4e2((uint)&local_50 | 3,&local_60,0xc);
    *param_1 = 4;
    FUN_01bed4e2(param_1 + 1,&local_50,0xf);
  }
  return;
}

