// FUN_019abf38 @ 019abf38 size=324 calls_out=5 calls_in=5
// strings: assertion failed: len >= size_of::<c::sockaddr_in>() | assertion failed: len >= size_of::<c::sockaddr_in6>()

void FUN_019abf38(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  short local_c0;
  ushort local_be;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_3c;
  undefined1 auStack_38 [2];
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  
  FUN_01bed93e(&local_c0,0,0x80);
  local_3c = 0x80;
  iVar1 = FUN_01be7ae4(param_2,&local_c0,&local_3c);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    *(undefined1 *)(param_1 + 2) = 0;
    puVar3 = (undefined *)*puVar2;
  }
  else {
    if (local_c0 == 2) {
      if (local_3c < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,&DAT_01d278c0);
      }
      *(undefined4 *)(param_1 + 1) = local_bc;
      *param_1 = 0;
      param_1[3] = local_be << 8 | local_be >> 8;
      return;
    }
    if (local_c0 == 10) {
      if (local_3c < 0x1c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,&DAT_01d278d0);
      }
      *param_1 = 1;
      local_36 = local_b8;
      local_32 = uStack_b4;
      local_2e = uStack_b0;
      local_2a = uStack_ac;
      FUN_01bed4e2(param_1 + 1,auStack_38,0x12);
      param_1[0xe] = local_be << 8 | local_be >> 8;
      *(undefined4 *)(param_1 + 10) = local_bc;
      *(undefined4 *)(param_1 + 0xc) = uStack_a8;
      return;
    }
    *(undefined1 *)(param_1 + 2) = 2;
    puVar3 = &DAT_01d278e0;
  }
  *param_1 = 2;
  *(undefined **)(param_1 + 4) = puVar3;
  return;
}

