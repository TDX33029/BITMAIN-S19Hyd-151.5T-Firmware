// FUN_0150528c @ 0150528c size=276 calls_out=3 calls_in=2
// strings: 

void FUN_0150528c(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_30;
  uint local_2c;
  
  iVar3 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar3);
  }
  if (iVar3 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar3);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar3);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      piVar4 = (int *)(local_2c + 4);
      uVar2 = 0;
      do {
        if (iVar3 == 0) break;
        iVar6 = *(int *)(param_2 + 8);
        uVar5 = *(undefined4 *)(param_2 + 4);
        if (iVar6 == 0) {
          iVar1 = 1;
        }
        else {
          iVar1 = thunk_FUN_016d4a50(iVar6);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar6);
          }
        }
        FUN_016dd1aa(iVar1,uVar5,iVar6);
        uVar2 = uVar2 + 1;
        piVar4[-1] = iVar6;
        *piVar4 = iVar1;
        piVar4[1] = iVar6;
        piVar4 = piVar4 + 3;
        iVar3 = iVar3 + -0xc;
        param_2 = param_2 + 0xc;
      } while (param_3 != uVar2);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

