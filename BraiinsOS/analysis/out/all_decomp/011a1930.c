// FUN_011a1930 @ 011a1930 size=816 calls_out=14 calls_in=1
// strings: oneOf | oneOf

void FUN_011a1930(int *param_1,int param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_184;
  undefined1 auStack_180 [56];
  int *local_148;
  int local_144;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e0;
  undefined8 local_dc;
  int *piStack_d4;
  int iStack_d0;
  undefined1 *local_c0;
  undefined2 local_bc;
  undefined1 local_88;
  char *local_84;
  int *local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_3 == '\x04') {
    FUN_0119d4b4(auStack_180,param_2,"oneOf",5);
    local_f0 = *(int *)(param_3 + 0xc);
    if (local_f0 == 0) {
      local_e8 = 0;
      local_ec = 4;
      local_f0 = 0;
    }
    else {
      local_184 = thunk_FUN_016d4a50(local_f0 * 0x14);
      if (local_184 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,local_f0 * 0x14);
      }
      iVar5 = *(int *)(param_3 + 8);
      iVar8 = 0;
      iVar6 = 1;
      local_e8 = 0;
      iVar7 = local_f0 * 0x18;
      local_ec = local_184;
      do {
        FUN_0119f6cc(&local_e0,auStack_180,iVar6 + -1);
        uVar3 = FUN_01352d48(local_58,iVar5);
        FUN_0125acb4(&local_50,&local_e0,iVar5,uVar3);
        if (local_50 == 0) {
          *param_1 = 0;
          param_1[1] = local_4c;
          FUN_01161600(&local_e0);
          iVar7 = local_184;
          while (iVar6 = iVar6 + -1, iVar6 != 0) {
            FUN_0115ccf0(iVar7);
            iVar7 = iVar7 + 0x14;
          }
          if (local_f0 != 0) {
            thunk_FUN_016d3fb4(local_184);
            FUN_01161600(auStack_180);
            return;
          }
          goto LAB_011a1bcc;
        }
        local_38 = local_50;
        local_34 = local_4c;
        local_30 = local_48;
        iStack_2c = iStack_44;
        iStack_28 = iStack_40;
        if (iVar6 + -1 == local_f0) {
          FUN_011cf59c(&local_f0);
          local_184 = local_ec;
        }
        piVar4 = (int *)(local_184 + iVar8);
        *piVar4 = local_38;
        piVar4[1] = local_34;
        piVar4[2] = local_30;
        piVar4[3] = iStack_2c;
        piVar4[4] = iStack_28;
        local_e8 = iVar6;
        FUN_01161600(&local_e0);
        iVar5 = iVar5 + 0x18;
        iVar8 = iVar8 + 0x14;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -0x18;
      } while (iVar7 != 0);
    }
    do {
      iVar7 = *local_148;
      bVar2 = (bool)hasExclusiveAccess(local_148);
    } while (!bVar2);
    *local_148 = iVar7 + 1;
    if (-1 < iVar7) {
      local_e0 = local_f0;
      local_dc._0_4_ = local_ec;
      local_dc._4_4_ = local_e8;
      piStack_d4 = local_148;
      iStack_d0 = local_144;
      piVar4 = (int *)thunk_FUN_016d4a50(0x14);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *piVar4 = local_e0;
      piVar4[1] = (int)local_dc;
      piVar4[2] = local_dc._4_4_;
      piVar4[3] = (int)piStack_d4;
      piVar4[4] = iStack_d0;
      *param_1 = (int)piVar4;
      param_1[1] = (int)&DAT_01889a48;
LAB_011a1bcc:
      FUN_01161600(auStack_180);
      return;
    }
  }
  else {
    uStack_68 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"oneOf"
                             ,5);
    piVar4 = (int *)uStack_68;
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + 1;
    if (-1 < iVar7) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar7 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar7 + 1;
      if (-1 < iVar7) {
        local_70 = DAT_018da8b4;
        uStack_6c = DAT_018da8b8;
        local_88 = 6;
        local_bc = 0x100;
        local_c0 = &DAT_80000028;
        local_e0 = 1;
        local_84 = param_3;
        local_dc = uStack_68;
        iVar7 = thunk_FUN_016d4a50(0x80);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar7,&local_e0,0x80);
        *param_1 = 0;
        param_1[1] = iVar7;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11a1c64);
  (*pcVar1)();
}

