// FUN_015263b8 @ 015263b8 size=260 calls_out=0 calls_in=5
// strings: 

void FUN_015263b8(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  piVar11 = (int *)*param_2;
  iVar2 = *piVar11;
  *piVar11 = iVar2 + 1;
  if (iVar2 != -1) {
    piVar12 = (int *)param_2[1];
    iVar2 = *piVar12;
    *piVar12 = iVar2 + 1;
    if (iVar2 != -1) {
      piVar8 = (int *)param_2[2];
      iVar2 = *piVar8;
      *piVar8 = iVar2 + 1;
      if (iVar2 != -1) {
        piVar9 = (int *)param_2[3];
        iVar2 = *piVar9;
        *piVar9 = iVar2 + 1;
        if (iVar2 != -1) {
          piVar10 = (int *)param_2[4];
          iVar2 = *piVar10;
          *piVar10 = iVar2 + 1;
          if (iVar2 != -1) {
            piVar5 = (int *)param_2[5];
            iVar2 = *piVar5;
            *piVar5 = iVar2 + 1;
            if (iVar2 != -1) {
              piVar6 = (int *)param_2[6];
              iVar2 = *piVar6;
              *piVar6 = iVar2 + 1;
              if (iVar2 != -1) {
                piVar7 = (int *)param_2[7];
                iVar2 = *piVar7;
                *piVar7 = iVar2 + 1;
                if (iVar2 != -1) {
                  piVar3 = (int *)param_2[8];
                  iVar2 = *piVar3;
                  *piVar3 = iVar2 + 1;
                  if (iVar2 != -1) {
                    piVar4 = (int *)param_2[9];
                    iVar2 = *piVar4;
                    *piVar4 = iVar2 + 1;
                    if (iVar2 != -1) {
                      piVar1 = (int *)param_2[10];
                      iVar2 = *piVar1;
                      *piVar1 = iVar2 + 1;
                      if (iVar2 != -1) {
                        param_1[10] = piVar1;
                        param_1[8] = piVar3;
                        param_1[9] = piVar4;
                        *param_1 = piVar11;
                        param_1[1] = piVar12;
                        param_1[2] = piVar8;
                        param_1[3] = piVar9;
                        param_1[4] = piVar10;
                        param_1[5] = piVar5;
                        param_1[6] = piVar6;
                        param_1[7] = piVar7;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0x15264b8);
  return;
}

