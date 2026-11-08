// FUN_01525e3c @ 01525e3c size=624 calls_out=10 calls_in=1
// strings: itemsInlineTable | additionalItems | additionalItems | additionalItems

void FUN_01525e3c(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [56];
  int *local_b0;
  int local_ac;
  undefined1 local_60;
  int local_58;
  undefined *local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  undefined *local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  pcVar4 = (char *)FUN_0196b3a8(*param_3,param_3[1],"itemsInlineTable",5);
  if (pcVar4 == (char *)0x0) {
LAB_01525f90:
    *param_1 = 0;
    return;
  }
  cVar2 = *pcVar4;
  if (cVar2 == '\x01') {
    if (pcVar4[1] == '\0') {
      uVar11 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "additionalItems",0xf);
      puVar9 = (undefined8 *)thunk_FUN_01be5118(8);
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar9 = uVar11;
      *param_1 = 1;
      param_1[1] = puVar9;
      param_1[2] = &DAT_01cfb370;
      return;
    }
    goto LAB_01525f90;
  }
  if (cVar2 != '\x04') {
    if (cVar2 != '\x05') {
      uVar11 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "additionalItems",0xf);
      uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
      piVar8 = (int *)uVar11;
      do {
        iVar5 = *piVar8;
        bVar10 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar10);
      *piVar8 = iVar5 + 1;
      if (-1 < iVar5) {
        uVar11 = FUN_015321a0();
        uVar6 = FUN_01595a70(piVar8,uVar6,piVar8,uVar6,uVar11,param_4,0x23);
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = uVar6;
        return;
      }
LAB_015260b0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15260b0);
      (*pcVar1)();
    }
    goto LAB_01525f90;
  }
  FUN_01526248(auStack_e8,param_2,"additionalItems",0xf);
  cVar2 = *param_4;
  iVar5 = *(int *)(pcVar4 + 0xc);
  if (cVar2 == '\x05') {
    uVar3 = FUN_016731b0(local_60,param_4);
    FUN_0156aca8(&local_58,auStack_e8,param_4,uVar3);
    if (local_58 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      local_38 = local_50;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      local_40 = local_58;
      local_3c = local_54;
      local_2c = iVar5;
      piVar8 = (int *)thunk_FUN_01be5118(0x18);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      local_54 = &DAT_01cfac30;
      *piVar8 = local_40;
      piVar8[1] = (int)local_3c;
      piVar8[2] = local_38;
      piVar8[3] = iStack_34;
      piVar8[4] = iStack_30;
      piVar8[5] = local_2c;
    }
  }
  else {
    bVar10 = cVar2 == '\x01';
    uVar6 = 0;
    if (bVar10) {
      cVar2 = param_4[1];
    }
    if (!bVar10 || cVar2 != '\0') goto LAB_01526070;
    do {
      iVar7 = *local_b0;
      bVar10 = (bool)hasExclusiveAccess(local_b0);
    } while (!bVar10);
    *local_b0 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_015260b0;
    piVar8 = (int *)thunk_FUN_01be5118(0xc);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *piVar8 = (int)local_b0;
    piVar8[1] = local_ac;
    piVar8[2] = iVar5;
    local_54 = &DAT_01cfac50;
  }
  uVar6 = 1;
  param_1[1] = piVar8;
  param_1[2] = local_54;
LAB_01526070:
  *param_1 = uVar6;
  FUN_014ff9e0(auStack_e8);
  return;
}

