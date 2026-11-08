// FUN_0078592c @ 0078592c size=168 calls_out=3 calls_in=2
// strings: send failed because channel is full | send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0078592c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  iVar1 = param_2[5];
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  bVar4 = (char)iVar1 != '\0';
  local_18 = 0;
  local_20 = 0;
  uVar3 = 0x24;
  pcVar2 = "send failed because channel is full";
  if (bVar4) {
    pcVar2 = 
    "send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey"
    ;
  }
  local_1c = 1;
  if (!bVar4) {
    uVar3 = 0x23;
  }
  iVar1 = FUN_007827e8(&local_20,pcVar2,uVar3);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                 &DAT_0185c0cc);
  }
  *param_1 = &DAT_8000000c;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  param_1[3] = local_18;
  return;
}

