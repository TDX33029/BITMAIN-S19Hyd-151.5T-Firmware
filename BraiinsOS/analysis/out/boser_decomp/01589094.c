// FUN_01589094 @ 01589094 size=296 calls_out=5 calls_in=1
// strings: 

void FUN_01589094(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  piVar4 = (int *)*param_1;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_015891b8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15891b8);
    (*pcVar1)();
  }
  uVar9 = param_1[1];
  if (param_4 == 0) {
    local_44[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar7 = *(int **)(param_4 + 0xc);
    do {
      iVar3 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_015891b8;
    uVar8 = *(undefined4 *)(param_4 + 0x10);
    piVar6 = piVar4 + 2;
    uVar5 = (*(int **)(param_4 + 4))[1];
    if (uVar9 < uVar5) {
      uVar5 = 0;
    }
    else {
      iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar6,uVar5);
      if (iVar3 != 0) {
        uVar5 = 0;
      }
      piVar6 = (int *)((int)piVar6 + uVar5);
    }
    local_2c = FUN_016bc0ec(piVar6,uVar9 - uVar5);
    local_38 = 3;
    local_44[0] = 2;
    local_34 = piVar7;
    local_30 = uVar8;
  }
  uVar10 = FUN_01531840(param_3);
  FUN_015946b8(piVar4,uVar9,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2);
  return;
}

