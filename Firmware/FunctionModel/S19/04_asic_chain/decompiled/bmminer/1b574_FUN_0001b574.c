// FUN_0001b574 @ 0001b574  size=456  callers=0
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x0001b6d8) */

void FUN_0001b574(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint param3;
  uint uVar2;
  undefined2 local_828;
  undefined1 local_826;
  
  if (DAT_00087bbc < 4) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    snprintf((char *)&local_828,0x800,"[chain %d]\n",param_1);
    FUN_00032218(3,&local_828,0);
    uVar1 = DAT_00087bbc;
    if (param_3 == 0) goto LAB_0001b690;
  }
  param3 = 0;
  uVar1 = DAT_00087bbc;
LAB_0001b5e4:
  do {
    uVar2 = param3 & 0xf;
    if (uVar2 == 0) {
      if (3 < uVar1) {
        snprintf((char *)&local_828,0x800,"0x%04X ",param3);
        FUN_00032eb0(3,&local_828,0);
        uVar1 = DAT_00087bbc;
      }
joined_r0x0001b628:
      if (3 < uVar1) {
        snprintf((char *)&local_828,0x800,"%02X ",(uint)*(byte *)(param_2 + param3));
        FUN_00032eb0(3,&local_828,0);
        uVar1 = DAT_00087bbc;
        if ((uVar2 == 0xf) && (3 < DAT_00087bbc)) {
          param3 = param3 + 1;
          local_828 = 10;
          FUN_00032eb0(3,&local_828,0);
          uVar1 = DAT_00087bbc;
          if (param_3 <= param3) break;
          goto LAB_0001b5e4;
        }
      }
    }
    else {
      if (uVar2 != 8) goto joined_r0x0001b628;
      if (3 < uVar1) {
        local_828 = 0x2020;
        local_826 = 0;
        FUN_00032eb0(3,&local_828,0);
        uVar1 = DAT_00087bbc;
        goto joined_r0x0001b628;
      }
    }
    param3 = param3 + 1;
  } while (param3 < param_3);
LAB_0001b690:
  if (uVar1 < 4) {
    return;
  }
  local_828 = 10;
  FUN_00032eb0(3,&local_828,0);
  return;
}

