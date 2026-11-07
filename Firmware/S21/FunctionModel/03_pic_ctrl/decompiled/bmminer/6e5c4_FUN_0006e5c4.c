// FUN_0006e5c4 @ 0006e5c4  size=320  callers=1
// program: bmminer


int FUN_0006e5c4(byte param_1)

{
  int iVar1;
  char acStack_810 [2048];
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_012a2968 + (uint)param_1 * 8) == 0) &&
       (local_c = FUN_0006e354(param_1), local_c < 0)) {
      snprintf(acStack_810,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
               "get_pic_version",(uint)param_1);
      FUN_0004948c(0,acStack_810,0);
      return local_c;
    }
    iVar1 = FUN_0006d350(*(undefined4 *)(&DAT_012a2964 + (uint)param_1 * 8));
  }
  else {
    snprintf(acStack_810,0x800,"%s: Bad pic param, input chain is %d\n","get_pic_version",
             (uint)param_1);
    FUN_0004948c(0,acStack_810,0);
    iVar1 = -0x7ffffdff;
  }
  return iVar1;
}

