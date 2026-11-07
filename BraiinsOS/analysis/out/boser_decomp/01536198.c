// FUN_01536198 @ 01536198 size=732 calls_out=8 calls_in=2
// strings: contentEncoding

undefined4 FUN_01536198(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r3;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int *unaff_r9;
  undefined8 uVar10;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  undefined4 local_38;
  code *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar8 = 0;
  if (*param_2 == '\x03') {
    pcVar7 = *(code **)(param_1 + 0x1c);
    (*pcVar7)(&local_50,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (local_50 == -0x80000000) {
      local_2c = FUN_015345a4(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                              "contentEncoding",0xf);
      uVar5 = (uint)((ulonglong)local_2c >> 0x20);
      iVar2 = (int)local_2c;
      if (param_4 == 0) {
        local_44[0] = 0;
        uVar8 = extraout_r3;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        pcVar7 = *(code **)(param_4 + 0xc);
        do {
          iVar3 = *(int *)pcVar7;
          bVar1 = (bool)hasExclusiveAccess(pcVar7);
        } while (!bVar1);
        *(int *)pcVar7 = iVar3 + 1;
        if (iVar3 < 0) {
LAB_01536470:
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xfdee,0x1536470);
          (*pcVar7)();
        }
        uVar8 = *(undefined4 *)(param_4 + 0x10);
        iVar3 = iVar2 + 8;
        uVar6 = 0;
        uVar9 = (*(int **)(param_4 + 4))[1];
        if (uVar9 <= uVar5) {
          iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar3,uVar9);
          uVar6 = uVar9;
          if (iVar4 != 0) {
            uVar6 = 0;
          }
        }
        local_2c = FUN_016bc0ec(iVar3 + uVar6,uVar5 - uVar6);
        local_44[0] = 2;
      }
      local_38 = 3;
      local_34 = pcVar7;
      local_30 = uVar8;
      uVar10 = FUN_01531840(param_3);
      uVar8 = FUN_015950b0(iVar2,uVar5,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2
                           ,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
    else if (local_50 == -0x7fffffff) {
      uVar8 = local_4c;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x18))(local_4c,local_48);
      uVar8 = 0;
      if (iVar2 == 0) {
        local_2c = FUN_015345a4(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                                &DAT_00567978,0x10);
        uVar5 = (uint)((ulonglong)local_2c >> 0x20);
        iVar2 = (int)local_2c;
        if (param_4 == 0) {
          local_44[0] = 0;
          local_30 = local_4c;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          unaff_r9 = *(int **)(param_4 + 0xc);
          do {
            iVar3 = *unaff_r9;
            bVar1 = (bool)hasExclusiveAccess(unaff_r9);
          } while (!bVar1);
          *unaff_r9 = iVar3 + 1;
          if (iVar3 < 0) goto LAB_01536470;
          uVar8 = *(undefined4 *)(param_4 + 0x10);
          uVar9 = (*(int **)(param_4 + 4))[1];
          iVar3 = iVar2 + 8;
          uVar6 = 0;
          if (uVar9 <= uVar5) {
            iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar3,uVar9);
            uVar6 = uVar9;
            if (iVar4 != 0) {
              uVar6 = 0;
            }
          }
          local_2c = FUN_016bc0ec(iVar3 + uVar6,uVar5 - uVar6);
          local_44[0] = 2;
          local_30 = uVar8;
        }
        local_38 = 3;
        local_34 = (code *)unaff_r9;
        uVar10 = FUN_01531840(param_3);
        uVar8 = FUN_01595830(iVar2,uVar5,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
                             param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      }
      FUN_019bb7e0(local_50,local_4c);
    }
  }
  return uVar8;
}

