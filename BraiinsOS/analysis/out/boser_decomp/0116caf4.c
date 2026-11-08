// FUN_0116caf4 @ 0116caf4 size=1464 calls_out=21 calls_in=1
// strings: web_theme | web_languagestruct PublicStorage with 3 elements | dashboard_density | dashboard_density | web_languagestruct PublicStorage with 3 elements | web_theme

undefined8 FUN_0116caf4(undefined4 ***param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 ***pppuVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  undefined4 ****ppppuVar10;
  uint uVar11;
  byte bVar12;
  undefined4 ***local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined2 *local_3c;
  undefined2 *local_38 [2];
  undefined4 ****local_30;
  undefined2 *local_2c;
  undefined1 uStack_25;
  
  ppuVar8 = param_1[5];
  if (ppuVar8 < param_1[4]) {
    do {
      uVar9 = (uint)*(byte *)((int)param_1[3] + (int)ppuVar8);
      if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar9 == 0x5b) {
          cVar1 = *(char *)(param_1 + 9);
          *(char *)(param_1 + 9) = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            param_1[5] = (undefined4 **)((int)ppuVar8 + 1);
            local_2c = (undefined2 *)CONCAT31(local_2c._1_3_,1);
            local_30 = (undefined4 ****)param_1;
            FUN_01965170(&local_40,&local_30);
            if ((char)local_40 == '\x01') {
LAB_0116ce2c:
              ppppuVar10 = (undefined4 ****)&DAT_00000001;
            }
            else {
              if (local_40._1_1_ != '\x01') {
                uVar5 = 0;
LAB_0116cf9c:
                local_3c = (undefined2 *)FUN_012cc2c0(uVar5,&DAT_01c1af34,&DAT_01d064b8);
                goto LAB_0116ce2c;
              }
              FUN_00fe5fb4(&local_40,local_30);
              if ((char)local_40 == '\x01') goto LAB_0116ce2c;
              uVar9 = (uint)local_40 >> 8;
              FUN_01965170(&local_40,&local_30);
              if ((char)local_40 == '\x01') goto LAB_0116ce2c;
              if (local_40._1_1_ == '\x01') {
                FUN_00fe64e4(&local_40,local_30);
                uVar2 = (undefined2)local_40;
                if ((char)local_40 != '\x01') {
                  uVar11 = (uint)local_40 >> 8;
                  local_40._0_2_ = uVar2;
                  FUN_01965170(&local_40,&local_30);
                  if ((char)local_40 != '\x01') {
                    if (local_40._1_1_ != '\x01') {
                      uVar5 = 2;
                      goto LAB_0116cf9c;
                    }
                    FUN_00fe8bfc(&local_40,local_30);
                    if ((char)local_40 != '\x01') {
                      local_3c = (undefined2 *)(uint)local_40._1_1_;
                      ppppuVar10 = (undefined4 ****)
                                   ((uVar11 & 0xff) << 8 | (uVar9 & 0xff) << 0x10 |
                                   (int)local_3c << 0x18);
                      goto LAB_0116ce30;
                    }
                  }
                }
                goto LAB_0116ce2c;
              }
              ppppuVar10 = (undefined4 ****)&DAT_00000001;
              local_3c = (undefined2 *)FUN_012cc2c0(1,&DAT_01c1af34,&DAT_01d064b8);
            }
LAB_0116ce30:
            *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
            local_30 = ppppuVar10;
            local_2c = local_3c;
            local_38[0] = (undefined2 *)FUN_01964fb0(param_1);
            local_3c = local_2c;
            local_40 = local_30;
            if (((uint)local_30 & 1) == 0) goto LAB_0116ceec;
            puVar7 = local_2c;
            if (local_38[0] != (undefined2 *)0x0) goto LAB_0116cf70;
            goto LAB_0116cf7c;
          }
        }
        else {
          if (uVar9 != 0x7b) {
            puVar7 = (undefined2 *)FUN_019659c8(param_1,&uStack_25,&DAT_01c1cfd8);
            goto LAB_0116cf7c;
          }
          cVar1 = *(char *)(param_1 + 9);
          *(char *)(param_1 + 9) = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            param_1[5] = (undefined4 **)((int)ppuVar8 + 1);
            uVar9 = 4;
            uVar11 = 3;
            local_44 = 1;
            local_48 = param_1;
            bVar12 = 4;
            goto LAB_0116cbb4;
          }
        }
        local_40 = (undefined4 ****)0x18;
        goto LAB_0116cb48;
      }
      ppuVar8 = (undefined4 **)((int)ppuVar8 + 1);
      param_1[5] = ppuVar8;
    } while (param_1[4] != ppuVar8);
  }
  local_40 = (undefined4 ****)0x5;
LAB_0116cb48:
  puVar4 = (undefined4 *)FUN_01964674(param_1,&local_40);
  goto LAB_0116cb58;
LAB_0116cbb4:
  do {
    FUN_01965d20(&local_40,&local_48);
    pppuVar3 = local_48;
    if ((char)local_40 == '\x01') {
LAB_0116ce7c:
      local_2c = local_3c;
      break;
    }
    if (local_40._1_1_ == '\0') {
      if (uVar11 == 3) {
        uVar11 = 2;
      }
      if (uVar9 == 4) {
        uVar9 = 3;
      }
      local_2c = (undefined2 *)(uVar11 << 8 | uVar9 << 0x10);
      if (bVar12 == 4) {
        bVar12 = 3;
      }
      local_30 = (undefined4 ****)((uint)local_2c | (uint)bVar12 << 0x18);
      goto LAB_0116ceac;
    }
    local_48[2] = (undefined4 **)0x0;
    local_48[5] = (undefined4 **)((int)local_48[5] + 1);
    FUN_019686b4(&local_40,local_48 + 3,local_48);
    local_2c = local_3c;
    if (local_40 == (undefined4 ****)0x2) break;
    if (local_38[0] == (undefined2 *)0x11) {
      iVar6 = thunk_FUN_01bed842(local_3c,"dashboard_density",0x11);
      if (iVar6 != 0) goto LAB_0116cce0;
      if (uVar11 != 3) {
        local_2c = (undefined2 *)0x11;
        local_30 = (undefined4 ****)0x3f342f;
        goto LAB_0116d094;
      }
      local_2c = (undefined2 *)FUN_01965c98(pppuVar3);
      if (local_2c != (undefined2 *)0x0) break;
      FUN_00fe64e4(&local_40,pppuVar3);
      if ((char)local_40 != '\0') goto LAB_0116ce7c;
      uVar11 = (uint)local_40 >> 8 & 0xff;
      goto LAB_0116cbb4;
    }
    if (local_38[0] == (undefined2 *)0xc) {
      iVar6 = thunk_FUN_01bed842(local_3c,"web_languagestruct PublicStorage with 3 elements",0xc);
      if (iVar6 != 0) goto LAB_0116cce0;
      if (bVar12 != 4) {
        local_2c = (undefined2 *)0xc;
        local_30 = (undefined4 ****)0x3f3440;
LAB_0116d094:
        local_3c = &DAT_0132b6a0;
        local_40 = &local_30;
        local_2c = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_40);
        break;
      }
      local_2c = (undefined2 *)FUN_01965c98(pppuVar3);
      if (local_2c != (undefined2 *)0x0) break;
      FUN_00fe8bfc(&local_40,pppuVar3);
      if ((char)local_40 != '\0') goto LAB_0116ce7c;
      bVar12 = local_40._1_1_;
      goto LAB_0116cbb4;
    }
    if ((local_38[0] == (undefined2 *)0x9) &&
       (iVar6 = thunk_FUN_01bed842(local_3c,"web_theme",9), iVar6 == 0)) {
      if (uVar9 != 4) {
        local_2c = (undefined2 *)0x9;
        local_30 = (undefined4 ****)0x3f3426;
        goto LAB_0116d094;
      }
      local_2c = (undefined2 *)FUN_01965c98(pppuVar3);
      if (local_2c != (undefined2 *)0x0) break;
      FUN_00fe5fb4(&local_40,pppuVar3);
      if ((char)local_40 != '\0') goto LAB_0116ce7c;
      uVar9 = (uint)local_40 >> 8 & 0xff;
      goto LAB_0116cbb4;
    }
LAB_0116cce0:
    local_2c = (undefined2 *)FUN_01965c98(pppuVar3);
    if (local_2c != (undefined2 *)0x0) break;
    local_2c = (undefined2 *)FUN_01965eac(pppuVar3);
  } while (local_2c == (undefined2 *)0x0);
  local_30 = (undefined4 ****)&DAT_00000001;
LAB_0116ceac:
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  local_38[0] = (undefined2 *)FUN_019650c4(param_1);
  local_3c = local_2c;
  local_40 = local_30;
  if (((uint)local_30 & 1) == 0) {
LAB_0116ceec:
    ppppuVar10 = local_30;
    puVar7 = local_38[0];
    local_40 = local_30;
    local_3c = local_2c;
    if (local_38[0] == (undefined2 *)0x0) {
      puVar7 = (undefined2 *)thunk_FUN_01be5118(3);
      if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(1,3);
      }
      *puVar7 = (short)((uint)ppppuVar10 >> 8);
      *(char *)(puVar7 + 1) = (char)((uint)ppppuVar10 >> 0x18);
      puVar4 = (undefined4 *)FUN_01298504(0xc,4);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      uVar2 = *puVar7;
      *(undefined1 *)((int)puVar4 + 10) = *(undefined1 *)(puVar7 + 1);
      *puVar4 = 1;
      puVar4[1] = 1;
      *(undefined2 *)(puVar4 + 2) = uVar2;
      thunk_FUN_01be4678(puVar7);
      uVar5 = 0;
      goto LAB_0116cf5c;
    }
  }
  else {
    puVar7 = local_2c;
    if (local_38[0] != (undefined2 *)0x0) {
LAB_0116cf70:
      puVar7 = local_2c;
      local_40 = local_30;
      local_3c = local_2c;
      FUN_00f80260(local_38);
    }
  }
LAB_0116cf7c:
  puVar4 = (undefined4 *)FUN_01966f00(puVar7,param_1);
LAB_0116cb58:
  uVar5 = 1;
LAB_0116cf5c:
  return CONCAT44(puVar4,uVar5);
}

