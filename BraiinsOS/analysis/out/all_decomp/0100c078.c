// FUN_0100c078 @ 0100c078 size=416 calls_out=3 calls_in=6
// strings: 

void FUN_0100c078(uint *param_1,byte *param_2,uint param_3,undefined1 param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20;
  char local_1f;
  uint local_18;
  char local_14;
  
  local_1f = param_5;
  local_24 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = CONCAT31(local_30._1_3_,4);
  local_2c = param_2;
  local_28 = param_3;
  local_20 = param_4;
  FUN_0100c21c(&local_18,&local_2c,&DAT_003788e3);
  if (local_14 != '\x03') {
    goto LAB_0100c200;
  }
  if ((local_24 < local_28) && (local_2c[local_24] == 0x3a)) {
    local_14 = '\x01';
    local_18 = 0;
    if ((local_24 == 0) || (0x19 < (*local_2c & 0xdf) - 0x41)) goto LAB_0100c200;
    iVar1 = local_24 + 1;
    local_40 = local_24;
    if ((local_28 - iVar1 < 2) || (*(short *)(local_2c + iVar1) != 0x2f2f)) {
      local_24 = iVar1;
      uVar2 = FUN_0100ca84(&local_48,0);
      local_18 = (uint)uVar2;
      local_14 = (char)((ulonglong)uVar2 >> 0x20);
      if (((uint)((ulonglong)uVar2 >> 0x20) & 0xff) != 3) goto LAB_0100c200;
      goto LAB_0100c1c4;
    }
    local_24 = local_24 + 3;
LAB_0100c1e8:
    uVar2 = FUN_0100c55c(&local_48);
    local_14 = (char)((ulonglong)uVar2 >> 0x20);
  }
  else {
    local_14 = '\x01';
    if (local_1f != '\0') {
      local_18 = local_24;
      goto LAB_0100c200;
    }
    if (((local_24 == 0) && (1 < local_28)) && (*(short *)local_2c == 0x2f2f)) {
      local_24 = 2;
      goto LAB_0100c1e8;
    }
    uVar2 = FUN_0100ca84(&local_48,2);
    local_14 = (char)((ulonglong)uVar2 >> 0x20);
  }
  local_18 = (uint)uVar2;
  if (((uint)((ulonglong)uVar2 >> 0x20) & 0xff) == 3) {
LAB_0100c1c4:
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    param_1[3] = local_3c;
    param_1[4] = uStack_38;
    param_1[5] = uStack_34;
    param_1[6] = local_30;
    return;
  }
LAB_0100c200:
  *(char *)(param_1 + 1) = local_14;
  *(undefined1 *)(param_1 + 6) = 5;
  *param_1 = local_18;
  return;
}

