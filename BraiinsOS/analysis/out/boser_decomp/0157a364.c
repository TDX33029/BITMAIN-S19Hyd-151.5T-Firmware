// FUN_0157a364 @ 0157a364 size=896 calls_out=11 calls_in=1
// strings: 

undefined4 FUN_0157a364(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58 [3];
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = 0;
  if (*param_2 == '\x03') {
    piVar13 = (int *)(*param_1 + 8);
    FUN_01338048(&local_88,piVar13,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (local_88 == 0x12) {
      uVar3 = 0;
      if ((char)local_84 == '\0') {
        piVar9 = (int *)param_1[1];
        do {
          iVar4 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_0157a6c4;
        uVar5 = param_1[2];
        if (param_4 == 0) {
          local_58[0] = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar10 = *(int **)(param_4 + 0xc);
          do {
            iVar4 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar4 + 1;
          if (iVar4 < 0) goto LAB_0157a6c4;
          piVar11 = piVar9 + 2;
          uVar3 = *(undefined4 *)(param_4 + 0x10);
          uVar12 = (*(int **)(param_4 + 4))[1];
          if (uVar5 < uVar12) {
            uVar12 = 0;
          }
          else {
            iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar11,uVar12);
            if (iVar4 != 0) {
              uVar12 = 0;
            }
            piVar11 = (int *)((int)piVar11 + uVar12);
          }
          local_40 = FUN_016bc0ec(piVar11,uVar5 - uVar12);
          local_4c = 3;
          local_58[0] = 2;
          local_48 = piVar10;
          local_44 = uVar3;
        }
        uVar15 = FUN_01531840(param_3);
        iVar7 = 0x14;
        iVar4 = 0x18;
        if (*piVar13 == 2) {
          iVar4 = 0x1c;
          iVar7 = 0x18;
        }
        iVar4 = *(int *)((int)piVar13 + iVar4);
        if (iVar4 < 0) {
          uVar3 = 0;
LAB_0157a628:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar3,iVar4);
        }
        uVar14 = *(undefined4 *)((int)piVar13 + iVar7);
        if (iVar4 == 0) {
          iVar8 = 1;
          iVar7 = 0;
        }
        else {
          uVar3 = 1;
          iVar8 = FUN_01298504(iVar4,1);
          if (iVar8 == 0) goto LAB_0157a628;
          iVar7 = iVar4;
        }
        FUN_01bed4e2(iVar8,uVar14,iVar4);
        local_38 = iVar7;
        local_34 = iVar8;
        local_30 = iVar4;
        uVar3 = FUN_01596298(piVar9,uVar5,local_58,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                             param_2,&local_38);
      }
    }
    else {
      local_70 = local_88;
      uStack_6c = local_84;
      uStack_68 = uStack_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      piVar13 = (int *)param_1[1];
      do {
        iVar4 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_0157a6c4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x157a6c4);
        (*pcVar1)();
      }
      uVar5 = param_1[2];
      if (param_4 == 0) {
        local_58[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar9 = *(int **)(param_4 + 0xc);
        do {
          iVar4 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_0157a6c4;
        piVar10 = piVar13 + 2;
        uVar3 = *(undefined4 *)(param_4 + 0x10);
        uVar12 = (*(int **)(param_4 + 4))[1];
        if (uVar5 < uVar12) {
          uVar12 = 0;
        }
        else {
          iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar10,uVar12);
          if (iVar4 != 0) {
            uVar12 = 0;
          }
          piVar10 = (int *)((int)piVar10 + uVar12);
        }
        local_40 = FUN_016bc0ec(piVar10,uVar5 - uVar12);
        local_4c = 3;
        local_58[0] = 2;
        local_48 = piVar9;
        local_44 = uVar3;
      }
      uVar15 = FUN_01531840(param_3);
      if (local_70 == 0x12) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004a684e,0x28,&DAT_01cfbf78);
      }
      local_38 = local_70;
      puVar6 = (undefined4 *)((uint)&local_88 | 4);
      local_34 = *puVar6;
      local_30 = puVar6[1];
      uStack_2c = puVar6[2];
      uStack_28 = puVar6[3];
      uVar3 = FUN_01595004(piVar13,uVar5,local_58,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                           param_2,&local_38);
    }
  }
  return uVar3;
}

