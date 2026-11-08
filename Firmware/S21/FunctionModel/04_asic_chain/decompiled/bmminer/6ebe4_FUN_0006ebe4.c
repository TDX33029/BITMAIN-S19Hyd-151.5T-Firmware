// FUN_0006ebe4 @ 0006ebe4  size=312  callers=1
// program: bmminer


int FUN_0006ebe4(byte param_1)

{
  int iVar1;
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_012a2968 + (uint)param_1 * 8) == 0) &&
       (local_c = FUN_0006e354(param_1), local_c < 0)) {
      snprintf(acStack_80c,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
               "send_pic_heart_beat",(uint)param_1);
      FUN_0004948c(0,acStack_80c,0);
      return local_c;
    }
    iVar1 = FUN_0006e0b8(*(undefined4 *)(&DAT_012a2964 + (uint)param_1 * 8));
  }
  else {
    snprintf(acStack_80c,0x800,"%s: Bad pic param, input chain is %d\n","send_pic_heart_beat",
             (uint)param_1);
    FUN_0004948c(0,acStack_80c,0);
    iVar1 = -0x7ffffdff;
  }
  return iVar1;
}

