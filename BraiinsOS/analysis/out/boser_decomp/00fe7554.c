// FUN_00fe7554 @ 00fe7554 size=1004 calls_out=16 calls_in=0
// strings: asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor | asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor

void FUN_00fe7554(undefined1 *param_1,undefined4 ***param_2)

{
  char cVar1;
  undefined4 ***pppuVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  undefined4 ***local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined2 *local_3c;
  undefined2 *local_38 [2];
  undefined4 ****local_30;
  undefined2 *local_2c;
  undefined1 uStack_25;
  
  ppuVar7 = param_2[4];
  ppuVar8 = param_2[5];
  if (ppuVar8 < ppuVar7) {
    do {
      uVar9 = *(byte *)((int)param_2[3] + (int)ppuVar8) - 9;
      if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)((int)param_2[3] + (int)ppuVar8) != 0x6e) goto LAB_00fe75bc;
        param_2[5] = (undefined4 **)((int)ppuVar8 + 1);
        iVar5 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar5 != 0) goto LAB_00fe78bc;
        param_1[1] = 3;
        goto LAB_00fe7898;
      }
      ppuVar8 = (undefined4 **)((int)ppuVar8 + 1);
      param_2[5] = ppuVar8;
    } while (ppuVar7 != ppuVar8);
  }
  else {
LAB_00fe75bc:
    if (ppuVar8 < ppuVar7) {
      do {
        uVar9 = (uint)*(byte *)((int)param_2[3] + (int)ppuVar8);
        if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar9 == 0x5b) {
            cVar1 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 **)((int)ppuVar8 + 1);
              local_2c = (undefined2 *)CONCAT31(local_2c._1_3_,1);
              local_30 = (undefined4 ****)param_2;
              FUN_014db6fc(&local_40,&local_30);
              uVar3 = (undefined2)local_40;
              if ((char)local_40 == '\x01') {
LAB_00fe77a0:
                local_30 = (undefined4 ****)&DAT_00000001;
              }
              else {
                if (local_40._1_1_ != '\x01') {
                  local_3c = (undefined2 *)FUN_012cc2c0(0,&DAT_01c1af1c,&DAT_01d064b8);
                  goto LAB_00fe77a0;
                }
                local_40._0_2_ = uVar3;
                FUN_00fe687c(&local_40,local_30);
                if ((char)local_40 == '\x01') goto LAB_00fe77a0;
                local_3c = (undefined2 *)(uint)local_40._1_1_;
                local_30 = (undefined4 ****)((int)local_3c << 8);
              }
              *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
              local_2c = local_3c;
              local_38[0] = (undefined2 *)FUN_014d9568(param_2);
              local_3c = local_2c;
              local_40 = local_30;
              if (((uint)local_30 & 1) == 0) goto LAB_00fe7884;
              puVar6 = local_2c;
              if (local_38[0] != (undefined2 *)0x0) goto LAB_00fe78a8;
              goto LAB_00fe78b4;
            }
          }
          else {
            if (uVar9 != 0x7b) {
              puVar6 = (undefined2 *)FUN_012c7788(param_2,&uStack_25,&DAT_01c1cdf8);
              goto LAB_00fe78b4;
            }
            cVar1 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 **)((int)ppuVar8 + 1);
              local_44 = 1;
              uVar9 = 3;
              local_48 = param_2;
              goto LAB_00fe765c;
            }
          }
          local_40 = (undefined4 ****)0x18;
          goto LAB_00fe75f8;
        }
        ppuVar8 = (undefined4 **)((int)ppuVar8 + 1);
        param_2[5] = ppuVar8;
      } while (ppuVar7 != ppuVar8);
    }
  }
  local_40 = (undefined4 ****)0x5;
LAB_00fe75f8:
  iVar5 = FUN_012c6b30(param_2,&local_40);
  goto LAB_00fe78bc;
LAB_00fe765c:
  FUN_01278730(&local_40,&local_48);
  pppuVar2 = local_48;
  if ((char)local_40 == '\x01') {
LAB_00fe782c:
    local_2c = local_3c;
    goto LAB_00fe7830;
  }
  local_2c = (undefined2 *)((uint)local_40 >> 8 & 0xff);
  if (local_2c != (undefined2 *)0x1) {
    if (uVar9 == 3) {
      uVar9 = 2;
    }
    local_30 = (undefined4 ****)(uVar9 << 8);
    goto LAB_00fe7844;
  }
  local_48[2] = (undefined4 **)0x0;
  local_48[5] = (undefined4 **)((int)local_48[5] + 1);
  FUN_01968828(&local_40,local_48 + 3,local_48);
  local_2c = local_3c;
  if (local_40 == (undefined4 ****)0x2) goto LAB_00fe7830;
  if ((local_38[0] != (undefined2 *)0xa) ||
     (iVar5 = thunk_FUN_01bed842(local_3c,
                                 "asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor"
                                 ,10), iVar5 != 0)) {
    local_2c = (undefined2 *)FUN_0167459c(pppuVar2);
    if ((local_2c != (undefined2 *)0x0) ||
       (local_2c = (undefined2 *)FUN_012c6c4c(pppuVar2), local_2c != (undefined2 *)0x0))
    goto LAB_00fe7830;
    goto LAB_00fe765c;
  }
  if (uVar9 == 3) {
    local_2c = (undefined2 *)FUN_0167459c(pppuVar2);
    if (local_2c != (undefined2 *)0x0) goto LAB_00fe7830;
    FUN_00fe687c(&local_40,pppuVar2);
    if ((char)local_40 != '\0') goto LAB_00fe782c;
    uVar9 = (uint)local_40 >> 8 & 0xff;
    goto LAB_00fe765c;
  }
  local_3c = &DAT_0132b6a0;
  local_40 = &local_30;
  local_2c = (undefined2 *)0xa;
  local_30 = (undefined4 ****)0x4033c0;
  local_2c = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_40);
LAB_00fe7830:
  local_30 = (undefined4 ****)&DAT_00000001;
LAB_00fe7844:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_38[0] = (undefined2 *)FUN_012c7b64(param_2);
  local_3c = local_2c;
  local_40 = local_30;
  if (((uint)local_30 & 1) == 0) {
LAB_00fe7884:
    puVar6 = local_38[0];
    local_40 = local_30;
    local_3c = local_2c;
    if (local_38[0] == (undefined2 *)0x0) {
      param_1[1] = (char)((uint)local_30 >> 8);
LAB_00fe7898:
      uVar4 = 0;
      goto LAB_00fe78c4;
    }
  }
  else {
    puVar6 = local_2c;
    if (local_38[0] != (undefined2 *)0x0) {
LAB_00fe78a8:
      puVar6 = local_2c;
      local_40 = local_30;
      local_3c = local_2c;
      FUN_00f80260(local_38);
    }
  }
LAB_00fe78b4:
  iVar5 = FUN_0127dee8(puVar6,param_2);
LAB_00fe78bc:
  *(int *)(param_1 + 4) = iVar5;
  uVar4 = 1;
LAB_00fe78c4:
  *param_1 = uVar4;
  return;
}

