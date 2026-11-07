// FUN_00b02f58 @ 00b02f58 size=492 calls_out=10 calls_in=1
// strings: mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs

void FUN_00b02f58(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  undefined4 *puStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined1 *local_1c8 [46];
  int local_110;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined1 **local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  
  uVar4 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar2 = (uint *)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_f0);
    *puVar2 = (uint)local_f0;
    puVar2[1] = uStack_ec;
    puVar2[2] = uStack_e8;
    puVar2[3] = uStack_e4;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  local_1f8 = *puVar2;
  uStack_1f4 = puVar2[1];
  uStack_1f0 = puVar2[2];
  uStack_1ec = puVar2[3];
  local_1e4 = 8;
  *puVar2 = local_1f8 + 1;
  puVar2[1] = uStack_1f4 + (0xfffffffe < local_1f8);
  local_1e0 = 0;
  local_1e8 = 0;
  puStack_1dc = &DAT_0056d238;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  iVar1 = thunk_FUN_01be5118(0x10);
  if (iVar1 == 0) {
    uVar3 = 0x10;
  }
  else {
    FUN_01bed4e2(iVar1,&DAT_00569338,0x10);
    local_f4 = 0x10;
    local_fc = 0x10;
    DataMemoryBarrier(0xb);
    local_f8 = iVar1;
    if (DAT_01d4bae0 != 0) {
      local_f0 = local_1c8;
      local_1c8[0] = &DAT_01d4ba18;
      FUN_019a768c(&DAT_01d4bae0,1,&local_f0,&DAT_01c10b4c,&DAT_01d293e0);
    }
    FUN_00b0319c(&local_f0);
    FUN_012773e0(local_1c8,&local_1f8,&local_fc,&local_f0);
    if (local_110 != -0x80000000) {
      FUN_00b03818(local_1c8);
    }
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 != 0) {
      FUN_01bed4e2(iVar1,
                   "mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs"
                   ,0xc);
      local_f4 = 0xc;
      local_fc = 0xc;
      local_f8 = iVar1;
      FUN_00b0394c(&local_f0,*(undefined1 *)(param_2 + 8));
      FUN_012773e0(local_1c8,&local_1f8,&local_fc,&local_f0);
      if (local_110 != -0x80000000) {
        FUN_00b03818(local_1c8);
      }
      *param_1 = local_1f8;
      param_1[1] = uStack_1f4;
      param_1[2] = uStack_1f0;
      param_1[3] = uStack_1ec;
      param_1[4] = local_1e8;
      param_1[5] = local_1e4;
      param_1[6] = local_1e0;
      param_1[7] = (uint)puStack_1dc;
      param_1[8] = uStack_1d8;
      param_1[9] = uStack_1d4;
      param_1[10] = uStack_1d0;
      param_1[0xb] = uStack_1cc;
      return;
    }
    uVar3 = 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(1,uVar3);
}

