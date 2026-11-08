// FUN_015e38d8 @ 015e38d8 size=204 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015e38d8(int param_1,int param_2)

{
  int local_3c;
  int local_38;
  int *local_34;
  undefined1 *local_30;
  int *local_2c;
  undefined1 *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  if (3 < DAT_01d51b00) {
    local_3c = param_1 + 0x40;
    local_28 = &LAB_0193a90c;
    local_30 = &LAB_0193a90c;
    local_34 = &local_3c;
    local_38 = param_1 + 0x4c;
    local_2c = &local_38;
    local_18 = 0x13;
    local_20 = 0x13;
    local_1c = "m";
    local_24 = "m";
    local_14 = &DAT_01cfd7c8;
    FUN_015fb650(&DAT_005af0ae,&local_34,4,&local_24);
  }
  FUN_01ac6cbc(param_2 + 0x24,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  FUN_01ac6cbc(param_2 + 0x24,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  return 2;
}

