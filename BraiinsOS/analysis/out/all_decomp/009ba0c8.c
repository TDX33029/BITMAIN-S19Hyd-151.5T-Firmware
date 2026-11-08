// FUN_009ba0c8 @ 009ba0c8 size=176 calls_out=1 calls_in=1
// strings: 

void FUN_009ba0c8(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[1];
  uVar1 = 2;
  if (*param_1 < uVar4) {
    uVar3 = uVar4;
    do {
      puVar2 = param_1 + uVar1;
      if (*puVar2 <= uVar3) goto LAB_009ba124;
      uVar1 = uVar1 + 1;
      uVar3 = *puVar2;
    } while (param_2 != uVar1);
  }
  else {
    uVar3 = uVar4;
    do {
      puVar2 = param_1 + uVar1;
      if (uVar3 < *puVar2) goto LAB_009ba124;
      uVar1 = uVar1 + 1;
      uVar3 = *puVar2;
    } while (param_2 != uVar1);
  }
LAB_009ba12c:
  if (*param_1 < uVar4) {
    puVar2 = param_1 + param_2;
    param_2 = param_2 >> 1;
    do {
      puVar2 = puVar2 + -1;
      uVar1 = *puVar2;
      param_2 = param_2 - 1;
      *puVar2 = *param_1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
LAB_009ba124:
  if (uVar1 != param_2) {
    FUN_009d2cfc(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_009ba12c;
}

