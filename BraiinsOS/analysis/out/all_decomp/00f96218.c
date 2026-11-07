// FUN_00f96218 @ 00f96218 size=276 calls_out=2 calls_in=9
// strings: 

int FUN_00f96218(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char local_54;
  undefined3 local_53;
  undefined1 uStack_50;
  undefined3 local_4f;
  undefined1 uStack_4c;
  undefined3 local_4b;
  undefined1 uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  char local_30 [16];
  
  uVar1 = *param_2;
  uVar3 = param_2[4];
  local_44 = param_2[5];
  local_40 = param_2[6];
  uStack_3c = param_2[7];
  uStack_38 = param_2[8];
  uStack_34 = param_2[9];
  local_54 = (char)param_2[1];
  if (local_54 == '\a') {
    iVar2 = 0;
    do {
      FUN_00f94a60(local_30 + iVar2 + -0x14);
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != 0x14);
  }
  else {
    puVar4 = (undefined4 *)((uint)local_30 | 1);
    local_4f = (undefined3)(param_2[2] >> 8);
    uStack_4c = (undefined1)param_2[3];
    local_4b = (undefined3)(param_2[3] >> 8);
    uStack_48 = (undefined1)uVar3;
    local_53 = (undefined3)(param_2[1] >> 8);
    uStack_50 = (undefined1)param_2[2];
    puVar4[2] = CONCAT13(uStack_48,local_4b);
    *puVar4 = CONCAT13(uStack_50,local_53);
    puVar4[1] = CONCAT13(uStack_4c,local_4f);
    *(uint *)((int)puVar4 + 0xb) = uVar3;
    local_30[0] = local_54;
    FUN_00f9ab2c(param_1 + 0x10,uVar1 & 0xff,local_30);
    if ((char)local_40 == '\a') {
      return param_1;
    }
    puVar4[2] = CONCAT13((undefined1)uStack_34,uStack_38._1_3_);
    *puVar4 = CONCAT13((undefined1)uStack_3c,local_40._1_3_);
    puVar4[1] = CONCAT13((undefined1)uStack_38,uStack_3c._1_3_);
    *(uint *)((int)puVar4 + 0xb) = uStack_34;
    local_30[0] = (char)local_40;
    FUN_00f9ab2c(param_1 + 0x10,local_44 & 0xff,local_30);
  }
  return param_1;
}

