// FUN_01562640 @ 01562640 size=552 calls_out=5 calls_in=2
// strings: packet number too long

void FUN_01562640(undefined4 *param_1,char *param_2,uint *param_3,int param_4,byte *param_5,
                 byte *param_6,uint param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  if (param_4 != 0x10) {
    iVar1 = thunk_FUN_016d4a50(0x18);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x18);
    }
    FUN_016dd1aa(iVar1,&DAT_0040c920,0x18);
    *(char *)((int)param_1 + 0xb) = (char)((uint)iVar1 >> 0x18);
    *(short *)((int)param_1 + 9) = (short)((uint)iVar1 >> 8);
    param_1[3] = 0x18;
    *(char *)(param_1 + 2) = (char)iVar1;
    *param_1 = 0x80000020;
    param_1[1] = 0x18;
    return;
  }
  local_48 = *param_3;
  local_3c = param_3[3];
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  if (*param_2 == '\x03') {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    FUN_016e2d10(&local_28,&local_38,0x10,param_2 + 1,(uint)&local_48 | 4,local_48);
  }
  else {
    local_28 = *param_3;
    local_24 = param_3[1];
    local_20 = param_3[2];
    local_1c = param_3[3];
    FUN_0171411c(&local_28,&local_28,param_2 + 4,1);
  }
  if (4 < param_7) {
    iVar1 = thunk_FUN_016d4a50(0x16);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x16);
    }
    FUN_016dd1aa(iVar1,"packet number too long",0x16);
    param_1[2] = iVar1;
    *param_1 = 0x80000020;
    param_1[1] = 0x16;
    param_1[3] = 0x16;
    return;
  }
  bVar3 = 0xf;
  uVar2 = (uint)(char)*param_5;
  if (uVar2 < 0x80000000) {
    bVar3 = 0x1f;
  }
  if (param_8 != 0) {
    uVar2 = uVar2 ^ local_28;
  }
  *param_5 = bVar3 & (byte)local_28 ^ *param_5;
  if (param_7 != 0) {
    uVar2 = uVar2 & 3;
    *param_6 = *param_6 ^ (byte)(local_28 >> 8);
    if ((uVar2 != 0 && param_7 != 1) &&
       (param_6[1] = param_6[1] ^ (byte)(local_28 >> 0x10), uVar2 != 1 && param_7 != 2)) {
      param_6[2] = param_6[2] ^ (byte)(local_28 >> 0x18);
      if (uVar2 != 2 && param_7 != 3) {
        param_6[3] = param_6[3] ^ (byte)local_24;
      }
      *param_1 = 0x80000029;
      return;
    }
  }
  *param_1 = 0x80000029;
  return;
}

