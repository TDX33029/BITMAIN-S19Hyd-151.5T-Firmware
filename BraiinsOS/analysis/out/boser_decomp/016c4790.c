// FUN_016c4790 @ 016c4790 size=68 calls_out=2 calls_in=4
// strings: 

bool FUN_016c4790(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((param_2 != -0x80000000) &&
     (iVar1 = FUN_016c4c8c(*(undefined4 *)(param_1 + 0x27c)), param_2 != iVar1)) {
    iVar1 = FUN_016c4958(*(undefined4 *)(param_1 + 0x27c));
    bVar2 = param_2 == iVar1;
  }
  return bVar2;
}

