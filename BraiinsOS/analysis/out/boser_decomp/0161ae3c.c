// FUN_0161ae3c @ 0161ae3c size=692 calls_out=11 calls_in=1
// strings: failed to parse veth link info | failed to parse veth link info

void FUN_0161ae3c(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int **ppiVar7;
  int *piVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uStack_7c;
  undefined4 ***local_74;
  undefined4 ***local_70;
  undefined4 ***local_6c;
  undefined4 ***local_68;
  undefined4 ***local_64;
  undefined4 ***local_50;
  undefined4 ***local_4c;
  undefined4 ***local_48;
  undefined4 ***local_44;
  undefined4 ***pppuStack_40;
  int **ppiStack_3c;
  int iStack_38;
  int ***local_30;
  undefined4 ***local_2c;
  undefined4 ***local_28;
  
  piVar8 = (int *)*param_2;
  uStack_7c = FUN_01623c64(*piVar8,piVar8[1]);
  sVar2 = FUN_01623c34(*piVar8,piVar8[1]);
  if (sVar2 == 1) {
    FUN_0161f1bc(&local_70,&uStack_7c);
    if (local_70 == (undefined4 ***)0x80000000) {
      local_30 = local_70;
      local_2c = local_6c;
      local_28 = local_68;
    }
    else {
      local_50 = local_70;
      local_4c = local_6c;
      local_48 = local_68;
      FUN_016403ac(&local_30,&local_50,"failed to parse veth link info",0x1e);
    }
    if (local_30 != (undefined4 ***)0x80000000) {
      *param_1 = -0x7fffffff;
      param_1[1] = (int)local_30;
      param_1[2] = (int)local_2c;
      param_1[3] = (int)local_28;
      return;
    }
    local_74 = local_2c;
    FUN_016330cc(&local_50,&local_74);
    if (local_50 == (undefined4 ***)0x80000000) {
      puVar4 = (undefined4 *)((uint)&local_50 | 4);
      local_30 = (int ***)*puVar4;
      local_2c = (undefined4 ***)puVar4[1];
      local_28 = (undefined4 ***)puVar4[2];
      FUN_016403ac((uint)&local_70 | 4,&local_30,"failed to parse veth link info",0x1e);
    }
    else {
      local_68 = local_48;
      local_64 = local_44;
      local_6c = local_4c;
      if (local_50 != (undefined4 ***)0x80000000) {
        ppiVar7 = ppiStack_3c;
        iVar3 = iStack_38;
        goto LAB_0161b0bc;
      }
    }
    param_1[2] = (int)local_68;
    param_1[3] = (int)local_64;
    *param_1 = -0x7fffffff;
    param_1[1] = (int)local_6c;
  }
  else {
    local_74 = (undefined4 ***)CONCAT22(local_74._2_2_,sVar2);
    iVar3 = FUN_01623c34(*piVar8,piVar8[1]);
    uVar6 = piVar8[1];
    if (uVar6 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(2,4,uVar6,&DAT_01d060b8);
    }
    uVar1 = *(ushort *)(*piVar8 + 2);
    lVar10 = FUN_01623c64(*piVar8,uVar6);
    local_48 = (undefined4 ***)((ulonglong)lVar10 >> 0x20);
    uVar9 = 0;
    if (lVar10 < 0) {
LAB_0161aee0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,local_48);
    }
    if (local_48 == (undefined4 ***)0x0) {
      iVar5 = 1;
      ppiVar7 = (int **)0x0;
    }
    else {
      uVar9 = 1;
      iVar5 = FUN_01298504(local_48,1);
      ppiVar7 = (int **)local_48;
      if (iVar5 == 0) goto LAB_0161aee0;
    }
    FUN_01bed4e2(iVar5,(int)lVar10,local_48);
    local_44 = (undefined4 ***)CONCAT22(local_44._2_2_,(ushort)iVar3 | uVar1 & 0xc000);
    local_2c = (undefined4 ***)FUN_012fcf18;
    local_30 = (int ***)&local_74;
    local_50 = (undefined4 ***)ppiVar7;
    local_4c = (undefined4 ***)iVar5;
    FUN_00664898(&local_70,&DAT_005a8e62,&local_30);
    local_30 = local_70;
    local_2c = local_6c;
    local_28 = local_68;
    FUN_0160f810(&local_70,&local_50,&local_30);
    if (local_70 == (undefined4 ***)0x80000000) {
      param_1[3] = (int)local_64;
      *param_1 = -0x7fffffff;
      param_1[1] = (int)local_6c;
      param_1[2] = (int)local_68;
      return;
    }
    local_50 = (undefined4 ***)0x80000000;
    local_48 = local_6c;
    local_44 = local_68;
    pppuStack_40 = local_64;
    local_4c = local_70;
LAB_0161b0bc:
    *param_1 = (int)local_50;
    param_1[5] = (int)ppiVar7;
    param_1[1] = (int)local_4c;
    param_1[4] = (int)pppuStack_40;
    param_1[2] = (int)local_48;
    param_1[3] = (int)local_44;
    param_1[6] = iVar3;
  }
  return;
}

