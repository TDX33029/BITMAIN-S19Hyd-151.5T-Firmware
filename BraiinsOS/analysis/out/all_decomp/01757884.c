// FUN_01757884 @ 01757884 size=508 calls_out=2 calls_in=15
// strings: 

undefined8 FUN_01757884(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1 == 0) || (param_3 != 0 && param_2 == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (*(byte *)(param_1 + 0x17d) - 1 < 2) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0xd0);
  uVar7 = *(uint *)(param_1 + 200);
  uVar3 = param_2;
  if (iVar6 == 0) {
    uVar5 = param_3;
    if (uVar7 <= param_3) {
LAB_01757a04:
      param_3 = FUN_01753f4c(param_1,uVar3,uVar5);
      goto LAB_017579e0;
    }
  }
  else {
    uVar5 = uVar7 - iVar6;
    if (param_3 < uVar5) {
      uVar3 = param_1 + 0xd4 + iVar6;
      if (uVar3 < param_2) {
        if (uVar3 + param_3 <= param_2) {
LAB_01757a38:
          FUN_016dd1aa(uVar3,param_2,param_3);
          *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
          return 1;
        }
      }
      else if ((uVar3 <= param_2) || (param_2 + param_3 <= uVar3)) goto LAB_01757a38;
      goto LAB_01757a00;
    }
    iVar4 = param_1 + 0xd4;
    if (uVar5 != 0) {
      uVar2 = iVar4 + iVar6;
      if (uVar2 < param_2) {
        if (param_2 < iVar4 + uVar7) goto LAB_01757a00;
      }
      else if ((param_2 < uVar2) && (uVar2 < param_2 + uVar5)) goto LAB_01757a00;
      uVar3 = param_2 + uVar5;
      FUN_016dd1aa(uVar2,param_2);
    }
    iVar4 = FUN_01753f4c(param_1,iVar4,uVar7);
    if (iVar4 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    param_3 = (param_3 + iVar6) - uVar7;
    uVar5 = param_3;
    if (uVar7 <= param_3) goto LAB_01757a04;
LAB_017579e0:
    if (param_3 == 0) {
      return 1;
    }
    param_2 = uVar3 + (uVar5 - param_3);
  }
  uVar7 = param_1 + 0xd4;
  if (uVar7 < param_2) {
    if (param_2 < uVar7 + param_3) goto LAB_01757a00;
  }
  else if ((param_2 < uVar7) && (uVar7 < uVar3 + uVar5)) {
LAB_01757a00:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1757a00);
    (*pcVar1)();
  }
  FUN_016dd1aa();
  *(uint *)(param_1 + 0xd0) = param_3;
  return 1;
}

