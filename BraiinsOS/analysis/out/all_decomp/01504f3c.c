// FUN_01504f3c @ 01504f3c size=296 calls_out=3 calls_in=1
// strings: 

void FUN_01504f3c(uint *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r8;
  int *piVar4;
  uint uVar5;
  int local_34;
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
      uVar5 = 0;
      do {
        if (iVar3 == 0) break;
        iVar2 = *(int *)(param_2 + 8);
        uVar1 = 0;
        if (iVar2 < 0) {
LAB_01505050:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar1,unaff_r8);
        }
        uVar1 = *(undefined4 *)(param_2 + 4);
        if (iVar2 == 0) {
          unaff_r8 = 1;
          local_34 = 0;
        }
        else {
          unaff_r8 = thunk_FUN_016d4a50(iVar2,uVar1);
          if (unaff_r8 == 0) {
            uVar1 = 1;
            unaff_r8 = iVar2;
            goto LAB_01505050;
          }
          local_34 = iVar2;
        }
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 0xc;
        FUN_016dd1aa(unaff_r8,uVar1,iVar2);
        iVar3 = iVar3 + -0xc;
        piVar4[1] = iVar2;
        *piVar4 = unaff_r8;
        piVar4[-1] = local_34;
        piVar4 = piVar4 + 3;
      } while (param_3 != uVar5);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

