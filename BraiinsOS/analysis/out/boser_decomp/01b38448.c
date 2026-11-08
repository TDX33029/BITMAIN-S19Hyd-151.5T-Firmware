// FUN_01b38448 @ 01b38448 size=788 calls_out=13 calls_in=0
// strings: /proc/cpuinfo | Features | Features | pmull

undefined8 FUN_01b38448(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  do {
    iVar1 = FUN_01be34a6("/proc/cpuinfo",0);
    if (-1 < iVar1) {
      iVar4 = FUN_01b6ad8c(0x400);
      if (iVar4 != 0) {
        iVar6 = 0;
        uVar3 = 0x400;
        goto LAB_01b386a8;
      }
      iVar6 = 0;
      iVar7 = iVar4;
      goto LAB_01b3870c;
    }
    piVar2 = (int *)FUN_01be3244();
  } while (*piVar2 == 4);
  iVar6 = 0;
  iVar7 = 0;
  goto LAB_01b384b4;
LAB_01b386a8:
  iVar7 = iVar4;
  if (uVar3 - iVar6 < 0x400) {
    if ((uVar3 * 2 < uVar3) || (iVar7 = FUN_01b6b414(iVar4,uVar3 << 1), iVar7 == 0)) {
LAB_01b38704:
      iVar6 = 0;
      iVar7 = 0;
      goto LAB_01b3870c;
    }
    uVar3 = uVar3 << 1;
  }
  while( true ) {
    iVar5 = FUN_01bf0424(iVar1,iVar7 + iVar6,0x400);
    iVar4 = iVar7;
    if (-1 < iVar5) break;
    piVar2 = (int *)FUN_01be3244();
    if (*piVar2 != 4) goto LAB_01b38704;
  }
  if (iVar5 == 0) goto code_r0x01b38728;
  iVar6 = iVar6 + iVar5;
  goto LAB_01b386a8;
code_r0x01b38728:
  iVar4 = 0;
LAB_01b3870c:
  FUN_01b6b1c4(iVar4);
  FUN_01bf01d6(iVar1);
LAB_01b384b4:
  uVar3 = FUN_01be65d0(0x10);
  if ((uVar3 & 0x1000) != 0) {
    DAT_01d532f0 = DAT_01d532f0 | 1;
    uVar3 = FUN_01be65d0(0x1a);
    if (uVar3 == 0) {
      iVar1 = iVar7;
      do {
        if (iVar6 == 0) {
          uVar3 = 0;
          goto LAB_01b385f4;
        }
        local_4c = iVar1;
        local_48 = iVar6;
        iVar4 = FUN_01b290a8(&local_44,&local_4c,&local_4c,10);
        iVar6 = local_48;
        iVar1 = local_4c;
        if (iVar4 == 0) {
          local_44 = local_4c;
          iVar1 = local_4c + local_48;
          local_40 = local_48;
          iVar6 = 0;
        }
        iVar4 = FUN_01b290a8(&local_3c,&local_34,&local_44,0x3a);
      } while (((iVar4 == 0) || (FUN_01b0cf3c(&local_3c), local_38 != 8)) ||
              (iVar4 = FUN_01b20118(local_3c,"Features"), iVar4 != 0));
      FUN_01b0cf3c(&local_34);
      local_54 = local_34;
      uStack_50 = uStack_30;
      uVar3 = FUN_01b29158(&local_54,&DAT_005b66d1);
      iVar1 = FUN_01b29158(&local_54,"pmull");
      iVar4 = FUN_01b29158(&local_54,&DAT_00598b03);
      iVar6 = FUN_01b29158(&local_54,&DAT_00598dcb);
      uVar3 = iVar1 << 1 | iVar4 << 2 | uVar3 | iVar6 << 3;
LAB_01b385f4:
      DAT_01d53148 = (uint)(uVar3 != 0);
    }
    if ((uVar3 & 1) != 0) {
      DAT_01d532f0 = DAT_01d532f0 | 4;
    }
    if ((uVar3 & 2) != 0) {
      DAT_01d532f0 = DAT_01d532f0 | 0x20;
    }
    if ((uVar3 & 4) != 0) {
      DAT_01d532f0 = DAT_01d532f0 | 8;
    }
    if ((uVar3 & 8) != 0) {
      DAT_01d532f0 = DAT_01d532f0 | 0x10;
    }
  }
  FUN_01b6b1c4(iVar7);
  DAT_01d532ec = 1;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

