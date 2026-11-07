// FUN_0151b8b0 @ 0151b8b0 size=424 calls_out=10 calls_in=0
// strings: contentEncoding | contentEncoding

void FUN_0151b8b0(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar3 = FUN_0196b3a8(*param_3,param_3[1],&DAT_00567978,0x10);
  uVar6 = 0;
  if (iVar3 == 0) {
    if (*param_4 == '\x03') {
      uVar8 = *(undefined4 *)(param_4 + 8);
      iVar9 = *(int *)(param_4 + 0xc);
      iVar3 = FUN_0153a0ac(*(undefined4 *)(param_2 + 0x48),uVar8,iVar9);
      if (iVar3 == 0) goto LAB_0151ba40;
      uVar10 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "contentEncoding",0xf);
      if (iVar9 < 0) {
        uVar6 = 0;
LAB_0151b938:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,iVar9);
      }
      if (iVar9 == 0) {
        iVar4 = 1;
        iVar7 = 0;
      }
      else {
        uVar6 = 1;
        iVar4 = FUN_01298504(iVar9,1);
        if (iVar4 == 0) goto LAB_0151b938;
        iVar7 = iVar9;
      }
      FUN_01bed4e2(iVar4,uVar8,iVar9);
      piVar5 = (int *)thunk_FUN_01be5118(0x18);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *piVar5 = iVar7;
      piVar5[1] = iVar4;
      piVar5[2] = iVar9;
      piVar5[3] = iVar3;
      *(undefined8 *)(piVar5 + 4) = uVar10;
      param_1[1] = piVar5;
      param_1[2] = &DAT_01cfb390;
    }
    else {
      uVar10 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "contentEncoding",0xf);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      piVar5 = (int *)uVar10;
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x151ba58);
        (*pcVar1)();
      }
      uVar10 = FUN_015321a0();
      uVar6 = FUN_015956e0(piVar5,uVar6,piVar5,uVar6,uVar10,param_4,0x40);
      param_1[1] = 0;
      param_1[2] = uVar6;
    }
    uVar6 = 1;
  }
LAB_0151ba40:
  *param_1 = uVar6;
  return;
}

