// FUN_01361f38 @ 01361f38 size=352 calls_out=3 calls_in=1
// strings: 

void FUN_01361f38(uint *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  iVar5 = param_3 * 0x14;
  if (0x6666666 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar11 = thunk_FUN_016d4a50(iVar5);
    uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
    local_2c = (uint)uVar11;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar5);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      puVar7 = (uint *)(local_2c + 8);
      uVar8 = 0;
      do {
        if (iVar5 == 0) break;
        uVar6 = *(uint *)(param_2 + 8);
        uVar2 = 0;
        bVar10 = 0x1ffffffe < uVar6;
        bVar9 = uVar6 == 0x1fffffff;
        if (uVar6 < 0x20000000) {
          unaff_r5 = uVar6 << 3;
          bVar10 = 0x7ffffffb < unaff_r5;
          bVar9 = unaff_r5 == 0x7ffffffc;
        }
        if (bVar10 && !bVar9) {
LAB_01362088:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar2,uVar3);
        }
        uVar2 = *(undefined4 *)(param_2 + 4);
        uVar1 = *(undefined2 *)(param_2 + 0x10);
        if (unaff_r5 == 0) {
          uVar3 = 4;
          local_38 = 0;
        }
        else {
          uVar3 = thunk_FUN_016d4a50(unaff_r5);
          if (uVar3 == 0) {
            uVar2 = 4;
            uVar3 = unaff_r5;
            goto LAB_01362088;
          }
          local_38 = uVar6;
        }
        uVar8 = uVar8 + 1;
        FUN_016dd1aa(uVar3,uVar2,unaff_r5);
        iVar5 = iVar5 + -0x14;
        *(undefined2 *)(puVar7 + 2) = uVar1;
        uVar4 = *(uint *)(param_2 + 0xc);
        puVar7[-2] = local_38;
        puVar7[-1] = uVar3;
        *puVar7 = uVar6;
        puVar7[1] = uVar4;
        puVar7 = puVar7 + 5;
        param_2 = param_2 + 0x14;
      } while (param_3 != uVar8);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

