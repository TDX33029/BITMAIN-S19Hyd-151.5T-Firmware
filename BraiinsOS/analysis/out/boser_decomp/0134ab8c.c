// FUN_0134ab8c @ 0134ab8c size=168 calls_out=3 calls_in=2
// strings: 

uint FUN_0134ab8c(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  
  DataMemoryBarrier(0xb);
  uVar3 = DAT_01d4cff8;
  if (0xfffffffd < DAT_01d4cff8) {
    uVar5 = FUN_0134ac38();
    uVar3 = (uint)(uVar5 >> 0x20);
    if ((uVar5 & 1) != 0) {
      return uVar3;
    }
  }
  do {
    uVar1 = FUN_01bf0424(uVar3,param_1,param_2);
    if ((int)uVar1 < 1) {
      if (uVar1 != 0xffffffff) {
        return 0x10002;
      }
      piVar2 = (int *)FUN_01be3244(0x10002);
      uVar1 = 0x10001;
      if (0 < *piVar2) {
        uVar1 = -*piVar2;
      }
      if (uVar1 != 0xfffffffc) {
        return uVar1;
      }
    }
    else {
      bVar4 = param_2 < uVar1;
      param_2 = param_2 - uVar1;
      if (bVar4) {
        return 0x10002;
      }
      param_1 = param_1 + uVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}

