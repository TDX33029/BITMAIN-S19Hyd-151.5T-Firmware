// FUN_015276e8 @ 015276e8 size=296 calls_out=3 calls_in=8
// strings: 

void FUN_015276e8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar12 = FUN_01534eac(param_2 + 0x38,param_3);
  piVar7 = *(int **)(param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  do {
    iVar4 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar5 = *(int **)(param_2 + 0x58);
    if (piVar5 != (int *)0x0) {
      do {
        iVar4 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_0152780c;
    }
    uVar2 = *(undefined1 *)(param_2 + 0x30);
    FUN_01540b74(&local_60,param_2);
    piVar6 = *(int **)(param_2 + 0x40);
    local_30 = CONCAT31(local_30._1_3_,uVar2);
    do {
      iVar4 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar4 + 1;
    if (-1 < iVar4) {
      uVar8 = *(undefined4 *)(param_2 + 0x44);
      uVar2 = *(undefined1 *)(param_2 + 0x88);
      FUN_015263b8(param_1 + 0x17,param_2 + 0x5c);
      param_1[0x13] = uVar10;
      param_1[0x12] = uVar9;
      param_1[0x14] = uVar11;
      param_1[0x15] = piVar7;
      param_1[0x16] = piVar5;
      *param_1 = local_60;
      param_1[1] = uStack_5c;
      param_1[2] = uStack_58;
      param_1[3] = uStack_54;
      param_1[4] = local_50;
      param_1[5] = uStack_4c;
      param_1[6] = uStack_48;
      param_1[7] = uStack_44;
      param_1[8] = uStack_40;
      param_1[9] = local_3c;
      param_1[10] = uStack_38;
      param_1[0xb] = uStack_34;
      param_1[0xc] = local_30;
      param_1[0xd] = uStack_2c;
      param_1[0xf] = (int)((ulonglong)uVar12 >> 0x20);
      *(undefined1 *)(param_1 + 0x22) = uVar2;
      param_1[0x11] = uVar8;
      param_1[0x10] = piVar6;
      param_1[0xe] = (int)uVar12;
      return;
    }
  }
LAB_0152780c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x152780c);
  (*pcVar1)();
}

