// FUN_016042d4 @ 016042d4 size=956 calls_out=5 calls_in=2
// strings: assertion failed: out_pos + 3 < out_slice.len() | assertion failed: (source_pos + 3) & out_buf_size_mask < out_slice.len() | assertion failed: out_pos + 1 < out_slice.len() | assertion failed: out_pos + 2 < out_slice.len() | assertion failed: (source_pos + 1) & out_buf_size_mask < out_slice.len() | assertion failed: (source_pos + 2) & out_buf_size_mask < out_slice.len()

void FUN_016042d4(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  uVar2 = param_4 - param_3;
  uVar6 = (param_5 & 0xfffffffc) + param_4;
  uVar3 = param_3 - param_4;
  if (param_3 < param_4 || param_3 - param_4 == 0) {
    uVar3 = uVar2;
  }
  if ((param_3 < param_4) && (uVar3 == 1)) {
    uVar3 = param_4 - 1;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,param_2,&DAT_01d05710);
    }
    if ((uVar6 < param_4) || (param_2 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_4,uVar6,param_2,&DAT_01d05720);
    }
    FUN_01bed93e(param_1 + param_4,*(undefined1 *)(param_1 + uVar3),param_5 & 0xfffffffc);
    param_3 = uVar6 - 1;
    param_4 = uVar6;
  }
  else {
    uVar3 = param_2 - 3;
    if (param_2 < 3) {
      uVar3 = 0;
    }
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    bVar10 = param_3 <= param_4;
    bVar9 = param_4 == param_3;
    if (bVar10 && !bVar9) {
      bVar10 = 2 < uVar2;
      bVar9 = uVar2 == 3;
    }
    if (bVar10 && !bVar9) {
      if (param_4 < uVar3) {
        uVar2 = param_3;
        do {
          if (param_2 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar2 + 3,param_2,&DAT_01d05840);
          }
          param_3 = uVar2 + 4;
          if (0xfffffffb < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar2,param_3,param_2,&DAT_01d05840);
          }
          if (param_2 - 4 < param_4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005238a3,0x2b,&DAT_01d05840);
          }
          *(undefined4 *)(param_1 + param_4) = *(undefined4 *)(param_1 + uVar2);
          param_4 = param_4 + 4;
          uVar2 = param_3;
        } while (param_4 < uVar3);
      }
    }
    else if (param_4 < uVar3) {
      iVar8 = 0;
      do {
        if (param_2 <= param_4 + iVar8 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: out_pos + 3 < out_slice.len()",0x2f,&DAT_01d05730);
        }
        uVar2 = param_3 + iVar8;
        if (param_2 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: (source_pos + 3) & out_buf_size_mask < out_slice.len()",
                       0x48,&DAT_01d05740);
        }
        if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,param_2,&DAT_01d05750);
        }
        *(undefined1 *)(param_1 + param_4 + iVar8) = *(undefined1 *)(param_1 + param_3 + iVar8);
        if (param_2 <= uVar2 + 1) {
          puVar5 = &DAT_01d05760;
          param_3 = uVar2 + 1;
          goto LAB_01604620;
        }
        iVar4 = param_1 + param_3 + iVar8;
        iVar7 = param_1 + param_4 + iVar8;
        *(undefined1 *)(iVar7 + 1) = *(undefined1 *)(iVar4 + 1);
        if (param_2 <= uVar2 + 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2 + 2,param_2,&DAT_01d05770);
        }
        iVar8 = iVar8 + 4;
        *(undefined1 *)(iVar7 + 2) = *(undefined1 *)(iVar4 + 2);
        *(undefined1 *)(iVar7 + 3) = *(undefined1 *)(iVar4 + 3);
      } while (param_4 + iVar8 < uVar3);
      param_3 = param_3 + iVar8;
      param_4 = param_4 + iVar8;
    }
  }
  switch(param_5 & 3) {
  case 0:
    goto switchD_01604454_caseD_0;
  case 1:
    if (param_2 <= param_3) {
      puVar5 = &DAT_01d05780;
LAB_01604620:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_3,param_2,puVar5);
    }
    if (param_2 <= param_4) {
      puVar5 = &UNK_01d05790;
      param_3 = param_4;
      goto LAB_01604620;
    }
    goto LAB_01604508;
  case 2:
    if (param_2 <= param_4 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: out_pos + 1 < out_slice.len()",0x2f,&DAT_01d057a0);
    }
    uVar3 = param_3 + 1;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (source_pos + 1) & out_buf_size_mask < out_slice.len()",0x48,
                   &DAT_01d057b0);
    }
    if (param_2 <= param_3) {
      puVar5 = &DAT_01d057c0;
      goto LAB_01604620;
    }
    uVar2 = param_4 + 1;
    uVar6 = param_4;
    if (param_2 <= param_4) {
      puVar5 = &UNK_01d057d0;
      param_3 = param_4;
      goto LAB_01604620;
    }
    break;
  case 3:
    if (param_2 <= param_4 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: out_pos + 2 < out_slice.len()",0x2f,&DAT_01d057e0);
    }
    uVar3 = param_3 + 2;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (source_pos + 2) & out_buf_size_mask < out_slice.len()",0x48,
                   &DAT_01d057f0);
    }
    if (param_2 <= param_3) {
      puVar5 = &DAT_01d05800;
      goto LAB_01604620;
    }
    if (param_2 <= param_4) {
      puVar5 = &UNK_01d05810;
      param_3 = param_4;
      goto LAB_01604620;
    }
    puVar1 = (undefined1 *)(param_1 + param_3);
    param_3 = param_3 + 1;
    *(undefined1 *)(param_1 + param_4) = *puVar1;
    if (param_2 <= param_3) {
      puVar5 = &DAT_01d05820;
      goto LAB_01604620;
    }
    uVar6 = param_4 + 1;
    uVar2 = param_4 + 2;
    if (param_2 <= uVar6) {
      puVar5 = &DAT_01d05830;
      param_3 = uVar6;
      goto LAB_01604620;
    }
  }
  param_4 = uVar2;
  *(undefined1 *)(param_1 + uVar6) = *(undefined1 *)(param_1 + param_3);
  param_3 = uVar3;
LAB_01604508:
  *(undefined1 *)(param_1 + param_4) = *(undefined1 *)(param_1 + param_3);
switchD_01604454_caseD_0:
  return;
}

