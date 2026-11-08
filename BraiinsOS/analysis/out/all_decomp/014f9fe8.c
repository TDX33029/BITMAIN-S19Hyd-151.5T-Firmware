// FUN_014f9fe8 @ 014f9fe8 size=936 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_014f9fe8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    if (param_1[4] != 0) {
      uVar6 = FUN_00faace8(param_1[4],"?",1);
      return uVar6;
    }
  }
  else {
    uVar10 = param_1[1];
    uVar11 = 0;
    uVar4 = param_1[2];
    uVar12 = 0;
    if ((uVar4 < uVar10) && (*(char *)(uVar2 + uVar4) == 'G')) {
      uVar11 = uVar4 + 1;
      param_1[2] = uVar11;
      if ((uVar10 <= uVar11) || (*(char *)(uVar2 + uVar11) != '_')) {
        uVar7 = 0;
        uVar12 = 0;
        do {
          if (uVar10 == uVar11) break;
          uVar9 = (uint)*(byte *)(uVar2 + uVar11);
          if (uVar9 == 0x5f) {
            param_1[2] = uVar11 + 1;
            uVar10 = uVar7 + 1;
            iVar3 = uVar12 + (0xfffffffe < uVar7);
            uVar4 = -(uVar12 + (uVar7 >= 0xfffffffe)) - 1;
            if (uVar12 != 0xffffffff || -uVar12 - 1 < (uint)(uVar7 < 0xfffffffe)) goto LAB_014fa168;
            break;
          }
          uVar4 = uVar9 - 0x30;
          if (9 < (uVar4 & 0xff)) {
            if ((uVar9 - 0x61 & 0xff) < 0x1a) {
              uVar4 = uVar9 - 0x57;
            }
            else {
              if (0x19 < (uVar9 - 0x41 & 0xff)) break;
              uVar4 = uVar9 - 0x1d;
            }
          }
          uVar8 = (uint)((ulonglong)uVar7 * 0x3e);
          uVar7 = (uint)((ulonglong)uVar7 * 0x3e >> 0x20);
          uVar11 = uVar11 + 1;
          param_1[2] = uVar11;
          uVar9 = (uint)((ulonglong)uVar12 * 0x3e);
          uVar5 = uVar7 + uVar9;
          if ((int)((ulonglong)uVar12 * 0x3e >> 0x20) != 0 || CARRY4(uVar7,uVar9)) break;
          uVar9 = uVar4 & 0xff;
          uVar7 = uVar8 + uVar9;
          uVar12 = uVar5 + CARRY4(uVar8,uVar9);
        } while (!CARRY4(uVar5,(uint)CARRY4(uVar8,uVar9)));
        if ((param_1[4] == 0) ||
           (iVar3 = FUN_00faace8(param_1[4],&DAT_00564580,0x10,uVar4), iVar3 == 0)) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
          return 0;
        }
        return 1;
      }
      param_1[2] = uVar4 + 2;
      uVar10 = 0;
      iVar3 = 0;
LAB_014fa168:
      uVar11 = uVar10 + 1;
      uVar12 = iVar3 + (uint)(0xfffffffe < uVar10);
    }
    if (param_1[4] != 0) {
      if (uVar11 != 0 || uVar12 != 0) {
        uVar14 = FUN_00faace8(param_1[4],&DAT_00569844,4,uVar4);
        if ((int)uVar14 == 0) {
          uVar2 = 0;
          param_1[5] = param_1[5] + 1;
          uVar14 = FUN_014f81fc(param_1,(int)((ulonglong)uVar14 >> 0x20),1,0);
          uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) {
            uVar4 = 1;
            do {
              if (uVar12 < uVar2 || uVar2 - uVar12 < (uint)(uVar11 <= uVar4)) {
                if ((param_1[4] != 0) && (iVar3 = FUN_00faace8(param_1[4],"> ",2), iVar3 != 0)) {
                  return 1;
                }
                goto LAB_014fa2ec;
              }
              bVar13 = 0xfffffffe < uVar4;
              uVar4 = uVar4 + 1;
              uVar2 = uVar2 + bVar13;
              if (param_1[4] != 0) {
                uVar14 = FUN_00faace8(param_1[4],&DAT_0041950f,2);
                uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
                if ((int)uVar14 != 0) {
                  return 1;
                }
              }
              param_1[5] = param_1[5] + 1;
              uVar14 = FUN_014f81fc(param_1,uVar6,1,0);
              uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
            } while ((int)uVar14 == 0);
          }
        }
        return 1;
      }
LAB_014fa2ec:
      uVar2 = *param_1;
      if (uVar2 != 0) {
        iVar3 = 0;
        do {
          uVar4 = param_1[2];
          if ((uVar4 < param_1[1]) && (uVar2 = (uint)*(byte *)(uVar2 + uVar4), uVar2 == 0x45)) {
            param_1[2] = uVar4 + 1;
            break;
          }
          if (iVar3 != 0) {
            uVar2 = param_1[4];
          }
          if (((iVar3 != 0 && uVar2 != 0) && (iVar1 = FUN_00faace8(uVar2," + ",3), iVar1 != 0)) ||
             (iVar1 = FUN_014fa3ac(param_1), iVar1 != 0)) {
            uVar6 = 1;
            goto LAB_014fa37c;
          }
          uVar2 = *param_1;
          iVar3 = iVar3 + -1;
        } while (uVar2 != 0);
      }
      uVar6 = 0;
LAB_014fa37c:
      param_1[5] = param_1[5] - uVar11;
      return uVar6;
    }
    iVar3 = 0;
    do {
      uVar4 = 0;
      uVar10 = param_1[2];
      if ((uVar10 < param_1[1]) && (uVar4 = (uint)*(byte *)(uVar2 + uVar10), uVar4 == 0x45)) {
        param_1[2] = uVar10 + 1;
        return 0;
      }
      if (iVar3 != 0) {
        uVar4 = param_1[4];
      }
      if (((iVar3 != 0 && uVar4 != 0) && (iVar1 = FUN_00faace8(uVar4," + ",3), iVar1 != 0)) ||
         (iVar1 = FUN_014fa3ac(param_1), iVar1 != 0)) {
        return 1;
      }
      uVar2 = *param_1;
      iVar3 = iVar3 + -1;
    } while (uVar2 != 0);
  }
  return 0;
}

