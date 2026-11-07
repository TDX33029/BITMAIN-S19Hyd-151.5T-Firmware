// FUN_0100f050 @ 0100f050 size=176 calls_out=3 calls_in=5
// strings: 

uint FUN_0100f050(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  DataMemoryBarrier(0xb);
  uVar3 = DAT_018d8078;
  if (0xfffffffd < DAT_018d8078) {
    uVar4 = FUN_0100f104();
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 1) != 0) {
      return uVar3;
    }
  }
  do {
    uVar2 = FUN_016e0250(uVar3,param_1,param_2);
    if ((int)uVar2 < 1) {
      if (uVar2 != 0xffffffff) {
        return 0x10002;
      }
      piVar1 = (int *)FUN_016d2bc8();
      uVar2 = 0x10001;
      if (0 < *piVar1) {
        uVar2 = -*piVar1;
      }
      if (uVar2 != 0xfffffffc) {
        return uVar2;
      }
    }
    else {
      if (param_2 < uVar2) {
        return 0x10002;
      }
      param_1 = param_1 + uVar2;
      param_2 = param_2 - uVar2;
    }
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}

