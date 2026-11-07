// FUN_011e3f88 @ 011e3f88 size=344 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_011e3f88(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  iVar3 = FUN_011e2b78();
  uVar4 = 0;
  if (iVar3 == 0) {
    piVar8 = *(int **)(param_1 + 0x30);
    do {
      iVar3 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_011e40dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11e40dc);
      (*pcVar1)();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x34);
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
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_011e40dc;
      uVar11 = *(undefined4 *)(param_4 + 0xc);
      uVar10 = *(uint *)(param_1 + 0x34);
      uVar9 = (*(int **)(param_4 + 4))[1];
      uVar6 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = 0;
      if (uVar9 <= uVar10) {
        iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
        uVar7 = uVar9;
        if (iVar3 != 0) {
          uVar7 = 0;
        }
      }
      local_2c = FUN_011e1508((int)(piVar8 + 2) + uVar7,uVar10 - uVar7);
      local_38 = 3;
      local_44[0] = 2;
      local_34 = uVar11;
      local_30 = uVar6;
    }
    uVar12 = FUN_01238114(param_3);
    uVar4 = FUN_011ef804(piVar8,uVar4,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),param_2,
                         param_1 + 0x18);
  }
  return uVar4;
}

