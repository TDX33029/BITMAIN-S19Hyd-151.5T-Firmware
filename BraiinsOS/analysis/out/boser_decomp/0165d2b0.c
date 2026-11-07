// FUN_0165d2b0 @ 0165d2b0 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_0165d2b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_0134aee0(*param_1,param_1[1],4,4);
  FUN_0134aee0(param_1[3],param_1[4],4,4);
  if (param_1[9] != -0x80000000) {
    FUN_0134bd64(param_1[9],param_1[10]);
  }
  if (param_1[0xc] != -0x80000000) {
    FUN_0134bd64(param_1[0xc],param_1[0xd]);
  }
  iVar2 = param_1[7];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[8]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(param_1[6],iVar2,4,0xc);
  return;
}

