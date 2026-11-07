// FUN_014f3744 @ 014f3744 size=776 calls_out=2 calls_in=1
// strings: transitional_am1_s9 | sysupgrade_nand_zynq_bm3_am2 | transitional_am2_s17 | transitional_am3_aml | transitional_am3_bbb | sysupgrade_sd_am1_s9

void FUN_014f3744(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 0x13:
    iVar2 = thunk_FUN_01bed842(param_2,"transitional_am1_s9",0x13);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014f3a8c;
    }
    break;
  case 0x14:
    iVar2 = thunk_FUN_01bed842(param_2,"transitional_am2_s17",0x14);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"transitional_am3_aml",0x14);
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        iVar2 = thunk_FUN_01bed842(param_2,"transitional_am3_bbb",0x14);
        if (iVar2 == 0) {
          uVar1 = 3;
        }
        else {
          iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_sd_am1_s9",0x14);
          if (iVar2 != 0) break;
          uVar1 = 0xb;
        }
      }
    }
    goto LAB_014f3a84;
  case 0x15:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_sd_am2_s17",0x15);
    if (iVar2 == 0) {
      uVar1 = 0xc;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_sd_am3_bbb",0x15);
      if (iVar2 != 0) break;
      uVar1 = 0xd;
    }
    goto LAB_014f3a84;
  case 0x16:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_nand_am1_s9",0x16);
    if (iVar2 == 0) {
      uVar1 = 6;
      goto LAB_014f3a84;
    }
    break;
  case 0x17:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_nand_am2_s17",0x17);
    if (iVar2 == 0) {
      uVar1 = 7;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_nand_am3_aml",0x17);
      if (iVar2 == 0) {
        uVar1 = 8;
      }
      else {
        iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_nand_am3_bbb",0x17);
        if (iVar2 != 0) break;
        uVar1 = 9;
      }
    }
    goto LAB_014f3a84;
  case 0x19:
    iVar2 = thunk_FUN_01bed842(param_2,"transitional_zynq_bm3_am2",0x19);
    if (iVar2 == 0) {
      uVar1 = 5;
      goto LAB_014f3a84;
    }
    break;
  case 0x1b:
    iVar2 = thunk_FUN_01bed842(param_2,"transitional_cvitek_bm1_am2",0x1b);
    if (iVar2 == 0) {
      uVar1 = 4;
      goto LAB_014f3a84;
    }
    break;
  case 0x1c:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_nand_zynq_bm3_am2",0x1c);
    if (iVar2 == 0) {
      uVar1 = 10;
      goto LAB_014f3a84;
    }
    break;
  case 0x1e:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_emmc_cvitek_bm1_am2",0x1e);
    if (iVar2 == 0) {
      uVar1 = 0x10;
      goto LAB_014f3a84;
    }
    break;
  case 0x21:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_sd_stm32mp157c_ii1_am2",0x21);
    if (iVar2 == 0) {
      uVar1 = 0xe;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_emmc_stm32mp15_ii1_am2",0x21);
      if (iVar2 != 0) break;
      uVar1 = 0x11;
    }
LAB_014f3a84:
    param_1[1] = uVar1;
    uVar1 = 0;
    goto LAB_014f3a8c;
  case 0x22:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_sd_stm32mp157c_ii2_bmm1",0x22);
    if (iVar2 == 0) {
      uVar1 = 0xf;
      goto LAB_014f3a84;
    }
    break;
  case 0x24:
    iVar2 = thunk_FUN_01bed842(param_2,"sysupgrade_emmc_stm32mp157c_ii2_bmm1",0x24);
    if (iVar2 == 0) {
      uVar1 = 0x12;
      goto LAB_014f3a84;
    }
  }
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa3b4,0x13);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014f3a8c:
  *param_1 = uVar1;
  return;
}

