// FUN_0124f380 @ 0124f380 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_0124f380(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_0124e9bc(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0xc;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x1bc),*(undefined4 *)(iVar1 + 0x1c0));
  }
  return;
}

