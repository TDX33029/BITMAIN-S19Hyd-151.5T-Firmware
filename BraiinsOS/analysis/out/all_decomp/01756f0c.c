// FUN_01756f0c @ 01756f0c size=508 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01756f0c(int param_1,uint param_2,uint param_3)

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
LAB_0175708c:
      param_3 = FUN_01753f4c(param_1,uVar3,uVar5);
      goto LAB_01757068;
    }
  }
  else {
    uVar5 = uVar7 - iVar6;
    if (param_3 < uVar5) {
      uVar3 = param_1 + 0xd4 + iVar6;
      if (uVar3 < param_2) {
        if (uVar3 + param_3 <= param_2) {
LAB_017570c0:
          FUN_016dd1aa(uVar3,param_2,param_3);
          *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
          return 1;
        }
      }
      else if ((uVar3 <= param_2) || (param_2 + param_3 <= uVar3)) goto LAB_017570c0;
      goto LAB_01757088;
    }
    iVar4 = param_1 + 0xd4;
    if (uVar5 != 0) {
      uVar2 = iVar4 + iVar6;
      if (uVar2 < param_2) {
        if (param_2 < iVar4 + uVar7) goto LAB_01757088;
      }
      else if ((param_2 < uVar2) && (uVar2 < param_2 + uVar5)) goto LAB_01757088;
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
    if (uVar7 <= param_3) goto LAB_0175708c;
LAB_01757068:
    if (param_3 == 0) {
      return 1;
    }
    param_2 = uVar3 + (uVar5 - param_3);
  }
  uVar7 = param_1 + 0xd4;
  if (uVar7 < param_2) {
    if (param_2 < uVar7 + param_3) goto LAB_01757088;
  }
  else if ((param_2 < uVar7) && (uVar7 < uVar3 + uVar5)) {
LAB_01757088:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1757088);
    (*pcVar1)();
  }
  FUN_016dd1aa();
  *(uint *)(param_1 + 0xd0) = param_3;
  return 1;
}

