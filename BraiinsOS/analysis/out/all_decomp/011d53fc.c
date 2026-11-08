// FUN_011d53fc @ 011d53fc size=1076 calls_out=8 calls_in=2
// strings: minContains | maxContains

int FUN_011d53fc(uint *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int unaff_r6;
  int iVar10;
  uint unaff_r9;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar7 = 0;
  if (*param_2 == '\x04') {
    local_4c = param_2;
    if (*(int *)(param_2 + 0xc) == 0) {
      uVar9 = 0;
      uVar11 = 0;
    }
    else {
      unaff_r6 = *(int *)(param_2 + 8);
      uVar9 = 0;
      iVar7 = unaff_r6 + *(int *)(param_2 + 0xc) * 0x18;
      unaff_r9 = param_1[4];
      uVar11 = 0;
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      do {
        uVar2 = 1;
        if ((int)*(uint *)(unaff_r9 + 8) < 0) {
          uVar2 = *(uint *)(unaff_r9 + 8) ^ 0x80000000;
        }
        if (uVar2 == 0) {
          if ((*(int *)(unaff_r9 + 0xc) != 0) &&
             (iVar10 = (**(code **)(*(int *)(unaff_r9 + 0x10) + 0x10))
                                 (*(int *)(unaff_r9 + 0xc),unaff_r6,param_5), iVar10 == 0))
          goto LAB_011d5480;
LAB_011d5464:
          bVar12 = 0xfffffffe < uVar9;
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 + bVar12;
          if (uVar11 < uVar6 || uVar6 - uVar11 < (uint)(uVar9 <= uVar5)) goto LAB_011d5480;
          uVar13 = FUN_0123ab30(param_1[5],param_1[6],"maxContains",0xb);
          uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
          if (param_4 == 0) {
            local_a8[0] = 0;
            uStack_90 = uVar13;
          }
          else {
            DataMemoryBarrier(0xb);
            if (*(int *)(param_4 + 0x14) != 0) {
              FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
            }
            piVar4 = *(int **)(param_4 + 0xc);
            do {
              iVar7 = *piVar4;
              bVar12 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar12);
            *piVar4 = iVar7 + 1;
            if (iVar7 < 0) goto LAB_011d5810;
            iVar7 = (int)uVar13 + 8;
            unaff_r6 = *(int *)(param_4 + 0xc);
            uVar11 = 0;
            unaff_r9 = *(uint *)(param_4 + 0x10);
            uVar5 = (*(int **)(param_4 + 4))[1];
            if (uVar5 <= uVar9) {
              iVar10 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar7,uVar5);
              uVar11 = uVar5;
              if (iVar10 != 0) {
                uVar11 = 0;
              }
            }
            uStack_90 = FUN_011e1508(iVar7 + uVar11,uVar9 - uVar11);
            local_a8[0] = 2;
          }
          local_38 = FUN_01238114(param_3);
          local_88 = 0x8000000f;
          local_50 = 6;
          uStack_9c = 3;
          local_98 = unaff_r6;
          uStack_94 = unaff_r9;
          local_30 = uVar13;
          iVar7 = thunk_FUN_016d4a50(0x80);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
          goto LAB_011d57e8;
        }
        if (uVar2 == 1) {
          puVar8 = *(undefined4 **)(unaff_r9 + 0xc);
          iVar10 = *(int *)(unaff_r9 + 0x10) << 5;
          do {
            if (iVar10 == 0) goto LAB_011d5464;
            iVar3 = (**(code **)(puVar8[1] + 0x10))(*puVar8,unaff_r6,param_5);
            iVar10 = iVar10 + -0x20;
            puVar8 = puVar8 + 8;
          } while (iVar3 != 0);
        }
        else {
          puVar8 = *(undefined4 **)(unaff_r9 + 0x10);
          iVar10 = *(int *)(unaff_r9 + 0x14) << 5;
          do {
            if (iVar10 == 0) goto LAB_011d5464;
            iVar3 = (**(code **)(puVar8[1] + 0x10))(*puVar8,unaff_r6,param_5);
            iVar10 = iVar10 + -0x20;
            puVar8 = puVar8 + 8;
          } while (iVar3 != 0);
        }
LAB_011d5480:
        unaff_r6 = unaff_r6 + 0x18;
      } while (unaff_r6 != iVar7);
    }
    iVar7 = 0;
    if (uVar11 <= param_1[1] && (uint)(*param_1 <= uVar9) <= uVar11 - param_1[1]) {
      uVar13 = FUN_0123ab30(param_1[5],param_1[6],"minContains",0xb);
      uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
      if (param_4 == 0) {
        local_a8[0] = 0;
        uStack_90 = uVar13;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar7 = *piVar4;
          bVar12 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar12);
        *piVar4 = iVar7 + 1;
        if (iVar7 < 0) {
LAB_011d5810:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x11d5810);
          (*pcVar1)();
        }
        iVar7 = (int)uVar13 + 8;
        unaff_r6 = *(int *)(param_4 + 0xc);
        uVar11 = 0;
        unaff_r9 = *(uint *)(param_4 + 0x10);
        uVar5 = (*(int **)(param_4 + 4))[1];
        if (uVar5 <= uVar9) {
          iVar10 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar7,uVar5);
          uVar11 = uVar5;
          if (iVar10 != 0) {
            uVar11 = 0;
          }
        }
        uStack_90 = FUN_011e1508(iVar7 + uVar11,uVar9 - uVar11);
        local_a8[0] = 2;
      }
      local_38 = FUN_01238114(param_3);
      local_88 = 0x8000000f;
      local_50 = 6;
      uStack_9c = 3;
      local_98 = unaff_r6;
      uStack_94 = unaff_r9;
      local_30 = uVar13;
      iVar7 = thunk_FUN_016d4a50(0x80);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
LAB_011d57e8:
      FUN_016dd1aa(iVar7,local_a8,0x80);
    }
  }
  return iVar7;
}

