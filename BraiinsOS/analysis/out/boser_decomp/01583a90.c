// FUN_01583a90 @ 01583a90 size=448 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_01583a90(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined8 uVar14;
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
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar12 = *(undefined4 *)(param_2 + 8);
    iVar10 = *(int *)(param_1 + 8) * 0xc;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    do {
      puVar9 = puVar4;
      if (iVar10 == 0) {
        return 0;
      }
      iVar3 = FUN_0196b2cc(uVar5,uVar12,puVar9[-1],*puVar9);
      iVar10 = iVar10 + -0xc;
      puVar4 = puVar9 + 3;
    } while (iVar3 != 0);
    piVar6 = *(int **)(param_1 + 0xc);
    do {
      iVar10 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar10 + 1;
    if (iVar10 < 0) {
LAB_01583c4c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1583c4c);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(param_1 + 0x10);
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
        iVar10 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_01583c4c;
      piVar13 = piVar6 + 2;
      uVar5 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = (*(int **)(param_4 + 4))[1];
      if (uVar11 < uVar7) {
        uVar7 = 0;
      }
      else {
        iVar10 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar13,uVar7);
        if (iVar10 != 0) {
          uVar7 = 0;
        }
        piVar13 = (int *)((int)piVar13 + uVar7);
      }
      local_50 = FUN_016bc0ec(piVar13,uVar11 - uVar7);
      local_5c = 3;
      local_68[0] = 2;
      local_58 = piVar8;
      local_54 = uVar5;
    }
    uVar14 = FUN_01531840(param_3);
    FUN_006666fc(&local_30,puVar9[-1],*puVar9);
    puVar4 = (undefined4 *)((uint)local_48 | 4);
    *puVar4 = local_30;
    puVar4[1] = uStack_2c;
    puVar4[2] = uStack_28;
    local_48[0] = 3;
    uVar5 = FUN_015963e0(piVar6,uVar11,local_68,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),param_2
                         ,local_48);
  }
  return uVar5;
}

