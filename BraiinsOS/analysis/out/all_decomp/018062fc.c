// FUN_018062fc @ 018062fc size=792 calls_out=0 calls_in=2
// strings: 

int * FUN_018062fc(int *param_1,int param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_1[6];
  if (param_4 < uVar8) {
    uVar5 = param_1[5];
    param_5 = uVar8 - param_4;
  }
  else {
    if (uVar8 < param_4) {
      uVar8 = (param_4 + param_1[2]) - uVar8;
      if (uVar8 != 0) {
        uVar6 = param_1[1];
        iVar2 = uVar6 * 0xc;
        do {
          if ((uint)param_1[3] <= uVar6) {
            if (param_1[3] != uVar6) goto LAB_018063ac;
            break;
          }
          uVar6 = uVar6 + 1;
          iVar9 = *param_1 + iVar2;
          iVar2 = iVar2 + 0xc;
          uVar4 = *(int *)(iVar9 + 4) + *(int *)(iVar9 + 8);
          if (uVar8 < uVar4) {
            uVar6 = param_1[3];
            param_1[2] = uVar8;
            goto LAB_018063b8;
          }
          uVar8 = uVar8 - uVar4;
          param_1[1] = uVar6;
        } while (uVar8 != 0);
      }
      param_1[2] = 0;
    }
LAB_018063ac:
    uVar6 = param_1[3];
    if (uVar6 != 0) {
LAB_018063b8:
      uVar4 = param_1[1];
      if (uVar4 < uVar6) {
        uVar3 = param_1[2];
        iVar9 = *param_1 + uVar4 * 0xc;
        uVar1 = *(uint *)(iVar9 + 4);
        iVar2 = *(int *)(iVar9 + 8);
        if (uVar3 < uVar1) {
          uVar1 = uVar1 - uVar3;
        }
        else {
          iVar2 = (uVar1 + iVar2) - uVar3;
          uVar1 = 0;
        }
        if (uVar1 < param_5) {
          uVar5 = param_4 + uVar1;
          uVar7 = param_4 + param_5;
          param_1[7] = *(int *)(*param_1 + uVar4 * 0xc);
          uVar8 = uVar5 + iVar2;
          param_1[5] = uVar5;
          param_1[6] = uVar8;
          if (uVar7 < uVar8) {
            param_1[6] = uVar7;
            uVar3 = param_5 + uVar3;
            if (uVar3 != 0) {
              do {
                uVar4 = uVar4 + 1;
                uVar8 = *(int *)(iVar9 + 4) + *(int *)(iVar9 + 8);
                if (uVar3 < uVar8) goto LAB_0180646c;
                uVar3 = uVar3 - uVar8;
                param_1[1] = uVar4;
              } while ((uVar3 != 0) && (iVar9 = iVar9 + 0xc, uVar4 != uVar6));
            }
            uVar3 = 0;
LAB_0180646c:
            param_1[2] = uVar3;
            uVar8 = uVar7;
          }
          else {
            uVar3 = uVar1 + iVar2 + uVar3;
            if (uVar3 != 0) {
              do {
                uVar4 = uVar4 + 1;
                uVar1 = *(int *)(iVar9 + 4) + *(int *)(iVar9 + 8);
                if (uVar3 < uVar1) {
                  param_5 = uVar8 - param_4;
                  param_1[2] = uVar3;
                  goto LAB_01806328;
                }
                uVar3 = uVar3 - uVar1;
                param_1[1] = uVar4;
              } while ((uVar3 != 0) && (iVar9 = iVar9 + 0xc, uVar4 != uVar6));
            }
            param_1[2] = 0;
            param_5 = uVar8 - param_4;
          }
        }
        else {
          uVar3 = param_5 + uVar3;
          param_1[5] = -1;
          param_1[6] = -1;
          if (uVar3 != 0) {
            do {
              uVar4 = uVar4 + 1;
              uVar8 = *(int *)(iVar9 + 4) + *(int *)(iVar9 + 8);
              if (uVar3 < uVar8) {
                param_5 = ~param_4;
                uVar5 = 0xffffffff;
                uVar8 = 0xffffffff;
                param_1[2] = uVar3;
                goto LAB_01806328;
              }
              uVar3 = uVar3 - uVar8;
              param_1[1] = uVar4;
            } while ((uVar3 != 0) && (iVar9 = iVar9 + 0xc, uVar4 != uVar6));
          }
          param_5 = ~param_4;
          uVar5 = 0xffffffff;
          param_1[2] = 0;
          uVar8 = 0xffffffff;
        }
        goto LAB_01806328;
      }
    }
    uVar5 = 0xffffffff;
    param_5 = ~param_4;
    uVar8 = 0xffffffff;
    param_1[5] = -1;
    param_1[6] = -1;
  }
LAB_01806328:
  if (param_5 < 3 || (param_4 < uVar5 || uVar8 <= param_4)) {
    return param_1;
  }
  uVar8 = *param_3;
  if ((uVar8 == 0) || (*(uint *)(param_2 + uVar8 * 8 + -4) < param_5 && uVar8 < 0x1000)) {
    iVar2 = param_1[7];
    *(uint *)(param_2 + uVar8 * 8 + 4) = param_5;
    *(int *)(param_2 + *param_3 * 8) = iVar2 + 3;
    *param_3 = *param_3 + 1;
    return (int *)0x0;
  }
  return param_1;
}

