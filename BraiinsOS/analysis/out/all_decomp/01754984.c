// FUN_01754984 @ 01754984 size=628 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01754984(int param_1,uint param_2,uint param_3)

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
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar4 + param_3 * 8;
  uVar6 = param_1 + 0x1c;
  iVar5 = *(int *)(param_1 + 0x5c);
  if (CARRY4(uVar4,param_3 * 8)) {
    iVar3 = iVar3 + 1;
  }
  *(uint *)(param_1 + 0x18) = iVar3 + (param_3 >> 0x1d);
  uVar4 = param_2;
  if (iVar5 == 0) {
    if (0x3f < param_3) {
LAB_01754a94:
      if ((DAT_018dfe48 & 8) == 0) {
        if ((DAT_018dfe48 & 1) == 0) {
          FUN_01786fc0();
        }
        else {
          FUN_01787520();
        }
      }
      else {
        FUN_01788240(param_1,uVar4);
      }
      uVar4 = uVar4 + (param_3 & 0xffffffc0);
      param_3 = param_3 & 0x3f;
      goto LAB_01754ac4;
    }
  }
  else {
    uVar2 = uVar6 + iVar5;
    if ((param_3 + iVar5 | param_3) < 0x40) {
      if (uVar2 < param_2) {
        if (uVar2 + param_3 <= param_2) {
LAB_01754bc8:
          FUN_016dd1aa(uVar2,param_2,param_3);
          *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
          return 1;
        }
      }
      else if ((uVar2 <= param_2) || (param_2 + param_3 <= uVar2)) goto LAB_01754bc8;
      goto LAB_01754b5c;
    }
    if (iVar5 != 0x40) {
      if (uVar2 < param_2) {
        if (param_2 < param_1 + 0x5cU) goto LAB_01754b5c;
      }
      else if ((param_2 < uVar2) && (uVar2 < param_2 + (0x40 - iVar5))) goto LAB_01754b5c;
      uVar4 = param_2 + (0x40 - iVar5);
      FUN_016dd1aa(uVar2,param_2);
    }
    if ((DAT_018dfe48 & 8) == 0) {
      if ((DAT_018dfe48 & 1) == 0) {
        FUN_01786fc0();
      }
      else {
        FUN_01787520(param_1,uVar6,1);
      }
    }
    else {
      FUN_01788240(param_1,uVar6,1);
    }
    param_3 = (param_3 - 0x40) + iVar5;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_016dd606(uVar6,0,0x40);
    if (0x3f < param_3) goto LAB_01754a94;
LAB_01754ac4:
    param_2 = uVar4;
    if (param_3 == 0) {
      return 1;
    }
  }
  *(uint *)(param_1 + 0x5c) = param_3;
  if (uVar6 < param_2) {
    if (param_2 < uVar6 + param_3) goto LAB_01754b5c;
  }
  else if ((param_2 < uVar6) && (uVar6 < param_2 + param_3)) {
LAB_01754b5c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1754b5c);
    (*pcVar1)();
  }
  FUN_016dd1aa(uVar6,param_2,param_3);
  return 1;
}

