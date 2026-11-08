// FUN_0003818c @ 0003818c  size=236  callers=1
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x00020a2c) */

void FUN_0003818c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_000380c8();
  FUN_000208f0();
  FUN_00034a5c(200);
  FUN_00020c88();
  FUN_00034a5c(10);
  FUN_00020f14(0xff,uVar2 & 0xff);
  FUN_00034a5c(10);
  FUN_00020f60(0xff,(char)(uVar2 >> 8),(char)(uVar2 >> 0x10),0);
  FUN_00034a5c(10);
  FUN_00020a54(0xff);
  FUN_00034a5c(10);
  FUN_00020998(0xff,0,1,3);
  uVar2 = 0;
  do {
    while( true ) {
      uVar3 = uVar2 + 1;
      iVar1 = FUN_000201d8(uVar2);
      if (iVar1 != 0) break;
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    FUN_00058c64(uVar2 & 0xff);
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

