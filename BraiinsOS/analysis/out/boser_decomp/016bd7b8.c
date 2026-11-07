// FUN_016bd7b8 @ 016bd7b8 size=184 calls_out=4 calls_in=1
// strings: 

void FUN_016bd7b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_1c = 0xfa;
  local_20 = 100;
  local_24 = 10;
  local_28 = 10;
  FUN_016e5160(&local_14,&local_28,param_2);
  iVar1 = local_14;
  if (local_14 != -0x80000000) {
    iVar1 = local_c;
  }
  if (local_14 != -0x80000000 && iVar1 != 0) {
    iVar1 = iVar1 << 4;
    puVar2 = (undefined1 *)(local_10 + 0xc);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -0x10;
      puVar2 = puVar2 + 0x10;
    } while (iVar1 != 0);
  }
  FUN_016e4a80(&local_14,1);
  if (local_14 == -0x80000000) {
    *(undefined1 *)(param_1 + 0xc) = 2;
  }
  else {
    FUN_016bd920(param_1,local_10,local_c);
  }
  FUN_016bd8cc(&local_14);
  return;
}

