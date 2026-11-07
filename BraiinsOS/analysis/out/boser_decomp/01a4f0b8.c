// FUN_01a4f0b8 @ 01a4f0b8 size=412 calls_out=5 calls_in=1
// strings: 

void FUN_01a4f0b8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_230 [84];
  int local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8 [2];
  int local_1c0;
  undefined1 auStack_170 [104];
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined1 auStack_90 [108];
  
  FUN_01a4f26c(&local_108);
  iVar2 = iStack_100;
  iVar1 = iStack_104;
  if (local_108 == 3) {
    FUN_01a571b0(&local_108,param_2);
    if (local_b4 == 8) {
      param_1[1] = local_108;
      param_1[2] = iStack_104;
      param_1[3] = iStack_100;
      param_1[4] = local_fc;
      param_1[5] = uStack_f8;
      param_1[6] = uStack_f4;
      *param_1 = 4;
    }
    else {
      FUN_01bed4e2(local_1c8,&local_108,0x54);
      local_1d8 = local_b0;
      uStack_1d4 = uStack_ac;
      uStack_1d0 = uStack_a8;
      uStack_1cc = uStack_a4;
      FUN_01bed4e2(auStack_230,local_1c8,0x54);
      local_1dc = local_b4;
      FUN_01a4f26c(&local_108,param_2);
      if (local_108 == 3) {
        FUN_01bed4e2(&local_108,auStack_230,0x68);
        local_9c = 0x80000000;
        if (iVar1 != iVar2) {
          local_9c = 0x80000002;
          local_94 = iVar2;
          local_98 = iVar1;
        }
        local_1c8[0] = 0x80000000;
        if (iStack_104 != iStack_100) {
          local_1c8[0] = 0x80000002;
          local_1c0 = iStack_100;
        }
        FUN_01a5c978(auStack_170,&local_108,&local_9c,local_1c8);
        FUN_01bed4e2((uint)auStack_90 | 4,auStack_170,0x68);
        *param_1 = 1;
        FUN_01bed4e2(param_1 + 1,auStack_90,0x6c);
      }
      else {
        param_1[4] = local_fc;
        param_1[5] = uStack_f8;
        param_1[6] = uStack_f4;
        param_1[1] = local_108;
        param_1[2] = iStack_104;
        param_1[3] = iStack_100;
        *param_1 = 4;
        FUN_01a4e454(auStack_230);
      }
    }
  }
  else {
    param_1[4] = local_fc;
    param_1[5] = uStack_f8;
    param_1[6] = uStack_f4;
    *param_1 = 4;
    param_1[1] = local_108;
    param_1[2] = iStack_104;
    param_1[3] = iStack_100;
  }
  return;
}

