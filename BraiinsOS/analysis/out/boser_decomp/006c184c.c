// FUN_006c184c @ 006c184c size=88 calls_out=3 calls_in=0
// strings: 

void FUN_006c184c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_006c18a4(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_019bb7e0(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar3 + 0x480));
    FUN_006b1f00(iVar2 * 0x68 + iVar1);
  }
  return;
}

