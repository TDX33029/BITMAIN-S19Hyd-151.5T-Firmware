// FUN_00f01930 @ 00f01930 size=296 calls_out=5 calls_in=0
// strings: 

void FUN_00f01930(char param_1,uint *param_2,undefined4 param_3)

{
  byte local_12;
  undefined1 local_11;
  
  local_12 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_12,1);
  local_11 = FUN_00f011f8(param_2);
  FUN_01284394(param_3,&local_11,1);
  if ((*param_2 & 1) != 0) {
    FUN_00efe06c((int)*(undefined8 *)(param_2 + 2),1,param_3);
  }
  if ((param_2[4] & 1) != 0) {
    FUN_00efe06c((int)*(undefined8 *)(param_2 + 6),2,param_3);
  }
  if ((param_2[8] & 1) != 0) {
    FUN_00efe06c((int)*(undefined8 *)(param_2 + 10),3,param_3);
  }
  if (param_2[0x12] == 1) {
    FUN_00efc9fc(4,param_2[0x13],param_3);
  }
  if (param_2[0x14] == 1) {
    FUN_00efc9fc(5,param_2[0x15],param_3);
  }
  if (param_2[0x16] == 1) {
    FUN_00efc9fc(6,param_2[0x17],param_3);
  }
  if (param_2[0xc] == 4 && param_2[0xd] == 0) {
    return;
  }
  FUN_00f01e44(7,param_2 + 0xc,param_3);
  return;
}

