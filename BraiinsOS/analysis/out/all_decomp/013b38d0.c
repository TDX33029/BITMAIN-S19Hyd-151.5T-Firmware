// FUN_013b38d0 @ 013b38d0 size=200 calls_out=1 calls_in=1
// strings: 

int FUN_013b38d0(int *param_1,uint *param_2,undefined4 param_3)

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
LAB_013b398c:
          *param_2 = 0;
          return 0;
        }
      }
      else if (uVar1 != param_1[3]) goto LAB_013b398c;
    }
    else {
      iVar3 = param_1[2];
      uVar4 = param_1[3];
      if (uVar1 < uVar4) goto LAB_013b393c;
      while (uVar1 != uVar4) {
        while( true ) {
          iVar2 = FUN_013aca88(param_3,param_1,param_2);
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((*param_2 & 1) == 0) {
            return 0;
          }
          uVar1 = param_2[2];
          if (uVar4 <= uVar1) break;
LAB_013b393c:
          if (-0x41 < *(char *)(iVar3 + uVar1)) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

