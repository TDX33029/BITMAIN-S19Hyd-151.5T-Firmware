// FUN_00efeec8 @ 00efeec8 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_00efeec8(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*param_2 == 1) {
    uVar1 = FUN_00fe4528(param_2 + 1);
    uVar2 = *(uint *)(*param_3 + 4) ^ 0x7fffffff;
    uVar1 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    if (uVar2 < uVar1) {
      uVar3 = 1;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
    }
    else {
      FUN_00efef48(1,param_2 + 1,param_3);
    }
  }
  *param_1 = uVar3;
  return;
}

