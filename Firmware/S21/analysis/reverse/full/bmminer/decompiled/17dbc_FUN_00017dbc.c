// FUN_00017dbc @ 00017dbc  size=260  callers=1
// program: bmminer


char FUN_00017dbc(int param_1,byte param_2)

{
  int iVar1;
  byte local_2019 [5];
  char local_2014 [4];
  int local_2010 [2049];
  
  local_2010[1] = 0x4090000;
  local_2014[0] = '\0';
  local_2019[0] = param_2;
  local_2010[0] = param_1;
  if ((DAT_000bfb3c == 0) && (iVar1 = FUN_0006256c(local_2010), -1 < iVar1)) {
    DAT_000bfb3c = 1;
    DAT_000bfb38 = iVar1;
  }
  iVar1 = FUN_00062a08(DAT_000bfb38,local_2019,1,local_2014,1,1);
  if (iVar1 == 1) {
    if (4 < DAT_000be63c) {
      snprintf((char *)local_2010,0x2000,
               "%s we read tmp451 fd :d%d chain %d is_remote %d read temp %d",
               "read_sensor_on_tmp451",DAT_000bfb38,param_1,(uint)local_2019[0],(int)local_2014[0]);
      FUN_0004948c(4,local_2010,0);
      return local_2014[0];
    }
  }
  else {
    local_2014[0] = -1;
  }
  return local_2014[0];
}

