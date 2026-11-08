// FUN_01588b64 @ 01588b64 size=424 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_01588b64(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 local_68 [3];
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar6 = 0;
  if ((*param_2 == '\x05') &&
     ((*(int *)(param_2 + 0xc) == 0 ||
      (iVar3 = FUN_0196b2cc(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                            *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8)), iVar3 == 0))
     )) {
    piVar7 = *(int **)(param_1 + 0xc);
    do {
      iVar3 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_01588d08:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1588d08);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_68[0] = 0;
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
      if (iVar3 < 0) goto LAB_01588d08;
      uVar6 = *(undefined4 *)(param_4 + 0x10);
      piVar9 = piVar7 + 2;
      uVar10 = (*(int **)(param_4 + 4))[1];
      if (uVar4 < uVar10) {
        uVar10 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar10);
        if (iVar3 != 0) {
          uVar10 = 0;
        }
        piVar9 = (int *)((int)piVar9 + uVar10);
      }
      local_50 = FUN_016bc0ec(piVar9,uVar4 - uVar10);
      local_5c = 3;
      local_68[0] = 2;
      local_58 = piVar8;
      local_54 = uVar6;
    }
    uVar11 = FUN_01531840(param_3);
    FUN_006666fc(&local_30,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    puVar5 = (undefined4 *)((uint)local_48 | 4);
    *puVar5 = local_30;
    puVar5[1] = uStack_2c;
    puVar5[2] = uStack_28;
    local_48[0] = 3;
    uVar6 = FUN_015963e0(piVar7,uVar4,local_68,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_2,
                         local_48);
  }
  return uVar6;
}

