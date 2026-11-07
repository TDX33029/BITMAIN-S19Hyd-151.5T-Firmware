// FUN_0166eac4 @ 0166eac4 size=364 calls_out=1 calls_in=4
// strings: 

void FUN_0166eac4(int *param_1,int *param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined *puStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)param_2[2];
  iVar7 = param_2[3];
  iVar5 = *param_2;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    pcVar2 = pcVar6;
    do {
      if (*pcVar2 != ' ' && *pcVar2 != '\t') {
        iVar9 = iVar7 - iVar3;
        pcVar8 = pcVar6 + iVar3;
        param_2[2] = (int)pcVar8;
        param_2[3] = iVar9;
        if ((iVar9 == 0) || (*pcVar8 != '#')) goto LAB_0166eb28;
        iVar9 = iVar9 + -1;
        param_2[2] = (int)(pcVar8 + 1);
        param_2[3] = iVar9;
        if (iVar9 != 0) {
          iVar4 = 1;
          goto LAB_0166ebe8;
        }
        iVar7 = 0;
        goto LAB_0166ec24;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (pcVar2 != pcVar6 + iVar7);
    iVar3 = iVar7;
  }
  iVar9 = iVar7 - iVar3;
  pcVar8 = pcVar6 + iVar3;
  param_2[2] = (int)pcVar8;
  param_2[3] = iVar9;
  goto LAB_0166eb28;
  while (iVar4 = iVar4 + 1, (iVar3 - iVar7) + iVar4 != 0) {
LAB_0166ebe8:
    bVar1 = pcVar2[iVar4];
    if (((bVar1 != 9) && (0x5e < bVar1 - 0x20)) && (-1 < (char)bVar1)) {
      iVar7 = iVar4 + -1;
      goto LAB_0166ec24;
    }
  }
  iVar7 = iVar9;
LAB_0166ec24:
  iVar9 = iVar9 - iVar7;
  pcVar8 = pcVar8 + 1 + iVar7;
LAB_0166eb28:
  local_40 = 0;
  puStack_4c = &DAT_0041950e;
  uStack_48 = 1;
  local_44 = 1;
  param_2[2] = (int)pcVar8;
  param_2[3] = iVar9;
  FUN_0167b99c(&local_3c,&puStack_4c);
  if (local_3c == 3) {
    param_1[1] = (int)pcVar6 - iVar5;
    param_1[2] = (int)pcVar8 - iVar5;
    *param_1 = 3;
    return;
  }
  param_1[1] = local_38;
  param_1[2] = iStack_34;
  param_1[3] = iStack_30;
  param_1[4] = iStack_2c;
  param_1[5] = iStack_28;
  *param_1 = local_3c;
  return;
}

