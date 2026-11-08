// FUN_0071d020 @ 0071d020 size=544 calls_out=1 calls_in=7
// strings: 

void FUN_0071d020(char *param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined2 local_34;
  char local_32;
  int local_30;
  int local_2c;
  char local_28;
  undefined2 local_27;
  char local_25;
  uint local_24;
  int local_20;
  uint local_1c;
  
  switch(*param_5) {
  case 0x1a:
    iVar3 = *(int *)(param_2 + 0x30);
    uVar7 = *(uint *)(param_2 + 0x34);
    uVar4 = param_5[2];
    if ((uVar4 <= uVar7) && (iVar3 = iVar3 + uVar4, uVar7 != uVar4)) {
      iVar5 = 0;
      do {
        if (*(char *)(iVar3 + iVar5) == '\0') goto LAB_0071d22c;
        iVar5 = iVar5 + 1;
      } while (uVar7 - uVar4 != iVar5);
    }
    break;
  case 0x1b:
    iVar3 = *(int *)(param_2 + 0x68);
    if (iVar3 == 0) goto switchD_0071d04c_caseD_1c;
    uVar7 = *(uint *)(iVar3 + 0x3c);
    uVar4 = param_5[2];
    iVar3 = *(int *)(iVar3 + 0x38);
    if ((uVar4 <= uVar7) && (iVar3 = iVar3 + uVar4, uVar7 != uVar4)) {
      iVar5 = 0;
      do {
        if (*(char *)(iVar3 + iVar5) == '\0') goto LAB_0071d22c;
        iVar5 = iVar5 + 1;
      } while (uVar7 - uVar4 != iVar5);
    }
    break;
  default:
switchD_0071d04c_caseD_1c:
    cVar2 = 'H';
    goto LAB_0071d220;
  case 0x1d:
    local_30 = *(int *)(param_2 + 0x38);
    if (param_4 <= *(uint *)(param_2 + 0x3c)) {
      lVar1 = (ulonglong)(param_3 & 0xff) * (ulonglong)(uint)param_5[2];
      uVar4 = (uint)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
        local_28 = '8';
        local_20 = local_30;
        goto LAB_0071d180;
      }
      local_30 = local_30 + param_4;
      param_4 = *(uint *)(param_2 + 0x3c) - param_4;
      if (uVar4 <= param_4) {
        local_2c = param_4 - uVar4;
        local_30 = local_30 + uVar4;
        FUN_007194a0(&local_28,&local_30);
        if (local_28 != 'O') {
          local_32 = local_25;
          local_34 = local_27;
          param_3 = local_1c;
          param_4 = local_24;
          goto LAB_0071d180;
        }
        uVar4 = *(uint *)(param_2 + 0x34);
        iVar3 = *(int *)(param_2 + 0x30);
        if ((local_24 <= uVar4) && (iVar3 = iVar3 + local_24, uVar4 != local_24)) {
          iVar5 = 0;
          do {
            if (*(char *)(iVar3 + iVar5) == '\0') goto LAB_0071d22c;
            iVar5 = iVar5 + 1;
          } while (uVar4 - local_24 != iVar5);
        }
        break;
      }
    }
    param_3 = 0;
    local_28 = '\x13';
    local_20 = local_30;
LAB_0071d180:
    param_1[3] = local_32;
    *(undefined2 *)(param_1 + 1) = local_34;
    *(uint *)(param_1 + 4) = param_4;
    *(int *)(param_1 + 8) = local_20;
    *(uint *)(param_1 + 0xc) = param_3;
    *param_1 = local_28;
    return;
  case 0x1e:
    iVar3 = *(int *)(param_2 + 0x28);
    uVar7 = *(uint *)(param_2 + 0x2c);
    uVar4 = param_5[2];
    if ((uVar4 <= uVar7) && (iVar3 = iVar3 + uVar4, uVar7 != uVar4)) {
      iVar5 = 0;
      do {
        if (*(char *)(iVar3 + iVar5) == '\0') goto LAB_0071d22c;
        iVar5 = iVar5 + 1;
      } while (uVar7 - uVar4 != iVar5);
    }
    break;
  case 0x1f:
    uVar6 = param_5[2];
    uVar8 = param_5[3];
    *param_1 = 'O';
    *(undefined4 *)(param_1 + 4) = uVar6;
    *(undefined4 *)(param_1 + 8) = uVar8;
    return;
  }
  *(int *)(param_1 + 8) = iVar3;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  cVar2 = '\x13';
LAB_0071d220:
  *param_1 = cVar2;
  return;
LAB_0071d22c:
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar5;
  cVar2 = 'O';
  goto LAB_0071d220;
}

