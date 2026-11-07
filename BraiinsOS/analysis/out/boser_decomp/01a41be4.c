// FUN_01a41be4 @ 01a41be4 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_01a41be4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_24 [2];
  int local_1c;
  
  uVar4 = *param_1;
  while( true ) {
    FUN_01a41c38(local_24,uVar4);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x10c),*(undefined4 *)(iVar3 + 0x110));
    FUN_01a41dd8(iVar1 + iVar2 * 0x18);
  }
  return;
}

