// FUN_0124747c @ 0124747c size=728 calls_out=8 calls_in=2
// strings: contentEncoding

undefined4 FUN_0124747c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 extraout_r3;
  uint uVar10;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined8 uVar11;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar3 = 0;
  if (*param_2 == '\x03') {
    (**(code **)(param_1 + 0x1c))
              (&local_50,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (local_50 == -0x80000000) {
      local_2c = FUN_0123ab30(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                              "contentEncoding",0xf);
      uVar7 = (uint)((ulonglong)local_2c >> 0x20);
      iVar4 = (int)local_2c;
      if (param_4 == 0) {
        local_44[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar5 = *(int **)(param_4 + 0xc);
        do {
          iVar8 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar8 + 1;
        if (iVar8 < 0) {
LAB_01247750:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1247750);
          (*pcVar1)();
        }
        uVar9 = 0;
        unaff_r10 = *(undefined4 *)(param_4 + 0xc);
        unaff_r11 = *(undefined4 *)(param_4 + 0x10);
        iVar8 = iVar4 + 8;
        uVar10 = (*(int **)(param_4 + 4))[1];
        if (uVar10 <= uVar7) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar8,uVar10);
          uVar9 = uVar10;
          if (iVar6 != 0) {
            uVar9 = 0;
          }
        }
        local_2c = FUN_011e1508(iVar8 + uVar9,uVar7 - uVar9);
        local_44[0] = 2;
      }
      local_38 = 3;
      local_34 = unaff_r10;
      local_30 = unaff_r11;
      uVar11 = FUN_01238114(param_3);
      uVar3 = FUN_011f10fc(iVar4,uVar7,local_44,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_2
                           ,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
    else {
      if (local_50 == -0x7fffffff) {
        return local_4c;
      }
      iVar4 = (**(code **)(param_1 + 0x18))(local_4c,local_48);
      uVar3 = 0;
      if (iVar4 == 0) {
        local_2c = FUN_0123ab30(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                                &DAT_00563e80,0x10);
        uVar7 = (uint)((ulonglong)local_2c >> 0x20);
        iVar4 = (int)local_2c;
        if (param_4 == 0) {
          local_44[0] = 0;
          uVar3 = extraout_r3;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar5 = *(int **)(param_4 + 0xc);
          do {
            iVar8 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_01247750;
          unaff_r10 = *(undefined4 *)(param_4 + 0xc);
          uVar3 = *(undefined4 *)(param_4 + 0x10);
          iVar8 = iVar4 + 8;
          uVar10 = (*(int **)(param_4 + 4))[1];
          uVar9 = 0;
          if (uVar10 <= uVar7) {
            iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar8,uVar10);
            uVar9 = uVar10;
            if (iVar6 != 0) {
              uVar9 = 0;
            }
          }
          local_2c = FUN_011e1508(iVar8 + uVar9,uVar7 - uVar9);
          local_44[0] = 2;
        }
        local_38 = 3;
        local_34 = unaff_r10;
        local_30 = uVar3;
        uVar11 = FUN_01238114(param_3);
        uVar3 = FUN_011f14ec(iVar4,uVar7,local_44,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),
                             param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      }
      if (local_50 != 0) {
        thunk_FUN_016d3fb4(local_4c);
        return uVar3;
      }
    }
  }
  return uVar3;
}

