// FUN_01492dc0 @ 01492dc0 size=352 calls_out=4 calls_in=1
// strings: 

void FUN_01492dc0(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int unaff_r8;
  int iVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  
  uVar3 = param_3 - param_2;
  uVar1 = 0;
  if (0x7ffffff8 < uVar3) {
LAB_01492ddc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,uVar3);
  }
  if (param_3 == param_2) {
    uVar4 = 0;
    local_2c = 4;
    local_30 = 0;
  }
  else {
    if (uVar3 < 4) {
      local_30 = 0;
      iVar5 = FUN_016d51b0(&local_30,4,uVar3);
      uVar1 = 4;
      if (iVar5 != 0) goto LAB_01492ddc;
      local_2c = local_30;
    }
    else {
      local_2c = thunk_FUN_016d4a50(uVar3);
    }
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar3);
    }
    piVar2 = (int *)(local_2c + 4);
    piVar6 = (int *)(param_2 + 8);
    uVar4 = 0;
    local_30 = uVar3 / 0xc;
    do {
      iVar7 = *piVar6;
      iVar5 = -0x80000000;
      iVar8 = piVar6[-1];
      if (piVar6[-2] != -0x80000000) {
        uVar1 = 0;
        if (iVar7 < 0) {
LAB_01492f18:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar1,unaff_r8);
        }
        if (iVar7 == 0) {
          unaff_r8 = 1;
          iVar5 = 0;
        }
        else {
          unaff_r8 = thunk_FUN_016d4a50(iVar7);
          if (unaff_r8 == 0) {
            uVar1 = 1;
            unaff_r8 = iVar7;
            goto LAB_01492f18;
          }
          iVar5 = iVar7;
        }
        FUN_016dd1aa(unaff_r8,iVar8,iVar7);
        iVar8 = unaff_r8;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 3;
      *piVar2 = iVar8;
      piVar2[-1] = iVar5;
      piVar2[1] = iVar7;
      piVar2 = piVar2 + 3;
    } while (uVar3 / 0xc != uVar4);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar4;
  return;
}

