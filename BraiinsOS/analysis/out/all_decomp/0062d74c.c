// FUN_0062d74c @ 0062d74c size=816 calls_out=7 calls_in=11
// strings: .debug_

undefined8 FUN_0062d74c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *unaff_r7;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int *local_2934;
  char local_2930;
  int *local_292c;
  undefined1 auStack_2928 [10500];
  
  iVar4 = param_1[3];
  puVar10 = (undefined4 *)param_1[2];
  piVar9 = (int *)(iVar4 * 0x28);
  if (iVar4 != 0) {
    puVar7 = puVar10;
    unaff_r7 = piVar9;
    do {
      uVar12 = FUN_006189bc(param_1 + 4,*puVar7);
      if ((((int)uVar12 != 0) && ((int)((ulonglong)uVar12 >> 0x20) == param_4)) &&
         (iVar1 = thunk_FUN_016dd50a((int)uVar12,param_3,param_4), iVar1 == 0)) {
        if (puVar7[1] == 8) {
          piVar6 = (int *)((*(byte *)((int)puVar7 + 9) & 8) >> 3 ^ 1);
          unaff_r7 = (int *)0x0;
        }
        else {
          piVar6 = (int *)0x0;
          uVar3 = puVar7[4];
          if ((uVar3 <= (uint)param_1[1]) &&
             (piVar9 = (int *)puVar7[5], piVar9 <= (int *)(param_1[1] - uVar3))) {
            piVar8 = (int *)(*param_1 + uVar3);
            if ((*(byte *)((int)puVar7 + 9) & 8) == 0) {
              piVar6 = piVar8;
              unaff_r7 = piVar9;
            }
            else if ((&DAT_0000000b < piVar9) && (*piVar8 == 1)) {
              uVar12 = FUN_00612f00(param_2,piVar8[1]);
              unaff_r7 = (int *)((ulonglong)uVar12 >> 0x20);
              piVar6 = (int *)uVar12;
              FUN_016dd606(auStack_2928,0,0x2901);
              FUN_01268390(&local_2934,auStack_2928,piVar8 + 3,piVar9 + -3,uVar12);
              if (local_2934 != piVar9 + -3 || local_292c != unaff_r7) {
                piVar6 = (int *)0x0;
              }
              if (local_2930 != '\0') {
                piVar6 = (int *)0x0;
              }
            }
          }
        }
        goto LAB_0062d818;
      }
      unaff_r7 = unaff_r7 + -10;
      puVar7 = puVar7 + 10;
    } while (unaff_r7 != (int *)0x0);
  }
  iVar1 = thunk_FUN_016dd50a(".debug_",param_3,7);
  piVar6 = (int *)0x0;
  if (iVar1 == 0) {
    if (*(char *)(param_3 + 7) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_3,param_4,7,param_4,&DAT_018579e8);
    }
    if (iVar4 != 0) {
      unaff_r7 = param_1 + 4;
      do {
        uVar13 = FUN_006189bc(unaff_r7,*puVar10);
        iVar1 = (int)(uVar13 >> 0x20);
        iVar4 = (int)uVar13;
        if ((iVar4 != 0) && (0x7ffffffff < uVar13)) {
          iVar2 = thunk_FUN_016dd50a(&DAT_0056a2e0,iVar4,8);
          bVar11 = iVar2 == 0;
          if (bVar11) {
            iVar2 = iVar1 + -1;
          }
          if ((bVar11 && iVar2 == param_4) &&
             (iVar4 = thunk_FUN_016dd50a(iVar4 + 8,(char *)(param_3 + 7),iVar1 + -8), iVar4 == 0)) {
            piVar6 = (int *)0x0;
            if (puVar10[1] != 8) {
              uVar3 = puVar10[4];
              if ((((uVar3 <= (uint)param_1[1]) && (uVar5 = puVar10[5], uVar5 <= param_1[1] - uVar3)
                   ) && (7 < uVar5)) &&
                 ((piVar9 = (int *)(*param_1 + uVar3), *piVar9 == 0x42494c5a && piVar9[1] == 0 &&
                  (3 < uVar5 - 8)))) {
                uVar3 = piVar9[2];
                uVar12 = FUN_00612f00(param_2,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                              (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
                unaff_r7 = (int *)((ulonglong)uVar12 >> 0x20);
                iVar4 = FUN_0062da8c(piVar9 + 3,uVar5 - 0xc,(int *)uVar12,unaff_r7);
                piVar6 = (int *)0x0;
                if (iVar4 != 0) {
                  piVar6 = (int *)uVar12;
                }
              }
            }
            goto LAB_0062d818;
          }
        }
        piVar9 = piVar9 + -10;
        puVar10 = puVar10 + 10;
      } while (piVar9 != (int *)0x0);
      piVar6 = (int *)0x0;
    }
  }
LAB_0062d818:
  return CONCAT44(unaff_r7,piVar6);
}

