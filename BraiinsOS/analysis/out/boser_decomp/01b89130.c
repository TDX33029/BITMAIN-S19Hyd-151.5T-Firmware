// FUN_01b89130 @ 01b89130 size=1052 calls_out=10 calls_in=2
// strings: 

uint FUN_01b89130(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int extraout_r1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 < 7) {
    if (*(uint *)(param_1 + 0xd8) < 7) {
      FUN_01bbffe0(param_1 + 0x84c,param_3,*(undefined4 *)(param_1 + 0xd0));
    }
    else {
      FUN_01bc00bc(param_1 + 0x84c,param_3);
    }
    uVar7 = 1;
    goto LAB_01b89194;
  }
  FUN_01b89104(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0xfc);
  iVar6 = param_1 + 0x868;
  iVar4 = *(int *)(param_1 + 0x860);
  uVar7 = extraout_r1 - *(int *)(param_1 + 0x86c);
  *(int *)(param_1 + 0x914) = iVar4;
  if (*(int *)(param_1 + 0x884) + 0x180U < uVar7) {
    uVar2 = (uVar7 - *(int *)(param_1 + 0x884)) - 0x180;
    if (uVar2 < 0xc1) {
      iVar5 = uVar7 - uVar2;
    }
    else {
      iVar5 = uVar7 - 0xc0;
    }
    *(int *)(param_1 + 0x884) = iVar5;
  }
  if (*(uint *)(param_1 + 0x878) < *(uint *)(param_1 + 0x874)) {
    uVar9 = 1;
  }
  else if (*(int *)(param_1 + 0x91c) == 0) {
    uVar9 = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x91c) + 0x6c) == 0) {
    uVar9 = 2;
  }
  else {
    uVar9 = 3;
  }
  iVar5 = *(int *)(param_1 + 0x864);
  pcVar8 = *(code **)(param_1 + 0x160);
  *(undefined4 *)(iVar5 + 0x11e8) = *(undefined4 *)(iVar4 + 0x11e8);
  uVar3 = *(undefined4 *)(iVar4 + 0x11ec);
  *(undefined4 *)(iVar5 + 0x11f0) = *(undefined4 *)(iVar4 + 0x11f0);
  *(undefined4 *)(iVar5 + 0x11ec) = uVar3;
  if (*(uint *)(param_1 + 0x850) < *(uint *)(param_1 + 0x858)) {
    if (pcVar8 != (code *)0x0) {
LAB_01b89528:
      uVar7 = 0xffffffd7;
      goto LAB_01b89194;
    }
    puVar1 = (undefined4 *)(param_1 + 0x84c);
    uVar9 = *(undefined4 *)(param_1 + 0x140);
LAB_01b892c4:
    iVar4 = FUN_01bc01b4(puVar1,iVar6,param_1 + 0x2f4,iVar5 + 0x11e8,uVar9,extraout_r1,param_3);
  }
  else {
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_01bed93e(&local_40,0,0x14);
      if (pcVar8 != (code *)0x0) goto LAB_01b89528;
      local_40 = *(undefined4 *)(param_1 + 0x844);
      local_30 = *(undefined4 *)(param_1 + 0x848);
      uVar7 = FUN_01bbf800(param_1 + 800,&local_40,param_1 + 0x110,extraout_r1,param_3);
      if (0xffffff88 < uVar7) goto LAB_01b89194;
      iVar5 = *(int *)(param_1 + 0x864);
      puVar1 = &local_40;
      uVar9 = *(undefined4 *)(param_1 + 0x140);
      goto LAB_01b892c4;
    }
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_01b8909c(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x140)
                                    ,uVar9);
      *(undefined4 *)(param_1 + 0x93c) = 0;
      iVar4 = (*pcVar8)(iVar6,param_1 + 0x2f4,iVar5 + 0x11e8,extraout_r1,param_3);
    }
    else {
      uVar7 = (*pcVar8)(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0xec4),
                        *(undefined4 *)(param_1 + 0xec8),extraout_r1,param_3,0,0,
                        *(undefined4 *)(param_1 + 0xe8),1 << (*(uint *)(param_1 + 0xc0) & 0xff));
      if ((*(uint *)(param_1 + 0xec8) < uVar7) || (uVar7 == 0)) {
LAB_01b894a0:
        uVar7 = 0xffffff96;
      }
      else {
        iVar4 = *(int *)(param_1 + 0xec4);
        iVar5 = uVar7 + 0xfffffff;
        if (*(int *)(iVar4 + iVar5 * 0x10) != 0 || *(int *)(iVar4 + iVar5 * 0x10 + 8) != 0) {
          if (*(uint *)(param_1 + 0xec8) == uVar7) goto LAB_01b894a0;
          uVar7 = uVar7 + 1;
          FUN_01bed93e(iVar4 + iVar5 * 0x10 + 0x10,0,0x10);
        }
        if (uVar7 < 0xffffff89) {
          iVar6 = 0;
          iVar4 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          piVar10 = (int *)(*(int *)(param_1 + 0xec4) + 4);
          for (uVar2 = 0; uVar7 != uVar2; uVar2 = uVar2 + 1) {
            iVar6 = iVar6 + *piVar10;
            iVar4 = iVar4 + piVar10[1];
            piVar10 = piVar10 + 4;
          }
          if ((param_3 < (uint)(iVar6 + iVar4)) ||
             (uVar7 = FUN_01b85a80(param_1,&local_40,*(int *)(param_1 + 0xec4),uVar7,extraout_r1,
                                   param_3,*(undefined4 *)(param_1 + 0x168)), 0xffffff88 < uVar7)) {
            uVar7 = 0xffffff95;
          }
          else {
            uVar7 = 0;
            *(undefined4 *)(param_1 + 0x93c) = 0;
          }
          goto LAB_01b89194;
        }
      }
      if (*(int *)(param_1 + 0x158) == 0) goto LAB_01b89194;
      pcVar8 = (code *)FUN_01b8909c(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x140)
                                    ,uVar9);
      *(undefined4 *)(param_1 + 0x93c) = 0;
      iVar4 = (*pcVar8)(iVar6,param_1 + 0x2f4,*(int *)(param_1 + 0x864) + 0x11e8,extraout_r1,param_3
                       );
    }
  }
  uVar7 = 0;
  FUN_01bed4e2(*(undefined4 *)(param_1 + 0x300),extraout_r1 + (param_3 - iVar4),iVar4);
  *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + iVar4;
LAB_01b89194:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar7;
}

