// FUN_012b3948 @ 012b3948 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_012b3948(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_012b324c(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0x10;
    FUN_0134bd64(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  return;
}

