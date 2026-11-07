// FUN_00f00d70 @ 00f00d70 size=416 calls_out=5 calls_in=2
// strings: 

void FUN_00f00d70(char param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  byte local_27;
  byte local_26;
  byte local_25;
  
  local_27 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_27,1);
  uVar1 = FUN_00f00b38(param_2);
  iVar2 = 10;
  do {
    if (uVar1 >> 7 == 0) {
      local_25 = (byte)uVar1;
      FUN_01284394(param_3,&local_25,1);
      break;
    }
    local_26 = (byte)uVar1 | 0x80;
    FUN_01284394(param_3,&local_26,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  uVar1 = param_2[7];
  if (param_2[6] != 0 || uVar1 != 0) {
    FUN_00efe2f8(1,uVar1,param_2[6],uVar1,param_3);
  }
  uVar1 = param_2[9];
  if (param_2[8] != 0 || uVar1 != 0) {
    FUN_00efe2f8(2,uVar1,param_2[8],uVar1,param_3);
  }
  uVar1 = param_2[0xb];
  if (param_2[10] != 0 || uVar1 != 0) {
    FUN_00efe2f8(3,uVar1,param_2[10],uVar1,param_3);
  }
  uVar1 = param_2[0xd];
  if (param_2[0xc] != 0 || uVar1 != 0) {
    FUN_00efe2f8(4,uVar1,param_2[0xc],uVar1,param_3);
  }
  uVar1 = param_2[0xf];
  if (param_2[0xe] != 0 || uVar1 != 0) {
    FUN_00efe2f8(5,uVar1,param_2[0xe],uVar1,param_3);
  }
  uVar1 = param_2[0x11];
  if (param_2[0x10] != 0 || uVar1 != 0) {
    FUN_00efe2f8(6,uVar1,param_2[0x10],uVar1,param_3);
    uVar1 = extraout_r1;
  }
  if ((*param_2 & 1) != 0) {
    FUN_00efc900(7,uVar1,param_2[2],param_2[3],param_2[4],param_3);
  }
  if (param_2[0x14] == 0) {
    return;
  }
  FUN_01016f10(8,param_2[0x13],param_2[0x14],param_3);
  return;
}

