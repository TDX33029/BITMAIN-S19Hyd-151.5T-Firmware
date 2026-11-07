// FUN_0183d25c @ 0183d25c size=296 calls_out=4 calls_in=0
// strings: 

void FUN_0183d25c(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  code *local_38;
  undefined4 *local_34;
  code *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  if (*param_2 == 2) {
    FUN_019dfa94(param_1,param_2[3],param_2[4],param_3,param_4,param_5);
  }
  else {
    FUN_01863754(param_1,param_2,param_3,param_4,param_5);
  }
  if (*param_1 == '\x04') {
    local_40 = *(uint *)(param_1 + 4);
    if (4 < DAT_01d51b00) {
      if (param_5 < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_40,param_5,&DAT_01d1eec0);
      }
      local_34 = &local_44;
      local_3c = param_2 + 0xba;
      local_1c = &DAT_01d1eed0;
      local_20 = 0x19;
      local_28 = 0x19;
      local_38 = FUN_012fd9d0;
      local_30 = FUN_0188d6d0;
      local_24 = &DAT_0050d78e;
      local_2c = &DAT_0050d78e;
      local_44 = param_4;
      FUN_015fb650(&DAT_0050d7b8,&local_3c,5,&local_2c);
    }
  }
  else if (*param_1 == '\x05') {
    *param_1 = '\x05';
  }
  return;
}

