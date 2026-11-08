// FUN_0197a1ac @ 0197a1ac size=716 calls_out=11 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x0197a254) */

void FUN_0197a1ac(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r2;
  int extraout_r2_00;
  undefined *puVar6;
  undefined4 extraout_r3;
  undefined8 *puVar7;
  undefined4 **ppuVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint local_60;
  int local_58;
  int local_54;
  int *local_50;
  int *local_4c;
  undefined8 local_48;
  undefined4 *local_40 [2];
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d51b08);
  } while (!bVar1);
  local_58 = param_1;
  local_54 = param_2;
  local_50 = param_3;
  if (DAT_01d51b08 < 0) {
    local_2c = (undefined4 *)&LAB_012fff3c;
    local_30 = &local_58;
    puVar6 = &DAT_005b871e;
    DAT_01d51b08 = DAT_01d51b08 + 1;
  }
  else {
    DAT_01d51b08 = DAT_01d51b08 + 1;
    uVar10 = thunk_FUN_01bee35a(&DAT_01d51b08,param_2,0x24c,param_1);
    puVar9 = (uint *)((int)uVar10 + extraout_r2);
    if ((char)puVar9[1] == '\0') {
      *(undefined1 *)(puVar9 + 1) = 1;
      *puVar9 = *puVar9 + 1;
      if (DAT_01d51b14 < 0x3ffffffe) {
        bVar1 = (bool)hasExclusiveAccess(0x1d51b14);
        if (!bVar1) goto LAB_0197a258;
        DataMemoryBarrier(0xb);
        DAT_01d51b14 = DAT_01d51b14 + 1;
      }
      else {
LAB_0197a258:
        FUN_0197a5c8(&DAT_01d51b14);
      }
      iVar2 = local_54;
      iVar5 = local_58;
      if (DAT_01d51b1c == 0) {
        uVar10 = (**(code **)(local_54 + 0x14))(local_58);
        local_4c = local_50;
        local_60 = 3;
        if ((param_5 == 0) && (local_60 = 1, *puVar9 < 2)) {
          uVar3 = FUN_0197a9f0();
          local_60 = uVar3 & 0xff;
        }
        local_48 = FUN_0197ab20((int)uVar10,*(undefined4 *)((int)((ulonglong)uVar10 >> 0x20) + 0xc))
        ;
        uVar4 = FUN_0197af28();
        local_2c = (undefined4 *)&DAT_01d27ce0;
        local_30 = (int *)&uStack_25;
        local_38._4_4_ = &local_48;
        local_38._0_4_ = &local_4c;
        iVar5 = thunk_FUN_01bee35a((int **)local_38,uVar4,0x240);
        if (2 < *(uint *)(iVar5 + extraout_r2_00)) {
          local_40[0] = (undefined4 *)(*(uint *)(iVar5 + extraout_r2_00) - 8);
          FUN_0197af98(&local_38,local_40);
          goto LAB_0197a3a4;
        }
      }
      else {
        local_38 = (**(code **)(local_54 + 0x14))(local_58);
        local_30 = local_50;
        local_2c._0_2_ = CONCAT11((char)param_5,(char)param_4);
        (**(code **)(DAT_01d51b20 + 0x14))(DAT_01d51b1c,&local_38);
        FUN_0197a960();
        *(undefined1 *)(puVar9 + 1) = 0;
        if (param_4 == 0) {
          ppuVar8 = (undefined4 **)&local_38;
          puVar7 = (undefined8 *)0x5b;
          puVar6 = &DAT_00526a90;
          goto LAB_0197a530;
        }
        FUN_0197a998(iVar5,iVar2);
      }
      FUN_0197af98(&local_38,0);
LAB_0197a3a4:
                    /* WARNING: Could not recover jumptable at 0x0197a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0197a3b4 + *(int *)(&DAT_0197a3b4 + local_60 * 4)))();
      return;
    }
    local_48 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0x18))(extraout_r3);
    if ((int)local_48 == 0) {
      local_48 = 1;
    }
    local_2c = &DAT_0197a814;
    local_30 = (int *)&local_48;
    puVar6 = &DAT_005ab3e4;
  }
  local_38._0_4_ = &local_50;
  local_38 = CONCAT44(FUN_0197a798,(int **)local_38);
  ppuVar8 = local_40;
  puVar7 = &local_38;
LAB_0197a530:
  FUN_0197a828(ppuVar8,&uStack_25,puVar6,puVar7);
  FUN_019b6d48(ppuVar8);
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

