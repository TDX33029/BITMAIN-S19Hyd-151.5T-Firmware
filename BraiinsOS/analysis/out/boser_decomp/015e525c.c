// FUN_015e525c @ 015e525c size=268 calls_out=5 calls_in=1
// strings: Check for add_ | my answer is suppressed by incoming msg

uint FUN_015e525c(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcStack_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 local_5c;
  undefined *local_58;
  
  if (4 < DAT_01d51b00) {
    local_5c = 0x13;
    local_58 = &DAT_01cfd3f8;
    local_60 = "m";
    pcStack_68 = "m";
    uStack_64 = 0x13;
    FUN_015fb650("Check for add_",0x29,5,&pcStack_68);
  }
  uVar1 = FUN_015e4518(param_3,param_2);
  if (uVar1 == 0) {
    FUN_01bed4e2(&pcStack_68,param_3,0x50);
    FUN_015e539c(param_1,&pcStack_68);
  }
  else {
    if (4 < DAT_01d51b00) {
      local_5c = 0x13;
      local_58 = &DAT_01cfd408;
      local_60 = "m";
      pcStack_68 = "m";
      uStack_64 = 0x13;
      FUN_015fb650("my answer is suppressed by incoming msg",0x4f,5,&pcStack_68);
    }
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar2);
    FUN_015e3168(param_3);
  }
  return uVar1 ^ 1;
}

