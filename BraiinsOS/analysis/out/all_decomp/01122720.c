// FUN_01122720 @ 01122720 size=508 calls_out=1 calls_in=1
// strings: 

void FUN_01122720(char *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_34;
  char local_32;
  char local_30;
  undefined2 local_2f;
  char local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined1 *)*param_2;
  uVar3 = 0x15;
  if ((int)puVar1 < 0) {
    uVar3 = (uint)puVar1 ^ 0x80000000;
  }
  if (uVar3 != 0x10) {
    if (uVar3 == 0x11) {
      puVar2 = (undefined4 *)param_2[1];
      if ((undefined1 *)*puVar2 == &DAT_80000013) {
        puVar2 = (undefined4 *)puVar2[1];
      }
      FUN_01115464(&local_30,puVar2);
      if ((local_30 == '\x06') || (local_30 == '\x06')) {
        *(undefined4 *)(param_1 + 4) = local_2c;
        *param_1 = '\a';
        return;
      }
      param_1[3] = local_2d;
      *(undefined2 *)(param_1 + 1) = local_2f;
      *(undefined4 *)(param_1 + 4) = local_2c;
      *(undefined4 *)(param_1 + 8) = local_28;
      *(undefined4 *)(param_1 + 0xc) = local_24;
      *(undefined4 *)(param_1 + 0x10) = local_20;
      *(undefined4 *)(param_1 + 0x14) = local_1c;
      *param_1 = local_30;
      return;
    }
    if (uVar3 != 0x12) {
      if (puVar1 == &DAT_80000013) {
        FUN_01115464(&local_30,param_2[1]);
        if (local_30 != '\x06') {
          local_32 = local_2d;
          local_34 = local_2f;
          local_48 = local_28;
          local_44 = local_24;
          local_40 = local_20;
          local_3c = local_1c;
        }
      }
      else {
        FUN_01115464(&local_30);
        if (local_30 != '\x06') {
          local_32 = local_2d;
          local_34 = local_2f;
          local_48 = local_28;
          local_44 = local_24;
          local_40 = local_20;
          local_3c = local_1c;
        }
      }
      if (local_30 == '\x06') {
        *(undefined4 *)(param_1 + 4) = local_2c;
        *param_1 = '\a';
        return;
      }
      param_1[3] = local_32;
      *(undefined2 *)(param_1 + 1) = local_34;
      *(undefined4 *)(param_1 + 4) = local_2c;
      *(undefined4 *)(param_1 + 8) = local_48;
      *(undefined4 *)(param_1 + 0xc) = local_44;
      *(undefined4 *)(param_1 + 0x10) = local_40;
      *(undefined4 *)(param_1 + 0x14) = local_3c;
      *param_1 = local_30;
      return;
    }
  }
  *param_1 = '\x06';
  return;
}

