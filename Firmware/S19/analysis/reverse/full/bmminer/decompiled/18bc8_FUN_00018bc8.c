// FUN_00018bc8 @ 00018bc8  size=188  callers=5
// program: bmminer


int FUN_00018bc8(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_000201d8();
  if (param_2 < 3 && iVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = FUN_000200d8();
    }
    else {
      uVar2 = FUN_00017028();
    }
    if (0 < (int)uVar2) {
      iVar1 = 0xff;
      uVar4 = 0;
      do {
        if (param_2 == 0) {
          iVar3 = FUN_000186d0();
        }
        else if (param_2 == 1) {
          iVar3 = FUN_000188e8(param_1,uVar4 & 0xff);
        }
        else {
          iVar3 = FUN_00018940();
        }
        if (iVar3 != 0xff) {
          if (iVar1 == 0xff) {
            iVar1 = iVar3;
          }
          else if (iVar3 <= iVar1) {
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

