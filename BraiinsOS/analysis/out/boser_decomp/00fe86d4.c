// FUN_00fe86d4 @ 00fe86d4 size=1204 calls_out=17 calls_in=0
// strings: model | model | model | model | model

/* WARNING: Type propagation algorithm not settling */

void FUN_00fe86d4(undefined4 *param_1,undefined4 ******param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 ******ppppppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 *****pppppuVar7;
  undefined1 *extraout_r2;
  undefined1 *extraout_r2_00;
  undefined4 *****pppppuVar8;
  uint uVar9;
  undefined4 *******pppppppuVar10;
  undefined8 uVar11;
  undefined1 *local_58;
  undefined2 *local_54;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined4 *******local_40;
  undefined8 local_3c;
  undefined4 ******local_30;
  undefined1 local_2c;
  undefined1 uStack_25;
  
  pppppuVar7 = param_2[4];
  pppppuVar8 = param_2[5];
  if (pppppuVar8 < pppppuVar7) {
    do {
      uVar9 = *(byte *)((int)param_2[3] + (int)pppppuVar8) - 9;
      if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)((int)param_2[3] + (int)pppppuVar8) != 0x6e) goto LAB_00fe873c;
        param_2[5] = (undefined4 *****)((int)pppppuVar8 + 1);
        iVar4 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar4 == 0) {
          *param_1 = 0x80000000;
          return;
        }
        goto LAB_00fe893c;
      }
      pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1);
      param_2[5] = pppppuVar8;
    } while (pppppuVar7 != pppppuVar8);
  }
  else {
LAB_00fe873c:
    if (pppppuVar8 < pppppuVar7) {
      do {
        uVar9 = (uint)*(byte *)((int)param_2[3] + (int)pppppuVar8);
        if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar9 == 0x5b) {
            cVar1 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 *****)((int)pppppuVar8 + 1);
              local_3c._0_4_ = (undefined2 *)CONCAT31(local_3c._1_3_,1);
              local_40 = (undefined4 *******)param_2;
              FUN_00fac6e0(&local_50,&local_40);
              if (local_50 == (undefined4 *******)&DAT_80000001) {
                local_4c._4_4_ = extraout_r2;
LAB_00fe8910:
                local_50 = (undefined4 *******)&DAT_80000000;
              }
              else if (local_50 == (undefined4 *******)&DAT_80000000) {
                local_4c._0_4_ = (undefined2 *)FUN_012cc2c0(0,&DAT_01c1aee4,&DAT_01d064b8);
                local_4c._4_4_ = extraout_r2_00;
                goto LAB_00fe8910;
              }
              *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
              local_40 = local_50;
              local_3c._0_4_ = (undefined2 *)local_4c;
              local_3c._4_4_ = local_4c._4_4_;
              iVar4 = FUN_014d9568(param_2);
              uVar11 = CONCAT44(&local_50,(undefined2 *)local_3c);
              local_50 = local_40;
              local_4c._0_4_ = (undefined2 *)local_3c;
              local_4c._4_4_ = local_3c._4_4_;
              local_44 = iVar4;
              if (local_40 == (undefined4 *******)&DAT_80000000) goto joined_r0x00fe89a8;
              if (iVar4 == 0) goto LAB_00fe8ae4;
              uVar6 = FUN_019bb7e0(local_40,(undefined2 *)local_3c);
              uVar11 = CONCAT44(uVar6,iVar4);
              pppppppuVar10 = (undefined4 *******)&DAT_80000000;
              goto LAB_00fe8acc;
            }
          }
          else {
            if (uVar9 != 0x7b) {
              uVar6 = FUN_012c7788(param_2,&uStack_25,&DAT_01c1cc68);
              goto LAB_00fe8b1c;
            }
            cVar1 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 *****)((int)pppppuVar8 + 1);
              local_2c = 1;
              pppppppuVar10 = (undefined4 *******)&DAT_80000000;
              local_30 = param_2;
              goto LAB_00fe87d4;
            }
          }
          local_50 = (undefined4 *******)0x18;
          goto LAB_00fe8778;
        }
        pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1);
        param_2[5] = pppppuVar8;
      } while (pppppuVar7 != pppppuVar8);
    }
  }
  local_50 = (undefined4 *******)0x5;
LAB_00fe8778:
  iVar4 = FUN_012c6b30(param_2,&local_50);
  goto LAB_00fe893c;
  while( true ) {
    uVar11 = FUN_0167459c(ppppppuVar3);
    if ((int)uVar11 != 0) break;
    uVar11 = FUN_012c6c4c(ppppppuVar3);
    if ((int)uVar11 != 0) break;
LAB_00fe87d4:
    uVar2 = CONCAT44(local_58,local_54);
    FUN_01278730(&local_50,&local_30);
    ppppppuVar3 = local_30;
    uVar11 = CONCAT44(extraout_r1,(undefined2 *)local_4c);
    if ((char)local_50 == '\x01') break;
    if (local_50._1_1_ != '\x01') {
      if (pppppppuVar10 != (undefined4 *******)&DAT_80000000) goto LAB_00fe8a4c;
      local_3c._0_4_ = (undefined2 *)0x5;
      local_4c._0_4_ = (undefined2 *)&LAB_018a13b8;
      local_50 = &local_40;
      local_40 = (undefined4 *******)0x49e646;
      uVar11 = FUN_019676ac(&DAT_0057cd64,&local_50);
      goto LAB_00fe8a48;
    }
    local_30[2] = (undefined4 *****)0x0;
    local_30[5] = (undefined4 *****)((int)local_30[5] + 1);
    FUN_01968828(&local_50,local_30 + 3,local_30);
    uVar11 = CONCAT44(extraout_r1_00,(undefined2 *)local_4c);
    if (local_50 == (undefined4 *******)0x2) break;
    if ((local_4c._4_4_ == &DAT_00000005) &&
       (iVar4 = thunk_FUN_01bed842((undefined2 *)local_4c,"model",5), iVar4 == 0)) {
      if (pppppppuVar10 != (undefined4 *******)&DAT_80000000) {
        local_3c._0_4_ = (undefined2 *)0x5;
        local_4c._0_4_ = &DAT_0132b6a0;
        local_50 = &local_40;
        local_40 = (undefined4 *******)0x49e646;
        uVar6 = FUN_019676ac(&DAT_005ab34f,&local_50);
        goto LAB_00fe89f0;
      }
      uVar11 = FUN_0167459c(ppppppuVar3);
      if ((int)uVar11 != 0) goto LAB_00fe8a48;
      FUN_00aeeebc(&local_50,ppppppuVar3);
      uVar11 = CONCAT44(extraout_r1_01,(undefined2 *)local_4c);
      local_54 = (undefined2 *)local_4c;
      if (local_50 == (undefined4 *******)&DAT_80000000) goto LAB_00fe8a48;
      local_58 = local_4c._4_4_;
      pppppppuVar10 = local_50;
      goto LAB_00fe87d4;
    }
  }
  uVar6 = (undefined4)uVar11;
  if (pppppppuVar10 != (undefined4 *******)&DAT_80000000) {
LAB_00fe89f0:
    FUN_019bb7e0(pppppppuVar10,local_54);
    uVar11 = CONCAT44(extraout_r1_02,uVar6);
  }
LAB_00fe8a48:
  pppppppuVar10 = (undefined4 *******)&DAT_80000000;
  uVar2 = uVar11;
LAB_00fe8a4c:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_40 = pppppppuVar10;
  local_3c = uVar2;
  iVar4 = FUN_012c7b64(param_2);
  uVar11 = CONCAT44(&local_40,(undefined2 *)local_3c);
  local_50 = local_40;
  local_44 = iVar4;
  if (local_40 == (undefined4 *******)&DAT_80000000) {
joined_r0x00fe89a8:
    pppppppuVar10 = (undefined4 *******)&DAT_80000000;
    local_40 = local_50;
    local_4c = local_3c;
    if (local_44 != 0) {
      uVar6 = (undefined2 *)local_3c;
      uVar5 = FUN_00f80260(&local_44);
      pppppppuVar10 = (undefined4 *******)&DAT_80000000;
      local_4c = local_4c;
      uVar11 = CONCAT44(uVar5,uVar6);
    }
  }
  else if (iVar4 == 0) {
LAB_00fe8ae4:
    pppppppuVar10 = local_40;
    local_50 = local_40;
    local_4c = local_3c;
    uVar11 = local_3c;
  }
  else {
    local_4c = local_3c;
    uVar6 = FUN_019bb7e0(local_40,(undefined2 *)local_3c);
    pppppppuVar10 = (undefined4 *******)&DAT_80000000;
    local_4c = local_4c;
    uVar11 = CONCAT44(uVar6,iVar4);
  }
LAB_00fe8acc:
  uVar6 = (undefined4)uVar11;
  if (pppppppuVar10 != (undefined4 *******)&DAT_80000000) {
    *param_1 = pppppppuVar10;
    *(undefined8 *)(param_1 + 1) = uVar11;
    return;
  }
LAB_00fe8b1c:
  iVar4 = FUN_0127dee8(uVar6,param_2);
LAB_00fe893c:
  *param_1 = 0x80000001;
  param_1[1] = iVar4;
  return;
}

