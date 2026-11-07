// FUN_016a9ac8 @ 016a9ac8 size=192 calls_out=1 calls_in=4
// strings: 

int FUN_016a9ac8(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*param_2 & 1) != 0) {
    uVar1 = param_2[2];
    if (*param_1 - 1U < 2) {
      if (uVar1 < (uint)param_1[3]) {
        if (*(char *)(param_1[2] + uVar1) < -0x40) {
          *param_2 = 0;
        }
      }
      else if (uVar1 != param_1[3]) {
        *param_2 = 0;
      }
    }
    else {
      iVar3 = param_1[2];
      uVar4 = param_1[3];
      do {
        if (uVar1 < uVar4) {
          if (-0x41 < *(char *)(iVar3 + uVar1)) {
            return 0;
          }
        }
        else if (uVar1 == uVar4) {
          return 0;
        }
        iVar2 = FUN_0167d724(param_3,param_1,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar1 = param_2[2];
      } while ((*param_2 & 1) != 0);
    }
  }
  return 0;
}

