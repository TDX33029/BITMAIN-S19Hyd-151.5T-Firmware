// FUN_016d0e5c @ 016d0e5c size=308 calls_out=3 calls_in=0
// strings: 

void FUN_016d0e5c(uint *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint unaff_r5;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_34;
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
    uVar9 = thunk_FUN_016d4a50(iVar3);
    uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
    local_2c = (uint)uVar9;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar3);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      uVar6 = 0;
      puVar5 = (uint *)(local_2c + 4);
      do {
        if (iVar3 == 0) break;
        uVar4 = *(uint *)(param_2 + 8);
        uVar1 = 0;
        bVar8 = 0x3ffffffe < uVar4;
        bVar7 = uVar4 == 0x3fffffff;
        if (uVar4 < 0x40000000) {
          unaff_r5 = uVar4 << 2;
          bVar8 = 0x7ffffffb < unaff_r5;
          bVar7 = unaff_r5 == 0x7ffffffc;
        }
        if (bVar8 && !bVar7) {
LAB_016d0f80:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar1,uVar2);
        }
        uVar1 = *(undefined4 *)(param_2 + 4);
        if (unaff_r5 == 0) {
          uVar2 = 4;
          local_34 = 0;
        }
        else {
          uVar2 = thunk_FUN_016d4a50(unaff_r5);
          if (uVar2 == 0) {
            uVar1 = 4;
            uVar2 = unaff_r5;
            goto LAB_016d0f80;
          }
          local_34 = uVar4;
        }
        uVar6 = uVar6 + 1;
        param_2 = param_2 + 0xc;
        FUN_016dd1aa(uVar2,uVar1,unaff_r5);
        iVar3 = iVar3 + -0xc;
        puVar5[-1] = local_34;
        *puVar5 = uVar2;
        puVar5[1] = uVar4;
        puVar5 = puVar5 + 3;
      } while (param_3 != uVar6);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

