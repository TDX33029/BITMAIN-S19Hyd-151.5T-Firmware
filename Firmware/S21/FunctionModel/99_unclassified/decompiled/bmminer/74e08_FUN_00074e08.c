// FUN_00074e08 @ 00074e08  size=760  callers=23
// program: bmminer


uint FUN_00074e08(void)

{
  int iVar1;
  char local_818 [20];
  uint local_804;
  uint local_800;
  char acStack_7fc [2020];
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  if ((DAT_009451f0 == 0) || (DAT_009451f4 == 0)) {
    local_18 = 0;
    local_14 = 1;
    local_12 = 2;
    local_11 = 0;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_009451d8);
    local_c = FUN_0006256c(&local_18);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451d8);
    if ((int)local_c < 0) {
    }
    else {
      DAT_009451f0 = local_c;
      DAT_009451f4 = 1;
      local_c = FUN_00075324();
      if ((int)local_c < 0) {
        builtin_strncpy(local_818,"power open power_ver",0x14);
        local_804._0_1_ = 's';
        local_804._1_1_ = 'i';
        local_804._2_1_ = 'o';
        local_804._3_1_ = 'n';
        local_800._0_1_ = ' ';
        local_800._1_1_ = '<';
        local_800._2_1_ = ' ';
        local_800._3_1_ = '0';
        builtin_strncpy(acStack_7fc," will close power\n",0x13);
        FUN_0004948c(3,local_818,0);
        FUN_00075104();
      }
      else {
        DAT_009451f8 = local_c;
        snprintf(local_818,0x800,"power open power_version = 0x%x\n",local_c);
        FUN_0004948c(3,local_818,0);
        if ((DAT_009451f8 == 0xc1) || (DAT_009451f8 == 0xc2)) {
          local_10 = FUN_0007127c(DAT_009451f0);
          snprintf(local_818,0x800,"power fw_version = 0x%x\n",local_10);
          FUN_0004948c(0,local_818,0);
          DAT_009451fc = local_10;
        }
        memset(&DAT_00945208,0,0x160);
        iVar1 = FUN_00077634();
        if (iVar1 == 0) {
          DAT_00945200 = 1;
          builtin_strncpy(local_818,"power is Calibrated\n",0x14);
          local_804 = local_804 & 0xffffff00;
          FUN_0004948c(1,local_818,0);
        }
        else {
          DAT_00945200 = 0;
          builtin_strncpy(local_818,"power is not Calibra",0x14);
          local_804._0_1_ = 't';
          local_804._1_1_ = 'e';
          local_804._2_1_ = 'd';
          local_804._3_1_ = '\n';
          local_800 = local_800 & 0xffffff00;
          FUN_0004948c(1,local_818,0);
        }
        local_c = 0;
      }
    }
  }
  else {
    local_c = DAT_009451f0;
  }
  return local_c;
}

