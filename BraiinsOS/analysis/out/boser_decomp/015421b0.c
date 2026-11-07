// FUN_015421b0 @ 015421b0 size=332 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_015421b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  iVar3 = FUN_01578ae8();
  uVar4 = 0;
  if (iVar3 == 0) {
    piVar5 = *(int **)(param_1 + 0x30);
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_015422f8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15422f8);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(param_1 + 0x34);
    if (param_4 == 0) {
      local_44[0] = 0;
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
      if (iVar3 < 0) goto LAB_015422f8;
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      piVar7 = piVar5 + 2;
      uVar9 = (*(int **)(param_4 + 4))[1];
      if (uVar8 < uVar9) {
        uVar9 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar7,uVar9);
        if (iVar3 != 0) {
          uVar9 = 0;
        }
        piVar7 = (int *)((int)piVar7 + uVar9);
      }
      local_2c = FUN_016bc0ec(piVar7,uVar8 - uVar9);
      local_38 = 3;
      local_44[0] = 2;
      local_34 = piVar6;
      local_30 = uVar4;
    }
    uVar10 = FUN_01531840(param_3);
    uVar4 = FUN_01594418(piVar5,uVar8,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2,
                         param_1 + 0x18);
  }
  return uVar4;
}

