// FUN_01780fb4 @ 01780fb4 size=224 calls_out=3 calls_in=0
// strings: 

void FUN_01780fb4(char *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  code *local_38;
  undefined4 *local_34;
  code *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  FUN_0178f320();
  cVar1 = *param_1;
  if (cVar1 != '\x05') {
    if (cVar1 != '\x04') {
      return;
    }
    if (4 < DAT_01d51b00) {
      local_40 = param_4[2];
      if ((uint)param_4[1] < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_40,param_4[1],&DAT_01d2e4e0);
      }
      local_34 = &local_44;
      local_3c = param_2 + 0x250;
      local_20 = 0x19;
      local_28 = 0x19;
      local_24 = &DAT_0050d78e;
      local_2c = &DAT_0050d78e;
      local_44 = *param_4;
      local_30 = FUN_018c39f8;
      local_38 = FUN_012fd9d0;
      local_1c = &DAT_01d1a760;
      FUN_0193b350(&DAT_0050d7a7,&local_3c,5,&local_2c);
    }
  }
  *param_1 = cVar1;
  return;
}

