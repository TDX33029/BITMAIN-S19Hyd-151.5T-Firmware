// FUN_015be95c @ 015be95c size=544 calls_out=8 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x015bea08) */

void FUN_015be95c(int param_1,int param_2,int *param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int extraout_r2;
  undefined *puVar2;
  undefined4 extraout_r3;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  int local_50;
  int iStack_4c;
  int *local_48;
  undefined8 local_44;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined8 local_34;
  int *local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  do {
    iVar3 = DAT_018dd988 + 1;
    bVar5 = (bool)hasExclusiveAccess(0x18dd988);
  } while (!bVar5);
  bVar5 = DAT_018dd988 < 0;
  local_50 = param_1;
  iStack_4c = param_2;
  local_48 = param_3;
  DAT_018dd988 = iVar3;
  if (bVar5) {
LAB_015beaac:
    local_28 = (undefined4 *)&LAB_00faf3ec;
    puVar2 = &DAT_0059361d;
    local_2c = &local_50;
  }
  else {
    uVar6 = thunk_FUN_016de0ee(&DAT_018dd988,param_2,0x254,param_1);
    piVar4 = (int *)((int)uVar6 + extraout_r2);
    if ((char)piVar4[1] == '\0') {
      *(undefined1 *)(piVar4 + 1) = 1;
      *piVar4 = *piVar4 + 1;
      if (DAT_018dd9c4 < 0x3ffffffe) {
        bVar5 = (bool)hasExclusiveAccess(0x18dd9c4);
        if (!bVar5) goto LAB_015bea0c;
        DataMemoryBarrier(0xb);
        DAT_018dd9c4 = DAT_018dd9c4 + 1;
      }
      else {
LAB_015bea0c:
        FUN_015bebb8(&DAT_018dd9c4);
      }
      iVar1 = iStack_4c;
      iVar3 = local_50;
      if (DAT_018dd9cc == 0) {
        local_34 = (**(code **)(iStack_4c + 0x14))(local_50);
        local_28 = (undefined4 *)CONCAT31(CONCAT21(local_28._2_2_,param_5),(char)param_4);
        local_2c = local_48;
        FUN_015bef88(&local_34);
      }
      else {
        local_34 = (**(code **)(iStack_4c + 0x14))(local_50);
        local_2c = local_48;
        local_28 = (undefined4 *)CONCAT31(CONCAT21(local_28._2_2_,param_5),(char)param_4);
        (**(code **)(DAT_018dd9d0 + 0x14))(DAT_018dd9cc,&local_34);
      }
      FUN_015bef50();
      *(undefined1 *)(piVar4 + 1) = 0;
      if (param_4 == 0) {
        FUN_015bee18(&local_34,&uStack_21,&DAT_00410a5f,0x5b);
        local_38 = local_34._4_4_;
        local_3c[0] = (undefined1)local_34;
        goto LAB_015beb50;
      }
      FUN_015bf270(iVar3,iVar1);
      goto LAB_015beaac;
    }
    local_44 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x18))(extraout_r3);
    if ((int)local_44 == 0) {
      local_44 = 1;
    }
    local_28 = &DAT_015bee04;
    local_2c = (int *)&local_44;
    puVar2 = &DAT_00582eda;
  }
  local_34._4_4_ = FUN_015bed88;
  local_34._0_4_ = &local_48;
  FUN_015bee18(local_3c,&uStack_21,puVar2,&local_34);
LAB_015beb50:
  FUN_015ff474(local_3c[0],local_38);
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

