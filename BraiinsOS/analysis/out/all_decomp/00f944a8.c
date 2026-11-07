// FUN_00f944a8 @ 00f944a8 size=896 calls_out=6 calls_in=4
// strings: attempt to join into collection with len > usize::MAX

void FUN_00f944a8(uint *param_1,int param_2,int param_3,undefined4 *param_4,uint param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  uint extraout_r2;
  uint extraout_r2_00;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_30;
  uint *local_2c;
  uint *local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  param_3 = param_3 * 0xc;
  uVar12 = param_3 - 0xc;
  lVar2 = (ulonglong)((uVar12 >> 2) * -0x55555555) * (ulonglong)param_5;
  uVar5 = (uint)lVar2;
  if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
    iVar13 = param_2 + 0xc;
    iVar3 = param_2;
    do {
      if (param_3 == 0) {
        local_30 = 0;
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,uVar5);
        }
        if (uVar5 == 0) {
          local_2c = (uint *)&DAT_00000001;
        }
        else {
          local_2c = (uint *)thunk_FUN_016d4a50(uVar5);
          local_30 = uVar5;
          if (local_2c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar5);
          }
        }
        uVar8 = *(uint *)(param_2 + 8);
        uVar10 = *(undefined4 *)(param_2 + 4);
        local_28 = (uint *)0x0;
        if (local_30 < uVar8) {
          FUN_00f991dc(&local_30,0,uVar8,1,1);
        }
        puVar6 = local_28;
        puVar7 = local_2c;
        FUN_016dd1aa((int)local_2c + (int)local_28,uVar10,uVar8);
        uVar9 = uVar5 - ((int)puVar6 + uVar8);
        puVar11 = (undefined4 *)((int)puVar7 + (int)puVar6 + uVar8);
        puVar4 = param_1;
        switch(param_5) {
        case 0:
          break;
        case 1:
          goto switchD_00f945dc_caseD_1;
        case 2:
          goto switchD_00f945dc_caseD_2;
        case 3:
          goto switchD_00f945dc_caseD_3;
        case 4:
          goto switchD_00f945dc_caseD_4;
        default:
          goto switchD_00f945dc_default;
        }
        goto joined_r0x00f945f8;
      }
      puVar7 = (uint *)(iVar3 + 8);
      param_3 = param_3 + -0xc;
      iVar3 = iVar3 + 0xc;
      bVar14 = CARRY4(*puVar7,uVar5);
      uVar5 = *puVar7 + uVar5;
    } while (!bVar14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
switchD_00f945dc_default:
  if (uVar12 == 0) goto LAB_00f946e4;
  if (uVar9 < param_5) goto LAB_00f947fc;
  uVar10 = *(undefined4 *)(iVar13 + 4);
  uVar8 = *(uint *)(iVar13 + 8);
  FUN_016dd1aa(puVar11,param_4);
  if (uVar9 - param_5 < uVar8) goto LAB_00f947fc;
  iVar13 = iVar13 + 0xc;
  FUN_016dd1aa((undefined1 *)((int)puVar11 + param_5),uVar10,uVar8);
  uVar9 = (uVar9 - param_5) - uVar8;
  puVar11 = (undefined4 *)((undefined1 *)((int)puVar11 + param_5) + uVar8);
  uVar12 = uVar12 - 0xc;
  goto switchD_00f945dc_default;
switchD_00f945dc_caseD_4:
  if (uVar12 == 0) goto LAB_00f946e4;
  if (uVar9 >= 4) {
    puVar6 = (uint *)(uVar9 - 4);
    param_5 = *(uint *)(iVar13 + 4);
    puVar7 = *(uint **)(iVar13 + 8);
    *puVar11 = *param_4;
  }
  if (uVar9 < 4 || puVar6 < puVar7) goto LAB_00f947fc;
  iVar13 = iVar13 + 0xc;
  FUN_016dd1aa(puVar11 + 1,param_5,puVar7);
  uVar9 = (int)puVar6 - (int)puVar7;
  puVar11 = (undefined4 *)((int)(puVar11 + 1) + (int)puVar7);
  uVar12 = uVar12 - 0xc;
  param_5 = extraout_r2;
  goto switchD_00f945dc_caseD_4;
switchD_00f945dc_caseD_3:
  if (uVar12 == 0) goto LAB_00f946e4;
  if (2 < uVar9) {
    puVar4 = (uint *)(uVar9 - 3);
    puVar6 = *(uint **)(iVar13 + 4);
    puVar7 = *(uint **)(iVar13 + 8);
    uVar1 = *(undefined2 *)param_4;
    *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)param_4 + 2);
    *(undefined2 *)puVar11 = uVar1;
  }
  if (2 >= uVar9 || puVar4 < puVar7) goto LAB_00f947fc;
  iVar13 = iVar13 + 0xc;
  FUN_016dd1aa((undefined1 *)((int)puVar11 + 3),puVar6,puVar7);
  uVar9 = (int)puVar4 - (int)puVar7;
  puVar11 = (undefined4 *)((undefined1 *)((int)puVar11 + 3) + (int)puVar7);
  uVar12 = uVar12 - 0xc;
  goto switchD_00f945dc_caseD_3;
switchD_00f945dc_caseD_2:
  if (uVar12 == 0) goto LAB_00f946e4;
  if (uVar9 >= 2) {
    puVar6 = (uint *)(uVar9 - 2);
    param_5 = *(uint *)(iVar13 + 4);
    puVar7 = *(uint **)(iVar13 + 8);
    *(undefined2 *)puVar11 = *(undefined2 *)param_4;
  }
  if (uVar9 < 2 || puVar6 < puVar7) goto LAB_00f947fc;
  iVar13 = iVar13 + 0xc;
  FUN_016dd1aa((undefined2 *)((int)puVar11 + 2),param_5,puVar7);
  uVar9 = (int)puVar6 - (int)puVar7;
  puVar11 = (undefined4 *)((int)puVar11 + 2 + (int)puVar7);
  uVar12 = uVar12 - 0xc;
  param_5 = extraout_r2_00;
  goto switchD_00f945dc_caseD_2;
switchD_00f945dc_caseD_1:
  if (uVar12 == 0) goto LAB_00f946e4;
  if (uVar9 == 0) goto LAB_00f947fc;
  uVar8 = *(uint *)(iVar13 + 8);
  uVar10 = *(undefined4 *)(iVar13 + 4);
  *(undefined1 *)puVar11 = *(undefined1 *)param_4;
  if (uVar9 - 1 < uVar8) goto LAB_00f947fc;
  iVar13 = iVar13 + 0xc;
  FUN_016dd1aa((undefined1 *)((int)puVar11 + 1),uVar10,uVar8);
  uVar9 = (uVar9 - 1) - uVar8;
  puVar11 = (undefined4 *)((undefined1 *)((int)puVar11 + 1) + uVar8);
  uVar12 = uVar12 - 0xc;
  goto switchD_00f945dc_caseD_1;
joined_r0x00f945f8:
  if (uVar12 == 0) {
LAB_00f946e4:
    *param_1 = local_30;
    param_1[1] = (uint)local_2c;
    param_1[2] = uVar5 - uVar9;
    return;
  }
  uVar8 = *(uint *)(iVar13 + 8);
  if (uVar9 < uVar8) {
LAB_00f947fc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
  }
  FUN_016dd1aa(puVar11,*(undefined4 *)(iVar13 + 4),uVar8);
  uVar9 = uVar9 - uVar8;
  puVar11 = (undefined4 *)((int)puVar11 + uVar8);
  uVar12 = uVar12 - 0xc;
  iVar13 = iVar13 + 0xc;
  goto joined_r0x00f945f8;
}

