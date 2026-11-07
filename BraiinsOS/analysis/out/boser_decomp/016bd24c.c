// FUN_016bd24c @ 016bd24c size=1056 calls_out=13 calls_in=1
// strings: 

void FUN_016bd24c(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  bool bVar16;
  undefined4 *local_84;
  int *local_80;
  uint local_7c;
  undefined2 local_78;
  undefined1 local_76 [2];
  undefined2 local_74;
  undefined1 local_72;
  int *local_70;
  undefined4 *local_6c;
  int *local_68;
  byte local_64;
  undefined2 local_63;
  int *local_60;
  undefined4 *puStack_5c;
  int *piStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int *local_40;
  undefined4 *local_3c;
  int *local_38;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_3 == 1) {
    puVar3 = (uint *)*param_2;
    while( true ) {
      uVar7 = *puVar3;
      if (uVar7 != 5) break;
      puVar3 = (uint *)puVar3[1];
    }
    if ((4 < uVar7) && (uVar7 == 6)) {
      piVar15 = (int *)puVar3[3];
      uVar14 = 0;
      iVar4 = (int)piVar15 * 0x1c;
      if ((int *)0x4924924 < piVar15) {
LAB_016bd2b4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,iVar4);
      }
      uVar7 = puVar3[2];
      if (iVar4 == 0) {
        local_6c = (undefined4 *)&SUB_00000004;
        local_70 = (int *)0x0;
      }
      else {
        uVar14 = 4;
        local_6c = (undefined4 *)FUN_01298504(iVar4,4);
        local_70 = piVar15;
        if (local_6c == (undefined4 *)0x0) goto LAB_016bd2b4;
      }
      local_68 = (int *)0x0;
      if (piVar15 != (int *)0x0) {
        piVar10 = (int *)0x0;
        puVar12 = local_6c;
        do {
          FUN_016be730(&local_40,uVar7);
          piVar10 = (int *)((int)piVar10 + 1);
          uVar7 = uVar7 + 0x1c;
          *puVar12 = local_40;
          puVar12[1] = local_3c;
          puVar12[2] = local_38;
          puVar12[3] = local_34;
          puVar12[4] = iStack_30;
          puVar12[5] = iStack_2c;
          puVar12[6] = iStack_28;
          puVar12 = puVar12 + 7;
        } while (piVar15 != piVar10);
        local_68 = piVar15;
      }
      local_40 = local_70;
      local_3c = local_6c;
      local_38 = local_68;
      FUN_016e1024(&local_60,&local_40);
      local_40 = local_60;
      local_3c = puStack_5c;
      local_38 = piStack_58;
      local_34 = uStack_54;
      iStack_30 = iStack_50;
      iStack_2c = iStack_4c;
      local_60 = (int *)0x0;
      FUN_016df1bc(&local_60);
      uVar7 = local_34;
      if (local_40 == (int *)&DAT_00000006) {
        if (local_3c != (undefined4 *)&DAT_80000000) {
          local_84 = local_3c;
          local_80 = local_38;
          local_7c = local_34;
          if (1 < local_34) {
            uVar13 = 1;
            do {
              uVar2 = local_7c;
              if (local_7c <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar13,local_7c,&DAT_01d08fd8);
              }
              piVar6 = local_80 + uVar13 * 7;
              FUN_016bd7b8(&local_40,piVar6);
              piVar10 = local_38;
              puVar12 = local_3c;
              piVar15 = local_40;
              if ((char)local_34 != '\x02') {
                local_78 = local_34._1_2_;
                local_76[0] = local_34._3_1_;
                if ((local_34 & 1) != 0) {
                  if (uVar2 < uVar13) {
                    FUN_00666560(uVar13,uVar2,&DAT_01d08fe8);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)software_udf(0xfdee,0x16bd66c);
                    (*pcVar1)();
                  }
                  piVar11 = (int *)(uVar2 - uVar13);
                  iVar4 = (int)piVar11 * 0x1c;
                  if (piVar11 == (int *)0x0) {
                    iVar5 = 4;
                    local_40 = (int *)0x0;
                  }
                  else {
                    iVar5 = FUN_01298504(iVar4,4);
                    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(4,iVar4);
                    }
                    local_40 = piVar11;
                  }
                  local_7c = uVar13;
                  local_3c = (undefined4 *)iVar5;
                  local_38 = piVar11;
                  FUN_01bed4e2(iVar5,piVar6,iVar4);
                  FUN_016e1024(&local_60,&local_40);
                  FUN_016e1024(&local_40,&local_84);
                  FUN_016bd7b8(&local_70,&local_60);
                  bVar16 = local_64 != 2;
                  piVar6 = piVar15;
                  puVar8 = puVar12;
                  if (bVar16) {
                    if ((local_64 & 1) == 0) {
                      local_72 = local_76[0];
                      local_74 = local_78;
                      DataMemoryBarrier(0xb);
                      do {
                        iVar4 = *local_70;
                        bVar16 = (bool)hasExclusiveAccess(local_70);
                      } while (!bVar16);
                      *local_70 = iVar4 + -1;
                      bVar16 = false;
                      if (iVar4 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_018531c0();
                      }
LAB_016bd560:
                      *param_1 = (int)local_40;
                      param_1[1] = (int)local_3c;
                      param_1[2] = (int)local_38;
                      param_1[3] = local_34;
                      param_1[4] = iStack_30;
                      param_1[5] = iStack_2c;
                      param_1[6] = iStack_28;
                      *(undefined1 *)(param_1 + 10) = 1;
                      param_1[7] = (int)piVar6;
                      param_1[8] = (int)puVar8;
                      param_1[9] = (int)piVar10;
                      *(undefined1 *)((int)param_1 + 0x2b) = local_72;
                      *(undefined2 *)((int)param_1 + 0x29) = local_74;
                      FUN_016bd884(&local_60);
                      if (!bVar16) {
                        return;
                      }
                      DataMemoryBarrier(0xb);
                      do {
                        iVar4 = *piVar15;
                        bVar16 = (bool)hasExclusiveAccess(piVar15);
                      } while (!bVar16);
                      *piVar15 = iVar4 + -1;
                      if (iVar4 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_018531c0(piVar15,puVar12);
                        return;
                      }
                      return;
                    }
                    puVar9 = &local_63;
                    piVar6 = local_70;
                    puVar8 = local_6c;
                    piVar10 = local_68;
                  }
                  else {
                    puVar9 = &local_78;
                  }
                  local_72 = *(undefined1 *)(puVar9 + 1);
                  local_74 = *puVar9;
                  goto LAB_016bd560;
                }
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *local_40;
                  bVar16 = (bool)hasExclusiveAccess(local_40);
                } while (!bVar16);
                *local_40 = iVar4 + -1;
                if (iVar4 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_018531c0(local_40);
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar7);
          }
          *param_1 = 8;
          FUN_01334e1c(&local_84);
          return;
        }
      }
      else {
        FUN_016bd728(&local_40);
      }
    }
  }
  *param_1 = 8;
  return;
}

