// FUN_014ff74c @ 014ff74c size=456 calls_out=4 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_014ff74c(int *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  char local_38;
  char local_37;
  uint local_30;
  uint local_2c;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar4 = FUN_00faace8(param_1[4],"?",1);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    FUN_014fc5a8(&local_38,param_1,0x47);
    if (local_38 == '\x01') {
      if (param_1[4] != 0) {
        pcVar2 = "{recursion limit reached}";
        if (local_37 == '\0') {
          pcVar2 = &DAT_00564580;
        }
        uVar4 = 0x10;
        if (local_37 != '\0') {
          uVar4 = 0x19;
        }
        iVar1 = FUN_00faace8(param_1[4],pcVar2,uVar4);
        if (iVar1 != 0) {
          return 1;
        }
      }
      uVar4 = 0;
      *(char *)(param_1 + 1) = local_37;
      *param_1 = 0;
    }
    else if (param_1[4] == 0) {
      uVar4 = FUN_014ffb64(param_1);
    }
    else if (local_30 == 0 && local_2c == 0) {
LAB_014ff8f0:
      uVar4 = FUN_014ffb64(param_1);
      param_1[5] = param_1[5] - local_30;
    }
    else {
      iVar1 = FUN_00faace8(param_1[4],&DAT_00569844,4);
      if (iVar1 == 0) {
        uVar4 = 1;
        uVar5 = 0;
        uVar3 = 0;
        do {
          if (local_2c < uVar5 || uVar5 - local_2c < (uint)(local_30 <= uVar3)) {
            if ((param_1[4] != 0) && (iVar1 = FUN_00faace8(param_1[4],"> ",2), iVar1 != 0)) {
              return 1;
            }
            goto LAB_014ff8f0;
          }
          bVar8 = 0xfffffffe < uVar3;
          uVar6 = uVar3 + 1;
          bVar7 = uVar3 != 0 || uVar5 != 0;
          iVar1 = 0;
          if (bVar7) {
            iVar1 = param_1[4];
          }
          if (bVar7 && iVar1 != 0) {
            uVar9 = FUN_00faace8(iVar1,&DAT_0041950f,2);
            uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
            if ((int)uVar9 != 0) goto LAB_014ff82c;
          }
          param_1[5] = param_1[5] + 1;
          iVar1 = FUN_014fde64(param_1,uVar3,1,0);
          uVar5 = uVar5 + bVar8;
          uVar3 = uVar6;
        } while (iVar1 == 0);
      }
      else {
LAB_014ff82c:
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

