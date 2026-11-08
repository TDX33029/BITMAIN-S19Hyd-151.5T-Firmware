// FUN_0157dfa0 @ 0157dfa0 size=440 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0157dfa0(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 local_50 [3];
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 auStack_30 [12];
  
  uVar4 = 0;
  if (*param_2 == '\x03') {
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      iVar12 = *(int *)(param_2 + 0xc);
      puVar10 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar7 = *(int *)(param_1 + 8) * 0xc;
      do {
        if ((puVar10[1] == iVar12) &&
           (iVar3 = thunk_FUN_01bed842(*puVar10,uVar4,iVar12), iVar3 == 0)) {
          return 0;
        }
        puVar10 = puVar10 + 3;
        iVar7 = iVar7 + -0xc;
      } while (iVar7 != 0);
    }
    piVar5 = *(int **)(param_1 + 0x18);
    do {
      iVar7 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_0157e154:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x157e154);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(param_1 + 0x1c);
    if (param_4 == 0) {
      local_50[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar8 = *(int **)(param_4 + 0xc);
      do {
        iVar7 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_0157e154;
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      piVar6 = piVar5 + 2;
      uVar9 = (*(int **)(param_4 + 4))[1];
      if (uVar11 < uVar9) {
        uVar9 = 0;
      }
      else {
        iVar7 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar6,uVar9);
        if (iVar7 != 0) {
          uVar9 = 0;
        }
        piVar6 = (int *)((int)piVar6 + uVar9);
      }
      local_38 = FUN_016bc0ec(piVar6,uVar11 - uVar9);
      local_44 = 3;
      local_50[0] = 2;
      local_40 = piVar8;
      local_3c = uVar4;
    }
    uVar13 = FUN_01531840(param_3);
    FUN_006666fc(auStack_30,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    uVar4 = FUN_01596298(piVar5,uVar11,local_50,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),param_2
                         ,auStack_30);
  }
  return uVar4;
}

