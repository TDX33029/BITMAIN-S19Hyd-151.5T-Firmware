// FUN_006c4b10 @ 006c4b10 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_006c4b10(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_006bf91c(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0xc;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  return;
}

