// FUN_015050d8 @ 015050d8 size=304 calls_out=3 calls_in=0
// strings: 

void FUN_015050d8(uint *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r8;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int local_34;
  uint local_30;
  uint local_2c;
  
  uVar4 = param_3 * 0x10;
  bVar8 = 0xffffffe < param_3;
  bVar7 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar8 = 0x7ffffffb < uVar4;
    bVar7 = uVar4 == 0x7ffffffc;
  }
  if (bVar8 && !bVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  if (uVar4 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar4);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      piVar5 = (int *)(local_2c + 8);
      uVar6 = 0;
      do {
        if (uVar4 == 0) break;
        iVar3 = *(int *)(param_2 + 8);
        uVar1 = 0;
        if (iVar3 < 0) {
LAB_015051f4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar1,unaff_r8);
        }
        uVar1 = *(undefined4 *)(param_2 + 4);
        if (iVar3 == 0) {
          unaff_r8 = 1;
          local_34 = 0;
        }
        else {
          unaff_r8 = thunk_FUN_016d4a50(iVar3,uVar1);
          if (unaff_r8 == 0) {
            uVar1 = 1;
            unaff_r8 = iVar3;
            goto LAB_015051f4;
          }
          local_34 = iVar3;
        }
        uVar6 = uVar6 + 1;
        FUN_016dd1aa(unaff_r8,uVar1,iVar3);
        uVar4 = uVar4 - 0x10;
        iVar2 = *(int *)(param_2 + 0xc);
        piVar5[-1] = unaff_r8;
        piVar5[-2] = local_34;
        *piVar5 = iVar3;
        piVar5[1] = iVar2;
        piVar5 = piVar5 + 4;
        param_2 = param_2 + 0x10;
      } while (param_3 != uVar6);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

