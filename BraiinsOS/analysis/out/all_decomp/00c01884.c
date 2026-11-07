// FUN_00c01884 @ 00c01884 size=1560 calls_out=21 calls_in=0
// strings: SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c01884(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined4 ********ppppppppuVar3;
  undefined4 ********ppppppppuVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *******pppppppuVar9;
  undefined4 ********ppppppppuVar10;
  undefined4 *******pppppppuVar11;
  undefined4 ********ppppppppuVar12;
  undefined4 ********ppppppppuVar13;
  undefined4 ********ppppppppuVar14;
  uint uVar15;
  uint uVar16;
  undefined4 ********local_b4;
  undefined4 *local_ac;
  undefined *local_a8;
  undefined4 ***local_a4;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 ********local_9c;
  undefined4 ********local_98;
  undefined4 ********local_94;
  undefined4 ********local_90;
  undefined4 ********local_8c;
  undefined4 ********local_88;
  undefined4 ********local_84;
  undefined4 ********local_80;
  undefined4 ********ppppppppuStack_7c;
  undefined4 local_78;
  undefined4 ********local_74;
  undefined4 ********local_70;
  undefined4 ********local_6c;
  undefined4 ********local_68;
  undefined4 ********local_64;
  undefined4 **local_5c;
  code *local_58;
  undefined4 ********local_50;
  undefined **local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined4 ********local_40;
  undefined4 ********local_3c;
  undefined4 ********local_38;
  undefined4 ********local_34;
  undefined4 ********local_30;
  undefined4 ********local_2c;
  
  FUN_015ec424(&local_40,param_2,0x1b);
  ppppppppuVar12 = local_38;
  ppppppppuVar4 = local_3c;
  ppppppppuVar3 = local_40;
  if (local_40 != (undefined4 ********)0x80000000) {
    local_2c = local_38;
    local_30 = local_3c;
    local_34 = (undefined4 ********)0x0;
    local_38 = (undefined4 ********)0x0;
    local_3c = ppppppppuVar12;
    local_40 = ppppppppuVar4;
    FUN_00c62a08(&local_78,&local_40);
    if (((uint)local_78 & 0xff) != 6) {
      local_9d = local_78._3_1_;
      ppppppppuVar12 = (undefined4 ********)0x0;
      local_9f = local_78._1_2_;
      local_98 = local_70;
      local_94 = local_6c;
      local_90 = local_68;
      local_8c = local_64;
      local_9c = local_74;
      local_a0 = (undefined1)local_78;
      if ((((uint)local_78 & 0xff) == 5) && (local_74 != (undefined4 ********)0x0)) {
        local_b4 = local_70;
        ppppppppuVar12 = local_74;
        do {
          uVar16 = (uint)*(ushort *)((int)ppppppppuVar12 + 0x192);
          ppppppppuVar10 = ppppppppuVar12 + 0x43;
          uVar15 = 0xffffffff;
          iVar8 = uVar16 * 0xc;
          do {
            if (iVar8 == 0) goto LAB_00c019fc;
            pppppppuVar11 = ppppppppuVar10[2];
            pppppppuVar9 = pppppppuVar11;
            if (&DAT_00000006 < pppppppuVar11) {
              pppppppuVar9 = (undefined4 *******)&DAT_00000007;
            }
            iVar6 = FUN_016dd50a(&DAT_00410ff9,ppppppppuVar10[1],pppppppuVar9);
            if (iVar6 == 0) {
              iVar6 = 7 - (int)pppppppuVar11;
            }
            iVar8 = iVar8 + -0xc;
            uVar15 = uVar15 + 1;
            ppppppppuVar10 = ppppppppuVar10 + 3;
          } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
          uVar16 = uVar15;
          if (0 < iVar6 == iVar6 < 0) {
            ppppppppuVar12 = ppppppppuVar12 + uVar15 * 6;
            break;
          }
LAB_00c019fc:
          if (local_b4 == (undefined4 ********)0x0) goto LAB_00c01e40;
          local_b4 = (undefined4 ********)((int)local_b4 + -1);
          ppppppppuVar12 = (undefined4 ********)ppppppppuVar12[uVar16 + 0x66];
        } while( true );
      }
      goto LAB_00c01a2c;
    }
    local_ac = (undefined4 *)FUN_00c7a328(local_74);
    goto LAB_00c01be8;
  }
  local_3c = local_38;
  local_40 = ppppppppuVar4;
  local_ac = (undefined4 *)FUN_00c79e6c(&local_40);
  goto LAB_00c01bf8;
LAB_00c01e40:
  ppppppppuVar12 = (undefined4 ********)0x0;
LAB_00c01a2c:
  ppppppppuVar10 = (undefined4 ********)&DAT_0040e9a0;
  if (ppppppppuVar12 != (undefined4 ********)0x0) {
    ppppppppuVar10 = ppppppppuVar12;
  }
  uVar1 = *(undefined1 *)ppppppppuVar10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    break;
  default:
    local_78 = (undefined4 ********)*ppppppppuVar10;
    local_74 = (undefined4 ********)ppppppppuVar10[1];
    local_70 = (undefined4 ********)ppppppppuVar10[2];
    local_6c = (undefined4 ********)ppppppppuVar10[3];
    local_68 = (undefined4 ********)ppppppppuVar10[4];
    local_64 = (undefined4 ********)ppppppppuVar10[5];
    if ((((uint)local_78 & 0xff) == 2 &&
        (local_70 == (undefined4 ********)0x0 && local_6c == (undefined4 ********)0x0)) &&
        (local_68 == (undefined4 ********)&DAT_00000009 && local_64 == (undefined4 ********)0x0)) {
      FUN_00c66504(&local_40,&local_a0);
      ppppppppuVar12 = local_3c;
      if (((uint)local_40 & 1) == 0) {
        local_88 = local_3c;
        local_84 = local_38;
        local_80 = local_34;
        ppppppppuStack_7c = local_30;
        FUN_00c01f94(&local_78);
        ppppppppuVar14 = ppppppppuStack_7c;
        ppppppppuVar13 = local_80;
        ppppppppuVar10 = local_84;
        if (ppppppppuVar3 != (undefined4 ********)0x0) {
          thunk_FUN_016d3fb4(ppppppppuVar4);
        }
        goto LAB_00c01e14;
      }
      local_ac = (undefined4 *)FUN_00c7a328(local_3c);
      goto LAB_00c01be8;
    }
    goto LAB_00c01b74;
  case 3:
    pppppppuVar9 = ppppppppuVar10[2];
    ppppppppuVar12 = (undefined4 ********)ppppppppuVar10[3];
    if (ppppppppuVar12 == (undefined4 ********)0x0) {
      ppppppppuVar10 = (undefined4 ********)&DAT_00000001;
    }
    else {
      ppppppppuVar10 = (undefined4 ********)thunk_FUN_016d4a50(ppppppppuVar12);
      if (ppppppppuVar10 == (undefined4 ********)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,ppppppppuVar12);
      }
    }
    FUN_016dd1aa(ppppppppuVar10,pppppppuVar9,ppppppppuVar12);
    local_70 = ppppppppuVar10;
LAB_00c01b68:
    local_74 = ppppppppuVar12;
    local_6c = ppppppppuVar12;
    break;
  case 4:
    FUN_00cdff8c((uint)&local_78 | 4,ppppppppuVar10 + 1);
    break;
  case 5:
    if (ppppppppuVar10[3] == (undefined4 *******)0x0) {
      ppppppppuVar12 = (undefined4 ********)0x0;
      goto LAB_00c01b68;
    }
    if (ppppppppuVar10[1] == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac52c);
    }
    FUN_00c45d18((uint)&local_78 | 4,ppppppppuVar10[1],ppppppppuVar10[2]);
  }
  local_78 = (undefined4 ********)CONCAT31(local_78._1_3_,uVar1);
LAB_00c01b74:
  local_50 = &local_40;
  local_40 = local_78;
  local_3c = local_74;
  local_38 = local_70;
  local_34 = local_6c;
  local_30 = local_68;
  local_2c = local_64;
  local_44 = &LAB_00fac484;
  local_48 = &DAT_005689f4;
  local_4c = (undefined **)FUN_0157ab98;
  FUN_00600d2c(&local_5c,&DAT_0057f9c9,&local_50);
  local_ac = (undefined4 *)FUN_00c6b484(&local_5c);
  FUN_00c01f94(&local_40);
  FUN_00c01f94(&local_a0);
LAB_00c01be8:
  if (ppppppppuVar3 != (undefined4 ********)0x0) {
    thunk_FUN_016d3fb4(ppppppppuVar4);
  }
LAB_00c01bf8:
  ppppppppuVar10 = ppppppppuVar4;
  if ((DAT_018d9130 < 4) && (DAT_018d9bc0 != '\0')) {
    if (DAT_018d9bc0 == '\x01') {
LAB_00c01c70:
      DataMemoryBarrier(0xb);
      pcVar7 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar7 = DAT_018daa74;
        puVar2 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar8 = (**(code **)(puVar2 + 0x14))(pcVar7,DAT_018d9bb8);
      if (iVar8 == 0) goto LAB_00c01df8;
    }
    else if (DAT_018d9bc0 != '\x02') {
      cVar5 = FUN_0169ac90(&DAT_018d9bb8);
      if (cVar5 == '\0') goto LAB_00c01df8;
      if (cVar5 != '\x02') goto LAB_00c01c70;
    }
    if (DAT_018d9bb8[8] == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871f40);
    }
    local_74 = (undefined4 ********)DAT_018d9bb8[8];
    local_70 = (undefined4 ********)DAT_018d9bb8[9];
    local_6c = (undefined4 ********)DAT_018d9bb8[10];
    ppppppppuVar10 = (undefined4 ********)&DAT_0058534a;
    local_50 = (undefined4 ********)&local_78;
    local_4c = &local_a8;
    local_a4 = &local_5c;
    local_80 = (undefined4 ********)(DAT_018d9bb8 + 7);
    local_78 = (undefined4 ********)*local_80;
    local_5c = &local_ac;
    local_88 = &local_50;
    local_30 = &local_88;
    local_68 = (undefined4 ********)0x0;
    local_48 = &DAT_018abb78;
    local_a8 = &DAT_0058534a;
    local_58 = FUN_00604528;
    local_84 = (undefined4 ********)0x1;
    local_3c = (undefined4 ********)0x0;
    local_40 = (undefined4 ********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar7 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar7 = DAT_018daa74;
      puVar2 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_2c = (undefined4 ********)DAT_018d9bb8;
    iVar8 = (**(code **)(puVar2 + 0x28))(pcVar7,&local_40);
    if (iVar8 != 0) {
      (**(code **)(puVar2 + 0x2c))(pcVar7,&local_40);
    }
  }
LAB_00c01df8:
  (**(code **)*local_ac)();
  ppppppppuVar13 = (undefined4 ********)0x0;
  ppppppppuVar14 = (undefined4 ********)&DAT_00000009;
  ppppppppuVar12 = (undefined4 ********)0x0;
LAB_00c01e14:
  param_1[5] = ppppppppuVar10;
  param_1[6] = ppppppppuVar13;
  param_1[7] = ppppppppuVar14;
  param_1[4] = ppppppppuVar12;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = param_2;
  param_1[1] = 0x1b;
  param_1[2] = 0;
  return;
}

