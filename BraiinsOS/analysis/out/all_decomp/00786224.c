// FUN_00786224 @ 00786224 size=200 calls_out=3 calls_in=0
// strings: send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00786224(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 uStack_9;
  
  if (((char)param_2[2] == '\x02') || (DataMemoryBarrier(0xb), -1 < *(int *)(*param_2 + 0x1c))) {
    local_10 = 0;
    local_14 = 1;
    local_18 = 0;
    iVar1 = FUN_007827e8(&local_18,
                         "send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey"
                         ,0x24);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                   &DAT_0185c0cc);
    }
    *param_1 = &DAT_8000000b;
    param_1[1] = 1;
    param_1[2] = local_18;
    param_1[3] = local_14;
    param_1[4] = local_10;
    return;
  }
  iVar1 = FUN_006b9714(param_2,param_3);
  if (iVar1 == 0) {
    puVar2 = &DAT_8000000d;
  }
  else {
    puVar2 = (undefined1 *)0x8000000e;
  }
  *param_1 = puVar2;
  return;
}

