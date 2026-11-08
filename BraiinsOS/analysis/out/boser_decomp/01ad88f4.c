// FUN_01ad88f4 @ 01ad88f4 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_01ad88f4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c [2];
  int local_24;
  
  while( true ) {
    FUN_01ad6728(local_2c,param_1);
    iVar2 = local_24;
    iVar1 = local_2c[0];
    if (local_2c[0] == 0) break;
    iVar3 = local_2c[0] + local_24 * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x6bf4),*(undefined4 *)(iVar3 + 0x6bf8));
    FUN_01ad8950(iVar2 * 0x9d0 + iVar1);
  }
  return;
}

