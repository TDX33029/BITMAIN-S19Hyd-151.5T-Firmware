// FUN_01895338 @ 01895338 size=256 calls_out=3 calls_in=2
// strings: 

void FUN_01895338(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_270 [272];
  int local_160;
  uint local_15c;
  int local_158;
  uint local_154;
  undefined4 local_150 [4];
  undefined1 auStack_140 [264];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_150[3] = 0;
  local_150[2] = 0;
  local_150[1] = 0;
  local_150[0] = 0;
  FUN_01bed4e2(auStack_140,param_2,0x100);
  FUN_01bed4e2(auStack_270,local_150,0x110);
  local_154 = param_5 >> 0x1d;
  local_158 = param_5 << 3;
  local_15c = param_4 >> 0x1d;
  local_160 = param_4 << 3;
  if (param_4 != 0) {
    do {
      uVar2 = param_4;
      if (0xf < param_4) {
        uVar2 = 0x10;
      }
      iVar1 = 0x10 - uVar2;
      if (0xf < param_4) {
        iVar1 = 0;
      }
      FUN_01bed93e((int)local_150 + uVar2,0,iVar1);
      FUN_01bed4e2(local_150,param_3,uVar2);
      local_38 = local_150[0];
      uStack_34 = local_150[1];
      uStack_30 = local_150[2];
      uStack_2c = local_150[3];
      FUN_01894c58(auStack_270,&local_38);
      param_3 = param_3 + uVar2;
      param_4 = param_4 - uVar2;
    } while (param_4 != 0);
  }
  FUN_01bed4e2(param_1 + 0x10,auStack_270,0x120);
  *param_1 = 0;
  return;
}

