// FUN_01344b5c @ 01344b5c size=376 calls_out=4 calls_in=6
// strings: 

void FUN_01344b5c(uint *param_1,byte *param_2,uint param_3,undefined1 param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  byte *local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28;
  char local_27;
  uint local_20;
  char local_1c;
  
  local_27 = param_5;
  local_2c = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_38 = CONCAT31(local_38._1_3_,4);
  local_34 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  FUN_01344ce0(&local_20,&local_34,&DAT_00451658);
  if (local_1c != '\x03') {
    goto LAB_01344cbc;
  }
  if ((local_2c < local_30) && (local_34[local_2c] == 0x3a)) {
    local_1c = '\x01';
    local_20 = 0;
    if ((local_2c == 0) || (0x19 < (*local_34 & 0xdf) - 0x41)) goto LAB_01344cbc;
    local_48 = local_2c;
    local_2c = local_2c + 1;
    iVar1 = FUN_01344ae8(&local_34,&DAT_005327bf,2);
    if (iVar1 != 0) goto LAB_01344c84;
    uVar2 = 0;
LAB_01344c98:
    uVar3 = FUN_01345170(&local_50,uVar2);
  }
  else {
    local_1c = '\x01';
    if (local_27 != '\0') {
      local_20 = local_2c;
      goto LAB_01344cbc;
    }
    if ((local_2c != 0) || (iVar1 = FUN_01344ae8(&local_34,&DAT_005327bf,2), iVar1 == 0)) {
      uVar2 = 2;
      goto LAB_01344c98;
    }
LAB_01344c84:
    uVar3 = FUN_01344e00(&local_50);
  }
  local_1c = (char)((ulonglong)uVar3 >> 0x20);
  local_20 = (uint)uVar3;
  if (((uint)((ulonglong)uVar3 >> 0x20) & 0xff) == 3) {
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = uStack_40;
    param_1[5] = uStack_3c;
    param_1[6] = local_38;
    return;
  }
LAB_01344cbc:
  *(char *)(param_1 + 1) = local_1c;
  *(undefined1 *)(param_1 + 6) = 5;
  *param_1 = local_20;
  return;
}

