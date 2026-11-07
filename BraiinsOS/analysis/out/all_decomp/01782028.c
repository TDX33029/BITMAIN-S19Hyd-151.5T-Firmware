// FUN_01782028 @ 01782028 size=132 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_01782028(int param_1)

{
  int iVar1;
  
  FUN_01781ff4(&DAT_018dfea0,FUN_01781c50);
  if ((DAT_018dfe98 == 0) || (iVar1 = FUN_016deb20(DAT_018dfe9c), iVar1 == 0)) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + param_1 * 4);
}

