// FUN_01566030 @ 01566030 size=100 calls_out=6 calls_in=1
// strings: 

void FUN_01566030(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_015660d4();
  FUN_0166535c(param_1 + 0x10);
  FUN_01665288(param_1 + 0x40);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  FUN_01566194(param_1 + 0xac);
  iVar1 = *(int *)(param_1 + 0x74);
  if ((iVar1 == 0) || (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 == -5)) {
    return;
  }
  thunk_FUN_01be4678(*(int *)(param_1 + 0x70) - iVar2);
  return;
}

