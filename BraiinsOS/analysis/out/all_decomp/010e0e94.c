// FUN_010e0e94 @ 010e0e94 size=284 calls_out=6 calls_in=2
// strings: 

void FUN_010e0e94(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_c0 [64];
  int local_80;
  char local_70 [4];
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_30;
  
  FUN_016dd1aa(auStack_c0,param_2,0x50);
  FUN_010e0fc8(local_70,auStack_c0);
  if (local_70[0] == '\x01') {
    local_110 = local_6c;
    uStack_10c = uStack_68;
    uStack_108 = uStack_64;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00387cdd,0x12,&local_110,&DAT_018859a8,&DAT_01885978);
  }
  FUN_016dd1aa(&local_110,(uint)local_70 | 1,0x50);
  FUN_014f49c8(auStack_c0,&local_110,0x50);
  if (0x40 < *(uint *)(local_80 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(local_80 + 0x48),0x40,&DAT_01885998);
  }
  FUN_014f49c8(local_70,auStack_c0);
  uVar1 = *(uint *)(local_30 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_01885998);
  }
  if (uVar1 != 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(0x20,uVar1,&DAT_01885988);
  }
  FUN_016dd1aa(param_1,local_70,0x20);
  return;
}

