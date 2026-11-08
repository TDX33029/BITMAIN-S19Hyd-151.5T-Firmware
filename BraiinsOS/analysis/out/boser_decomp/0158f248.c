// FUN_0158f248 @ 0158f248 size=868 calls_out=8 calls_in=0
// strings: 

int FUN_0158f248(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    uVar12 = *(undefined4 *)(param_2 + 4);
    uVar14 = *(undefined4 *)(param_2 + 8);
    iVar3 = FUN_0196b2cc(uVar12,uVar14,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14));
    if (iVar3 == 0) {
      piVar11 = *(int **)(param_1 + 0x24);
      do {
        iVar3 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0158f5a8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x158f5a8);
        (*pcVar1)();
      }
      uVar9 = *(uint *)(param_1 + 0x28);
      if (param_4 == 0) {
        local_68 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar8 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0158f5a8;
        piVar6 = piVar11 + 2;
        uVar12 = *(undefined4 *)(param_4 + 0x10);
        uVar13 = (*(int **)(param_4 + 4))[1];
        if (uVar9 < uVar13) {
          uVar13 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar6,uVar13);
          if (iVar3 != 0) {
            uVar13 = 0;
          }
          piVar6 = (int *)((int)piVar6 + uVar13);
        }
        local_50 = FUN_016bc0ec(piVar6,uVar9 - uVar13);
        local_5c = 3;
        local_68 = 2;
        local_58 = piVar8;
        local_54 = uVar12;
      }
      uVar15 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
    else {
      iVar3 = FUN_0196b2cc(uVar12,uVar14,*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x20));
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 8) != 0) {
          iVar3 = *(int *)(param_1 + 8) << 5;
          puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
          do {
            uVar5 = puVar7[-1];
            uVar10 = *puVar7;
            iVar4 = FUN_0196b2cc(uVar12,uVar14,uVar5,uVar10);
            if (iVar4 != 0) {
              local_68 = 0x80000000;
              local_64 = uVar5;
              local_60 = uVar10;
              local_5c = param_3;
              iVar4 = FUN_015776f4(puVar7 + 1,iVar4,&local_68,param_4,param_5);
              if (iVar4 != 0) {
                return iVar4;
              }
            }
            puVar7 = puVar7 + 8;
            iVar3 = iVar3 + -0x20;
          } while (iVar3 != 0);
        }
        goto LAB_0158f328;
      }
      piVar11 = *(int **)(param_1 + 0x24);
      do {
        iVar3 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_0158f5a8;
      uVar9 = *(uint *)(param_1 + 0x28);
      if (param_4 == 0) {
        local_68 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar8 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0158f5a8;
        piVar6 = piVar11 + 2;
        uVar12 = *(undefined4 *)(param_4 + 0x10);
        uVar13 = (*(int **)(param_4 + 4))[1];
        if (uVar9 < uVar13) {
          uVar13 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar6,uVar13);
          if (iVar3 != 0) {
            uVar13 = 0;
          }
          piVar6 = (int *)((int)piVar6 + uVar13);
        }
        local_50 = FUN_016bc0ec(piVar6,uVar9 - uVar13);
        local_5c = 3;
        local_68 = 2;
        local_58 = piVar8;
        local_54 = uVar12;
      }
      uVar15 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    }
    puVar7 = (undefined4 *)((uint)local_48 | 4);
    *puVar7 = local_30;
    puVar7[1] = uStack_2c;
    puVar7[2] = uStack_28;
    local_48[0] = 3;
    iVar3 = FUN_015963e0(piVar11,uVar9,&local_68,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                         param_2,local_48);
  }
  else {
LAB_0158f328:
    iVar3 = 0;
  }
  return iVar3;
}

