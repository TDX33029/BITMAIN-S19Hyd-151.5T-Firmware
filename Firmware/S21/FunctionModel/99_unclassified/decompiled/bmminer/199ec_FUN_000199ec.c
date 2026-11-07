// FUN_000199ec @ 000199ec  size=200  callers=7
// program: bmminer


int FUN_000199ec(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_0002a6f0();
  if (param_2 < 5 && iVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = FUN_0002a5bc();
    }
    else {
      uVar2 = FUN_00017ec4();
    }
    if (0 < (int)uVar2) {
      iVar1 = 0xff;
      uVar4 = 0;
      do {
        if (param_2 == 0) {
          iVar3 = FUN_000197a0();
        }
        else if (param_2 == 1) {
          iVar3 = FUN_00019954(param_1,uVar4 & 0xff);
        }
        else if (param_2 == 3) {
          iVar3 = FUN_00019760();
        }
        else {
          iVar3 = FUN_000199a0();
        }
        if (iVar3 != 0xff) {
          if (iVar1 == 0xff) {
            iVar1 = iVar3;
          }
          else if (iVar1 < iVar3) {
            iVar1 = iVar3;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
      return iVar1;
    }
  }
  return 0xff;
}

