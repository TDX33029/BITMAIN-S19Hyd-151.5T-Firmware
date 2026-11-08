// FUN_019bb288 @ 019bb288 size=324 calls_out=4 calls_in=10
// strings: 

void FUN_019bb288(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  undefined1 uVar8;
  int *unaff_r6;
  int iVar9;
  ulonglong uVar10;
  uint local_30;
  
  uVar3 = 0;
  if (*(char *)(param_2 + 1) == '\0') {
    piVar4 = (int *)FUN_01be3244();
    piVar7 = (int *)*param_2;
    do {
      while( true ) {
        uVar8 = SUB41(unaff_r6,0);
        *piVar4 = 0;
        unaff_r6 = (int *)FUN_01be2d7c(piVar7[5]);
        if (unaff_r6 == (int *)0x0) {
          iVar9 = *piVar4;
          *(undefined1 *)(param_2 + 1) = 1;
          uVar3 = 0;
          if (iVar9 == 0) goto LAB_019bb3b0;
          local_30 = local_30 & 0xffffff00;
          uVar10 = (ulonglong)local_30 << 0x20;
          goto LAB_019bb398;
        }
        psVar6 = (short *)((int)unaff_r6 + 0x13);
        iVar5 = FUN_01bedbda(psVar6);
        if (iVar5 == 1) break;
        if (iVar5 != 2) goto LAB_019bb350;
        if (*psVar6 != 0x2e2e) {
          iVar5 = 2;
          goto LAB_019bb350;
        }
      }
    } while (*(char *)psVar6 == '.');
    iVar5 = 1;
LAB_019bb350:
    iVar9 = *unaff_r6;
    param_2 = (undefined4 *)unaff_r6[1];
    uVar8 = *(undefined1 *)((int)unaff_r6 + 0x12);
    uVar10 = FUN_00664758(psVar6,iVar5 + 1);
    do {
      iVar5 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19bb3c8);
      (*pcVar1)();
    }
    if ((int)uVar10 == 0) {
      uVar10 = uVar10 & 0xffffffff00000000;
    }
LAB_019bb398:
    param_1[8] = piVar7;
    *(ulonglong *)(param_1 + 2) = uVar10;
    param_1[4] = iVar9;
    param_1[5] = param_2;
    uVar3 = 1;
    *(undefined1 *)(param_1 + 6) = uVar8;
  }
LAB_019bb3b0:
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

