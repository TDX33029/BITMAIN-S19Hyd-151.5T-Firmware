// FUN_016089b4 @ 016089b4 size=1064 calls_out=5 calls_in=3
// strings: assertion failed: out_pos + 3 < out_slice.len() | assertion failed: (source_pos + 3) & out_buf_size_mask < out_slice.len() | assertion failed: out_pos + 1 < out_slice.len() | assertion failed: out_pos + 2 < out_slice.len() | assertion failed: (source_pos + 1) & out_buf_size_mask < out_slice.len() | assertion failed: (source_pos + 2) & out_buf_size_mask < out_slice.len()

void FUN_016089b4(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar1 = param_3 - param_4;
  if (param_3 < param_4 || param_3 - param_4 == 0) {
    uVar1 = param_4 - param_3;
  }
  bVar9 = param_2 <= (param_3 + param_5) - 3;
  uVar6 = (param_5 & 0xfffffffc) + param_4;
  if (((param_4 <= param_3) || (param_6 != 0xffffffff && bVar9)) || (uVar1 != 1)) {
    uVar1 = param_2 - 3;
    if (param_2 < 3) {
      uVar1 = 0;
    }
    if (uVar6 <= uVar1) {
      uVar1 = uVar6;
    }
    if ((param_4 <= param_3 || param_6 != 0xffffffff && bVar9) || (param_4 - param_3 < 4)) {
      if (uVar1 <= param_4) goto LAB_01608b68;
      iVar3 = 0;
      do {
        if (param_2 <= param_4 + iVar3 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: out_pos + 3 < out_slice.len()",0x2f,&DAT_01d05c30);
        }
        uVar6 = param_3 + iVar3;
        uVar7 = uVar6 + 3 & param_6;
        if (param_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: (source_pos + 3) & out_buf_size_mask < out_slice.len()",
                       0x48,&DAT_01d05c40);
        }
        uVar2 = uVar6 & param_6;
        if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,param_2,&DAT_01d05c50);
        }
        *(undefined1 *)(param_1 + param_4 + iVar3) = *(undefined1 *)(param_1 + uVar2);
        uVar2 = uVar6 + 1 & param_6;
        if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,param_2,&DAT_01d05c60);
        }
        iVar5 = param_1 + param_4 + iVar3;
        *(undefined1 *)(iVar5 + 1) = *(undefined1 *)(param_1 + uVar2);
        uVar6 = uVar6 + 2 & param_6;
        if (param_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,param_2,&DAT_01d05c70);
        }
        iVar3 = iVar3 + 4;
        *(undefined1 *)(iVar5 + 2) = *(undefined1 *)(param_1 + uVar6);
        uVar6 = param_4 + iVar3;
        *(undefined1 *)(iVar5 + 3) = *(undefined1 *)(param_1 + uVar7);
      } while (uVar6 < uVar1);
      param_3 = param_3 + iVar3;
    }
    else if (param_4 < uVar1) {
      uVar7 = param_3;
      do {
        if (param_2 <= uVar7 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar7 + 3,param_2,&DAT_01d05d40);
        }
        param_3 = uVar7 + 4;
        if (0xfffffffb < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar7,param_3,param_2,&DAT_01d05d40);
        }
        if (param_2 - 4 < param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005238a3,0x2b,&DAT_01d05d40);
        }
        *(undefined4 *)(param_1 + param_4) = *(undefined4 *)(param_1 + uVar7);
        param_4 = param_4 + 4;
        uVar7 = param_3;
        uVar6 = param_4;
      } while (param_4 < uVar1);
    }
    else {
LAB_01608b68:
      uVar6 = param_4;
    }
  }
  else {
    uVar1 = param_4 - 1;
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,param_2,&DAT_01d05c10);
    }
    if ((uVar6 < param_4) || (param_2 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_4,uVar6,param_2,&DAT_01d05c20);
    }
    FUN_01bed93e(param_1 + param_4,*(undefined1 *)(param_1 + uVar1),param_5 & 0xfffffffc);
    param_3 = uVar6 - 1;
  }
  uVar1 = uVar6;
  switch(param_5 & 3) {
  case 0:
    goto switchD_01608b7c_caseD_0;
  case 1:
    uVar7 = param_3 & param_6;
    if (param_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,param_2,&DAT_01d05c80);
    }
    if (param_2 <= uVar6) {
      puVar4 = &DAT_01d05c90;
      goto LAB_01608de4;
    }
    goto LAB_01608c44;
  case 2:
    if (param_2 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: out_pos + 1 < out_slice.len()",0x2f,&DAT_01d05ca0);
    }
    uVar7 = param_3 + 1 & param_6;
    if (param_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (source_pos + 1) & out_buf_size_mask < out_slice.len()",0x48,
                   &DAT_01d05cb0);
    }
    uVar1 = param_3 & param_6;
    if (param_2 <= uVar1) {
      puVar4 = &UNK_01d05cc0;
LAB_01608de4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,param_2,puVar4);
    }
    uVar2 = uVar6 + 1;
    uVar8 = uVar6;
    if (param_2 <= uVar6) {
      puVar4 = &DAT_01d05cd0;
      uVar1 = uVar6;
      goto LAB_01608de4;
    }
    break;
  case 3:
    if (param_2 <= uVar6 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: out_pos + 2 < out_slice.len()",0x2f,&DAT_01d05ce0);
    }
    uVar7 = param_3 + 2 & param_6;
    if (param_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (source_pos + 2) & out_buf_size_mask < out_slice.len()",0x48,
                   &DAT_01d05cf0);
    }
    uVar2 = param_3 & param_6;
    if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,param_2,&DAT_01d05d00);
    }
    if (param_2 <= uVar6) {
      puVar4 = &DAT_01d05d10;
      goto LAB_01608de4;
    }
    uVar1 = param_3 + 1 & param_6;
    *(undefined1 *)(param_1 + uVar6) = *(undefined1 *)(param_1 + uVar2);
    if (param_2 <= uVar1) {
      puVar4 = &DAT_01d05d20;
      goto LAB_01608de4;
    }
    uVar8 = uVar6 + 1;
    uVar2 = uVar6 + 2;
    if (param_2 <= uVar8) {
      puVar4 = &DAT_01d05d30;
      uVar1 = uVar8;
      goto LAB_01608de4;
    }
  }
  uVar6 = uVar2;
  *(undefined1 *)(param_1 + uVar8) = *(undefined1 *)(param_1 + uVar1);
LAB_01608c44:
  *(undefined1 *)(param_1 + uVar6) = *(undefined1 *)(param_1 + uVar7);
switchD_01608b7c_caseD_0:
  return;
}

