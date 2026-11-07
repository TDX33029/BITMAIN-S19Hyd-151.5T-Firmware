// FUN_00dadd98 @ 00dadd98 size=160 calls_out=6 calls_in=0
// strings: 

void FUN_00dadd98(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 == 5 && iVar2 == 0) {
    FUN_00b19860(param_1[2],param_1[3]);
    return;
  }
  FUN_00b19860(param_1[0x10],param_1[0x11]);
  if (iVar1 != 4 || iVar2 != 0) {
    FUN_01760ec4(param_1);
  }
  if (param_1[0x14] != 0) {
    FUN_01443048(param_1[0x14],param_1[0x15]);
  }
  if (param_1[0x18] != 0) {
    (**(code **)(param_1[0x18] + 0x10))(param_1 + 0x1b,param_1[0x19],param_1[0x1a]);
  }
  FUN_00d57d84(param_1[0x20]);
  if (*(byte *)(param_1 + 0x30) < 4) {
    FUN_0185401c(*(byte *)(param_1 + 0x30),param_1[0x31]);
  }
  FUN_012840cc(param_1 + 0x32);
  return;
}

