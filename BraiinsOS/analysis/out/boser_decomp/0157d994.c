// FUN_0157d994 @ 0157d994 size=340 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_0157d994(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  if ((*param_2 != '\x02') ||
     (uVar3 = 0, *(int *)(param_2 + 8) == 2 && *(int *)(param_2 + 0xc) == 0)) {
    piVar5 = (int *)*param_1;
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_0157dae4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x157dae4);
      (*pcVar1)();
    }
    uVar8 = param_1[1];
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
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_0157dae4;
      piVar9 = piVar5 + 2;
      uVar3 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = (*(int **)(param_4 + 4))[1];
      if (uVar8 < uVar7) {
        uVar7 = 0;
      }
      else {
        iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar7);
        if (iVar4 != 0) {
          uVar7 = 0;
        }
        piVar9 = (int *)((int)piVar9 + uVar7);
      }
      local_2c = FUN_016bc0ec(piVar9,uVar8 - uVar7);
      local_38 = 3;
      local_44[0] = 2;
      local_34 = piVar6;
      local_30 = uVar3;
    }
    uVar10 = FUN_01531840(param_3);
    uVar3 = FUN_01595634(piVar5,uVar8,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2,
                         4);
  }
  return uVar3;
}

