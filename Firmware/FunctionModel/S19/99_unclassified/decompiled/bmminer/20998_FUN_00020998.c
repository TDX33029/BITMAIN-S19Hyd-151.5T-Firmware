// FUN_00020998 @ 00020998  size=108  callers=1
// program: bmminer


void FUN_00020998(uint param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2 & 0xff;
    iVar1 = FUN_000201d8(uVar2);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == uVar3)) {
      if (param_3 == 0) {
        FUN_00058098(uVar3,param_2,param_4);
      }
      else {
        FUN_000580c4(uVar3,param_4);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

