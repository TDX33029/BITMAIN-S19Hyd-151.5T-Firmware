// FUN_006c11a8 @ 006c11a8 size=84 calls_out=3 calls_in=2
// strings: 

void FUN_006c11a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_006c1214(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_019bb7e0(*(undefined4 *)(iVar3 + 0x214),*(undefined4 *)(iVar3 + 0x218));
    FUN_00db19c4(iVar1 + iVar2 * 0x30);
  }
  return;
}

