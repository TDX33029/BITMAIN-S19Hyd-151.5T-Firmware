// FUN_016733c4 @ 016733c4 size=224 calls_out=4 calls_in=9
// strings: 

void FUN_016733c4(char *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_24 [3];
  
  local_44 = 0x80;
  local_48 = 0;
  local_4c = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 1;
  local_54 = param_2;
  local_50 = param_3;
  FUN_016734cc(param_1,&local_60);
  if (*param_1 != '\x06') {
    local_40 = *(undefined4 *)param_1;
    uStack_3c = *(undefined4 *)(param_1 + 4);
    uStack_38 = *(undefined4 *)(param_1 + 8);
    uStack_34 = *(undefined4 *)(param_1 + 0xc);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    if (local_4c < local_50) {
      do {
        uVar2 = *(byte *)(local_54 + local_4c) - 9;
        if ((0x17 < uVar2) || ((1 << (uVar2 & 0xff) & 0x800013U) == 0)) {
          local_24[0] = 0x16;
          uVar1 = FUN_012c6b30(&local_60,local_24);
          *(undefined4 *)(param_1 + 4) = uVar1;
          *param_1 = '\x06';
          FUN_00db4764(&local_40);
          break;
        }
        local_4c = local_4c + 1;
      } while (local_50 != local_4c);
    }
  }
  FUN_019bb7e0(local_60,uStack_5c);
  return;
}

