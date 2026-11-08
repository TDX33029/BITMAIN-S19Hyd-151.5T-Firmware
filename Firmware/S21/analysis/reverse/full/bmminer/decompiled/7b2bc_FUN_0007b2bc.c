// FUN_0007b2bc @ 0007b2bc  size=436  callers=13
// program: bmminer


void FUN_0007b2bc(int param_1,int param_2,int param_3,char *param_4,undefined1 param_5)

{
  char *param4;
  undefined1 uStack00000000;
  int local_174;
  char acStack_168 [159];
  undefined1 local_c9;
  char acStack_c8 [159];
  undefined1 local_29;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  local_18 = 0xffffffff;
  local_1c = 0;
  local_20 = acStack_c8;
  if (param_1 != 0) {
    vsnprintf(acStack_c8,0xa0,param_4,&param_5);
    local_29 = 0;
    local_174 = param_3;
    if (param_2 != 0) {
      param4 = (char *)FUN_0007db90(param_2 + 0x28);
      local_14 = *(undefined4 *)(param_2 + 0x18);
      local_18 = *(undefined4 *)(param_2 + 0x1c);
      local_1c = *(undefined4 *)(param_2 + 0x24);
      if ((param4 == (char *)0x0) || (*param4 == '\0')) {
        if (param_3 == 8) {
          local_174 = 6;
        }
        if (*(int *)(param_2 + 0x14) == -2) {
          local_20 = acStack_c8;
        }
        else {
          snprintf(acStack_168,0xa0,"%s near end of file",acStack_c8);
          local_c9 = 0;
          local_20 = acStack_168;
        }
      }
      else if (*(uint *)(param_2 + 0x2c) < 0x15) {
        snprintf(acStack_168,0xa0,"%s near \'%s\'",acStack_c8,param4);
        local_c9 = 0;
        local_20 = acStack_168;
      }
    }
    FUN_000810f8(param_1,local_14,local_18,local_1c,local_174,&DAT_000a94d8,local_20);
  }
  return;
}

