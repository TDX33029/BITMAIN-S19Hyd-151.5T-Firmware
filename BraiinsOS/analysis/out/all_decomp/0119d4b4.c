// FUN_0119d4b4 @ 0119d4b4 size=340 calls_out=3 calls_in=23
// strings: 

void FUN_0119d4b4(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar13 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
  uVar11 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar12 = *(undefined4 *)(param_2 + 0x50);
  piVar9 = *(int **)(param_2 + 0x54);
  do {
    iVar6 = *piVar9;
    bVar4 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar4);
  *piVar9 = iVar6 + 1;
  if (-1 < iVar6) {
    piVar7 = *(int **)(param_2 + 0x58);
    if (piVar7 != (int *)0x0) {
      do {
        iVar6 = *piVar7;
        bVar4 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar4);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_0119d604;
    }
    uVar2 = *(undefined1 *)(param_2 + 0x30);
    FUN_01223904(&local_58,param_2);
    piVar8 = *(int **)(param_2 + 0x40);
    do {
      iVar6 = *piVar8;
      bVar4 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar4);
    *piVar8 = iVar6 + 1;
    if (-1 < iVar6) {
      uVar5 = *(undefined4 *)(param_2 + 0x44);
      uVar3 = *(undefined1 *)(param_2 + 0x88);
      FUN_0119dc58(param_1 + 0x17,param_2 + 0x5c);
      param_1[0x13] = uVar10;
      param_1[0x12] = uVar11;
      param_1[0x14] = uVar12;
      param_1[0x15] = piVar9;
      param_1[0x16] = piVar7;
      *param_1 = local_58;
      param_1[1] = uStack_54;
      param_1[2] = uStack_50;
      param_1[3] = uStack_4c;
      param_1[4] = uStack_48;
      param_1[5] = uStack_44;
      param_1[6] = local_40;
      param_1[7] = uStack_3c;
      param_1[8] = uStack_38;
      param_1[9] = uStack_34;
      param_1[10] = uStack_30;
      param_1[0xb] = uStack_2c;
      param_1[0x11] = uVar5;
      *(undefined8 *)(param_1 + 0xe) = uVar13;
      *(undefined1 *)(param_1 + 0x22) = uVar3;
      param_1[0x10] = piVar8;
      *(undefined1 *)(param_1 + 0xc) = uVar2;
      return;
    }
  }
LAB_0119d604:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x119d604);
  (*pcVar1)();
}

