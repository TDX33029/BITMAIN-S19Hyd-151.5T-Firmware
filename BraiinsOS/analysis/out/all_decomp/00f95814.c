// FUN_00f95814 @ 00f95814 size=372 calls_out=2 calls_in=5
// strings: 

int FUN_00f95814(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  char local_30 [16];
  
  local_70 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uStack_64 = param_2[3];
  uStack_60 = param_2[4];
  local_5c = param_2[5];
  local_58 = param_2[6];
  uStack_54 = param_2[7];
  uStack_50 = param_2[8];
  uStack_4c = param_2[9];
  local_48 = param_2[10];
  local_44 = param_2[0xb];
  uStack_40 = param_2[0xc];
  uStack_3c = param_2[0xd];
  uStack_38 = param_2[0xe];
  uVar4 = 1;
  local_6c._0_1_ = (char)uVar1;
  uStack_68 = uVar2;
  if ((char)local_6c != '\a') {
    iVar6 = param_1 + 0x10;
    puVar5 = (undefined4 *)((uint)local_30 | 1);
    uStack_68._1_3_ = (undefined3)(uVar2 >> 8);
    uStack_64._1_3_ = (undefined3)(uStack_64 >> 8);
    local_6c._1_3_ = (undefined3)(uVar1 >> 8);
    uStack_68._0_1_ = (undefined1)uVar2;
    puVar5[2] = CONCAT13((undefined1)uStack_60,uStack_64._1_3_);
    *puVar5 = CONCAT13((undefined1)uStack_68,local_6c._1_3_);
    puVar5[1] = CONCAT13((undefined1)uStack_64,uStack_68._1_3_);
    *(uint *)((int)puVar5 + 0xb) = uStack_60;
    local_30[0] = (char)local_6c;
    local_6c = uVar1;
    FUN_00f9ab2c(iVar6,local_70 & 0xff,local_30);
    uVar4 = 2;
    uVar1 = local_6c;
    if ((char)local_58 != '\a') {
      puVar5[2] = CONCAT13((undefined1)uStack_4c,uStack_50._1_3_);
      *puVar5 = CONCAT13((undefined1)uStack_54,local_58._1_3_);
      puVar5[1] = CONCAT13((undefined1)uStack_50,uStack_54._1_3_);
      *(uint *)((int)puVar5 + 0xb) = uStack_4c;
      local_30[0] = (char)local_58;
      FUN_00f9ab2c(iVar6,local_5c & 0xff,local_30);
      if ((char)local_44 == '\a') {
        return param_1;
      }
      puVar5[2] = CONCAT13((undefined1)uStack_38,uStack_3c._1_3_);
      *puVar5 = CONCAT13((undefined1)uStack_40,local_44._1_3_);
      puVar5[1] = CONCAT13((undefined1)uStack_3c,uStack_40._1_3_);
      *(uint *)((int)puVar5 + 0xb) = uStack_38;
      local_30[0] = (char)local_44;
      FUN_00f9ab2c(iVar6,local_48 & 0xff,local_30);
      return param_1;
    }
  }
  local_6c = uVar1;
  uVar1 = 0;
  pcVar3 = local_30 + uVar4 * 0x14 + -0x40;
  uVar2 = uVar4;
  while (uVar2 != 3) {
    FUN_00f94a60(pcVar3);
    pcVar3 = pcVar3 + 0x14;
    uVar1 = uVar1 + 1;
    uVar2 = uVar4 ^ uVar1;
  }
  return param_1;
}

