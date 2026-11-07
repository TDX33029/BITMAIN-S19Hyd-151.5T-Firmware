// FUN_015776f4 @ 015776f4 size=548 calls_out=5 calls_in=42
// strings: 

int FUN_015776f4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  iVar3 = *param_1;
  uVar5 = 1;
  if ((int)*(uint *)(iVar3 + 8) < 0) {
    uVar5 = *(uint *)(iVar3 + 8) ^ 0x80000000;
  }
  if (uVar5 == 0) {
    if (*(int *)(iVar3 + 0xc) == 0) {
LAB_015778c8:
      iVar3 = 0;
    }
    else {
      piVar8 = (int *)param_1[1];
      do {
        iVar3 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01577914:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1577914);
        (*pcVar1)();
      }
      iVar3 = param_1[2];
      if (param_4 == 0) {
        local_44[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar10 = *(int **)(param_4 + 0xc);
        do {
          iVar7 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_01577914;
        uVar6 = *(undefined4 *)(param_4 + 0x10);
        uVar11 = param_1[2];
        uVar5 = (*(int **)(param_4 + 4))[1];
        iVar7 = param_1[1] + 8;
        if (uVar5 <= uVar11) {
          iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar7,uVar5);
          if (iVar4 != 0) {
            uVar5 = 0;
          }
          uVar11 = uVar11 - uVar5;
          iVar7 = iVar7 + uVar5;
        }
        local_2c = FUN_016bc0ec(iVar7,uVar11);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = piVar10;
        local_30 = uVar6;
      }
      uVar12 = FUN_01531840(param_3);
      iVar3 = FUN_015946b8(piVar8,iVar3,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),
                           param_2);
    }
  }
  else if (uVar5 == 1) {
    puVar9 = *(undefined4 **)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x01577764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(puVar9[1] + 0x14))(*puVar9,param_2,param_3,param_4);
      return iVar3;
    }
    iVar7 = *(int *)(iVar3 + 0x10) << 5;
    do {
      if (iVar7 == 0) goto LAB_015778c8;
      iVar3 = (**(code **)(puVar9[1] + 0x14))(*puVar9,param_2,param_3,param_4,param_5);
      iVar7 = iVar7 + -0x20;
      puVar9 = puVar9 + 8;
    } while (iVar3 == 0);
  }
  else {
    puVar9 = *(undefined4 **)(iVar3 + 0x10);
    iVar7 = *(int *)(iVar3 + 0x14) << 5;
    do {
      if (iVar7 == 0) goto LAB_015778c8;
      iVar3 = (**(code **)(puVar9[1] + 0x14))(*puVar9,param_2,param_3,param_4,param_5);
      iVar7 = iVar7 + -0x20;
      puVar9 = puVar9 + 8;
    } while (iVar3 == 0);
  }
  return iVar3;
}

