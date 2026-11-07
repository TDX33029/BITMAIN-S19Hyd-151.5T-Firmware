// FUN_013cfab4 @ 013cfab4 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_013cfab4(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if (param_3 <= uVar1) {
    iVar2 = *(int *)(param_2 + 8);
    *(uint *)(param_2 + 8) = iVar2 + param_3;
    *(uint *)(param_2 + 0xc) = uVar1 - param_3;
    FUN_0193a93c(param_1 + 1,iVar2);
  }
  else {
    param_1[3] = param_3;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *param_1 = (uint)(param_3 > uVar1);
  return;
}

