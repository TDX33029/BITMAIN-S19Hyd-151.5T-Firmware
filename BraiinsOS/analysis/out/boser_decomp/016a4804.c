// FUN_016a4804 @ 016a4804 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_016a4804(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  bVar1 = *(byte *)(param_2 + 0x2b4);
  bVar2 = *(byte *)(param_2 + 0x2b5);
  FUN_0167efb0(&local_24);
  if (local_24 == 2) {
    *param_1 = 2;
    param_1[1] = local_20;
  }
  else if ((local_24 & 1) == 0) {
    *param_1 = 0;
  }
  else if ((bVar1 & bVar2 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_20;
    param_1[2] = local_1c;
  }
  else {
    FUN_01686b80(param_1,param_3,local_20,local_1c,local_1c,param_2);
  }
  return;
}

