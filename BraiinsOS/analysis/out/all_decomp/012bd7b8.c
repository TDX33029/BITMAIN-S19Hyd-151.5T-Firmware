// FUN_012bd7b8 @ 012bd7b8 size=176 calls_out=2 calls_in=2
// strings: 

int FUN_012bd7b8(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = FUN_012bd7b8(param_1,param_1 + param_4 * 0x140,param_4 * 0x230 + param_1,param_4);
    param_2 = FUN_012bd7b8(param_2,param_2 + param_4 * 0x140,param_4 * 0x230 + param_2,param_4);
    param_3 = FUN_012bd7b8(param_3,param_3 + param_4 * 0x140,param_4 * 0x230 + param_3,param_4);
  }
  iVar1 = FUN_012bb508(param_1,param_2);
  iVar2 = FUN_012bb508(param_1,param_3);
  if (iVar1 == iVar2) {
    iVar2 = FUN_012bb508(param_2,param_3);
    param_1 = param_2;
    if (iVar1 != iVar2) {
      param_1 = param_3;
    }
  }
  return param_1;
}

