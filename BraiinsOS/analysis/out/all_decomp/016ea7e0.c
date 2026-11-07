// FUN_016ea7e0 @ 016ea7e0 size=84 calls_out=1 calls_in=0
// strings: 

bool FUN_016ea7e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0177a9c0(0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0x800;
    *(undefined4 *)(iVar1 + 8) = 2;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar1 != 0;
}

