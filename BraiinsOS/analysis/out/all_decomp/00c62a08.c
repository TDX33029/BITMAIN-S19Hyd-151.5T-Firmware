// FUN_00c62a08 @ 00c62a08 size=236 calls_out=4 calls_in=2
// strings: 

void FUN_00c62a08(char *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_24 [3];
  
  local_5c = *param_2;
  local_58 = param_2[1];
  local_54 = param_2[2];
  iStack_50 = param_2[3];
  iStack_4c = param_2[4];
  iStack_48 = param_2[5];
  local_44 = 0x80;
  local_60 = 0;
  local_68 = 0;
  local_64 = 1;
  FUN_00c62b28(param_1,&local_68);
  if (*param_1 != '\x06') {
    local_40 = *(undefined4 *)param_1;
    uStack_3c = *(undefined4 *)(param_1 + 4);
    uStack_38 = *(undefined4 *)(param_1 + 8);
    uStack_34 = *(undefined4 *)(param_1 + 0xc);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    if (local_54 < local_58) {
      do {
        uVar2 = *(byte *)(local_5c + local_54) - 9;
        if ((0x17 < uVar2) || ((1 << (uVar2 & 0xff) & 0x800013U) == 0)) {
          local_24[0] = 0x16;
          uVar1 = FUN_00c629ac(&local_68,local_24);
          *(undefined4 *)(param_1 + 4) = uVar1;
          *param_1 = '\x06';
          FUN_00c01f94(&local_40);
          break;
        }
        local_54 = local_54 + 1;
      } while (local_58 != local_54);
    }
  }
  if (local_68 != 0) {
    thunk_FUN_016d3fb4(local_64);
  }
  return;
}

