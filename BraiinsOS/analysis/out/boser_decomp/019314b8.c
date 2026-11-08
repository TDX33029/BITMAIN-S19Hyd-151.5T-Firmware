// FUN_019314b8 @ 019314b8 size=80 calls_out=1 calls_in=1
// strings: 

void FUN_019314b8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  iVar1 = 0;
  if (param_2 < uVar2) {
    FUN_0192f148(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2,uVar2,0,
                 &DAT_01d256bc);
    iVar1 = uVar2 - param_2;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  return;
}

