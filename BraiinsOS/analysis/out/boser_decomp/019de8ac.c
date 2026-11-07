// FUN_019de8ac @ 019de8ac size=336 calls_out=6 calls_in=2
// strings: assertion failed: len >= size_of::<c::sockaddr_in6>() | assertion failed: len >= size_of::<c::sockaddr_in>()

void FUN_019de8ac(undefined2 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  short local_c0;
  ushort local_be;
  undefined4 local_bc;
  undefined1 auStack_b8 [16];
  undefined4 local_a8;
  uint local_3c;
  undefined1 auStack_38 [24];
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28f7c);
  }
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
      FUN_01bed4e2((uint)auStack_38 | 2,auStack_b8,0x10);
      *param_1 = 1;
      FUN_01bed4e2(param_1 + 1,auStack_38,0x12);
      param_1[0xe] = local_be << 8 | local_be >> 8;
      *(undefined4 *)(param_1 + 10) = local_bc;
      *(undefined4 *)(param_1 + 0xc) = local_a8;
      return;
    }
    *(undefined1 *)(param_1 + 2) = 2;
    puVar3 = &DAT_01d278e0;
  }
  *param_1 = 2;
  *(undefined **)(param_1 + 4) = puVar3;
  return;
}

