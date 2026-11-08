// FUN_01244e80 @ 01244e80 size=376 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_01244e80(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar6 = 0;
  if (*param_2 == '\x03') {
    iVar3 = (**(code **)(param_1 + 0xc))
                      (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (iVar3 == 0) {
      piVar7 = *(int **)(param_1 + 0x10);
      do {
        iVar3 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01244ff4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1244ff4);
        (*pcVar1)();
      }
      uVar6 = *(undefined4 *)(param_1 + 0x14);
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
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01244ff4;
        uVar11 = *(undefined4 *)(param_4 + 0xc);
        uVar5 = 0;
        uVar9 = *(undefined4 *)(param_4 + 0x10);
        uVar10 = *(uint *)(param_1 + 0x14);
        uVar8 = (*(int **)(param_4 + 4))[1];
        if (uVar8 <= uVar10) {
          iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
          uVar5 = uVar8;
          if (iVar3 != 0) {
            uVar5 = 0;
          }
        }
        local_2c = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar10 - uVar5);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = uVar11;
        local_30 = uVar9;
      }
      uVar12 = FUN_01238114(param_3);
      uVar6 = FUN_011f10fc(piVar7,uVar6,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),
                           param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
  }
  return uVar6;
}

