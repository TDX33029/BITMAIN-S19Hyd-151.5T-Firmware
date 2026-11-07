// FUN_019664a4 @ 019664a4 size=152 calls_out=4 calls_in=8
// strings: 

void FUN_019664a4(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_34 = 0x80;
  local_40 = 0;
  local_44 = 0;
  local_50 = 0;
  local_58 = 0;
  uStack_54 = 1;
  local_4c = param_2;
  local_48 = param_3;
  local_3c = param_2;
  local_38 = param_3;
  FUN_019646d0(param_1,&local_58);
  if (*param_1 != '\x06') {
    local_30 = *(undefined4 *)param_1;
    uStack_2c = *(undefined4 *)(param_1 + 4);
    uStack_28 = *(undefined4 *)(param_1 + 8);
    uStack_24 = *(undefined4 *)(param_1 + 0xc);
    uStack_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    iVar1 = FUN_01964600(&local_58);
    if (iVar1 != 0) {
      *(int *)(param_1 + 4) = iVar1;
      *param_1 = '\x06';
      FUN_01964c44(&local_30);
    }
  }
  FUN_0134bd64(local_58,uStack_54);
  return;
}

