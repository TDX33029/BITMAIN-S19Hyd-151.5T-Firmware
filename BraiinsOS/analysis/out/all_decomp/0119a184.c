// FUN_0119a184 @ 0119a184 size=984 calls_out=14 calls_in=1
// strings: allOf | allOf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0119a184(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  undefined1 auStack_170 [144];
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
    uStack_68 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"allOf"
                             ,5);
    piVar4 = (int *)uStack_68;
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (-1 < iVar6) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar6 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar6 + 1;
      if (-1 < iVar6) {
        local_70 = DAT_018da8b4;
        uStack_6c = DAT_018da8b8;
        local_88 = 6;
        local_bc = 0x100;
        local_c0 = &DAT_80000028;
        local_e0 = 1;
        local_84 = param_4;
        local_dc = uStack_68;
        iVar6 = thunk_FUN_016d4a50(0x80);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar6,&local_e0,0x80);
        param_1[1] = 0;
        param_1[2] = iVar6;
        *param_1 = 1;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x119a564);
    (*pcVar1)();
  }
  iVar6 = *(int *)(param_4 + 0xc);
  iVar10 = *(int *)(param_4 + 8);
  if (iVar6 == 1) {
    FUN_0119d4b4(auStack_170,param_2,"allOf",5);
    FUN_0119f6cc(&local_e0,auStack_170,0);
    uVar3 = FUN_01352d48(local_58,iVar10);
    FUN_0125acb4(&local_50,&local_e0,iVar10,uVar3);
    if (local_50 == 0) {
      piVar4 = (int *)0x0;
      puVar9 = local_4c;
    }
    else {
      local_38 = local_50;
      local_34 = local_4c;
      local_30 = local_48;
      iStack_2c = iStack_44;
      iStack_28 = iStack_40;
      piVar4 = (int *)thunk_FUN_016d4a50(0x14);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *piVar4 = local_38;
      piVar4[1] = (int)local_34;
      piVar4[2] = local_30;
      piVar4[3] = iStack_2c;
      piVar4[4] = iStack_28;
      puVar9 = &DAT_01889768;
    }
    FUN_01161600(&local_e0);
    FUN_01161600(auStack_170);
    param_1[1] = piVar4;
    param_1[2] = puVar9;
    *param_1 = 1;
    return;
  }
  FUN_0119d4b4(auStack_170,param_2,"allOf",5);
  if (iVar6 == 0) {
    local_178 = 0;
    local_17c = 4;
    local_180 = 0;
  }
  else {
    local_184 = thunk_FUN_016d4a50(iVar6 * 0x14);
    if (local_184 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6 * 0x14);
    }
    iVar7 = 0;
    iVar8 = 1;
    local_178 = 0;
    iVar5 = iVar6 * 0x18;
    local_180 = iVar6;
    local_17c = local_184;
    do {
      FUN_0119f6cc(&local_e0,auStack_170,iVar8 + -1);
      uVar3 = FUN_01352d48(local_58,iVar10);
      FUN_0125acb4(&local_50,&local_e0,iVar10,uVar3);
      if (local_50 == 0) {
        FUN_01161600(&local_e0);
        iVar6 = local_184;
        while (iVar8 = iVar8 + -1, iVar8 != 0) {
          FUN_0115ccf0(iVar6);
          iVar6 = iVar6 + 0x14;
        }
        piVar4 = (int *)0x0;
        puVar9 = local_4c;
        if (local_180 != 0) {
          thunk_FUN_016d3fb4(local_184);
        }
        goto LAB_0119a500;
      }
      local_38 = local_50;
      local_34 = local_4c;
      local_30 = local_48;
      iStack_2c = iStack_44;
      iStack_28 = iStack_40;
      if (iVar8 + -1 == local_180) {
        FUN_011cf59c(&local_180);
        local_184 = local_17c;
      }
      piVar4 = (int *)(local_184 + iVar7);
      *piVar4 = local_38;
      piVar4[1] = (int)local_34;
      piVar4[2] = local_30;
      piVar4[3] = iStack_2c;
      piVar4[4] = iStack_28;
      local_178 = iVar8;
      FUN_01161600(&local_e0);
      iVar10 = iVar10 + 0x18;
      iVar7 = iVar7 + 0x14;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -0x18;
    } while (iVar5 != 0);
  }
  piVar4 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *piVar4 = local_180;
  piVar4[1] = local_17c;
  piVar4[2] = local_178;
  puVar9 = &DAT_01889748;
LAB_0119a500:
  FUN_01161600(auStack_170);
  param_1[1] = piVar4;
  param_1[2] = puVar9;
  *param_1 = 1;
  return;
}

