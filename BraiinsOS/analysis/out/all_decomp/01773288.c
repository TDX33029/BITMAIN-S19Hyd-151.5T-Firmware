// FUN_01773288 @ 01773288 size=616 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_01773288(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar8 = *(uint *)(param_1 + 0x40);
  uVar2 = param_3 * 8;
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar5 = param_3 >> 0x1d;
  uVar7 = param_1 + 0x50;
  if (CARRY4(uVar3,uVar5) || CARRY4(uVar3 + uVar5,(uint)CARRY4(uVar8,uVar2))) {
    uVar4 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar4 + 1;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)(0xfffffffe < uVar4);
  }
  iVar6 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0x40) = uVar8 + uVar2;
  *(uint *)(param_1 + 0x44) = uVar3 + uVar5 + (uint)CARRY4(uVar8,uVar2);
  if (iVar6 == 0) {
    if (0x7f < param_3) {
LAB_0177343c:
      if ((DAT_018dfe48 & 1) == 0) {
        FUN_0178a420();
      }
      else {
        FUN_0178a8e0(param_1,param_2,param_3 >> 7);
      }
      uVar3 = param_3 & 0xffffff80;
      param_3 = param_3 & 0x7f;
      uVar3 = param_2 + uVar3;
      goto LAB_01773398;
    }
  }
  else {
    uVar5 = 0x80 - iVar6;
    uVar2 = uVar7 + iVar6;
    if (param_3 < uVar5) {
      if (uVar2 < param_2) {
        if (uVar2 + param_3 <= param_2) goto LAB_017734a8;
      }
      else if ((uVar2 <= param_2) || (param_2 + param_3 <= uVar2)) {
LAB_017734a8:
        FUN_016dd1aa(uVar2,param_2,param_3);
        *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
        return 1;
      }
      goto LAB_01773424;
    }
    uVar3 = param_2;
    if (iVar6 != 0x80) {
      if (uVar2 < param_2) {
        if (param_2 < param_1 + 0xd0U) goto LAB_01773424;
      }
      else if ((param_2 < uVar2) && (uVar2 < param_2 + uVar5)) goto LAB_01773424;
      uVar3 = param_2 + uVar5;
      FUN_016dd1aa(uVar2,param_2);
    }
    param_3 = iVar6 + (param_3 - 0x80);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if ((DAT_018dfe48 & 1) == 0) {
      FUN_0178a420();
    }
    else {
      FUN_0178a8e0(param_1,uVar7,1);
    }
    if (0x7f < param_3) {
      param_2 = uVar3;
      goto LAB_0177343c;
    }
LAB_01773398:
    if (param_3 == 0) {
      return 1;
    }
    param_2 = uVar3;
  }
  if (uVar7 < param_2) {
    if (param_2 < uVar7 + param_3) goto LAB_01773424;
  }
  else if ((param_2 < uVar7) && (uVar7 < param_2 + param_3)) {
LAB_01773424:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1773424);
    (*pcVar1)();
  }
  FUN_016dd1aa(uVar7,param_2,param_3);
  *(uint *)(param_1 + 0xd0) = param_3;
  return 1;
}

