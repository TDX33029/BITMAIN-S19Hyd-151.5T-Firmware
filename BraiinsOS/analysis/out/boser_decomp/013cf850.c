// FUN_013cf850 @ 013cf850 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_013cf850(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_013ce1cc(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0xc;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  return;
}

