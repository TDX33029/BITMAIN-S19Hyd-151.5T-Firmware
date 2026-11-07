// FUN_01689dc8 @ 01689dc8 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_01689dc8(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_0167d0b4(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0xc;
    FUN_0134aee0(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),4,4);
  }
  return;
}

