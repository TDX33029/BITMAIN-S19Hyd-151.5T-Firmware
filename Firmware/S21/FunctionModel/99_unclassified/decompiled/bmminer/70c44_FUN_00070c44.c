// FUN_00070c44 @ 00070c44  size=1000  callers=1
// program: bmminer


undefined4 FUN_00070c44(char param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88c [4];
  byte abStack_888 [60];
  byte local_84c;
  byte local_84b;
  byte local_84a;
  byte local_849;
  byte local_848;
  byte local_847;
  byte local_846;
  byte local_845;
  char local_83c [20];
  undefined4 local_828;
  char acStack_824 [2024];
  undefined4 local_3c;
  undefined2 local_38;
  int local_34;
  undefined2 local_2e;
  int local_2c;
  
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_3c = 0xf04aa55;
    local_38 = 0xf04;
    memset(auStack_88c,0,0x50);
    local_2e = 0;
    local_34 = FUN_0006f67c(DAT_009451f0,&local_3c,6,auStack_88c,0x4a);
    if (local_34 == 0) {
      memcpy(param_2,abStack_888,0x44);
      if (param_1 != '\0') {
        builtin_strncpy(local_83c,"Get power error data",0x14);
        local_828 = CONCAT13(local_828._3_1_,0xa3a);
        FUN_0004948c(3,local_83c,0);
        for (local_2c = 0; local_2c < 0x3c; local_2c = local_2c + 0xc) {
          snprintf(local_83c,0x800,
                   "data[%02d-%02d]: %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x\n",local_2c,
                   local_2c + 0xb,(uint)abStack_888[local_2c],(uint)abStack_888[local_2c + 1],
                   (uint)abStack_888[local_2c + 2],(uint)abStack_888[local_2c + 3],
                   (uint)abStack_888[local_2c + 4],(uint)abStack_888[local_2c + 5],
                   (uint)abStack_888[local_2c + 6],(uint)abStack_888[local_2c + 7],
                   (uint)abStack_888[local_2c + 8],(uint)abStack_888[local_2c + 9],
                   (uint)abStack_888[local_2c + 10],(uint)abStack_888[local_2c + 0xb]);
          FUN_0004948c(3,local_83c,0);
        }
        snprintf(local_83c,0x800,"data[60-67]: %02x%02x%02x%02x %02x%02x%02x%02x\n",(uint)local_84c,
                 (uint)local_84b,(uint)local_84a,(uint)local_849,(uint)local_848,(uint)local_847,
                 (uint)local_846,(uint)local_845);
        FUN_0004948c(3,local_83c,0);
      }
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_83c,"Get power error data",0x14);
      local_828._0_1_ = ' ';
      local_828._1_1_ = 'f';
      local_828._2_1_ = 'a';
      local_828._3_1_ = 'i';
      builtin_strncpy(acStack_824,"led\n",5);
      FUN_0004948c(3,local_83c,0);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

