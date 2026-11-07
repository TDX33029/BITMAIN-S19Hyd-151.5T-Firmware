// FUN_00786324 @ 00786324 size=264 calls_out=4 calls_in=0
// strings: send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00786324(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  char local_24;
  undefined1 uStack_19;
  
  if (*(char *)(param_2 + 8) == '\x02') {
    local_38 = *param_3;
    local_34 = param_3[1];
    local_30 = param_3[2];
    iStack_2c = param_3[3];
    iStack_28 = param_3[4];
    local_24 = '\x01';
  }
  else {
    FUN_006b9970(&local_38);
    if (local_38 == -0x80000000) goto LAB_00786410;
  }
  if (local_38 != 0) {
    thunk_FUN_016d3fb4(local_34);
  }
  if (local_24 != '\x02') {
    local_30 = 0;
    local_38 = 0;
    uVar3 = 0x24;
    pcVar2 = "send failed because channel is full";
    if (local_24 != '\0') {
      pcVar2 = 
      "send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey"
      ;
    }
    local_34 = 1;
    if (local_24 == '\0') {
      uVar3 = 0x23;
    }
    iVar1 = FUN_007827e8(&local_38,pcVar2,uVar3);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                   &DAT_0185c0cc);
    }
    param_1[1] = 1;
    *param_1 = &DAT_8000000b;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = local_30;
    return;
  }
LAB_00786410:
  *param_1 = &DAT_8000000d;
  return;
}

