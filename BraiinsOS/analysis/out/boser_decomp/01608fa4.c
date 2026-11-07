// FUN_01608fa4 @ 01608fa4 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_01608fa4(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
    param_2 = param_2 - uVar2;
    if (*param_1 - uVar2 < param_2) {
      FUN_016092cc(param_1,uVar2,param_2,1,1);
      uVar2 = param_1[2];
    }
    iVar3 = param_1[1];
    puVar1 = (undefined1 *)(iVar3 + uVar2);
    if (1 < param_2) {
      FUN_01bed93e(puVar1,0,param_2 - 1);
      uVar2 = (param_2 - 1) + uVar2;
      puVar1 = (undefined1 *)(iVar3 + uVar2);
    }
    *puVar1 = 0;
    param_2 = uVar2 + 1;
  }
  param_1[2] = param_2;
  return;
}

