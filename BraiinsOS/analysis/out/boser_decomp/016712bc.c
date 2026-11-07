// FUN_016712bc @ 016712bc size=324 calls_out=2 calls_in=1
// strings: 

void FUN_016712bc(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = FUN_016798f4(param_3);
  if ((int)uVar7 == 0) {
    iVar5 = *param_2;
    piVar3 = (int *)param_2[1];
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_016713fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16713fc);
      (*pcVar1)();
    }
    piVar4 = (int *)param_2[2];
    if (piVar4 != (int *)0x0) {
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_016713fc;
    }
    param_1[1] = iVar5;
    param_1[2] = (int)piVar3;
    param_1[3] = (int)piVar4;
    *param_1 = -0x7ffffff6;
  }
  else {
    iVar5 = param_2[1];
    iVar6 = *param_2;
    local_48 = *(undefined4 *)(iVar5 + 0xc);
    local_44 = *(undefined4 *)(iVar5 + 0x10);
    local_40 = *(undefined4 *)(iVar5 + 0x14);
    uStack_3c = *(undefined4 *)(iVar5 + 0x18);
    uStack_38 = *(undefined4 *)(iVar5 + 0x1c);
    local_34 = *(undefined4 *)(iVar5 + 0x20);
    uStack_30 = *(undefined4 *)(iVar5 + 0x24);
    uStack_2c = *(undefined4 *)(iVar5 + 0x28);
    uStack_28 = *(undefined4 *)(iVar5 + 0x2c);
    FUN_0166bf5c(&local_80,iVar6,&local_48,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if (local_80 == -0x7ffffff6) {
      piVar3 = (int *)param_2[2];
      if (piVar3 != (int *)0x0) {
        do {
          iVar5 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_016713fc;
      }
      param_1[2] = local_7c;
      *param_1 = -0x7ffffff6;
      param_1[1] = iVar6;
      param_1[3] = (int)piVar3;
    }
    else {
      param_1[2] = local_78;
      param_1[3] = iStack_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      param_1[6] = iStack_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      *param_1 = local_80;
      param_1[1] = local_7c;
    }
  }
  return;
}

