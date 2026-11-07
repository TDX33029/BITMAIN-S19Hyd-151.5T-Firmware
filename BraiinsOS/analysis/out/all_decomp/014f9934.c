// FUN_014f9934 @ 014f9934 size=692 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_014f9934(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar2 = FUN_00faace8(param_1[4],"?",1);
    return uVar2;
  }
  uVar8 = param_1[1];
  uVar9 = 0;
  uVar3 = param_1[2];
  uVar10 = 0;
  if ((uVar3 < uVar8) && (param_2 = (uint)*(byte *)(iVar1 + uVar3), param_2 == 0x47)) {
    uVar9 = uVar3 + 1;
    param_1[2] = uVar9;
    if ((uVar8 <= uVar9) || (*(char *)(iVar1 + uVar9) != '_')) {
      uVar5 = 0;
      uVar10 = 0;
      do {
        if (uVar8 == uVar9) break;
        uVar7 = (uint)*(byte *)(iVar1 + uVar9);
        if (uVar7 == 0x5f) {
          param_1[2] = uVar9 + 1;
          uVar8 = uVar5 + 1;
          param_2 = uVar10 + (0xfffffffe < uVar5);
          uVar3 = -uVar5 - 3;
          param_3 = -1 - (uVar10 + (uVar5 >= 0xfffffffe));
          if (uVar10 != 0xffffffff || -uVar10 - 1 < (uint)(uVar5 < 0xfffffffe)) goto LAB_014f9ac0;
          break;
        }
        uVar3 = uVar7 - 0x30;
        if (9 < (uVar3 & 0xff)) {
          if ((uVar7 - 0x61 & 0xff) < 0x1a) {
            uVar3 = uVar7 - 0x57;
          }
          else {
            if (0x19 < (uVar7 - 0x41 & 0xff)) break;
            uVar3 = uVar7 - 0x1d;
          }
        }
        uVar6 = (uint)((ulonglong)uVar5 * 0x3e);
        uVar5 = (uint)((ulonglong)uVar5 * 0x3e >> 0x20);
        uVar9 = uVar9 + 1;
        param_1[2] = uVar9;
        uVar7 = (uint)((ulonglong)uVar10 * 0x3e);
        uVar4 = uVar5 + uVar7;
        if ((int)((ulonglong)uVar10 * 0x3e >> 0x20) != 0 || CARRY4(uVar5,uVar7)) break;
        uVar7 = uVar3 & 0xff;
        uVar5 = uVar6 + uVar7;
        uVar10 = uVar4 + CARRY4(uVar6,uVar7);
      } while (!CARRY4(uVar4,(uint)CARRY4(uVar6,uVar7)));
      if ((param_1[4] == 0) ||
         (iVar1 = FUN_00faace8(param_1[4],&DAT_00564580,0x10,uVar3), iVar1 == 0)) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0;
        return 0;
      }
      return 1;
    }
    param_1[2] = uVar3 + 2;
    uVar8 = 0;
    param_2 = 0;
LAB_014f9ac0:
    uVar9 = uVar8 + 1;
    uVar10 = param_2 + (0xfffffffe < uVar8);
  }
  if (param_1[4] == 0) {
    uVar2 = FUN_014fa96c(param_1,param_2,param_3);
    return uVar2;
  }
  if (uVar9 == 0 && uVar10 == 0) {
LAB_014f9bd0:
    uVar2 = FUN_014fa96c(param_1);
    param_1[5] = param_1[5] - uVar9;
    return uVar2;
  }
  uVar12 = FUN_00faace8(param_1[4],&DAT_00569844,4,uVar3);
  if ((int)uVar12 == 0) {
    uVar3 = 0;
    param_1[5] = param_1[5] + 1;
    uVar12 = FUN_014f81fc(param_1,(int)((ulonglong)uVar12 >> 0x20),1,0);
    uVar2 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0) {
      uVar8 = 1;
      do {
        if (uVar10 < uVar3 || uVar3 - uVar10 < (uint)(uVar9 <= uVar8)) {
          if ((param_1[4] != 0) && (iVar1 = FUN_00faace8(param_1[4],"> ",2), iVar1 != 0)) {
            return 1;
          }
          goto LAB_014f9bd0;
        }
        bVar11 = 0xfffffffe < uVar8;
        uVar8 = uVar8 + 1;
        uVar3 = uVar3 + bVar11;
        if (param_1[4] != 0) {
          uVar12 = FUN_00faace8(param_1[4],&DAT_0041950f,2);
          uVar2 = (undefined4)((ulonglong)uVar12 >> 0x20);
          if ((int)uVar12 != 0) {
            return 1;
          }
        }
        param_1[5] = param_1[5] + 1;
        uVar12 = FUN_014f81fc(param_1,uVar2,1,0);
        uVar2 = (undefined4)((ulonglong)uVar12 >> 0x20);
      } while ((int)uVar12 == 0);
    }
  }
  return 1;
}

