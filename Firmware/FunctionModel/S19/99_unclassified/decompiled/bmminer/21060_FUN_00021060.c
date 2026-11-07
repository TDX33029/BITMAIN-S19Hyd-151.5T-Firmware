// FUN_00021060 @ 00021060  size=132  callers=4
// program: bmminer


void FUN_00021060(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_000201d8(uVar2);
    if ((iVar1 != 0) && (param_1 == 0xff || uVar2 == param_1)) {
      if (param_2 == 0) {
        FUN_00057f1c(uVar2 & 0xff,param_3,param_4,0);
      }
      else {
        FUN_00057fb8(uVar2 & 0xff,param_4,0);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

