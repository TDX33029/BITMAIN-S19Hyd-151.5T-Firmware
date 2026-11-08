// FUN_00611d9c @ 00611d9c size=508 calls_out=0 calls_in=7
// strings: 

void FUN_00611d9c(undefined1 *param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  
  switch(*param_5) {
  case 0x1a:
    iVar3 = *(int *)(param_2 + 0x30);
    uVar2 = *(uint *)(param_2 + 0x34);
    uVar5 = param_5[2];
    if ((uVar5 <= uVar2) && (iVar3 = iVar3 + uVar5, uVar2 != uVar5)) {
      iVar6 = 0;
      do {
        if (*(char *)(iVar3 + iVar6) == '\0') {
LAB_00611fa0:
          *(int *)(param_1 + 4) = iVar3;
          *(int *)(param_1 + 8) = iVar6;
          *param_1 = 0x4f;
          return;
        }
        iVar6 = iVar6 + 1;
      } while (uVar2 - uVar5 != iVar6);
    }
    break;
  case 0x1b:
    iVar6 = *(int *)(param_2 + 0x68);
    if (iVar6 == 0) goto switchD_00611dbc_caseD_1c;
    iVar3 = *(int *)(iVar6 + 0x38);
    uVar2 = *(uint *)(iVar6 + 0x3c);
    uVar5 = param_5[2];
    if ((uVar5 <= uVar2) && (iVar3 = iVar3 + uVar5, uVar2 != uVar5)) {
      iVar6 = 0;
      do {
        if (*(char *)(iVar3 + iVar6) == '\0') goto LAB_00611fa0;
        iVar6 = iVar6 + 1;
      } while (uVar2 - uVar5 != iVar6);
    }
    break;
  default:
switchD_00611dbc_caseD_1c:
    *param_1 = 0x48;
    return;
  case 0x1d:
    puVar8 = *(uint **)(param_2 + 0x38);
    if (param_4 <= *(uint *)(param_2 + 0x3c)) {
      uVar10 = 0x38;
      lVar1 = (ulonglong)(param_3 & 0xff) * (ulonglong)(uint)param_5[2];
      uVar2 = (uint)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) goto LAB_00611f04;
      puVar8 = (uint *)((int)puVar8 + param_4);
      param_4 = *(uint *)(param_2 + 0x3c) - param_4;
      if (uVar2 <= param_4) {
        puVar9 = (uint *)((int)puVar8 + uVar2);
        param_4 = param_4 - uVar2;
        puVar8 = puVar9;
        if ((param_3 & 0xff) == 8) {
          if (7 < param_4) {
            puVar8 = (uint *)*puVar9;
            if (puVar9[1] != 0) goto LAB_00611f04;
            goto LAB_00611f64;
          }
        }
        else if (3 < param_4) {
          puVar8 = (uint *)*puVar9;
LAB_00611f64:
          iVar3 = *(int *)(param_2 + 0x30);
          uVar2 = *(uint *)(param_2 + 0x34);
          if ((puVar8 <= uVar2) && (iVar3 = iVar3 + (int)puVar8, (uint *)uVar2 != puVar8)) {
            iVar6 = 0;
            do {
              if (*(char *)(iVar3 + iVar6) == '\0') goto LAB_00611fa0;
              iVar6 = iVar6 + 1;
            } while (uVar2 - (int)puVar8 != iVar6);
          }
          break;
        }
      }
    }
    param_2 = 0;
    uVar10 = 0x13;
LAB_00611f04:
    *param_1 = uVar10;
    *(uint **)(param_1 + 4) = puVar8;
    *(uint **)(param_1 + 8) = puVar8;
    *(int *)(param_1 + 0xc) = param_2;
    return;
  case 0x1e:
    iVar3 = *(int *)(param_2 + 0x28);
    uVar2 = *(uint *)(param_2 + 0x2c);
    uVar5 = param_5[2];
    if ((uVar5 <= uVar2) && (iVar3 = iVar3 + uVar5, uVar2 != uVar5)) {
      iVar6 = 0;
      do {
        if (*(char *)(iVar3 + iVar6) == '\0') goto LAB_00611fa0;
        iVar6 = iVar6 + 1;
      } while (uVar2 - uVar5 != iVar6);
    }
    break;
  case 0x1f:
    uVar4 = param_5[2];
    uVar7 = param_5[3];
    *param_1 = 0x4f;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar7;
    return;
  }
  *(int *)(param_1 + 8) = iVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = 0x13;
  return;
}

