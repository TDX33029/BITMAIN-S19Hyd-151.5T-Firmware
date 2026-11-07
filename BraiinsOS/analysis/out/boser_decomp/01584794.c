// FUN_01584794 @ 01584794 size=732 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_01584794(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_6c;
  undefined4 local_68 [3];
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = 0;
  if (*param_2 == '\x05') {
    uVar9 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    iVar3 = FUN_0196b2cc(uVar9,uVar5,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (iVar3 == 0) {
      piVar8 = *(int **)(param_1 + 0x18);
      do {
        iVar3 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01584a6c;
      local_6c = *(uint *)(param_1 + 0x1c);
      if (param_4 == 0) {
        local_68[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar6 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01584a6c;
        uVar5 = *(undefined4 *)(param_4 + 0x10);
        piVar7 = piVar8 + 2;
        uVar10 = (*(int **)(param_4 + 4))[1];
        if (local_6c < uVar10) {
          uVar10 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar7,uVar10);
          if (iVar3 != 0) {
            uVar10 = 0;
          }
          piVar7 = (int *)((int)piVar7 + uVar10);
        }
        local_50 = FUN_016bc0ec(piVar7,local_6c - uVar10);
        local_5c = 3;
        local_68[0] = 2;
        local_58 = piVar6;
        local_54 = uVar5;
      }
      uVar11 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
    else {
      iVar3 = FUN_0196b2cc(uVar9,uVar5,*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0x14));
      if (iVar3 != 0) {
        return 0;
      }
      piVar8 = *(int **)(param_1 + 0x18);
      do {
        iVar3 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01584a6c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1584a6c);
        (*pcVar1)();
      }
      local_6c = *(uint *)(param_1 + 0x1c);
      if (param_4 == 0) {
        local_68[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar6 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01584a6c;
        uVar5 = *(undefined4 *)(param_4 + 0x10);
        piVar7 = piVar8 + 2;
        uVar10 = (*(int **)(param_4 + 4))[1];
        if (local_6c < uVar10) {
          uVar10 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar7,uVar10);
          if (iVar3 != 0) {
            uVar10 = 0;
          }
          piVar7 = (int *)((int)piVar7 + uVar10);
        }
        local_50 = FUN_016bc0ec(piVar7,local_6c - uVar10);
        local_5c = 3;
        local_68[0] = 2;
        local_58 = piVar6;
        local_54 = uVar5;
      }
      uVar11 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
    puVar4 = (undefined4 *)((uint)local_48 | 4);
    *puVar4 = local_30;
    puVar4[1] = uStack_2c;
    puVar4[2] = uStack_28;
    local_48[0] = 3;
    uVar5 = FUN_015963e0(piVar8,local_6c,local_68,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),
                         param_2,local_48);
  }
  return uVar5;
}

