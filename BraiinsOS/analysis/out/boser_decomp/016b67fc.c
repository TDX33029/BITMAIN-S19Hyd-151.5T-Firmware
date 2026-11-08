// FUN_016b67fc @ 016b67fc size=100 calls_out=1 calls_in=2
// strings: 

void FUN_016b67fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0xc) + iVar1 * 8;
    uVar3 = 0;
    if (iVar2 != 8) {
      uVar3 = *(uint *)(iVar2 + -4);
    }
  }
  uVar4 = 0;
  if ((uint)(iVar1 << 1) <= uVar3) {
    uVar4 = uVar3 + iVar1 * -2;
  }
  if (*(uint *)(param_1 + 8) < uVar4) {
    FUN_016c0fe4(param_1,uVar4 - *(uint *)(param_1 + 8));
  }
  else {
    *(uint *)(param_1 + 8) = uVar4;
  }
  *(uint *)(param_1 + 0xc) = uVar4;
  return;
}

