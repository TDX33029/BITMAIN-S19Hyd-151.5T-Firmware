// FUN_01741580 @ 01741580 size=592 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01741580(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x58);
  if (CARRY4(*(uint *)(param_1 + 0x10),param_3 * 8)) {
    iVar3 = iVar3 + 1;
  }
  uVar6 = param_1 + 0x18;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + param_3 * 8;
  *(uint *)(param_1 + 0x14) = iVar3 + (param_3 >> 0x1d);
  if (iVar5 == 0) {
joined_r0x0174166c:
    uVar4 = param_2;
    if (0x3f < param_3) {
LAB_01741674:
      FUN_017094dc(param_1,uVar4,param_3 >> 6);
      param_2 = uVar4 + (param_3 >> 6) * 0x40;
      param_3 = param_3 & 0x3f;
      goto LAB_01741694;
    }
  }
  else {
    uVar2 = uVar6 + iVar5;
    if ((param_3 + iVar5 | param_3) < 0x40) {
      if (uVar2 < param_2) {
        if (uVar2 + param_3 <= param_2) goto LAB_01741790;
      }
      else if ((uVar2 <= param_2) || (param_2 + param_3 <= uVar2)) {
LAB_01741790:
        FUN_016dd1aa(uVar2,param_2,param_3);
        *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
        return 1;
      }
      goto LAB_01741760;
    }
    if (iVar5 == 0x40) {
      FUN_017094dc(param_1,uVar6,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      FUN_016dd606(uVar6,0,0x40);
      goto joined_r0x0174166c;
    }
    if (uVar2 < param_2) {
      if (param_2 < param_1 + 0x58U) goto LAB_01741760;
    }
    else if ((param_2 < uVar2) && (uVar2 < param_2 + (0x40 - iVar5))) goto LAB_01741760;
    uVar4 = param_2 + (0x40 - iVar5);
    FUN_016dd1aa(uVar2,param_2);
    FUN_017094dc(param_1,uVar6,1);
    *(undefined4 *)(param_1 + 0x58) = 0;
    param_3 = (param_3 - 0x40) + iVar5;
    FUN_016dd606(uVar6,0,0x40);
    param_2 = uVar4;
    if (0x3f < param_3) goto LAB_01741674;
LAB_01741694:
    if (param_3 == 0) {
      return 1;
    }
  }
  *(uint *)(param_1 + 0x58) = param_3;
  if (uVar6 < param_2) {
    if (param_2 < uVar6 + param_3) goto LAB_01741760;
  }
  else if ((param_2 < uVar6) && (uVar6 < param_2 + param_3)) {
LAB_01741760:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1741760);
    (*pcVar1)();
  }
  FUN_016dd1aa(uVar6,param_2,param_3);
  return 1;
}

