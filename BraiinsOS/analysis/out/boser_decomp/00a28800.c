// FUN_00a28800 @ 00a28800 size=880 calls_out=16 calls_in=10
// strings: 

void FUN_00a28800(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint **local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 *local_98;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined2 local_44;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint *local_28;
  
  FUN_006666fc(&local_e4,param_2[4],param_2[5]);
  uVar1 = *(undefined2 *)(param_2 + 6);
  local_38 = thunk_FUN_01be5118(0x80);
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  uVar6 = 1;
  pcVar8 = "{";
  local_2c = 1;
  local_30 = 0x80;
  local_34 = 0;
  local_28 = &local_38;
  do {
    uVar7 = local_34;
    uVar11 = local_34 ^ 0x7fffffff;
    if (uVar6 < (local_34 ^ 0x7fffffff)) {
      uVar11 = uVar6;
    }
    FUN_01284394(&local_38,pcVar8,uVar11);
    if (uVar7 == 0x7fffffff) goto LAB_00a289d0;
    pcVar8 = pcVar8 + uVar11;
    uVar6 = uVar6 - uVar11;
  } while (uVar6 != 0);
  local_d4 = &local_28;
  local_d8 = 0x100;
  iVar2 = FUN_0096b5ec(&local_d8,&DAT_0053268a,5,param_2[1],param_2[2]);
  if (iVar2 == 0) {
    if ((char)local_d8 == '\x01') {
      local_88 = 10;
      iVar2 = FUN_01966fbc(&local_88,0,0);
    }
    else {
      iVar2 = FUN_0096b5ec(&local_d8,&DAT_005325f1,7,param_2[4],param_2[5]);
      if (((iVar2 == 0) && (iVar2 = 0, (local_d8 & 0xff00) != 0)) && ((local_d8 & 1) == 0)) {
        uVar6 = 1;
        puVar10 = *local_d4;
        pcVar8 = "}";
        do {
          uVar11 = puVar10[1];
          uVar7 = uVar11 ^ 0x7fffffff;
          if (uVar6 < uVar7) {
            uVar7 = uVar6;
          }
          FUN_01284394(puVar10,pcVar8,uVar7);
          if (uVar11 == 0x7fffffff) goto LAB_00a289d0;
          pcVar8 = pcVar8 + uVar7;
          uVar6 = uVar6 - uVar7;
        } while (uVar6 != 0);
      }
    }
  }
LAB_00a289e4:
  local_d8 = local_38;
  local_d4 = (uint **)local_34;
  uStack_d0 = local_30;
  uStack_cc = local_2c;
  FUN_00710a2c(&local_88,&local_d8,iVar2);
  FUN_019bb7e0(*param_2,param_2[1]);
  FUN_019bb7e0(param_2[3],param_2[4]);
  local_44 = uVar1;
  FUN_01bed4e2(&local_d8,&local_88,0x50);
  if (local_98 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_014333b0();
    *puVar3 = &DAT_0056d238;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_0178e884(0);
    local_98 = puVar3;
  }
  puVar3 = local_98;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar4 = local_e4;
  puVar4[1] = local_e0;
  puVar4[2] = local_dc;
  uVar12 = FUN_01415d14(puVar3,&DAT_00568e78,puVar4,&DAT_01c0e9c0);
  if ((int)uVar12 != 0) {
    uVar12 = (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar12 >> 0x20);
    piVar5 = (int *)uVar12;
    (**(code **)(iVar2 + 0xc))(&local_88,piVar5);
    if ((local_88 == 0x2013be2f && iStack_80 == -0x289fa449) &&
        (iStack_84 == 0x73eea1a5 && iStack_7c == 0x1741e319)) {
      iVar2 = *piVar5;
      iVar9 = piVar5[1];
      thunk_FUN_01be4678(piVar5);
      if (iVar2 != -0x80000000) {
        FUN_019bb7e0(iVar2,iVar9);
      }
    }
    else {
      FUN_01443048(piVar5,iVar2);
    }
  }
  FUN_01bed4e2(param_1,&local_d8,0x50);
  return;
LAB_00a289d0:
  iVar2 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00a289e4;
}

