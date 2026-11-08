// FUN_00c494c8 @ 00c494c8 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_00c494c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28 [2];
  int local_20;
  undefined4 local_1c;
  
  while( true ) {
    FUN_00c3b8fc(local_28,param_1);
    iVar2 = local_20;
    iVar1 = local_28[0];
    if (local_28[0] == 0) break;
    iVar3 = local_28[0] + local_20 * 0xc;
    local_1c = param_1;
    if (*(int *)(iVar3 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x110));
    }
    FUN_00c436d0(iVar1 + iVar2 * 0x18);
  }
  return;
}

