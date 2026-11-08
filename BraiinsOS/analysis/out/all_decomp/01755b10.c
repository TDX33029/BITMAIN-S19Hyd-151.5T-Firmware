// FUN_01755b10 @ 01755b10 size=628 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01755b10(int param_1,uint param_2,uint param_3)

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
  uVar4 = *(uint *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x20) = uVar4 + param_3 * 8;
  uVar6 = param_1 + 0x28;
  iVar5 = *(int *)(param_1 + 0x68);
  if (CARRY4(uVar4,param_3 * 8)) {
    iVar3 = iVar3 + 1;
  }
  *(uint *)(param_1 + 0x24) = iVar3 + (param_3 >> 0x1d);
  uVar4 = param_2;
  if (iVar5 == 0) {
    if (0x3f < param_3) {
LAB_01755c20:
      if ((DAT_018dfe48 & 0x10) == 0) {
        if ((DAT_018dfe48 & 1) == 0) {
          FUN_01788540();
        }
        else {
          FUN_01789330();
        }
      }
      else {
        FUN_01789f40(param_1,uVar4);
      }
      uVar4 = uVar4 + (param_3 & 0xffffffc0);
      param_3 = param_3 & 0x3f;
      goto LAB_01755c50;
    }
  }
  else {
    uVar2 = uVar6 + iVar5;
    if ((param_3 + iVar5 | param_3) < 0x40) {
      if (uVar2 < param_2) {
        if (uVar2 + param_3 <= param_2) {
LAB_01755d54:
          FUN_016dd1aa(uVar2,param_2,param_3);
          *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_3;
          return 1;
        }
      }
      else if ((uVar2 <= param_2) || (param_2 + param_3 <= uVar2)) goto LAB_01755d54;
      goto LAB_01755ce8;
    }
    if (iVar5 != 0x40) {
      if (uVar2 < param_2) {
        if (param_2 < param_1 + 0x68U) goto LAB_01755ce8;
      }
      else if ((param_2 < uVar2) && (uVar2 < param_2 + (0x40 - iVar5))) goto LAB_01755ce8;
      uVar4 = param_2 + (0x40 - iVar5);
      FUN_016dd1aa(uVar2,param_2);
    }
    if ((DAT_018dfe48 & 0x10) == 0) {
      if ((DAT_018dfe48 & 1) == 0) {
        FUN_01788540();
      }
      else {
        FUN_01789330(param_1,uVar6,1);
      }
    }
    else {
      FUN_01789f40(param_1,uVar6,1);
    }
    param_3 = (param_3 - 0x40) + iVar5;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_016dd606(uVar6,0,0x40);
    if (0x3f < param_3) goto LAB_01755c20;
LAB_01755c50:
    param_2 = uVar4;
    if (param_3 == 0) {
      return 1;
    }
  }
  *(uint *)(param_1 + 0x68) = param_3;
  if (uVar6 < param_2) {
    if (param_2 < uVar6 + param_3) goto LAB_01755ce8;
  }
  else if ((param_2 < uVar6) && (uVar6 < param_2 + param_3)) {
LAB_01755ce8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1755ce8);
    (*pcVar1)();
  }
  FUN_016dd1aa(uVar6,param_2,param_3);
  return 1;
}

