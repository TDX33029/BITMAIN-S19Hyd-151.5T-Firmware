// FUN_01199bac @ 01199bac size=1116 calls_out=14 calls_in=1
// strings: anyOf | anyOf | anyOf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01199bac(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_188;
  undefined *local_184;
  int local_180;
  undefined *local_17c;
  int iStack_178;
  int *piStack_174;
  int local_170;
  undefined1 auStack_168 [56];
  int *local_130;
  int local_12c;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  undefined8 local_c4;
  int *piStack_bc;
  int iStack_b8;
  undefined1 *local_a8;
  undefined2 local_a4;
  undefined1 local_70;
  char *local_6c;
  int *local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 local_40;
  int local_38;
  undefined *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_4 == '\x04') {
    iVar6 = *(int *)(param_4 + 0xc);
    if (iVar6 == 1) {
      uVar7 = *(undefined4 *)(param_4 + 8);
      FUN_0119d4b4(auStack_168,param_2,"anyOf",5);
      FUN_0119f6cc(&local_c8,auStack_168,0);
      uVar3 = FUN_01352d48(local_40,uVar7);
      FUN_0125acb4(&local_188,&local_c8,uVar7,uVar3);
      if (local_188 == 0) {
        piVar4 = (int *)0x0;
        puVar8 = local_184;
      }
      else {
        local_38 = local_180;
        local_34 = local_17c;
        local_30 = iStack_178;
        do {
          iVar6 = *local_130;
          bVar2 = (bool)hasExclusiveAccess(local_130);
        } while (!bVar2);
        *local_130 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_0119a010;
        piStack_174 = local_130;
        local_170 = local_12c;
        piVar4 = (int *)thunk_FUN_016d4a50(0x1c);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x1c);
        }
        *piVar4 = local_188;
        piVar4[1] = (int)local_184;
        piVar4[2] = local_180;
        piVar4[3] = (int)local_17c;
        piVar4[4] = iStack_178;
        piVar4[5] = (int)piStack_174;
        piVar4[6] = local_170;
        puVar8 = &DAT_018897a8;
      }
      FUN_01161600(&local_c8);
      FUN_01161600(auStack_168);
      param_1[1] = piVar4;
      param_1[2] = puVar8;
      *param_1 = 1;
      return;
    }
    FUN_0119d4b4(auStack_168,param_2,"anyOf",5);
    if (iVar6 == 0) {
      local_d0 = 0;
      local_d4 = 4;
      local_d8 = 0;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar6 * 0x14);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar6 * 0x14);
      }
      iVar9 = *(int *)(param_4 + 8);
      iVar10 = 0;
      iVar11 = 1;
      local_d0 = 0;
      iVar12 = iVar6 * 0x18;
      local_d8 = iVar6;
      local_d4 = iVar5;
      do {
        FUN_0119f6cc(&local_c8,auStack_168,iVar11 + -1);
        uVar3 = FUN_01352d48(local_40,iVar9);
        FUN_0125acb4(&local_38,&local_c8,iVar9,uVar3);
        if (local_38 == 0) {
          FUN_01161600(&local_c8);
          iVar6 = iVar5;
          while (iVar11 = iVar11 + -1, iVar11 != 0) {
            FUN_0115ccf0(iVar6);
            iVar6 = iVar6 + 0x14;
          }
          piVar4 = (int *)0x0;
          puVar8 = local_34;
          if (local_d8 != 0) {
            thunk_FUN_016d3fb4(iVar5);
          }
          goto LAB_01199fa8;
        }
        local_184 = local_34;
        local_188 = local_38;
        local_180 = local_30;
        local_17c = (undefined *)iStack_2c;
        iStack_178 = iStack_28;
        if (iVar11 + -1 == local_d8) {
          FUN_011cf59c(&local_d8);
          iVar5 = local_d4;
        }
        piVar4 = (int *)(iVar5 + iVar10);
        *piVar4 = local_188;
        piVar4[1] = (int)local_184;
        piVar4[2] = local_180;
        piVar4[3] = (int)local_17c;
        piVar4[4] = iStack_178;
        local_d0 = iVar11;
        FUN_01161600(&local_c8);
        iVar9 = iVar9 + 0x18;
        iVar10 = iVar10 + 0x14;
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + -0x18;
      } while (iVar12 != 0);
    }
    do {
      iVar6 = *local_130;
      bVar2 = (bool)hasExclusiveAccess(local_130);
    } while (!bVar2);
    *local_130 = iVar6 + 1;
    if (-1 < iVar6) {
      local_c8 = local_d8;
      local_c4._0_4_ = local_d4;
      local_c4._4_4_ = local_d0;
      piStack_bc = local_130;
      iStack_b8 = local_12c;
      piVar4 = (int *)thunk_FUN_016d4a50(0x14);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *piVar4 = local_c8;
      piVar4[1] = (int)local_c4;
      piVar4[2] = local_c4._4_4_;
      piVar4[3] = (int)piStack_bc;
      piVar4[4] = iStack_b8;
      puVar8 = &DAT_01889788;
LAB_01199fa8:
      FUN_01161600(auStack_168);
      param_1[1] = piVar4;
      param_1[2] = puVar8;
      *param_1 = 1;
      return;
    }
  }
  else {
    uStack_50 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"anyOf"
                             ,5);
    piVar4 = (int *)uStack_50;
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
        local_58 = DAT_018da8b4;
        uStack_54 = DAT_018da8b8;
        local_70 = 6;
        local_a4 = 0x100;
        local_a8 = &DAT_80000028;
        local_c8 = 1;
        local_6c = param_4;
        local_c4 = uStack_50;
        iVar6 = thunk_FUN_016d4a50(0x80);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar6,&local_c8,0x80);
        param_1[1] = 0;
        param_1[2] = iVar6;
        *param_1 = 1;
        return;
      }
    }
  }
LAB_0119a010:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x119a010);
  (*pcVar1)();
}

