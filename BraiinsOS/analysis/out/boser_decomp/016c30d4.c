// FUN_016c30d4 @ 016c30d4 size=204 calls_out=1 calls_in=1
// strings: 

int FUN_016c30d4(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
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
      iVar4 = param_1[2];
      uVar3 = param_1[3];
      do {
        if (uVar1 < uVar3) {
          if (-0x41 < *(char *)(iVar4 + uVar1)) {
            return 0;
          }
        }
        else if (uVar1 == uVar3) {
          return 0;
        }
        iVar2 = FUN_01687998(param_3,param_4,param_1,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar1 = param_2[2];
      } while ((*param_2 & 1) != 0);
    }
  }
  return 0;
}

