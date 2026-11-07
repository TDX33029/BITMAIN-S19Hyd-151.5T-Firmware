// FUN_01541cd0 @ 01541cd0 size=576 calls_out=7 calls_in=0
// strings: 

void FUN_01541cd0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined2 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [108];
  undefined4 local_90;
  undefined1 local_8c;
  
  if (*(char *)(param_3 + 0x251) == '\0') {
    local_110 = 4;
    local_184 = 0x10001;
    local_188 = 0x80000001;
    FUN_01525ed4(param_3,&local_188,*(char *)(param_3 + 0x31) == '\x02');
    *(undefined1 *)(param_3 + 0x255) = 1;
    *(undefined1 *)(param_1 + 1) = 0x1b;
    *param_1 = &DAT_8000001c;
    return;
  }
  local_90 = 0x80000011;
  local_8c = 1;
  local_180 = 0;
  local_184 = 1;
  local_188 = 0;
  FUN_0150e524(&local_90,&local_188,0x80000000);
  local_108 = local_188;
  uStack_104 = local_184;
  uStack_100 = local_180;
  FUN_016dd1aa(auStack_fc,&local_90,0x6c);
  local_110 = 5;
  FUN_016dd1aa(&local_188,&local_108,0x78);
  FUN_0152245c(&local_108,&local_188);
  FUN_01526458(param_3,&local_108);
  FUN_01556ce0(&local_188,param_2 + 0x40,*(undefined1 *)(param_3 + 0x250));
  FUN_01556f4c(*(undefined4 *)(param_2 + 0x48),&local_188,param_3);
  *param_1 = 0x80000029;
  return;
}

