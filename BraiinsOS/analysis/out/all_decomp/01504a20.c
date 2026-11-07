// FUN_01504a20 @ 01504a20 size=336 calls_out=3 calls_in=0
// strings: 

void FUN_01504a20(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int unaff_r8;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int local_40;
  uint local_30;
  uint local_2c;
  
  uVar1 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar1;
    bVar9 = uVar1 == 0x7ffffffc;
  }
  if (bVar10 && !bVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar1);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      uVar6 = 0;
      uVar8 = 0;
      do {
        if (uVar1 == uVar6) break;
        iVar7 = *(int *)(param_2 + 8);
        uVar4 = 0;
        if (iVar7 < 0) {
LAB_01504b5c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,unaff_r8);
        }
        uVar4 = *(undefined4 *)(param_2 + 4);
        uVar2 = *(undefined2 *)(param_2 + 0xe);
        uVar3 = *(undefined2 *)(param_2 + 0xc);
        if (iVar7 == 0) {
          unaff_r8 = 1;
          local_40 = 0;
        }
        else {
          unaff_r8 = thunk_FUN_016d4a50(iVar7,uVar4);
          if (unaff_r8 == 0) {
            uVar4 = 1;
            unaff_r8 = iVar7;
            goto LAB_01504b5c;
          }
          local_40 = iVar7;
        }
        uVar8 = uVar8 + 1;
        param_2 = param_2 + 0x10;
        FUN_016dd1aa(unaff_r8,uVar4,iVar7);
        piVar5 = (int *)(local_2c + uVar6);
        *piVar5 = local_40;
        uVar6 = uVar6 + 0x10;
        *(undefined2 *)((int)piVar5 + 0xe) = uVar2;
        *(undefined2 *)(piVar5 + 3) = uVar3;
        piVar5[1] = unaff_r8;
        piVar5[2] = iVar7;
      } while (param_3 != uVar8);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

