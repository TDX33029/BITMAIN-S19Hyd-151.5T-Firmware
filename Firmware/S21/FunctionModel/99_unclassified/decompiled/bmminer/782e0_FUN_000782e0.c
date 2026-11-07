// FUN_000782e0 @ 000782e0  size=872  callers=1
// program: bmminer


undefined4 FUN_000782e0(uint param_1,int param_2,code *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_38 [16];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  char *local_14;
  uint local_10;
  uint local_c;
  
  local_28 = 0;
  iVar1 = (*param_3)(&DAT_000a9400,1,param_4);
  if (iVar1 == 0) {
    local_1c = param_1 + param_2;
    local_c = param_1;
LAB_000783f0:
    while (local_10 = local_c, local_c < local_1c) {
      local_10 = FUN_0007e6b8(local_c,local_1c - local_c,&local_28);
      if (local_10 == 0) {
        return 0xffffffff;
      }
      if (((((local_28 == 0x5c) || (local_28 == 0x22)) || ((int)local_28 < 0x20)) ||
          (((param_5 & 0x400) != 0 && (local_28 == 0x2f)))) ||
         (((param_5 & 0x40) != 0 && (0x7f < (int)local_28)))) break;
      local_c = local_10;
    }
    if ((local_c != param_1) && (iVar1 = (*param_3)(param_1,local_c - param_1,param_4), iVar1 != 0))
    {
      return 0xffffffff;
    }
    if (local_10 == local_c) {
      uVar2 = (*param_3)(&DAT_000a9400,1,param_4);
      return uVar2;
    }
    local_18 = 2;
    if (local_28 == 0xc) {
      local_14 = "\\f";
    }
    else if ((int)local_28 < 0xd) {
      if (local_28 == 9) {
        local_14 = "\\t";
      }
      else if (local_28 == 10) {
        local_14 = "\\n";
      }
      else {
        if (local_28 != 8) goto LAB_00078568;
        local_14 = "\\b";
      }
    }
    else if (local_28 == 0x22) {
      local_14 = "\\\"";
    }
    else if ((int)local_28 < 0x23) {
      if (local_28 == 0xd) {
        local_14 = "\\r";
      }
      else {
LAB_00078568:
        if ((int)local_28 < 0x10000) {
          snprintf(acStack_38,0xd,"\\u%04X",local_28);
          local_18 = 6;
        }
        else {
          local_28 = local_28 - 0x10000;
          local_20 = (int)local_28 >> 10 & 0x3ffU | 0xd800;
          local_24 = local_28 & 0x3ff | 0xdc00;
          snprintf(acStack_38,0xd,"\\u%04X\\u%04X",local_20,local_24);
          local_18 = 0xc;
        }
        local_14 = acStack_38;
      }
    }
    else if (local_28 == 0x2f) {
      local_14 = "\\/";
    }
    else {
      if (local_28 != 0x5c) goto LAB_00078568;
      local_14 = "\\\\";
    }
    iVar1 = (*param_3)(local_14,local_18,param_4);
    if (iVar1 == 0) {
      local_c = local_10;
      param_1 = local_10;
      goto LAB_000783f0;
    }
  }
  return 0xffffffff;
}

