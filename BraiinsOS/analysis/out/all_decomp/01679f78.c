// FUN_01679f78 @ 01679f78 size=640 calls_out=2 calls_in=1
// strings: 

void FUN_01679f78(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar9 = 1;
  uVar5 = 0;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  uVar6 = uVar5;
LAB_01679fd0:
  do {
    uVar1 = param_3 - uVar5;
    iVar7 = param_2 + uVar5;
    if (uVar1 < 8) {
      if (param_3 == uVar5) goto LAB_0167a174;
      uVar4 = 0;
      while (*(char *)(iVar7 + uVar4) != '_') {
        uVar4 = uVar4 + 1;
        if (uVar1 == uVar4) goto LAB_0167a174;
      }
    }
    else {
      uVar3 = (iVar7 + 3U & 0xfffffffc) - iVar7;
      if (uVar3 == 0) {
        uVar3 = 0;
        do {
          uVar8 = *(uint *)(iVar7 + uVar3);
          uVar4 = ((uint *)(iVar7 + uVar3))[1] ^ 0x5f5f5f5f;
          if (((0x1010100 - (uVar8 ^ 0x5f5f5f5f) | uVar8) & 0x80808080 & (0x1010100 - uVar4 | uVar4)
              ) != 0x80808080) break;
          uVar3 = uVar3 + 8;
LAB_0167a054:
        } while (uVar3 <= uVar1 - 8);
        if (uVar1 == uVar3) {
          uVar5 = uVar6;
          goto LAB_0167a178;
        }
        iVar2 = 0;
        while (*(char *)(iVar7 + uVar3 + iVar2) != '_') {
          iVar2 = iVar2 + 1;
          if ((param_3 - uVar3) - uVar5 == iVar2) goto LAB_0167a174;
        }
        uVar4 = iVar2 + uVar3;
      }
      else {
        uVar4 = 0;
        while (*(char *)(iVar7 + uVar4) != '_') {
          uVar4 = uVar4 + 1;
          if (uVar3 == uVar4) goto LAB_0167a054;
        }
      }
    }
    uVar4 = uVar4 + uVar5;
    uVar5 = uVar4 + 1;
    if ((uVar4 < param_3) && (*(char *)(param_2 + uVar4) == '_')) {
      uVar4 = uVar4 - uVar6;
      if ((uint)(local_30 - local_28) < uVar4) {
        FUN_0166e728(&local_30,local_28,uVar4,1,1);
        iVar9 = local_2c;
      }
      iVar7 = local_28;
      FUN_016dd1aa(iVar9 + local_28,param_2 + uVar6,uVar4);
      local_28 = iVar7 + uVar4;
      uVar6 = uVar5;
      if (param_3 < uVar5) goto LAB_0167a178;
      goto LAB_01679fd0;
    }
    if (param_3 < uVar5) {
LAB_0167a174:
      uVar5 = uVar6;
LAB_0167a178:
      param_3 = param_3 - uVar5;
      if ((uint)(local_30 - local_28) < param_3) {
        FUN_0166e728(&local_30,local_28,param_3,1,1);
        iVar9 = local_2c;
      }
      iVar7 = local_28;
      FUN_016dd1aa(iVar9 + local_28,param_2 + uVar5,param_3);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = iVar7 + param_3;
      return;
    }
  } while( true );
}

