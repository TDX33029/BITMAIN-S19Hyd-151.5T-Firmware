// FUN_01361bd4 @ 01361bd4 size=348 calls_out=3 calls_in=1
// strings: 

void FUN_01361bd4(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint unaff_r5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  uVar1 = param_3 * 0x10;
  bVar11 = 0xffffffe < param_3;
  bVar10 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar11 = 0x7ffffffb < uVar1;
    bVar10 = uVar1 == 0x7ffffffc;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar12 = thunk_FUN_016d4a50(uVar1);
    uVar5 = (uint)((ulonglong)uVar12 >> 0x20);
    local_2c = (uint)uVar12;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      uVar8 = 0;
      uVar9 = 0;
      do {
        if (uVar1 == uVar8) break;
        uVar7 = *(uint *)(param_2 + 8);
        uVar4 = 0;
        bVar11 = 0x1ffffffe < uVar7;
        bVar10 = uVar7 == 0x1fffffff;
        if (uVar7 < 0x20000000) {
          unaff_r5 = uVar7 << 3;
          bVar11 = 0x7ffffffb < unaff_r5;
          bVar10 = unaff_r5 == 0x7ffffffc;
        }
        if (bVar11 && !bVar10) {
LAB_01361d20:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,uVar5);
        }
        uVar4 = *(undefined4 *)(param_2 + 4);
        if (unaff_r5 == 0) {
          uVar5 = 4;
          local_38 = 0;
        }
        else {
          uVar5 = thunk_FUN_016d4a50(unaff_r5);
          if (uVar5 == 0) {
            uVar4 = 4;
            uVar5 = unaff_r5;
            goto LAB_01361d20;
          }
          local_38 = uVar7;
        }
        uVar9 = uVar9 + 1;
        FUN_016dd1aa(uVar5,uVar4,unaff_r5);
        uVar2 = *(undefined1 *)(param_2 + 0xc);
        uVar3 = *(undefined2 *)(param_2 + 0xd);
        puVar6 = (uint *)(local_2c + uVar8);
        *puVar6 = local_38;
        uVar8 = uVar8 + 0x10;
        *(undefined2 *)((int)puVar6 + 0xd) = uVar3;
        puVar6[1] = uVar5;
        *(undefined1 *)(puVar6 + 3) = uVar2;
        puVar6[2] = uVar7;
        param_2 = param_2 + 0x10;
      } while (param_3 != uVar9);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

