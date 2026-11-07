// FUN_016a4894 @ 016a4894 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_016a4894(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  bVar1 = 0;
  if (*(char *)(*(int *)(param_2 + 0x278) + 0x15a) == '\x01') {
    bVar1 = *(byte *)(*(int *)(param_2 + 0x278) + 0x15b);
  }
  FUN_016845b8(&local_24,param_2,param_3,param_4);
  if (local_24 == 2) {
    *param_1 = 2;
    param_1[1] = local_20;
  }
  else if ((local_24 & 1) == 0) {
    *param_1 = 0;
  }
  else if ((bVar1 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_20;
    param_1[2] = local_1c;
  }
  else {
    FUN_01686d30(param_1,param_4,local_20,local_1c,local_1c,param_2,param_3);
  }
  return;
}

