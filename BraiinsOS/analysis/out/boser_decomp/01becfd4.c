// FUN_01becfd4 @ 01becfd4 size=92 calls_out=1 calls_in=2
// strings: 

void FUN_01becfd4(uint param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_118 [256];
  
  if (param_3 == 1) {
    return;
  }
  param_2[param_3] = (int)auStack_118;
  for (; param_1 != 0; param_1 = param_1 - uVar3) {
    uVar3 = param_1;
    if (0xff < param_1) {
      uVar3 = 0x100;
    }
    FUN_01bed4e2(param_2[param_3],*param_2,uVar3);
    piVar2 = param_2;
    do {
      piVar1 = piVar2 + 1;
      FUN_01bed4e2(*piVar2,*piVar1,uVar3);
      *piVar2 = *piVar2 + uVar3;
      piVar2 = piVar1;
    } while (param_2 + param_3 != piVar1);
  }
  return;
}

