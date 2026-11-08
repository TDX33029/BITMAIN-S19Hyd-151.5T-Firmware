// FUN_0118df8c @ 0118df8c size=792 calls_out=14 calls_in=1
// strings: prefixItems | prefixItems

void FUN_0118df8c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_180 [144];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined1 *local_c0;
  undefined2 local_bc;
  undefined1 local_88;
  char *local_84;
  int *local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
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
  
  if (*param_4 != '\x04') {
    uStack_68 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             "prefixItems",0xb);
    piVar6 = (int *)uStack_68;
    do {
      iVar10 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar10 + 1;
    if (-1 < iVar10) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar10 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar10 + 1;
      if (-1 < iVar10) {
        local_70 = DAT_018da8b4;
        uStack_6c = DAT_018da8b8;
        local_88 = 6;
        local_bc = 0x100;
        local_c0 = &DAT_80000028;
        local_e0 = 1;
        local_84 = param_4;
        local_dc = uStack_68;
        iVar10 = thunk_FUN_016d4a50(0x80);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar10,&local_e0,0x80);
        param_1[1] = 0;
        param_1[2] = iVar10;
        *param_1 = 1;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x118e2a0);
    (*pcVar1)();
  }
  iVar10 = *(int *)(param_4 + 8);
  uVar9 = *(uint *)(param_4 + 0xc);
  FUN_0119d4b4(auStack_180,param_2,"prefixItems",0xb);
  if (0x6666666 < uVar9) {
    uVar4 = 0;
LAB_0118dfd8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,param_4);
  }
  param_4 = (char *)(uVar9 * 0x14);
  if (param_4 == (char *)0x0) {
    uVar5 = 4;
    local_f0 = 0;
  }
  else {
    uVar5 = thunk_FUN_016d4a50(param_4);
    if (uVar5 == 0) {
      uVar4 = 4;
      goto LAB_0118dfd8;
    }
    local_f0 = uVar9;
  }
  local_e8 = 0;
  local_ec = uVar5;
  if (uVar9 != 0) {
    uVar8 = 1;
    iVar13 = 0;
    iVar12 = uVar9 * 0x18;
    do {
      FUN_0119f6cc(&local_e0,auStack_180,uVar8 - 1);
      uVar3 = FUN_01352d48(local_58,iVar10);
      FUN_0125acb4(&local_50,&local_e0,iVar10,uVar3);
      if (local_50 == 0) {
        FUN_01161600(&local_e0);
        uVar9 = uVar5;
        while (uVar8 = uVar8 - 1, uVar8 != 0) {
          FUN_0115ccf0(uVar9);
          uVar9 = uVar9 + 0x14;
        }
        puVar7 = (uint *)0x0;
        puVar11 = local_4c;
        if (local_f0 != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        goto LAB_0118e25c;
      }
      local_34 = local_4c;
      local_38 = local_50;
      local_30 = local_48;
      iStack_2c = iStack_44;
      iStack_28 = iStack_40;
      if (uVar8 - 1 == local_f0) {
        FUN_011cf59c(&local_f0);
        uVar5 = local_ec;
      }
      piVar6 = (int *)(uVar5 + iVar13);
      *piVar6 = local_38;
      piVar6[1] = (int)local_34;
      piVar6[2] = local_30;
      piVar6[3] = iStack_2c;
      piVar6[4] = iStack_28;
      local_e8 = uVar8;
      FUN_01161600(&local_e0);
      iVar10 = iVar10 + 0x18;
      iVar13 = iVar13 + 0x14;
      uVar8 = uVar8 + 1;
      iVar12 = iVar12 + -0x18;
    } while (iVar12 != 0);
  }
  puVar7 = (uint *)thunk_FUN_016d4a50(0xc);
  if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar7 = local_f0;
  puVar7[1] = local_ec;
  puVar7[2] = local_e8;
  puVar11 = &DAT_01889288;
LAB_0118e25c:
  FUN_01161600(auStack_180);
  param_1[1] = puVar7;
  param_1[2] = puVar11;
  *param_1 = 1;
  return;
}

