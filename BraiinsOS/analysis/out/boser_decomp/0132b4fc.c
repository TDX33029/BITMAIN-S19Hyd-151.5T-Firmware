// FUN_0132b4fc @ 0132b4fc size=376 calls_out=2 calls_in=0
// strings: 

ulonglong FUN_0132b4fc(undefined1 *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = 3;
  uVar2 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  default:
LAB_0132b554:
    return CONCAT44((int)((ulonglong)param_2 * 3),(uint)((int)((ulonglong)param_2 * 3 >> 0x20) != 0)
                   ) ^ 1;
  case 1:
    iVar5 = *(int *)(param_1 + 8) + 4;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar5 = 3;
    }
    return CONCAT44(iVar5 + param_2,(uint)(param_2 <= iVar5 + param_2));
  case 2:
    uVar7 = FUN_01325138(param_1 + 1,param_2);
    return uVar7;
  case 3:
    uVar4 = param_2 + (byte)param_1[1];
    return CONCAT44(uVar4 * 2 + 2,
                    (uint)((param_2 <= uVar4 && uVar4 < 0x80000000) && uVar4 != 0x7fffffff));
  case 4:
    uVar3 = 0;
    if (param_1[1] != '\0') {
      uVar3 = 1;
    }
    break;
  case 5:
    uVar7 = FUN_01325bc8(param_1 + 1,param_2);
    return uVar7;
  case 6:
    bVar6 = CARRY4(param_2,(uint)(byte)param_1[1]);
    param_2 = param_2 + (byte)param_1[1];
    if (!bVar6) goto LAB_0132b554;
    goto LAB_0132b694;
  case 7:
    uVar3 = (uint)(byte)param_1[1];
    break;
  case 8:
    goto switchD_0132b51c_caseD_8;
  case 10:
    iVar5 = 1;
    if (param_1[2] != '\0') {
      iVar5 = 2;
    }
    uVar4 = iVar5 + param_2;
    if (*(short *)(param_1 + 4) != 0) {
      uVar4 = uVar4 + 2;
    }
    if (uVar4 < param_2) goto LAB_0132b694;
    lVar1 = (ulonglong)(uVar4 >> 1) * 3;
    iVar5 = (int)lVar1;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    if (uVar4 != 0) {
      return (ulonglong)uVar4 << 0x20;
    }
    uVar4 = iVar5 + 1;
    uVar2 = 0;
    if (iVar5 != -1) {
      uVar2 = 1;
    }
    goto switchD_0132b51c_caseD_8;
  }
  uVar4 = param_2 + uVar3;
  uVar2 = 0;
  if ((CARRY4(param_2,uVar3)) || (uVar4 == 0xffffffff)) {
LAB_0132b694:
    return (ulonglong)uVar4 << 0x20;
  }
  uVar3 = uVar4 + (uVar4 + 1 >> 1);
  if (uVar4 + 1 >> 1 <= uVar3) {
    return CONCAT44(uVar3 + 2,(uint)(uVar3 < 0xfffffffe));
  }
switchD_0132b51c_caseD_8:
  return CONCAT44(uVar4,uVar2);
}

