// FUN_016729e0 @ 016729e0 size=324 calls_out=3 calls_in=1
// strings: 

void FUN_016729e0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  
  piVar6 = (int *)param_2[1];
  piVar5 = (int *)param_2[2];
  if (piVar6[4] == 0) {
    uVar7 = *param_2;
    if (piVar5 == (int *)0x0) goto LAB_01672b00;
LAB_01672ae4:
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_01672b20:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1672b20);
      (*pcVar1)();
    }
  }
  else {
    if (piVar5 == (int *)0x0) {
      uVar7 = *param_2;
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + 1;
LAB_01672aa0:
      if (iVar3 < 0) goto LAB_01672b20;
    }
    else {
      if ((param_3 == piVar6) ||
         ((param_3[4] == piVar6[4] && (iVar3 = thunk_FUN_01bed842(param_3[3],piVar6[3]), iVar3 == 0)
          ))) {
        uVar7 = *param_2;
        goto LAB_01672ae4;
      }
      uVar7 = *param_2;
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01672b20;
      if (piVar5 != (int *)0x0) {
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + 1;
        goto LAB_01672aa0;
      }
    }
    piVar4 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar4 = 1;
    piVar4[1] = 1;
    piVar4[2] = (int)piVar6;
    piVar4[3] = (int)piVar5;
    piVar5 = piVar4;
  }
LAB_01672b00:
  *param_1 = uVar7;
  param_1[1] = param_3;
  param_1[2] = piVar5;
  return;
}

