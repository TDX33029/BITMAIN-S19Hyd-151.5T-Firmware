// FUN_015f39a8 @ 015f39a8 size=336 calls_out=5 calls_in=1
// strings: assertion failed: len >= size_of::<c::sockaddr_in>() | assertion failed: len >= size_of::<c::sockaddr_in6>()no error set after POLLHUPconnection timed out

void FUN_015f39a8(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
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
  
  FUN_016dd606(&local_c0,0,0x80);
  local_3c = 0x80;
  iVar1 = FUN_016d7810(param_2,&local_c0,&local_3c);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    *(undefined1 *)(param_1 + 2) = 0;
    uVar3 = *puVar2;
    *param_1 = 2;
    *(undefined4 *)(param_1 + 4) = uVar3;
    return;
  }
  if (local_c0 == 2) {
    if (local_3c < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,&DAT_018aac7c);
    }
    *(undefined4 *)(param_1 + 1) = local_bc;
    *param_1 = 0;
    param_1[3] = local_be << 8 | local_be >> 8;
    return;
  }
  if (local_c0 != 10) {
    *(undefined1 *)(param_1 + 2) = 2;
    *param_1 = 2;
    *(undefined **)(param_1 + 4) = &DAT_018aac9c;
    return;
  }
  if (local_3c < 0x1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: len >= size_of::<c::sockaddr_in6>()no error set after POLLHUPconnection timed out"
                 ,0x35,&DAT_018aac8c);
  }
  *param_1 = 1;
  local_36 = local_b8;
  local_32 = uStack_b4;
  local_2e = uStack_b0;
  local_2a = uStack_ac;
  FUN_016dd1aa(param_1 + 1,auStack_38,0x12);
  param_1[0xe] = local_be << 8 | local_be >> 8;
  *(undefined4 *)(param_1 + 10) = local_bc;
  *(undefined4 *)(param_1 + 0xc) = uStack_a8;
  return;
}

