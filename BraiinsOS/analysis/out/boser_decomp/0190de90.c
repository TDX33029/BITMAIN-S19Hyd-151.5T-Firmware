// FUN_0190de90 @ 0190de90 size=92 calls_out=1 calls_in=2
// strings: CertificateStatusType

void FUN_0190de90(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,1);
  if (((char *)uVar3 == (char *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 1)) {
    *(char **)(param_1 + 4) = "CertificateStatusType";
    *(undefined4 *)(param_1 + 8) = 0x15;
    uVar2 = 0xc;
  }
  else {
    cVar1 = *(char *)uVar3;
    param_1[2] = cVar1;
    param_1[1] = cVar1 != '\x01';
    uVar2 = 0x18;
  }
  *param_1 = uVar2;
  return;
}

