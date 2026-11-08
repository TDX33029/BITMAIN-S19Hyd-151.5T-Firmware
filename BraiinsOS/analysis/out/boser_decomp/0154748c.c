// FUN_0154748c @ 0154748c size=368 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0154748c(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_50 [3];
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  uVar4 = 0;
  if (*param_2 == '\x02') {
    uVar10 = *(undefined8 *)(param_1 + 2);
    iVar3 = FUN_01590374((int)uVar10,param_2 + 8);
    if (iVar3 == 0) {
      piVar5 = (int *)*param_1;
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_015475f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15475f8);
        (*pcVar1)();
      }
      uVar9 = param_1[1];
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
          iVar3 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_015475f8;
        uVar4 = *(undefined4 *)(param_4 + 0x10);
        piVar6 = piVar5 + 2;
        uVar7 = (*(int **)(param_4 + 4))[1];
        if (uVar9 < uVar7) {
          uVar7 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar6,uVar7);
          if (iVar3 != 0) {
            uVar7 = 0;
          }
          piVar6 = (int *)((int)piVar6 + uVar7);
        }
        local_38 = FUN_016bc0ec(piVar6,uVar9 - uVar7);
        local_44 = 3;
        local_50[0] = 2;
        local_40 = piVar8;
        local_3c = uVar4;
      }
      uVar11 = FUN_01531840(param_3);
      uVar4 = FUN_01594618((int)uVar10,piVar5,uVar9,local_50,(int)uVar11,
                           (int)((ulonglong)uVar11 >> 0x20),param_2);
    }
  }
  return uVar4;
}

