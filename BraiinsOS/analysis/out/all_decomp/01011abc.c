// FUN_01011abc @ 01011abc size=540 calls_out=3 calls_in=1
// strings: String too long

void FUN_01011abc(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,uint *param_8,undefined4 param_9,
                 uint param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_280 [64];
  undefined1 auStack_180 [32];
  uint local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  undefined4 local_50;
  uint local_30;
  undefined4 local_2c;
  
  FUN_016dd606(local_280,0,0x250);
  local_50 = 1;
  if (param_3 == 0) {
    local_160 = 6;
    if (param_4 != 0) {
      local_160 = 4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_5) {
    case 1:
      local_160 = local_160 | 0x10;
      break;
    case 2:
      local_160 = local_160 | 0x20;
      break;
    case 3:
      local_160 = local_160 | 0x30;
    }
  }
  else {
    local_160 = 10;
    if (param_4 != 0) {
      local_160 = 8;
    }
  }
  uVar3 = 0x400;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_6) {
  case 1:
    uVar3 = 0x100;
    break;
  case 2:
    uVar3 = 0x200;
    break;
  case 3:
    goto switchD_01011b48_caseD_3;
  }
  local_160 = local_160 | uVar3;
switchD_01011b48_caseD_3:
  if (param_3 != 0) {
    uVar3 = 0x40;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_7) {
    case 2:
      uVar3 = 0x80;
    case 1:
      local_160 = local_160 | uVar3;
    default:
      if ((*param_8 & 1) != 0) {
        local_138 = param_8[2];
        local_134 = param_8[3];
        local_130 = param_8[4];
        local_12c = param_8[5];
        uVar3 = 1;
        do {
          uVar1 = 1 << (uVar3 & 0xff);
          uVar2 = uVar3 - 0x20;
          if (-1 < (int)uVar2) {
            uVar1 = 0;
          }
          local_138 = local_138 & ~uVar1;
          local_130 = local_130 & ~uVar1;
          uVar1 = 1 >> (0x20 - uVar3 & 0xff);
          if (-1 < (int)uVar2) {
            uVar1 = 1 << (uVar2 & 0xff);
          }
          local_134 = local_134 & ~uVar1;
          local_12c = local_12c & ~uVar1;
          bVar4 = uVar3 < 0x3f;
          uVar3 = uVar3 + 1;
        } while (bVar4);
        local_140 = 2;
        local_158 = 1;
      }
    }
  }
  uStack_15c = 0;
  local_280[0] = param_2;
  if (param_10 < 0x20) {
    FUN_016dd1aa(auStack_180,param_9,param_10);
    auStack_180[param_10] = 0;
  }
  else {
    FUN_015e79d4(&local_30,0x14,"String too long",0xf);
    if ((local_30 & 0xff) != 4) {
      param_1[1] = local_30;
      param_1[2] = local_2c;
      *param_1 = 1;
      return;
    }
  }
  FUN_016dd1aa(param_1 + 2,local_280,0x250);
  *param_1 = 0;
  return;
}

