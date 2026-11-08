// FUN_000210e4 @ 000210e4  size=136  callers=5
// program: bmminer


void FUN_000210e4(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_000201d8(uVar2);
    if ((iVar1 != 0) && (param_1 == 0xff || uVar2 == param_1)) {
      if (param_2 == 0) {
        FUN_00057dc8(uVar2 & 0xff,param_3,param_4,param_5,(undefined2)param_6);
      }
      else {
        FUN_00057d84(uVar2 & 0xff,param_4,param_5,param_6);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

