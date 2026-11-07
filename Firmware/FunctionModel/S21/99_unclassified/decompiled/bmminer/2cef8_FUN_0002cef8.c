// FUN_0002cef8 @ 0002cef8  size=132  callers=6
// program: bmminer


void FUN_0002cef8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0002a6f0(uVar2);
    if ((iVar1 != 0) && (param_1 == 0xff || uVar2 == param_1)) {
      if (param_2 == 0) {
        FUN_00083098(uVar2 & 0xff,param_3,param_4,0);
      }
      else {
        FUN_000830a8(uVar2 & 0xff,param_4,0);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

