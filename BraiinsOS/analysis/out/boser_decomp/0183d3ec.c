// FUN_0183d3ec @ 0183d3ec size=256 calls_out=3 calls_in=0
// strings: 

void FUN_0183d3ec(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  code *local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  if (*param_2 == 2) {
    FUN_019dfc70(param_1,param_2 + 1,param_3,param_4,param_5);
  }
  else {
    FUN_01863cdc(param_1,param_2,param_3,param_4,param_5);
  }
  if (*param_1 == '\x04') {
    local_40 = *(undefined4 *)(param_1 + 4);
    if (4 < DAT_01d51b00) {
      local_34 = &local_48;
      local_3c = param_2 + 0xba;
      local_30 = &LAB_0183b230;
      local_20 = 0x19;
      local_28 = 0x19;
      local_38 = FUN_012fd9d0;
      local_44 = param_5;
      local_1c = &DAT_01d1eee0;
      local_24 = &DAT_0050d78e;
      local_2c = &DAT_0050d78e;
      local_48 = param_4;
      FUN_015fb650(&DAT_0050d7ca,&local_3c,5,&local_2c);
    }
  }
  else if (*param_1 == '\x05') {
    *param_1 = '\x05';
  }
  return;
}

