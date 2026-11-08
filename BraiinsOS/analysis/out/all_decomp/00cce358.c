// FUN_00cce358 @ 00cce358 size=484 calls_out=3 calls_in=9
// strings: 

void FUN_00cce358(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar1 = param_3 * 0x18;
  if (0x5555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar1);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar6 = 0;
      uVar7 = 0;
      do {
        if (iVar1 == iVar6) break;
        uVar5 = *(uint *)(param_2 + 8);
        uVar3 = 0;
        bVar9 = 0x3ffffffe < uVar5;
        bVar8 = uVar5 == 0x3fffffff;
        if (uVar5 < 0x40000000) {
          unaff_r5 = uVar5 << 2;
          bVar9 = 0x7ffffffb < unaff_r5;
          bVar8 = unaff_r5 == 0x7ffffffc;
        }
        if (bVar9 && !bVar8) {
LAB_00cce518:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar3,local_34);
        }
        uVar3 = *(undefined4 *)(param_2 + 4);
        local_44 = 0;
        if (unaff_r5 == 0) {
          local_34 = 4;
          local_3c = 0;
        }
        else {
          local_34 = thunk_FUN_016d4a50(unaff_r5);
          if (local_34 == 0) {
            uVar3 = 4;
            local_34 = unaff_r5;
            goto LAB_00cce518;
          }
          local_3c = uVar5;
        }
        FUN_016dd1aa(local_34,uVar3,unaff_r5);
        unaff_r5 = *(uint *)(param_2 + 0x14);
        if (0x3fffffff < unaff_r5) {
LAB_00cce500:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_44,local_40);
        }
        uVar2 = unaff_r5 * 4;
        if (0x7ffffffc < uVar2) goto LAB_00cce500;
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        if (uVar2 == 0) {
          local_40 = 4;
          local_44 = 0;
        }
        else {
          local_40 = thunk_FUN_016d4a50(uVar2);
          if (local_40 == 0) {
            local_44 = 4;
            local_40 = uVar2;
            goto LAB_00cce500;
          }
          local_44 = unaff_r5;
        }
        param_2 = param_2 + 0x18;
        uVar7 = uVar7 + 1;
        FUN_016dd1aa(local_40,uVar3,uVar2);
        puVar4 = (uint *)(local_2c + iVar6);
        *puVar4 = local_3c;
        iVar6 = iVar6 + 0x18;
        puVar4[5] = unaff_r5;
        puVar4[1] = local_34;
        puVar4[2] = uVar5;
        puVar4[3] = local_44;
        puVar4[4] = local_40;
      } while (param_3 != uVar7);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

