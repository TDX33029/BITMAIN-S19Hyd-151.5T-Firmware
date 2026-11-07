// FUN_01ad809c @ 01ad809c size=88 calls_out=3 calls_in=0
// strings: 

void FUN_01ad809c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_01ad6950(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x31c),*(undefined4 *)(iVar3 + 800));
    FUN_01ad80f4(iVar1 + iVar2 * 0x48);
  }
  return;
}

