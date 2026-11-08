// FUN_01b41b94 @ 01b41b94 size=72 calls_out=0 calls_in=3
// strings: 

bool FUN_01b41b94(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0xec); iVar2 = iVar2 + 1) {
    uVar1 = uVar1 | *(uint *)(param_2 + iVar2 * 4);
  }
  return uVar1 == 0;
}

