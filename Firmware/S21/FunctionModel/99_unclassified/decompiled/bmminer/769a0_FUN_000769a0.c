// FUN_000769a0 @ 000769a0  size=756  callers=1
// program: bmminer


int FUN_000769a0(byte param_1,int param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  char local_854 [2048];
  undefined1 auStack_54 [52];
  byte local_20 [8];
  short local_18;
  byte local_16;
  byte local_15;
  int local_14;
  byte local_d;
  int local_c;
  
  local_c = 0;
  local_15 = 6;
  local_16 = 6;
  local_d = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  memset(auStack_54,0,0x32);
  local_14 = 5;
  local_18 = (ushort)local_15 + (ushort)local_16 + (ushort)param_1 + (ushort)param_3;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = 0x55;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = 0xaa;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = local_15;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = local_16;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = param_1;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = param_3;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = (byte)local_18;
  uVar2 = (uint)local_d;
  local_d = local_d + 1;
  local_20[uVar2] = (byte)((ushort)local_18 >> 8);
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(local_854,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_read");
    FUN_0004948c(0,local_854,0);
    return local_c;
  }
  iVar1 = FUN_0006f4a8(DAT_009451f0,local_20,8,auStack_54,param_3 + 7);
  if (iVar1 == 0) {
    for (local_d = 0; iVar1 = local_14, local_d < param_3; local_d = local_d + 1) {
      local_14 = local_14 + 1;
      *(undefined1 *)(param_2 + (uint)local_d) = auStack_54[iVar1];
    }
  }
  else {
    builtin_strncpy(local_854,"set DA conversion N failed\n",0x1c);
    FUN_0004948c(0,local_854,0);
    local_c = -0x7ffffd00;
  }
  return local_c;
}

