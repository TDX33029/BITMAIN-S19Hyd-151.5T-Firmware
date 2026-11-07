// FUN_015e6204 @ 015e6204 size=156 calls_out=3 calls_in=1
// strings: 

void FUN_015e6204(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_2[1];
  iVar2 = param_1[2];
  iVar1 = param_2[3] - iVar3;
  uVar4 = iVar1 * -0xf0f0f0f;
  if ((uint)(*param_1 - iVar2) < uVar4) {
    FUN_006520b4(param_1,iVar2,uVar4,1,0x11);
    iVar2 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar2 * 0x11,iVar3,iVar1);
  param_1[2] = iVar2 + uVar4;
  FUN_0134aee0(param_2[2],*param_2,1,0x11);
  return;
}

