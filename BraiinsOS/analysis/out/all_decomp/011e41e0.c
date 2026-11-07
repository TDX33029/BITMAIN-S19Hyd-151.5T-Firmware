// FUN_011e41e0 @ 011e41e0 size=424 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_011e41e0(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  if ((*param_2 == '\x03') && (*(int *)(param_1 + 0x28) != 0)) {
    iVar6 = *(int *)(param_1 + 0x28) << 3;
    uVar8 = *(undefined4 *)(param_2 + 8);
    iVar10 = *(int *)(param_2 + 0xc);
    piVar7 = (int *)(*(int *)(param_1 + 0x24) + 4);
    do {
      if ((*piVar7 == iVar10) && (iVar3 = thunk_FUN_016dd50a(piVar7[-1],uVar8,iVar10), iVar3 == 0))
      {
        return 0;
      }
      piVar7 = piVar7 + 2;
      iVar6 = iVar6 + -8;
    } while (iVar6 != 0);
  }
  piVar7 = *(int **)(param_1 + 0x18);
  do {
    iVar6 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar6 + 1;
  if (iVar6 < 0) {
LAB_011e4384:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e4384);
    (*pcVar1)();
  }
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  if (param_4 == 0) {
    local_44[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar4 = *(int **)(param_4 + 0xc);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_011e4384;
    uVar13 = *(undefined4 *)(param_4 + 0xc);
    uVar5 = 0;
    uVar12 = *(undefined4 *)(param_4 + 0x10);
    uVar9 = *(uint *)(param_1 + 0x1c);
    uVar11 = (*(int **)(param_4 + 4))[1];
    if (uVar11 <= uVar9) {
      iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar11);
      uVar5 = uVar11;
      if (iVar6 != 0) {
        uVar5 = 0;
      }
    }
    local_2c = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar9 - uVar5);
    local_38 = 3;
    local_44[0] = 2;
    local_34 = uVar13;
    local_30 = uVar12;
  }
  uVar14 = FUN_01238114(param_3);
  uVar8 = FUN_011ef804(piVar7,uVar8,local_44,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),param_2,
                       param_1);
  return uVar8;
}

