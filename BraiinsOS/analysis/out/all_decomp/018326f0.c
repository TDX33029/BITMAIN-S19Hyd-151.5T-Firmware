// FUN_018326f0 @ 018326f0 size=304 calls_out=4 calls_in=1
// strings: For this sample; this 63-byte string will be used as input data | self test failed

undefined8 FUN_018326f0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_38;
  char local_30 [36];
  int local_c;
  
  uStack_90 = 0xa54ff53a3c6ef372;
  uStack_88 = 0x9b05688c510e527f;
  uStack_98 = 0xbb67ae856a09e667;
  uStack_80 = 0x5be0cd191f83d9ab;
  local_c = DAT_018ddaf8;
  uStack_38 = 0;
  FUN_0182169c(&uStack_98,"For this sample, this 63-byte string will be used as input data",0x3f,0);
  FUN_018239f4(&uStack_98,local_30);
  pcVar2 = (char *)((int)&uStack_38 + 7);
  pcVar1 = "";
  do {
    pcVar2 = pcVar2 + 1;
    pcVar1 = pcVar1 + 1;
    if (*pcVar2 != *pcVar1) {
      if (local_c == DAT_018ddaf8) {
        uVar3 = FUN_01578670("self test failed",0,0,0);
        return uVar3;
      }
      goto LAB_0183281c;
    }
  } while (local_30 + 0x1f != pcVar2);
  if (local_c == DAT_018ddaf8) {
    return 0;
  }
LAB_0183281c:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

