// FUN_007239d8 @ 007239d8 size=688 calls_out=1 calls_in=1
// strings: InvalidVersion | expected_verNoChecksumNoise handshake Connection shutdownFirst NX-handshake step error: Failed to parse initiator's public key | NonAsciiCharacter | indexUnsupportedCaptures | InvalidChecksum | expected_checksum

uint FUN_007239d8(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_18 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00723a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,
                       "BufferTooSmallInvalidUsizeVersionMismatchEndianMismatchAlignmentMismatchalignment"
                       ,0xe);
    return uVar2;
  case 1:
    local_1c = param_1 + 4;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00564de0,0x10);
    local_13 = 0;
    ppuVar1 = (undefined4 **)FUN_00fb2258(&local_18,"character",9,param_1 + 8,FUN_00fa93dc);
    break;
  case 2:
    local_1c = param_1 + 4;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"NonAsciiCharacter",0x11);
    local_13 = 0;
    ppuVar1 = &local_18;
    break;
  case 3:
    local_1c = param_1 + 5;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"InvalidChecksum",0xf);
    local_13 = 0;
    ppuVar1 = (undefined4 **)FUN_00fb2258(&local_18,&DAT_0056aaa0,8,param_1 + 1,FUN_00702734);
    pcVar3 = "expected_checksum";
    pcVar5 = FUN_00723cf8;
    uVar4 = 0x11;
    goto LAB_00723c00;
  case 4:
    local_1c = param_1 + 2;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"InvalidVersion",0xe);
    local_13 = 0;
    ppuVar1 = (undefined4 **)FUN_00fb2258(&local_18,"ver",3,param_1 + 1,FUN_0078955c);
    pcVar3 = 
    "expected_verNoChecksumNoise handshake Connection shutdownFirst NX-handshake step error: Failed to parse initiator\'s public key"
    ;
    pcVar5 = FUN_01135a50;
    uVar4 = 0xc;
    goto LAB_00723c00;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00723c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,
                       "NoChecksumNoise handshake Connection shutdownFirst NX-handshake step error: Failed to parse initiator\'s public key"
                       ,10);
    return uVar2;
  }
  pcVar5 = FUN_00d47d08;
  pcVar3 = "indexUnsupportedCaptures";
  uVar4 = 5;
LAB_00723c00:
  FUN_00fb2258(ppuVar1,pcVar3,uVar4,&local_1c,pcVar5);
  if (local_13 != 1 || (local_14 & 1) != 0) {
    return (local_13 | local_14) & 1;
  }
  if ((*(byte *)((int)local_18 + 10) & 0x80) == 0) {
    uVar2 = (**(code **)(local_18[1] + 0xc))(*local_18," }",2);
    return uVar2 & 1;
  }
  uVar2 = (**(code **)(local_18[1] + 0xc))(*local_18,"}",1);
  return uVar2 & 1;
}

