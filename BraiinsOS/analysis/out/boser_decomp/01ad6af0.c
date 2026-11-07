// FUN_01ad6af0 @ 01ad6af0 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_01ad6af0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_01ad6b48(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x3cc),*(undefined4 *)(iVar3 + 0x3d0));
    FUN_01ad6cf0(iVar2 * 0x58 + iVar1);
  }
  return;
}

