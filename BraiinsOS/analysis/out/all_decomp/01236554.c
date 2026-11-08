// FUN_01236554 @ 01236554 size=880 calls_out=2 calls_in=0
// strings: BuildErrorTooManyPatterns | SyntaxgivenExceededSizeLimitInvalidCaptureIndex | errTooManyGroups | BuildErrorTooManyPatterns

byte FUN_01236554(undefined4 *param_1,int **param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int **ppiVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  int *piVar11;
  int *local_50;
  int *local_4c;
  undefined1 *local_48;
  undefined1 local_41;
  int **local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int ***local_2c;
  char local_28;
  char local_27;
  
  piVar8 = (int *)*param_1;
  local_40 = param_2;
  if (*piVar8 == 1) {
    piVar10 = *param_2;
    piVar11 = param_2[1];
    pcVar9 = (code *)piVar11[3];
    iVar3 = (*pcVar9)(piVar10,"NFA",3);
    bVar2 = 1;
    if (iVar3 != 0) {
LAB_012366c0:
      return bVar2 & 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar9)(piVar10,"(",1);
      if (iVar3 != 0) goto LAB_012366c0;
      local_50 = piVar8 + 2;
      uVar1 = (*(code *)param_2[1][3])(*param_2,"BuildErrorTooManyPatterns",10);
      local_3c = (undefined *)((uint)local_3c._2_2_ << 0x10);
      local_3c = (undefined *)CONCAT31(local_3c._1_3_,uVar1);
      FUN_00fb2258(&local_40,&DAT_005691b4,4,&local_50,FUN_0121d95c);
      uVar4 = (uint)local_3c & 0xff;
      if (local_3c._1_1_ == '\x01' && uVar4 == 0) {
        if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
          uVar4 = (*(code *)local_40[1][3])(*local_40," }",2);
        }
        else {
          uVar4 = (*(code *)local_40[1][3])(*local_40,"}",1);
        }
      }
      else if (local_3c._1_1_ != '\0') goto LAB_012366c0;
    }
    else {
      iVar3 = (*pcVar9)(piVar10,"(\n",2);
      if (iVar3 != 0) goto LAB_012366c0;
      local_48 = &local_41;
      local_38 = param_2[2];
      local_34 = param_2[3];
      local_40 = &local_50;
      local_3c = &DAT_01880dc4;
      local_41 = 1;
      local_50 = piVar10;
      local_4c = piVar11;
      local_30 = piVar8 + 2;
      local_28 = FUN_00fb1f64(local_40,"BuildErrorTooManyPatterns",10);
      local_2c = &local_40;
      local_27 = '\0';
      FUN_00fb2258(&local_2c,&DAT_005691b4,4,&local_30,FUN_0121d95c);
      if (local_27 == '\x01' && local_28 == '\0') {
        if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
          ppiVar5 = *local_2c;
          uVar7 = 2;
          pcVar9 = (code *)local_2c[1][3];
          pcVar6 = " }";
        }
        else {
          ppiVar5 = *local_2c;
          uVar7 = 1;
          pcVar9 = (code *)local_2c[1][3];
          pcVar6 = "}";
        }
        iVar3 = (*pcVar9)(ppiVar5,pcVar6,uVar7);
        if (iVar3 != 0) {
          return 1;
        }
      }
      else if ((local_27 != '\0') || (local_28 != '\0')) {
        return 1;
      }
      uVar4 = (**(code **)(local_3c + 0xc))(local_40,&DAT_00414a81,2);
    }
    bVar2 = 1;
    if (uVar4 != 0) goto LAB_012366c0;
    piVar8 = *param_2;
    pcVar9 = (code *)param_2[1][3];
    pcVar6 = &DAT_00418e07;
  }
  else {
    local_50 = piVar8 + 2;
    uVar1 = (*(code *)param_2[1][3])(*param_2,"SyntaxgivenExceededSizeLimitInvalidCaptureIndex",6);
    local_3c = (undefined *)((uint)local_3c._2_2_ << 0x10);
    local_3c = (undefined *)CONCAT31(local_3c._1_3_,uVar1);
    uVar7 = FUN_00fb2258(&local_40,&DAT_003b522a,3,piVar8 + 1,FUN_013bbcdc);
    FUN_00fb2258(uVar7,"errTooManyGroups",3,&local_50,FUN_0121d708);
    bVar2 = local_3c._1_1_ | (byte)local_3c;
    if (local_3c._1_1_ != 1 || ((uint)local_3c & 1) != 0) goto LAB_012366c0;
    if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
      piVar8 = *local_40;
      uVar7 = 2;
      pcVar9 = (code *)local_40[1][3];
      pcVar6 = " }";
      goto LAB_01236880;
    }
    piVar8 = *local_40;
    pcVar9 = (code *)local_40[1][3];
    pcVar6 = "}";
  }
  uVar7 = 1;
LAB_01236880:
  bVar2 = (*pcVar9)(piVar8,pcVar6,uVar7);
  return bVar2 & 1;
}

