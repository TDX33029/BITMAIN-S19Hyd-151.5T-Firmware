// FUN_01587914 @ 01587914 size=464 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_01587914(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 extraout_s1;
  double dVar12;
  undefined8 uVar13;
  undefined4 local_60 [3];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined4 local_34;
  
  if (*param_2 == '\x04') {
    pcVar3 = *(char **)(param_2 + 8);
    iVar9 = 0;
    for (iVar5 = *(int *)(param_2 + 0xc) * 0x18; iVar5 != 0; iVar5 = iVar5 + -0x18) {
      if ((*pcVar3 != '\x02') ||
         ((*(int *)(pcVar3 + 8) == 2 && *(int *)(pcVar3 + 0xc) == 0 &&
          (dVar12 = *(double *)(pcVar3 + 0x10), uVar11 = FUN_01be6548(SUB84(dVar12,0)),
          dVar12 - (double)CONCAT44(extraout_s1,uVar11) != 0.0)))) {
        piVar7 = (int *)*param_1;
        do {
          iVar5 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar5 + 1;
        if (iVar5 < 0) {
LAB_01587ae0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1587ae0);
          (*pcVar1)();
        }
        uVar8 = param_1[1];
        if (param_4 == 0) {
          local_60[0] = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar4 = *(int **)(param_4 + 0xc);
          do {
            iVar5 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_01587ae0;
          uVar11 = *(undefined4 *)(param_4 + 0x10);
          piVar10 = piVar7 + 2;
          uVar6 = (*(int **)(param_4 + 4))[1];
          if (uVar8 < uVar6) {
            uVar6 = 0;
          }
          else {
            iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar10,uVar6);
            if (iVar5 != 0) {
              uVar6 = 0;
            }
            piVar10 = (int *)((int)piVar10 + uVar6);
          }
          local_48 = FUN_016bc0ec(piVar10,uVar8 - uVar6);
          local_54 = 3;
          local_60[0] = 2;
          local_50 = piVar4;
          local_4c = uVar11;
        }
        local_40 = 0x80000001;
        local_3c = iVar9;
        local_34 = param_3;
        uVar13 = FUN_01531840(&local_40);
        uVar11 = FUN_01595634(piVar7,uVar8,local_60,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),
                              pcVar3,4);
        return uVar11;
      }
      pcVar3 = pcVar3 + 0x18;
      iVar9 = iVar9 + 1;
    }
  }
  return 0;
}

