// FUN_011105ec @ 011105ec size=864 calls_out=10 calls_in=1
// strings: assertion failed: digest_alg.block_len() >= digest_alg.output_len()Once has panicked | BUG: HKDF expansion failed

void FUN_011105ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_440 [72];
  undefined4 local_3f8;
  undefined1 auStack_3f0 [80];
  undefined1 auStack_3a0 [72];
  int local_358;
  undefined1 auStack_350 [80];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [208];
  undefined4 local_1f0;
  undefined1 auStack_1e8 [84];
  int local_194;
  undefined1 auStack_190 [64];
  undefined1 local_150 [128];
  undefined1 auStack_d0 [172];
  
  FUN_014f2670(auStack_440,&DAT_018ab800,param_2,0x20);
  FUN_016dd606(local_150,0,0x80);
  FUN_016dd1aa(auStack_d0,auStack_440,0x50);
  FUN_016dd1aa(auStack_1e8,auStack_3f0,0x50);
  FUN_016dd1aa(auStack_2c0,local_150,0xd0);
  local_1f0 = 0;
  FUN_014f29bc(auStack_2c0,param_3,param_4);
  FUN_016dd1aa(local_150,auStack_2c0,0x128);
  FUN_014f2e98(&local_194,local_150);
  if (0x40 < *(uint *)(local_194 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(local_194 + 0x48),0x40,&DAT_018ab870);
  }
  FUN_014f2670(auStack_3a0,local_3f8);
  uVar3 = *(uint *)(local_358 + 0x48);
  if (uVar3 * 0xff < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: HKDF expansion failed",0x1a,local_150,&DAT_01887048,&DAT_01887018);
  }
  puVar2 = auStack_300;
  uVar1 = 0x40;
  FUN_016dd606(puVar2,0,0x40);
  if (*(uint *)(local_358 + 0x50) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: digest_alg.block_len() >= digest_alg.output_len()Once has panicked"
                 ,0x43,&DAT_018a6e20);
  }
  FUN_016dd1aa(auStack_d0,auStack_3a0,0x50);
  FUN_016dd606(local_150,0,0x80);
  FUN_016dd1aa(auStack_1e8,auStack_350,0x50);
  FUN_016dd1aa(auStack_2c0,local_150,0xd0);
  iVar5 = 1;
  local_1f0 = 0;
  while( true ) {
    local_150[0] = (undefined1)iVar5;
    FUN_014f29bc(auStack_2c0,local_150,1);
    FUN_016dd1aa(local_150,auStack_2c0,0x128);
    FUN_014f2e98(&local_194,local_150);
    uVar3 = *(uint *)(local_194 + 0x48);
    if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0x40,&DAT_018ab870);
    }
    uVar4 = *(uint *)(local_358 + 0x48);
    if (uVar1 < uVar4) break;
    if (uVar4 != uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7204(uVar4,uVar3,&DAT_018a6e30);
    }
    uVar1 = uVar1 - uVar4;
    FUN_016dd1aa(puVar2,auStack_190,uVar3);
    if (uVar1 == 0) goto LAB_0111086c;
    FUN_016dd1aa(auStack_d0,auStack_3a0,0x50);
    FUN_016dd606(local_150,0,0x80);
    FUN_016dd1aa(auStack_1e8,auStack_350,0x50);
    FUN_016dd1aa(auStack_2c0,local_150,0xd0);
    local_1f0 = 0;
    FUN_014f29bc(auStack_2c0,auStack_190,uVar3);
    if (iVar5 == 0xff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a6e40);
    }
    puVar2 = puVar2 + uVar4;
    iVar5 = iVar5 + 1;
  }
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,uVar3,&DAT_018a6e50);
  }
  FUN_016dd1aa(puVar2,auStack_190,uVar1);
LAB_0111086c:
  FUN_016dd1aa(param_1,auStack_300,0x20);
  FUN_016dd1aa(param_1 + 0x20,auStack_2e0,0x20);
  return;
}

