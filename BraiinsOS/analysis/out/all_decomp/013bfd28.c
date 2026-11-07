// FUN_013bfd28 @ 013bfd28 size=284 calls_out=2 calls_in=2
// strings: 

void FUN_013bfd28(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *local_14;
  
  local_14 = (undefined4 *)0x0;
  iVar1 = FUN_016d51b0(&local_14,0x40,0x200);
  if ((iVar1 != 0) || (local_14 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0x40,0x200);
  }
  local_14[0x72] = 0;
  local_14[0x73] = 4;
  local_14[0x74] = 0;
  *(undefined1 *)(local_14 + 0x71) = 0;
  local_14[0x70] = 0;
  local_14[0x62] = 0;
  local_14[99] = 4;
  local_14[100] = 0;
  *(undefined1 *)(local_14 + 0x61) = 0;
  local_14[0x60] = 0;
  local_14[0x52] = 0;
  local_14[0x53] = 4;
  local_14[0x54] = 0;
  *(undefined1 *)(local_14 + 0x51) = 0;
  local_14[0x50] = 0;
  local_14[0x42] = 0;
  local_14[0x43] = 4;
  local_14[0x44] = 0;
  *(undefined1 *)(local_14 + 0x41) = 0;
  local_14[0x40] = 0;
  local_14[0x32] = 0;
  local_14[0x33] = 4;
  local_14[0x34] = 0;
  *(undefined1 *)(local_14 + 0x31) = 0;
  local_14[0x30] = 0;
  local_14[0x22] = 0;
  local_14[0x23] = 4;
  local_14[0x24] = 0;
  *(undefined1 *)(local_14 + 0x21) = 0;
  local_14[0x20] = 0;
  local_14[0x12] = 0;
  local_14[0x13] = 4;
  local_14[3] = 4;
  local_14[0x14] = 0;
  *(undefined1 *)(local_14 + 0x11) = 0;
  local_14[0x10] = 0;
  local_14[2] = 0;
  local_14[4] = 0;
  *(undefined1 *)(local_14 + 1) = 0;
  *local_14 = 0;
  param_1[0xc0] = local_14;
  param_1[0xbc] = param_2;
  param_1[0xbd] = param_3;
  param_1[0xbe] = 0;
  param_1[0xbf] = 8;
  param_1[0xc1] = 8;
  *param_1 = 2;
  return;
}

