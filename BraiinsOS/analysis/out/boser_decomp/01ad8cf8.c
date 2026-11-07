// FUN_01ad8cf8 @ 01ad8cf8 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_01ad8cf8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_01ad6580(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x52c),*(undefined4 *)(iVar3 + 0x530));
    FUN_01ad8318(iVar1 + iVar2 * 0x78);
  }
  return;
}

