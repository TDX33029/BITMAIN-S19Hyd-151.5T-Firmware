// FUN_0167cba4 @ 0167cba4 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_0167cba4(uint *param_1,char *param_2,int param_3,uint param_4,uint param_5)

{
  uint unaff_r5;
  uint uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if (param_5 < param_4) {
    bVar2 = *param_2 == *(char *)(param_3 + param_5);
    if (bVar2) {
      unaff_r5 = param_5 + 1;
    }
    uVar1 = (uint)bVar2;
    if (bVar2) {
      param_1[1] = param_5;
      param_1[2] = unaff_r5;
    }
  }
  *param_1 = uVar1;
  return;
}

