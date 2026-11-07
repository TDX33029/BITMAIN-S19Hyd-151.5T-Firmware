// FUN_01be76dc @ 01be76dc size=90 calls_out=1 calls_in=0
// strings: 

void FUN_01be76dc(undefined4 *param_1,int param_2,undefined2 *param_3,char *param_4,uint param_5,
                 undefined4 param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  
  if (param_2 == 2) {
    puVar1 = param_3 + 2;
    uVar2 = 4;
    goto LAB_01be76f2;
  }
  if (param_2 != 10) {
    return;
  }
  puVar1 = param_3 + 4;
  if (*param_4 == -2) {
    if ((param_4[1] & 0xc0U) == 0x80) goto LAB_01be7722;
  }
  else if ((*param_4 == -1) && ((param_4[1] & 0xfU) == 2)) {
LAB_01be7722:
    *(undefined4 *)(param_3 + 0xc) = param_6;
    uVar2 = 0x10;
    goto LAB_01be76f2;
  }
  uVar2 = 0x10;
LAB_01be76f2:
  if (uVar2 <= param_5) {
    *param_3 = (short)param_2;
    FUN_01bed4e2(puVar1,param_4,uVar2,param_4,param_4);
    *param_1 = param_3;
  }
  return;
}

