// FUN_01534940 @ 01534940 size=376 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_01534940(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar7 = 0;
  if (*param_2 == '\x03') {
    iVar3 = (**(code **)(param_1 + 0xc))
                      (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (iVar3 == 0) {
      piVar8 = *(int **)(param_1 + 0x10);
      do {
        iVar3 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01534ab4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1534ab4);
        (*pcVar1)();
      }
      uVar7 = *(undefined4 *)(param_1 + 0x14);
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
          iVar3 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01534ab4;
        uVar5 = *(undefined4 *)(param_4 + 0x10);
        uVar10 = *(uint *)(param_1 + 0x14);
        iVar3 = *(int *)(param_1 + 0x10) + 8;
        uVar11 = (*(int **)(param_4 + 4))[1];
        uVar6 = 0;
        if (uVar11 <= uVar10) {
          iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar3,uVar11);
          uVar6 = uVar11;
          if (iVar4 != 0) {
            uVar6 = 0;
          }
        }
        local_2c = FUN_016bc0ec(iVar3 + uVar6,uVar10 - uVar6);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = piVar9;
        local_30 = uVar5;
      }
      uVar12 = FUN_01531840(param_3);
      uVar7 = FUN_01595830(piVar8,uVar7,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),
                           param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
  }
  return uVar7;
}

