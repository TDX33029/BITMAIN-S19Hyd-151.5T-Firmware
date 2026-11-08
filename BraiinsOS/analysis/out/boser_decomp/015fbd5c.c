// FUN_015fbd5c @ 015fbd5c size=456 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_015fbd5c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  uint *local_58;
  uint local_54;
  uint *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  iVar4 = param_2[1];
  uVar10 = *param_2;
  pcVar11 = *(code **)(iVar4 + 0xc);
  uVar5 = (*pcVar11)(uVar10,"{",1);
  local_58 = (uint *)*param_1;
  uVar9 = param_2[2];
  local_4c = (int)local_58 + param_1[1] + 1;
  local_50 = local_58 + 1;
  local_48 = param_1[3];
  uVar8 = param_2[3];
  local_54 = ~*local_58 & 0x80808080;
  bVar3 = false;
LAB_015fbdec:
  do {
    bVar2 = bVar3;
    iVar6 = FUN_015da8cc(&local_58);
    if (iVar6 == 0) {
      uVar8 = 1;
      if ((uVar5 & 1) == 0) {
        uVar8 = (*pcVar11)(uVar10,"}",1);
      }
      return uVar8;
    }
    uVar1 = uVar5 & 1;
    uVar5 = 1;
    bVar3 = true;
  } while (uVar1 != 0);
  if ((uVar9 & 0x800000) != 0) {
    if (!bVar2) goto code_r0x015fbe60;
    goto LAB_015fbe80;
  }
  if (bVar2) {
    iVar7 = (*pcVar11)(uVar10,&DAT_00533bc1,2);
    uVar5 = 1;
    bVar3 = true;
    if (iVar7 != 0) goto LAB_015fbdec;
  }
  uVar5 = FUN_01308e14(iVar6,param_2);
  goto LAB_015fbef0;
code_r0x015fbe60:
  iVar7 = (*pcVar11)(uVar10,"\n",1);
  bVar3 = true;
  if (iVar7 == 0) {
LAB_015fbe80:
    local_35 = 1;
    local_3c = &local_35;
    local_30 = &DAT_01ce45f8;
    local_44 = uVar10;
    local_40 = iVar4;
    local_34 = &local_44;
    local_2c = uVar9;
    local_28 = uVar8;
    iVar6 = FUN_01308e14(iVar6,&local_34);
    if (iVar6 == 0) {
      uVar5 = FUN_01302620(&local_44,&DAT_005312e2,2);
LAB_015fbef0:
      bVar3 = true;
    }
    else {
      uVar5 = 1;
      bVar3 = true;
    }
  }
  goto LAB_015fbdec;
}

