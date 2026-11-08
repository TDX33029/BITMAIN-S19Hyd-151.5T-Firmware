// FUN_01411098 @ 01411098 size=1116 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01411098(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int local_820;
  int local_81c;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  int *local_760;
  undefined4 local_75c;
  int *local_758;
  int *local_754;
  undefined4 local_750;
  int *local_74c;
  undefined1 local_748;
  undefined1 auStack_740 [112];
  undefined4 local_6d0;
  undefined4 local_6cc;
  uint local_6c8;
  undefined4 local_6c0;
  int *local_6b8;
  int *local_6b4;
  undefined4 local_6b0;
  int *local_6ac;
  undefined1 local_6a8;
  undefined1 auStack_6a0 [256];
  undefined1 local_5a0;
  undefined1 local_598;
  undefined1 local_4d0;
  undefined1 local_4c8;
  undefined1 auStack_1c8 [56];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar11 = *param_1;
  uVar7 = param_1[1];
  uVar9 = param_1[2];
  local_760 = (int *)param_1[4];
  local_780 = uVar11;
  local_77c = uVar7;
  local_778 = uVar9;
  local_770 = uVar11;
  local_76c = uVar7;
  local_768 = uVar9;
  if (local_760 == (int *)0x0) {
    piVar8 = (int *)param_1[9];
    if (piVar8[4] != 0) {
      iVar6 = piVar8[3];
      iVar4 = piVar8[4] << 8;
      do {
        FUN_01443834(&local_820,iVar6,param_2);
        if (local_820 != 4 || local_81c != 0) {
          piVar10 = (int *)param_1[6];
          do {
            iVar4 = *piVar10;
            bVar3 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar3);
          *piVar10 = iVar4 + 1;
          if (-1 < iVar4) {
            piVar12 = (int *)param_1[7];
            uVar5 = param_1[8];
            do {
              iVar4 = *piVar12;
              bVar3 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar3);
            *piVar12 = iVar4 + 1;
            if (-1 < iVar4) {
              do {
                iVar4 = *piVar8;
                bVar3 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar3);
              *piVar8 = iVar4 + 1;
              if (-1 < iVar4) {
                uVar2 = *(undefined1 *)(param_1 + 10);
                local_50 = *param_2;
                uStack_4c = param_2[1];
                uStack_48 = param_2[2];
                uStack_44 = param_2[3];
                uStack_40 = param_2[4];
                local_3c = param_2[5];
                uStack_38 = param_2[6];
                uStack_34 = param_2[7];
                uStack_30 = param_2[8];
                uStack_2c = param_2[9];
                uStack_28 = param_2[10];
                FUN_016dd1aa(&local_770,&local_820,0xa0);
                local_6c0 = 0;
                local_6d0 = uVar11;
                local_6cc = uVar7;
                local_6c8 = uVar9;
                local_6b8 = piVar10;
                local_6b4 = piVar12;
                local_6b0 = uVar5;
                local_6ac = piVar8;
                local_6a8 = uVar2;
                FUN_016dd1aa(auStack_6a0,auStack_1c8,0x1a4);
                local_4d0 = 0;
                local_4c8 = 0;
                iVar4 = thunk_FUN_016d4a50(0x5b8);
                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x5b8);
                }
                FUN_016dd1aa(iVar4,&local_780,0x5b8);
                return CONCAT44(&UNK_018a3930,iVar4);
              }
            }
          }
          goto LAB_014114f8;
        }
        iVar6 = iVar6 + 0x100;
        iVar4 = iVar4 + -0x100;
      } while (iVar4 != 0);
    }
    local_758 = (int *)param_1[6];
    do {
      iVar4 = *local_758;
      bVar3 = (bool)hasExclusiveAccess(local_758);
    } while (!bVar3);
    *local_758 = iVar4 + 1;
    if (-1 < iVar4) {
      local_754 = (int *)param_1[7];
      local_750 = param_1[8];
      do {
        iVar4 = *local_754;
        bVar3 = (bool)hasExclusiveAccess(local_754);
      } while (!bVar3);
      *local_754 = iVar4 + 1;
      if (-1 < iVar4) {
        do {
          iVar4 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar4 + 1;
        if (-1 < iVar4) {
          local_748 = *(undefined1 *)(param_1 + 10);
          local_190 = *param_2;
          uStack_18c = param_2[1];
          uStack_188 = param_2[2];
          uStack_184 = param_2[3];
          uStack_180 = param_2[4];
          local_17c = param_2[5];
          uStack_178 = param_2[6];
          uStack_174 = param_2[7];
          uStack_170 = param_2[8];
          uStack_16c = param_2[9];
          uStack_168 = param_2[10];
          local_760 = (int *)0x0;
          local_74c = piVar8;
          FUN_016dd1aa(auStack_740,auStack_1c8,100);
          local_6d0 = (uint)local_6d0._2_2_ << 0x10;
          local_6c8 = local_6c8 & 0xffffff00;
          iVar4 = thunk_FUN_016d4a50(0x1b8);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x1b8);
          }
          FUN_016dd1aa(iVar4,&local_780,0x1b8);
          return CONCAT44(&UNK_018a3940,iVar4);
        }
      }
    }
  }
  else {
    local_758 = (int *)param_1[6];
    do {
      iVar4 = *local_758;
      bVar3 = (bool)hasExclusiveAccess(local_758);
    } while (!bVar3);
    *local_758 = iVar4 + 1;
    if (-1 < iVar4) {
      local_754 = (int *)param_1[7];
      local_750 = param_1[8];
      do {
        iVar4 = *local_754;
        bVar3 = (bool)hasExclusiveAccess(local_754);
      } while (!bVar3);
      *local_754 = iVar4 + 1;
      if (-1 < iVar4) {
        local_74c = (int *)param_1[9];
        do {
          iVar4 = *local_74c;
          bVar3 = (bool)hasExclusiveAccess(local_74c);
        } while (!bVar3);
        *local_74c = iVar4 + 1;
        if (-1 < iVar4) {
          local_748 = *(undefined1 *)(param_1 + 10);
          do {
            iVar4 = *local_760;
            bVar3 = (bool)hasExclusiveAccess(local_760);
          } while (!bVar3);
          *local_760 = iVar4 + 1;
          if (-1 < iVar4) {
            local_75c = param_1[5];
            local_190 = *param_2;
            uStack_18c = param_2[1];
            uStack_188 = param_2[2];
            uStack_184 = param_2[3];
            uStack_180 = param_2[4];
            local_17c = param_2[5];
            uStack_178 = param_2[6];
            uStack_174 = param_2[7];
            uStack_170 = param_2[8];
            uStack_16c = param_2[9];
            uStack_168 = param_2[10];
            FUN_016dd1aa(auStack_740,auStack_1c8,100);
            local_5a0 = 0;
            local_598 = 0;
            iVar4 = thunk_FUN_016d4a50(0x418);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x418);
            }
            FUN_016dd1aa(iVar4,&local_780,0x418);
            return CONCAT44(&UNK_018a3920,iVar4);
          }
        }
      }
    }
  }
LAB_014114f8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x14114f8);
  (*pcVar1)();
}

