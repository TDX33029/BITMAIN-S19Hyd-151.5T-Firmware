// FUN_014ffb64 @ 014ffb64 size=612 calls_out=5 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_014ffb64(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    iVar7 = 0;
    do {
      uVar4 = param_1[2];
      if ((uVar4 < param_1[1]) && (uVar2 = (uint)*(byte *)(uVar2 + uVar4), uVar2 == 0x45)) {
        param_1[2] = uVar4 + 1;
        return 0;
      }
      if (iVar7 != 0) {
        uVar2 = param_1[4];
      }
      if (((iVar7 != 0 && uVar2 != 0) && (iVar3 = FUN_00faace8(uVar2," + ",3), iVar3 != 0)) ||
         (bVar1 = FUN_014ffde8(param_1), bVar1 == 2)) {
        return 1;
      }
      while (((uVar2 = *param_1, uVar2 != 0 && (uVar4 = param_1[2], uVar4 < param_1[1])) &&
             (uVar2 = (uint)*(byte *)(uVar2 + uVar4), uVar2 == 0x70))) {
        param_1[2] = uVar4 + 1;
        if ((bVar1 & 1) == 0) {
          uVar2 = param_1[4];
          if (uVar2 != 0) {
            uVar6 = 1;
            pcVar5 = "<";
            goto LAB_014ffc50;
          }
        }
        else {
          uVar2 = param_1[4];
          if (uVar2 != 0) {
            uVar6 = 2;
            pcVar5 = ", newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02";
LAB_014ffc50:
            iVar3 = FUN_00faace8(uVar2,pcVar5,uVar6);
            if (iVar3 != 0) {
              return 1;
            }
          }
        }
        if (*param_1 == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0) goto LAB_014ffd40;
          pcVar5 = "?";
          goto LAB_014ffd30;
        }
        FUN_014fc644(&local_48,param_1);
        if (local_48 == 0) {
          if (param_1[4] != 0) {
            pcVar5 = "{recursion limit reached}";
            if ((char)local_44 == '\0') {
              pcVar5 = &DAT_00564580;
            }
            uVar6 = 0x10;
            if ((char)local_44 != '\0') {
              uVar6 = 0x19;
            }
            iVar7 = FUN_00faace8(param_1[4],pcVar5,uVar6);
            if (iVar7 != 0) {
              return 1;
            }
          }
          *(char *)(param_1 + 1) = (char)local_44;
          *param_1 = 0;
          return 0;
        }
        local_38 = local_48;
        uStack_34 = local_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if (param_1[4] != 0) {
          iVar3 = FUN_014fc8a8(&local_38);
          if (iVar3 != 0) {
            return 1;
          }
          if ((param_1[4] != 0) && (iVar3 = FUN_00faace8(param_1[4]," = ",3), iVar3 != 0)) {
            return 1;
          }
        }
        iVar3 = FUN_014fcdc8(param_1);
        bVar1 = 1;
        if (iVar3 != 0) {
          return 1;
        }
      }
      bVar8 = (bVar1 & 1) != 0;
      if (bVar8) {
        uVar2 = param_1[4];
      }
      if (bVar8 && uVar2 != 0) {
        pcVar5 = ">";
LAB_014ffd30:
        iVar3 = FUN_00faace8(uVar2,pcVar5,1);
        if (iVar3 != 0) {
          return 1;
        }
      }
LAB_014ffd40:
      uVar2 = *param_1;
      iVar7 = iVar7 + 1;
    } while (uVar2 != 0);
  }
  return 0;
}

