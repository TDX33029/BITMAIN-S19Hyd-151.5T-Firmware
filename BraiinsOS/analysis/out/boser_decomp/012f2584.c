// FUN_012f2584 @ 012f2584 size=1316 calls_out=10 calls_in=1
// strings: ; HttpOnly | ; Partitioned | local datetime out of valid rangeInsufficientTypeInformationStdIo[month repr:short] [day] [hour]:[minute]:[second]IndeterminateOffset

bool FUN_012f2584(undefined4 **param_1,undefined4 param_2,int param_3)

{
  code cVar1;
  code cVar2;
  undefined4 **ppuVar3;
  code cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 **ppuVar13;
  undefined4 **ppuVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined1 local_60 [7];
  undefined1 uStack_59;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 **local_4c;
  undefined4 **local_48;
  undefined4 **local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uStack_28;
  
  ppuVar14 = (undefined4 **)0x0;
  if (param_1[8] != (undefined4 *)0x80000001) {
    ppuVar14 = param_1 + 8;
  }
  local_30 = FUN_012f2b0c(param_1 + 0xb,ppuVar14);
  uVar16 = FUN_012f2b0c(param_1 + 0xe,ppuVar14);
  local_60[0] = SUB81(uVar16,0);
  local_60._1_2_ = SUB82((ulonglong)uVar16 >> 8,0);
  local_4c = (undefined4 **)&local_30;
  local_60._3_4_ = SUB84((ulonglong)uVar16 >> 0x18,0);
  uStack_59 = (undefined1)((ulonglong)uVar16 >> 0x38);
  local_40 = &LAB_018a13b8;
  local_48 = (undefined4 **)&LAB_018a13b8;
  local_44 = (undefined4 **)local_60;
  iVar5 = FUN_012fa178(param_2,param_3,&DAT_005b0d35,&local_4c);
  bVar15 = true;
  if (iVar5 == 0) {
    cVar4 = *(code *)((int)param_1 + 0x5d);
    if (((byte)cVar4 & 1) != 0) {
      iVar5 = (**(code **)(param_3 + 0xc))(param_2,"; HttpOnly",10);
      cVar4 = (code)0x1;
      if (iVar5 != 0) {
        return true;
      }
    }
    cVar1 = *(code *)((int)param_1 + 0x5f);
    if (cVar1 != (code)0x3) {
      local_48 = (undefined4 **)&LAB_012f9540;
      local_60[0] = cVar1;
      local_4c = (undefined4 **)local_60;
      iVar5 = FUN_012fa178(param_2,param_3,&DAT_005bb370,&local_4c);
      cVar4 = (code)0x1;
      if (iVar5 != 0) {
        return true;
      }
    }
    cVar2 = *(code *)((int)param_1 + 0x5e);
    if (((byte)cVar2 & 1) != 0) {
      iVar5 = (**(code **)(param_3 + 0xc))(param_2,"; Partitioned",0xd);
      cVar4 = (code)0x1;
      if (iVar5 != 0) {
        return true;
      }
    }
    if (cVar2 != (code)0x1) {
      cVar4 = *(code *)(param_1 + 0x17);
    }
    if ((cVar2 == (code)0x1 || cVar4 == (code)0x1) || (cVar1 == (code)0x2 && cVar4 == (code)0x2)) {
      iVar5 = (**(code **)(param_3 + 0xc))(param_2,&DAT_0056fbb0,8);
      if (iVar5 != 0) {
        return true;
      }
    }
    if (param_1[0x14] != (undefined4 *)0x80000002) {
      uVar16 = FUN_012f2b0c(param_1 + 0x14,ppuVar14);
      if ((int)uVar16 != 0) {
        local_60[0] = SUB81(uVar16,0);
        local_60._1_2_ = SUB82((ulonglong)uVar16 >> 8,0);
        local_60._3_4_ = SUB84((ulonglong)uVar16 >> 0x18,0);
        uStack_59 = (undefined1)((ulonglong)uVar16 >> 0x38);
        local_48 = (undefined4 **)&LAB_018a13b8;
        local_4c = (undefined4 **)local_60;
        iVar5 = FUN_012fa178(param_2,param_3,&DAT_00589a66,&local_4c);
        if (iVar5 != 0) {
          return true;
        }
      }
    }
    if (param_1[0x11] != (undefined4 *)0x80000002) {
      uVar16 = FUN_012f2b0c(param_1 + 0x11,ppuVar14);
      iVar5 = (int)((ulonglong)uVar16 >> 0x20);
      if (iVar5 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)(*(char *)uVar16 == '.');
      }
      iVar5 = iVar5 - uVar11;
      pcVar6 = (char *)uVar16 + uVar11;
      uStack_59 = (undefined1)((uint)iVar5 >> 0x18);
      local_60[0] = SUB41(pcVar6,0);
      local_60._1_2_ = SUB42((uint)pcVar6 >> 8,0);
      local_60[3] = (undefined1)((uint)pcVar6 >> 0x18);
      local_60._3_4_ = CONCAT31((int3)iVar5,local_60[3]);
      local_48 = (undefined4 **)&LAB_018a13b8;
      local_4c = (undefined4 **)local_60;
      iVar5 = FUN_012fa178(param_2,param_3,&DAT_005a4bb4,&local_4c);
      if (iVar5 != 0) {
        return true;
      }
    }
    if (param_1[3] == (undefined4 *)0x0) {
      puVar7 = *param_1;
      uStack_59 = (undefined1)((uint)param_1[1] >> 0x18);
      local_48 = (undefined4 **)FUN_012fceb8;
      local_60[0] = SUB41(puVar7,0);
      local_60._1_2_ = SUB42((uint)puVar7 >> 8,0);
      local_60[3] = (undefined1)((uint)puVar7 >> 0x18);
      local_60._3_4_ = CONCAT31((int3)param_1[1],local_60[3]);
      local_4c = (undefined4 **)local_60;
      iVar5 = FUN_012fa178(param_2,param_3,&DAT_00579e96,&local_4c);
      if (iVar5 != 0) {
        return true;
      }
    }
    if (*(code *)((int)param_1 + 0x17) == (code)0x2) {
      return false;
    }
    if (((byte)*(code *)((int)param_1 + 0x17) & 1) != 0) {
      return false;
    }
    puVar12 = param_1[6];
    local_54 = param_1[7];
    puVar7 = param_1[4];
    local_60._3_4_ = *(undefined4 *)((int)param_1 + 0x13);
    local_60[0] = SUB41(puVar7,0);
    local_60._1_2_ = SUB42((uint)puVar7 >> 8,0);
    uStack_59 = 0;
    local_58 = puVar12;
    if (((uint)local_54 & 0xffffff) == 0) {
      param_1 = (undefined4 **)CONCAT13(local_60[3],(int3)puVar7);
      puVar8 = (undefined1 *)((uint)local_60._3_4_ >> 8);
    }
    else {
      FUN_012f2be0(&local_4c,local_60);
      if (local_4c + -0x9c4 < (undefined4 **)0xffffb1e1) goto LAB_012f2a64;
      uVar11 = (int)local_4c * 0x5c29 + 0x51c;
      ppuVar14 = (undefined4 **)&DAT_00000003;
      if (((uVar11 & 0xffff) >> 2 | uVar11 * 0x4000 & 0xffff) < 0x28f) {
        ppuVar14 = (undefined4 **)&DAT_0000000f;
      }
      uVar11 = (int)local_4c << 10;
      if (((uint)ppuVar14 & (uint)local_4c) == 0) {
        uVar11 = (int)local_4c << 10 | 0x200;
      }
      puVar12 = (undefined4 *)(uVar11 | (uint)local_48 & 0xffff);
      puVar8 = local_40;
      param_1 = local_44;
    }
    if (((uint)puVar8 & 0x1000000) != 0) {
LAB_012f2a64:
      uVar9 = FUN_019d66cc("local datetime out of valid rangeInsufficientTypeInformationStdIo[month repr:short] [day] [hour]:[minute]:[second]IndeterminateOffset"
                           ,0x21,&DAT_01ce4234);
      if (ppuVar14[1] != (undefined4 *)0x0) {
        thunk_FUN_01be4678(param_1);
      }
      thunk_FUN_01be4678(puVar12);
                    /* WARNING: Subroutine does not return */
      FUN_01be040c(uVar9);
    }
    iVar5 = 0;
    local_34 = 0;
    local_38 = 1;
    local_3c = 0;
    do {
      local_30._0_4_ = (undefined4 ***)param_1;
      local_30._4_4_ = (undefined1 *)((uint)puVar8 & 0xffffff);
      FUN_012f2dd8(&local_4c,&DAT_01ce4324 + iVar5,&local_3c,puVar12,&local_30);
      ppuVar13 = local_44;
      ppuVar3 = local_48;
      ppuVar14 = local_4c;
      if (local_4c != (undefined4 **)&SUB_00000004) {
        FUN_0134bd64(local_3c,local_38);
        if (ppuVar14 < (undefined4 **)0x2) goto LAB_012f2a5c;
        if (ppuVar14 == (undefined4 **)0x2) {
          ppuVar13 = ppuVar3;
        }
        else {
          if (((uint)ppuVar3 & 0xff) != 3) goto LAB_012f2a5c;
          puVar7 = *ppuVar13;
          puVar12 = ppuVar13[1];
          pcVar10 = (code *)*puVar12;
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(puVar7);
          }
          if (puVar12[1] != 0) {
            thunk_FUN_01be4678(puVar7);
          }
        }
        thunk_FUN_01be4678(ppuVar13);
        goto LAB_012f2a5c;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 != 0xa8);
    FUN_006643f0(&local_4c,local_38,local_34);
    FUN_0160ec7c(&local_30,&local_4c);
    uVar11 = (uint)local_30._4_4_;
    ppuVar14 = (undefined4 ***)local_30;
    FUN_0134bd64(local_3c,local_38);
    if (ppuVar14 == (undefined4 **)&DAT_80000000) {
LAB_012f2a5c:
      bVar15 = true;
    }
    else {
      local_4c = ppuVar14;
      local_48 = (undefined4 **)uVar11;
      local_44 = (undefined4 **)uStack_28;
      local_30._4_4_ = &LAB_00632348;
      local_30._0_4_ = &local_4c;
      iVar5 = FUN_012fa178(param_2,param_3,&DAT_00573e19,&local_30);
      FUN_0134bd64(local_4c,local_48);
      bVar15 = iVar5 != 0;
    }
  }
  return bVar15;
}

