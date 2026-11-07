// FUN_00073ac8 @ 00073ac8  size=500  callers=0
// program: bmminer


int FUN_00073ac8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_824 [2048];
  undefined1 auStack_24 [3];
  char local_21;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(local_824,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_power_temp");
    FUN_0004948c(0,local_824,0);
    return local_c;
  }
  if (DAT_009451f8 < 0xc1) {
    iVar2 = -1;
  }
  else {
    local_10 = DAT_009451f0;
    local_18 = 0x904aa55;
    local_14 = 0xd;
    iVar2 = FUN_0006f4a8(DAT_009451f0,&local_18,6,auStack_24,0xc);
    if (iVar2 == 0) {
      if ((param_1 != (undefined4 *)0x0) && (local_21 == '\t')) {
        uVar1 = FUN_00073974(local_20);
        *param_1 = uVar1;
        uVar1 = FUN_00073974(local_1e);
        param_1[1] = uVar1;
        uVar1 = FUN_00073974(local_1c);
        param_1[2] = uVar1;
      }
      iVar2 = 0;
    }
    else {
      builtin_strncpy(local_824,"get power status failed\n",0x19);
      FUN_0004948c(0,local_824,0);
      iVar2 = -0x7ffffd00;
    }
  }
  return iVar2;
}

