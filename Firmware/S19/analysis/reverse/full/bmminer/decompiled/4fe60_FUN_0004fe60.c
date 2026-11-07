// FUN_0004fe60 @ 0004fe60  size=272  callers=0
// program: bmminer


uint FUN_0004fe60(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  undefined4 local_830;
  undefined2 local_82c;
  undefined4 local_828;
  uint local_824;
  char local_820 [2052];
  
  if ((DAT_0050fabc == 0) && (uVar2 = FUN_0004f1d4(), (int)uVar2 < 0)) {
    snprintf(local_820,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_sw_ver");
    FUN_00032218(0,local_820,0);
  }
  else {
    uVar1 = DAT_0050fab8;
    sVar4 = 3;
    do {
      local_828 = 0;
      local_824 = 0;
      local_830 = 0x104aa55;
      local_82c = 0x104;
      iVar3 = FUN_0004e2c4(uVar1,&local_830,6,&local_828,8);
      if (iVar3 == 0) {
        uVar2 = 0;
        if ((local_824 & 0xffff) != 0) {
          return local_824 & 0xffff;
        }
      }
      else {
        uVar2 = 0x80000300;
        builtin_strncpy(local_820,"get power fw ver failed\n",0x19);
        FUN_00032218(0,local_820);
      }
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  return uVar2;
}

