// FUN_0158fbf0 @ 0158fbf0 size=160 calls_out=5 calls_in=1
// strings: Meta-schema should be valid

void FUN_0158fbf0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_3d0 [472];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined1 local_24;
  undefined4 local_1c;
  
  FUN_0153a8a8(&local_1f8);
  local_24 = 0;
  FUN_01bed4e2(auStack_3d0,&local_1f8,0x1d8);
  FUN_01567288(&local_1f8,auStack_3d0,param_2);
  if ((char)local_1e4 == '\x06') {
    local_1c = local_1f8;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("Meta-schema should be valid",0x1b,&local_1c,&DAT_01cfc224,&DAT_01cfc184);
  }
  *param_1 = local_1f8;
  param_1[1] = uStack_1f4;
  param_1[2] = uStack_1f0;
  param_1[3] = uStack_1ec;
  param_1[4] = uStack_1e8;
  param_1[5] = local_1e4;
  FUN_015634ac(auStack_3d0);
  return;
}

