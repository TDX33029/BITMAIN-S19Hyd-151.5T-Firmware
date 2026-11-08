// FUN_007857ac @ 007857ac size=324 calls_out=4 calls_in=1
// strings: send failed because channel is full | send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007857ac(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  iVar2 = param_2[4];
  if (*param_2 == 0) {
    piVar6 = (int *)param_2[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_2[1],param_2[2]);
    }
  }
  else {
    piVar6 = (int *)param_2[3];
    if (((uint)piVar6 & 1) == 0) {
      piVar1 = piVar6 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar1;
        bVar7 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar7);
      *piVar1 = iVar3 + -1;
      if (iVar3 != 1) goto LAB_0078586c;
      DataMemoryBarrier(0xb);
      if (*piVar6 != 0) {
        thunk_FUN_016d3fb4(piVar6[1]);
      }
    }
    else {
      if (param_2[2] + ((uint)piVar6 >> 5) == 0) goto LAB_0078586c;
      piVar6 = (int *)(*param_2 - ((uint)piVar6 >> 5));
    }
    thunk_FUN_016d3fb4(piVar6);
  }
LAB_0078586c:
  bVar7 = (char)iVar2 != '\0';
  local_18 = 0;
  local_20 = 0;
  uVar5 = 0x24;
  pcVar4 = "send failed because channel is full";
  if (bVar7) {
    pcVar4 = 
    "send failed because receiver is goneinsufficient capacityInvalidPayloadLengthHeaderErrorTooManyDataDecryptedTooManyDataEncryptedBrokenCertificateSystemTimeInvalidCertificateNotYetValidCertificateNoMoreValidBadPublicKey"
    ;
  }
  local_1c = 1;
  if (!bVar7) {
    uVar5 = 0x23;
  }
  iVar2 = FUN_007827e8(&local_20,pcVar4,uVar5);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                 &DAT_0185c0cc);
  }
  *param_1 = &DAT_8000000d;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  param_1[3] = local_18;
  return;
}

