// FUN_00f1fb10 @ 00f1fb10 size=376 calls_out=3 calls_in=0
// strings: 

void FUN_00f1fb10(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint unaff_r5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_3c;
  uint local_30;
  uint local_2c;
  
  iVar1 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_2c = 8;
    local_30 = 0;
  }
  else {
    uVar13 = thunk_FUN_016d4a50(iVar1);
    uVar3 = (uint)((ulonglong)uVar13 >> 0x20);
    local_2c = (uint)uVar13;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar10 = 0;
      uVar6 = 0;
      do {
        if (iVar1 == iVar10) break;
        uVar9 = param_2[10];
        uVar2 = 0;
        bVar12 = 0x3ffffffe < uVar9;
        bVar11 = uVar9 == 0x3fffffff;
        if (uVar9 < 0x40000000) {
          unaff_r5 = uVar9 << 2;
          bVar12 = 0x7ffffffb < unaff_r5;
          bVar11 = unaff_r5 == 0x7ffffffc;
        }
        if (bVar12 && !bVar11) {
LAB_00f1fc78:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar2,uVar3);
        }
        uVar2 = param_2[9];
        if (unaff_r5 == 0) {
          uVar3 = 4;
          local_3c = 0;
        }
        else {
          uVar3 = thunk_FUN_016d4a50(unaff_r5);
          if (uVar3 == 0) {
            uVar2 = 4;
            uVar3 = unaff_r5;
            goto LAB_00f1fc78;
          }
          local_3c = uVar9;
        }
        uVar6 = uVar6 + 1;
        FUN_016dd1aa(uVar3,uVar2,unaff_r5);
        uVar13 = *(undefined8 *)(param_2 + 6);
        puVar4 = (undefined4 *)(local_2c + iVar10);
        uVar2 = param_2[1];
        uVar5 = param_2[2];
        unaff_r5 = param_2[3];
        uVar7 = param_2[4];
        uVar8 = param_2[5];
        iVar10 = iVar10 + 0x30;
        *puVar4 = *param_2;
        puVar4[1] = uVar2;
        puVar4[2] = uVar5;
        puVar4[3] = unaff_r5;
        puVar4[4] = uVar7;
        puVar4[5] = uVar8;
        puVar4[8] = local_3c;
        puVar4[9] = uVar3;
        puVar4[10] = uVar9;
        *(undefined8 *)(puVar4 + 6) = uVar13;
        param_2 = param_2 + 0xc;
      } while (param_3 != uVar6);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

