// FUN_00fa9698 @ 00fa9698 size=720 calls_out=1 calls_in=88
// strings: 

undefined4
FUN_00fa9698(undefined4 *param_1,int param_2,char *param_3,int param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  if (param_2 == 0) {
    uVar2 = param_1[2];
    uVar9 = param_6 + 1;
    puVar8 = (undefined1 *)0x2d;
  }
  else {
    uVar2 = param_1[2];
    puVar8 = (undefined1 *)0x2b;
    if ((uVar2 & 0x200000) == 0) {
      puVar8 = &DAT_00110000;
    }
    uVar9 = param_6 + ((uVar2 & 0x200000) >> 0x15);
  }
  if ((uVar2 & 0x800000) == 0) {
    param_3 = (char *)0x0;
    uVar5 = (uint)*(ushort *)(param_1 + 3);
    if (uVar5 <= uVar9) {
LAB_00fa9734:
      uVar3 = *param_1;
      iVar6 = param_1[1];
      iVar1 = FUN_00fa9b64(uVar3,iVar6,puVar8,param_3,param_4);
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00fa9778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(iVar6 + 0xc))(uVar3,param_5,param_6);
        return uVar3;
      }
      return 1;
    }
  }
  else {
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)(-0x41 < *param_3);
      if ((param_4 != 1) && (-0x41 < param_3[1])) {
        uVar5 = uVar5 + 1;
      }
    }
    uVar9 = uVar5 + uVar9;
    uVar5 = (uint)*(ushort *)(param_1 + 3);
    if (uVar5 <= uVar9) goto LAB_00fa9734;
  }
  if ((uVar2 & 0x1000000) == 0) {
    uVar5 = uVar5 - uVar9;
    uVar9 = 0;
    switch((uVar2 & 0x7fffffff) >> 0x1d) {
    case 0:
      break;
    default:
      uVar9 = uVar5;
      break;
    case 2:
      uVar9 = (uVar5 & 0xffff) >> 1;
    }
    uVar3 = *param_1;
    iVar1 = param_1[1];
    uVar7 = 0;
    do {
      if ((uVar9 & 0xffff) <= (uVar7 & 0xffff)) {
        iVar6 = FUN_00fa9b64(uVar3,iVar1,puVar8,param_3,param_4);
        if (iVar6 != 0) {
          return 1;
        }
        iVar6 = (**(code **)(iVar1 + 0xc))(uVar3,param_5,param_6);
        if (iVar6 != 0) {
          return 1;
        }
        uVar7 = 0;
        do {
          if ((uVar5 - uVar9 & 0xffff) <= (uVar7 & 0xffff)) {
            return 0;
          }
          iVar6 = (**(code **)(iVar1 + 0x10))(uVar3,uVar2 & 0x1fffff);
          uVar7 = uVar7 + 1;
        } while (iVar6 == 0);
        return 1;
      }
      iVar6 = (**(code **)(iVar1 + 0x10))(uVar3,uVar2 & 0x1fffff);
      uVar7 = uVar7 + 1;
    } while (iVar6 == 0);
  }
  else {
    uVar4 = *param_1;
    iVar6 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    param_1[2] = uVar2 & 0x9fe00000 | 0x20000030;
    iVar1 = FUN_00fa9b64(uVar4,iVar6,puVar8,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
    uVar7 = 0;
    do {
      if ((uVar5 - uVar9 & 0xffff) <= (uVar7 & 0xffff)) {
        iVar1 = (**(code **)(iVar6 + 0xc))(uVar4,param_5,param_6);
        if (iVar1 == 0) {
          param_1[2] = uVar2;
          param_1[3] = uVar3;
          return 0;
        }
        return 1;
      }
      iVar1 = (**(code **)(iVar6 + 0x10))(uVar4,0x30);
      uVar7 = uVar7 + 1;
    } while (iVar1 == 0);
  }
  return 1;
}

