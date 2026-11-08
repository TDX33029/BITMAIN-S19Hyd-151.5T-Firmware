// FUN_01ad7fc8 @ 01ad7fc8 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_01ad7fc8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30 [2];
  int local_28;
  undefined4 local_24;
  
  while( true ) {
    FUN_01ad6354(local_30,param_1);
    iVar2 = local_28;
    iVar1 = local_30[0];
    if (local_30[0] == 0) break;
    iVar3 = local_30[0] + local_28 * 0xc;
    local_24 = param_1;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x102c),*(undefined4 *)(iVar3 + 0x1030));
    FUN_01ad70f8(iVar2 * 0x178 + iVar1);
  }
  return;
}

