// FUN_016f1934 @ 016f1934 size=144 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_016f1934(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0 || (int)param_2 < 0) {
    return 0;
  }
  uVar1 = FUN_017818f0(*param_1);
  if (param_2 < uVar1) {
    uVar2 = FUN_0178190c(*param_1);
    return uVar2;
  }
  return 0;
}

