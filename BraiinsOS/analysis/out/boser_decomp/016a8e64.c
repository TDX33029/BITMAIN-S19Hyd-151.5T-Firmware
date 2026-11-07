// FUN_016a8e64 @ 016a8e64 size=152 calls_out=3 calls_in=3
// strings: 

void FUN_016a8e64(int *param_1)

{
  undefined4 unaff_r4;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_019bb7e0(param_1[0x5a],param_1[0x5b]);
  if (*param_1 != -0x80000000) {
    FUN_0134bd64(*param_1,param_1[1]);
  }
  iVar1 = param_1[0x4f];
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar4 = param_1[0x50];
  puVar2 = (undefined4 *)(iVar4 + 4);
  for (iVar3 = param_1[0x51]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 3;
  }
  FUN_0134aee0(iVar1,iVar4,4,0xc,unaff_r4);
  FUN_0134aee0(param_1[0x52],param_1[0x53],4,4);
  return;
}

