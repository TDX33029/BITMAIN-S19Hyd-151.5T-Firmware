// FUN_014f7080 @ 014f7080 size=1548 calls_out=10 calls_in=7
// strings: i8i16 | {recursion limit reached} | {recursion limit reached} | const 

undefined4 FUN_014f7080(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_r1;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char local_30;
  char local_2f;
  int local_28;
  int local_24;
  
  iVar9 = *param_1;
  if (iVar9 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar2 = FUN_00faace8(param_1[4],"?",1);
    return uVar2;
  }
  uVar10 = param_1[1];
  uVar7 = param_1[2];
  if (uVar10 <= uVar7) {
LAB_014f746c:
    if ((param_1[4] == 0) || (iVar9 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar9 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  cVar1 = *(char *)(iVar9 + uVar7);
  uVar8 = uVar7 + 1;
  param_1[2] = uVar8;
  uVar6 = (uint)(byte)(cVar1 + 0x9f);
  if ((uVar6 < 0x1a) && ((0x3bcfbbfU >> uVar6 & 1) != 0)) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar2 = FUN_00faace8(param_1[4],(&PTR_s_i8i16_018b3854)[uVar6],
                         *(undefined4 *)(&DAT_00422494 + uVar6 * 4));
    return uVar2;
  }
  iVar3 = param_1[3];
  param_1[3] = iVar3 + 1U;
  if (500 < iVar3 + 1U) {
    if ((param_1[4] == 0) ||
       (iVar9 = FUN_00faace8(param_1[4],"{recursion limit reached}",0x19), iVar9 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  switch(cVar1) {
  case 'A':
  case 'S':
    if ((param_1[4] != 0) && (iVar9 = FUN_00faace8(param_1[4],&DAT_00418df9,1), iVar9 != 0)) {
      return 1;
    }
    iVar9 = FUN_014f7080(param_1);
    if (iVar9 != 0) {
      return 1;
    }
    if (cVar1 == 'A') {
      if ((param_1[4] != 0) && (iVar9 = FUN_00faace8(param_1[4],"; ",2), iVar9 != 0)) {
        return 1;
      }
      iVar9 = FUN_014f7968(param_1,1);
      if (iVar9 != 0) {
        return 1;
      }
    }
    iVar9 = param_1[4];
    if (iVar9 == 0) goto LAB_014f7624;
    puVar5 = &DAT_00418ec5;
LAB_014f765c:
    iVar9 = FUN_00faace8(iVar9,puVar5,1);
    goto joined_r0x014f7540;
  case 'B':
    iVar9 = FUN_014f9bfc(param_1);
    break;
  default:
    param_1[2] = uVar7;
    iVar9 = FUN_014f5b4c(param_1,0);
    break;
  case 'D':
    if ((param_1[4] != 0) && (iVar9 = FUN_00faace8(param_1[4],&DAT_0056753c,4), iVar9 != 0)) {
      return 1;
    }
    iVar9 = FUN_014f9fe8(param_1);
    if (iVar9 != 0) {
      return 1;
    }
    if (((*param_1 == 0) || (uVar7 = param_1[2], (uint)param_1[1] <= uVar7)) ||
       (*(char *)(*param_1 + uVar7) != 'L')) goto LAB_014f746c;
    param_1[2] = uVar7 + 1;
    FUN_014f9e14(&local_30,param_1);
    if (local_30 != '\0') {
LAB_014f7304:
      iVar9 = param_1[4];
      if (local_2f == '\0') {
        if (iVar9 == 0) goto LAB_014f76a8;
        uVar2 = 0x10;
        pcVar4 = &DAT_00564580;
      }
      else {
        if (iVar9 == 0) goto LAB_014f76a8;
        uVar2 = 0x19;
        pcVar4 = "{recursion limit reached}";
      }
      iVar9 = FUN_00faace8(iVar9,pcVar4,uVar2);
      if (iVar9 != 0) {
        return 1;
      }
LAB_014f76a8:
      *(char *)(param_1 + 1) = local_2f;
      *param_1 = 0;
      return 0;
    }
    if (local_28 == 0 && local_24 == 0) goto LAB_014f7624;
    uVar2 = extraout_r1;
    if (param_1[4] != 0) {
      uVar11 = FUN_00faace8(param_1[4]," + ",3);
      uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        return 1;
      }
    }
    iVar9 = FUN_014f81fc(param_1,uVar2,local_28,local_24);
    break;
  case 'F':
    iVar9 = FUN_014f9934(param_1);
joined_r0x014f7540:
    if (iVar9 != 0) {
      return 1;
    }
    goto LAB_014f7624;
  case 'O':
  case 'P':
    uVar6 = param_1[4];
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      iVar9 = FUN_00faace8(uVar6,"*",1);
      if (iVar9 != 0) {
        return 1;
      }
    }
    if (cVar1 == 'P') {
      if (uVar6 != 0) {
        uVar2 = 6;
        pcVar4 = "const ";
        goto LAB_014f75f8;
      }
    }
    else if (uVar6 != 0) goto LAB_014f75f4;
    goto LAB_014f760c;
  case 'Q':
  case 'R':
    uVar6 = 0;
    if (param_1[4] != 0) {
      iVar3 = FUN_00faace8(param_1[4],"&",1);
      uVar6 = 1;
      if (iVar3 != 0) {
        return 1;
      }
    }
    if ((uVar8 < uVar10) && (uVar6 = (uint)*(byte *)(iVar9 + uVar8), uVar6 == 0x4c)) {
      param_1[2] = uVar7 + 2;
      FUN_014f9e14(&local_30,param_1);
      if (local_30 != '\0') goto LAB_014f7304;
      uVar6 = 0;
      if (local_28 != 0 || local_24 != 0) {
        iVar9 = FUN_014f81fc(param_1);
        if (iVar9 != 0) {
          return 1;
        }
        uVar6 = 0;
        if (param_1[4] != 0) {
          iVar9 = FUN_00faace8(param_1[4],&DAT_0041545b,1);
          uVar6 = 1;
          if (iVar9 != 0) {
            return 1;
          }
        }
      }
    }
    if (cVar1 != 'R') {
      uVar6 = param_1[4];
    }
    if (cVar1 != 'R' && uVar6 != 0) {
LAB_014f75f4:
      pcVar4 = &DAT_005686cc;
      uVar2 = 4;
LAB_014f75f8:
      iVar9 = FUN_00faace8(uVar6,pcVar4,uVar2);
      if (iVar9 != 0) {
        return 1;
      }
    }
LAB_014f760c:
    iVar9 = FUN_014f7080(param_1);
    break;
  case 'T':
    if ((param_1[4] != 0) && (iVar9 = FUN_00faace8(param_1[4],"(",1), iVar9 != 0)) {
      return 1;
    }
    uVar12 = FUN_014f9f38(param_1);
    if ((uVar12 & 1) != 0) {
      return 1;
    }
    iVar9 = param_1[4];
    if ((int)(uVar12 >> 0x20) == 1) {
      if (iVar9 != 0) {
        iVar3 = FUN_00faace8(iVar9,&DAT_004144ea,1);
        if (iVar3 != 0) {
          return 1;
        }
        goto LAB_014f7650;
      }
    }
    else if (iVar9 != 0) {
LAB_014f7650:
      puVar5 = &DAT_00418e07;
      goto LAB_014f765c;
    }
    goto LAB_014f7624;
  }
  uVar2 = 1;
  if (iVar9 == 0) {
LAB_014f7624:
    uVar2 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
      return 0;
    }
  }
  return uVar2;
}

