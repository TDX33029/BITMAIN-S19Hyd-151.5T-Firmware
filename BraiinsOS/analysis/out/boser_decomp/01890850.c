// FUN_01890850 @ 01890850 size=116 calls_out=0 calls_in=2
// strings: 

void FUN_01890850(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  iVar1 = 0;
  local_30[0] = *param_2;
  local_30[1] = param_2[1];
  local_30[2] = param_2[2];
  local_30[3] = param_2[3];
  do {
    local_20[iVar1] = local_30[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  uVar2 = param_2[3];
  param_1[3] = local_20[3];
  param_1[2] = local_20[2];
  param_1[1] = local_20[1];
  *param_1 = local_20[0];
  uVar2 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
          ) + 1;
  param_2[3] = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  return;
}

