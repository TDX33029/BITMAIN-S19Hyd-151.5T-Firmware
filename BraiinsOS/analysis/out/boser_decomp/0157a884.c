// FUN_0157a884 @ 0157a884 size=828 calls_out=11 calls_in=2
// strings: 

undefined4 FUN_0157a884(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  int local_5c;
  undefined4 local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar3 = 0;
  if (*param_2 == '\x03') {
    iVar11 = *param_1;
    FUN_01552754(&local_5c,*(undefined4 *)(iVar11 + 8),*(undefined4 *)(iVar11 + 0xc),
                 *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (local_5c != -0x7fffffff) {
      puVar10 = (uint *)param_1[1];
      do {
        uVar5 = *puVar10;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = uVar5 + 1;
      if (0x7fffffff < uVar5) {
LAB_0157aab0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x157aab0);
        (*pcVar1)();
      }
      uVar5 = param_1[2];
      local_44[0] = 0;
      if (param_4 != 0) {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar7 = *(int **)(param_4 + 0xc);
        do {
          iVar11 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_0157aab0;
        puVar10 = puVar10 + 2;
        uVar3 = *(undefined4 *)(param_4 + 0x10);
        uVar8 = (*(int **)(param_4 + 4))[1];
        if (uVar5 < uVar8) {
          uVar8 = 0;
        }
        else {
          iVar11 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,puVar10,uVar8);
          if (iVar11 != 0) {
            uVar8 = 0;
          }
          puVar10 = (uint *)((int)puVar10 + uVar8);
        }
        local_2c = FUN_016bc0ec(puVar10,uVar5 - uVar8);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = piVar7;
        local_30 = uVar3;
      }
      FUN_01531840(param_3);
      if (local_5c != -0x80000000) {
        FUN_019bb7e0(local_5c,local_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_004a684e,0x28,&DAT_01cfbf78);
    }
    uVar3 = 0;
    if ((char)local_58 == '\0') {
      piVar7 = (int *)param_1[1];
      do {
        iVar4 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_0157aab0;
      uVar5 = param_1[2];
      if (param_4 == 0) {
        local_44[0] = 0;
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
        if (iVar4 < 0) goto LAB_0157aab0;
        piVar12 = piVar7 + 2;
        uVar3 = *(undefined4 *)(param_4 + 0x10);
        uVar8 = (*(int **)(param_4 + 4))[1];
        if (uVar5 < uVar8) {
          uVar8 = 0;
        }
        else {
          iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar12,uVar8);
          if (iVar4 != 0) {
            uVar8 = 0;
          }
          piVar12 = (int *)((int)piVar12 + uVar8);
        }
        local_2c = FUN_016bc0ec(piVar12,uVar5 - uVar8);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = piVar9;
        local_30 = uVar3;
      }
      uVar13 = FUN_01531840(param_3);
      local_48 = *(int *)(iVar11 + 0x14);
      if (local_48 < 0) {
        uVar3 = 0;
LAB_0157a9f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar3,local_48);
      }
      iVar11 = *(int *)(iVar11 + 0x10);
      if (local_48 == 0) {
        iVar6 = 1;
        iVar4 = 0;
      }
      else {
        uVar3 = 1;
        iVar6 = FUN_01298504(local_48,1);
        if (iVar6 == 0) goto LAB_0157a9f0;
        iVar4 = local_48;
      }
      FUN_01bed4e2(iVar6,iVar11 + 8,local_48);
      local_50 = iVar4;
      local_4c = iVar6;
      uVar3 = FUN_01596298(piVar7,uVar5,local_44,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),
                           param_2,&local_50);
    }
  }
  return uVar3;
}

