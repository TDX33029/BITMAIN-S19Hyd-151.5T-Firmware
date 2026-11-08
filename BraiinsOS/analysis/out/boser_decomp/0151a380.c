// FUN_0151a380 @ 0151a380 size=608 calls_out=14 calls_in=1
// strings: prefixItems | prefixItems

void FUN_0151a380(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_184;
  undefined1 auStack_180 [144];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  undefined1 auStack_e0 [136];
  undefined1 local_58;
  int local_50;
  undefined *local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  undefined *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_4 == '\x04') {
    iVar9 = *(int *)(param_4 + 8);
    uVar10 = *(uint *)(param_4 + 0xc);
    FUN_01526248(auStack_180,param_2,"prefixItems",0xb);
    if (0x6666666 < uVar10) {
      uVar8 = 0;
LAB_0151a3c8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,param_4);
    }
    param_4 = (char *)(uVar10 * 0x14);
    if (param_4 == (char *)0x0) {
      local_184 = 4;
      local_f0 = 0;
    }
    else {
      uVar8 = 4;
      local_184 = FUN_01298504(param_4,4);
      if (local_184 == 0) goto LAB_0151a3c8;
      local_f0 = uVar10;
    }
    local_e8 = 0;
    local_ec = local_184;
    if (uVar10 != 0) {
      iVar12 = 0;
      uVar6 = 0;
      iVar11 = uVar10 * 0x18;
      do {
        FUN_015276e8(auStack_e0,auStack_180,uVar6);
        uVar3 = FUN_016731b0(local_58,iVar9);
        FUN_0156aca8(&local_50,auStack_e0,iVar9,uVar3);
        if (local_50 == 0) {
          FUN_014ff9e0(auStack_e0);
          FUN_0152785c(&local_f0);
          puVar5 = (uint *)0x0;
          puVar7 = local_4c;
          goto LAB_0151a5b4;
        }
        local_30 = local_48;
        iStack_2c = iStack_44;
        iStack_28 = iStack_40;
        local_38 = local_50;
        local_34 = local_4c;
        if (uVar6 == local_f0) {
          FUN_0155dc90(&local_f0);
          local_184 = local_ec;
        }
        uVar6 = uVar6 + 1;
        piVar4 = (int *)(local_184 + iVar12);
        *piVar4 = local_38;
        piVar4[1] = (int)local_34;
        piVar4[2] = local_30;
        piVar4[3] = iStack_2c;
        piVar4[4] = iStack_28;
        local_e8 = uVar6;
        FUN_014ff9e0(auStack_e0);
        iVar9 = iVar9 + 0x18;
        iVar12 = iVar12 + 0x14;
        iVar11 = iVar11 + -0x18;
      } while (iVar11 != 0);
    }
    puVar5 = (uint *)thunk_FUN_01be5118(0xc);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar5 = local_f0;
    puVar5[1] = local_ec;
    puVar5[2] = local_e8;
    puVar7 = &DAT_01cfab70;
LAB_0151a5b4:
    FUN_014ff9e0(auStack_180);
    param_1[1] = puVar5;
    param_1[2] = puVar7;
  }
  else {
    uVar13 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          "prefixItems",0xb);
    uVar8 = (undefined4)((ulonglong)uVar13 >> 0x20);
    piVar4 = (int *)uVar13;
    do {
      iVar9 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar9 + 1;
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x151a5e0);
      (*pcVar1)();
    }
    uVar13 = FUN_015321a0();
    uVar8 = FUN_015956e0(piVar4,uVar8,piVar4,uVar8,uVar13,param_4,1);
    param_1[1] = 0;
    param_1[2] = uVar8;
  }
  *param_1 = 1;
  return;
}

