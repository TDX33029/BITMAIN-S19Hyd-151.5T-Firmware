// FUN_0190df5c @ 0190df5c size=116 calls_out=1 calls_in=2
// strings: CertificateCompressionAlgorithm | CertificateCompressionAlgorithm

void FUN_0190df5c(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar4 == (ushort *)0x0) || ((int)((ulonglong)uVar4 >> 0x20) != 2)) {
    *param_1 = 0xc;
    *(char **)(param_1 + 4) = "CertificateCompressionAlgorithm";
    *(undefined4 *)(param_1 + 8) = 0x1f;
    return;
  }
  uVar1 = *(ushort *)uVar4;
  *param_1 = 0x18;
  *(ushort *)(param_1 + 4) = (ushort)((uVar1 & 0xff) << 8) | uVar1 >> 8;
  uVar3 = (((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) - 1;
  uVar2 = (undefined2)uVar3;
  if (2 < (uVar3 & 0xffff)) {
    uVar2 = 3;
  }
  *(undefined2 *)(param_1 + 2) = uVar2;
  return;
}

