// FUN_0165d428 @ 0165d428 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_0165d428(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_24 [2];
  int local_1c;
  
  uVar4 = *param_1;
  while( true ) {
    FUN_0165d484(local_24,uVar4);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0xb4),*(undefined4 *)(iVar3 + 0xb8));
    puVar5 = (undefined4 *)(iVar1 + iVar2 * 0x10);
    if ((undefined1 *)*puVar5 != &DAT_80000005) {
      FUN_0165d13c(puVar5);
    }
  }
  return;
}

