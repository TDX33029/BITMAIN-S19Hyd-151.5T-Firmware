// FUN_01b8a610 @ 01b8a610 size=2192 calls_out=15 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b8a610(int *param_1,undefined2 *param_2,uint param_3,undefined1 *param_4,uint param_5,
                 uint param_6,uint param_7)

{
  int iVar1;
  undefined2 *extraout_r1;
  undefined2 *extraout_r1_00;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined2 *puVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_84;
  int local_80;
  undefined2 *local_7c;
  uint local_78;
  int local_70;
  uint local_6c;
  uint local_60;
  uint local_5c;
  undefined2 *local_58;
  int *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (*param_1 == 0) {
    uVar5 = 0xffffffc4;
LAB_01b8aa74:
    if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4(uVar5,param_2,local_2c ^ DAT_01d53560,0);
    }
    return;
  }
  uVar5 = 0;
  if (*param_1 == 1) {
    uVar5 = param_6 & 1;
  }
  if (uVar5 == 0) {
    local_5c = 0;
    local_58 = param_2;
  }
  else {
    iVar6 = param_1[0x96] + -1;
    uVar19 = FUN_01b85468(param_2,param_3,param_1 + 0x2f,iVar6,iVar6,
                          param_1[0x97] - (uint)(param_1[0x96] == 0),param_1[0x87]);
    puVar3 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
    local_5c = (uint)uVar19;
    if (0xffffff88 < local_5c) {
LAB_01b8ae78:
      param_2 = puVar3;
      uVar5 = 0xffffffba;
      goto LAB_01b8aa74;
    }
    param_3 = param_3 - local_5c;
    local_58 = (undefined2 *)((int)param_2 + local_5c);
    *param_1 = 2;
    param_2 = puVar3;
  }
  if (param_5 == 0) {
    uVar5 = local_5c;
    goto LAB_01b8aa74;
  }
  piVar7 = param_1 + 0x21a;
  uVar19 = FUN_01b85f50(piVar7,param_4,param_5,param_1[0x234]);
  puVar3 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
  if ((int)uVar19 == 0) {
    param_1[0x234] = 0;
    param_1[0x221] = param_1[0x21d];
  }
  if (param_1[0x44] == 1) {
    FUN_01b85f50(param_1 + 200,param_4,param_5,0);
    puVar3 = extraout_r1;
  }
  if (param_6 == 0) {
    FUN_01b873e4(piVar7,param_1 + 0x89,param_1 + 0x2f,param_4,param_4 + param_5);
    uVar19 = FUN_01b89558(param_1,local_58,param_3,param_4,param_5,0);
LAB_01b8a978:
    param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
    uVar5 = (uint)uVar19;
    if (uVar5 < 0xffffff89) {
      uVar9 = param_5 + param_1[0x98];
      iVar6 = param_1[0x99] + (uint)CARRY4(param_5,param_1[0x98]);
      uVar5 = uVar5 + local_5c;
      uVar15 = param_1[0x9a];
      param_1[0x98] = uVar9;
      param_1[0x9a] = uVar15 + uVar5;
      param_2 = (undefined2 *)param_1[0x97];
      param_1[0x9b] = param_1[0x9b] + (uint)CARRY4(uVar15,uVar5);
      uVar15 = param_1[0x96];
      param_1[0x99] = iVar6;
      if (uVar15 != 0 || param_2 != (undefined2 *)0x0) {
        puVar3 = (undefined2 *)(iVar6 + (uint)(0xfffffffe < uVar9));
        bVar18 = uVar9 + 1 <= uVar15;
        uVar15 = (int)param_2 - (int)puVar3;
        bVar17 = param_2 <= puVar3;
        param_2 = (undefined2 *)((int)param_2 - ((int)puVar3 + (uint)!bVar18));
        if (bVar17 && bVar18 <= uVar15) {
          uVar5 = 0xffffffb8;
        }
      }
    }
    goto LAB_01b8aa74;
  }
  uVar15 = param_1[0x94];
  iVar6 = 1 << (param_1[0x30] & 0xffU);
  if (param_1[0x38] != 0) {
    FUN_01b866c8(param_1 + 0x9c,param_4,param_5);
    puVar3 = extraout_r1_00;
  }
  local_60 = param_5;
  piVar8 = param_1 + 0x299;
  puVar16 = local_58;
LAB_01b8a78c:
  if (param_3 < 6) goto LAB_01b8ae78;
  if (uVar15 < local_60) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_7 & 1;
    uVar15 = local_60;
  }
  puVar10 = param_4 + uVar15;
  FUN_01b873e4(piVar7,param_1 + 0x89,param_1 + 0x2f,param_4,puVar10);
  iVar2 = param_1[0x220];
  if (((undefined1 *)(iVar6 + iVar2) < param_4 + (uVar15 - param_1[0x21b])) ||
     (iVar2 != param_1[0x21d])) {
    iVar2 = 0;
    param_1[0x220] = 0;
    param_1[0x247] = 0;
  }
  if (param_1 == (int *)0xfffff780) {
    iVar2 = 0;
  }
  uVar5 = (int)param_4 - param_1[0x21b];
  if (param_1 != (int *)0xfffff780) {
    iVar2 = param_1[0x220];
  }
  if ((uint)(iVar6 + iVar2) < uVar5) {
    uVar5 = uVar5 - iVar6;
    uVar12 = param_1[0x21e];
    if ((uint)param_1[0x21e] < uVar5) {
      param_1[0x21e] = uVar5;
      uVar12 = uVar5;
    }
    if ((uint)param_1[0x21d] < uVar12) {
      param_1[0x21d] = uVar12;
    }
    if (param_1 != (int *)0xfffff780) {
      param_1[0x220] = 0;
    }
    if (piVar7 != (int *)0xffffff4c) {
      param_1[0x247] = 0;
    }
  }
  uVar12 = param_1[0x3c];
  if ((uint)param_1[0x221] < (uint)param_1[0x21e]) {
    param_1[0x221] = param_1[0x21e];
  }
  if (uVar12 == 0) {
    if (param_1[0x4f] == 1) {
      uVar19 = FUN_01b89130(param_1,param_4,uVar15);
      param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
      uVar5 = (uint)uVar19;
      if (0xffffff88 < uVar5) goto LAB_01b8aa74;
      if (uVar5 == 1) {
        if (*(int *)(param_1[0x218] + 0x11dc) == 2) {
          *(undefined4 *)(param_1[0x218] + 0x11dc) = 1;
        }
        if (param_1[0xb7] != 0) {
          uVar5 = 0xffffff96;
          goto LAB_01b8aa74;
        }
LAB_01b8aaec:
        uVar19 = FUN_01b85618(puVar16,param_3,param_4,uVar15,uVar9);
      }
      else {
        local_4c = param_1 + 0x2a4;
        local_48 = uVar12;
        if (0x20 < (uint)(param_1[0xbe] - param_1[0xbd])) {
          iVar2 = param_1[0xbe] - param_1[0xbd] >> 3;
          FUN_01b8a4bc(&local_4c,0,iVar2,param_1,param_1 + 0xbd);
          local_4c[local_48] = iVar2;
        }
        uVar12 = local_48;
        iVar2 = param_1[0x218];
        local_44 = *(undefined4 *)(iVar2 + 0x11e8);
        uStack_40 = *(undefined4 *)(iVar2 + 0x11ec);
        local_3c = *(undefined4 *)(iVar2 + 0x11f0);
        local_38 = *(undefined4 *)(iVar2 + 0x11e8);
        local_30 = *(undefined4 *)(iVar2 + 0x11f0);
        uStack_34 = uStack_40;
        FUN_01bed93e(piVar8,0,0x2c);
        if (uVar12 == 0) {
          uVar19 = FUN_01b88d80(param_1,param_1 + 0xbd,&local_44,&local_38,puVar16,param_3,param_4,
                                uVar15,uVar9,0);
        }
        else {
          piVar13 = param_1 + 0x28e;
          piVar14 = param_1 + 0x2a4;
          FUN_01b85350(piVar13,param_1 + 0xbd,0,*piVar14);
          local_70 = 0;
          local_6c = 0;
          local_80 = 0;
          local_7c = puVar16;
          local_78 = param_3;
          do {
            iVar1 = FUN_01b852cc(piVar13);
            iVar2 = 0;
            for (iVar4 = 0; param_1[0x28f] - param_1[0x28e] >> 3 != iVar4; iVar4 = iVar4 + 1) {
              iVar11 = (uint)*(ushort *)(param_1[0x28e] + 6 + iVar4 * 8) + iVar2;
              iVar2 = iVar11 + 3;
              if ((iVar4 == param_1[0x298]) && (param_1[0x297] == 2)) {
                iVar2 = iVar11 + 0x10003;
              }
            }
            if (local_6c == uVar12) {
              uVar5 = uVar9;
              local_84 = uVar15 - local_80;
            }
            else {
              FUN_01b85350(piVar8,param_1 + 0xbd,*piVar14,piVar14[1]);
              uVar5 = 0;
              local_84 = iVar1 + iVar2;
            }
            uVar19 = FUN_01b88d80(param_1,piVar13,&local_44,&local_38,local_7c,local_78,param_4,
                                  local_84,uVar5,1);
            param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
            uVar5 = (uint)uVar19;
            if (0xffffff88 < uVar5) goto LAB_01b8aa74;
            piVar14 = piVar14 + 1;
            local_80 = local_80 + iVar1 + iVar2;
            param_4 = param_4 + local_84;
            local_7c = (undefined2 *)((int)local_7c + uVar5);
            local_78 = local_78 - uVar5;
            local_70 = local_70 + uVar5;
            uVar19 = CONCAT44(uStack_40,local_70);
            *piVar13 = *piVar8;
            param_1[0x28f] = param_1[0x29a];
            param_1[0x290] = param_1[0x29b];
            param_1[0x291] = param_1[0x29c];
            param_1[0x292] = param_1[0x29d];
            param_1[0x293] = param_1[0x29e];
            param_1[0x294] = param_1[0x29f];
            param_1[0x295] = param_1[0x2a0];
            param_1[0x296] = param_1[0x2a1];
            param_1[0x297] = param_1[0x2a2];
            param_1[0x298] = param_1[0x2a3];
            local_6c = local_6c + 1;
          } while (local_6c <= uVar12);
          iVar2 = param_1[0x218];
          *(undefined4 *)(iVar2 + 0x11e8) = local_44;
          *(undefined4 *)(iVar2 + 0x11f0) = local_3c;
          *(undefined4 *)(iVar2 + 0x11ec) = uStack_40;
        }
      }
      param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
      uVar5 = (uint)uVar19;
      if (0xffffff88 < uVar5) goto LAB_01b8aa74;
    }
    else {
      uVar19 = FUN_01b89558(param_1,(int)puVar16 + 3,param_3 - 3,param_4,uVar15,1);
      param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
      uVar5 = (uint)uVar19;
      if (0xffffff88 < uVar5) goto LAB_01b8aa74;
      if (uVar5 == 0) goto LAB_01b8aaec;
      if (uVar5 == 1) {
        iVar2 = uVar9 + uVar15 * 8 + 2;
      }
      else {
        iVar2 = uVar9 + 4 + uVar5 * 8;
      }
      uVar19 = CONCAT44(param_2,uVar5 + 3);
      *puVar16 = (short)iVar2;
      *(char *)(puVar16 + 1) = (char)((uint)iVar2 >> 0x10);
    }
    goto LAB_01b8a930;
  }
  uVar19 = FUN_01b89130(param_1,param_4,uVar15);
  param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
  uVar5 = (uint)uVar19;
  if (0xffffff88 < uVar5) goto LAB_01b8aa74;
  if (uVar5 == 0) {
    if (param_1[0xbb] != 0) {
LAB_01b8a9e4:
      uVar19 = FUN_01b8e430(param_1,puVar16,param_3,param_4,uVar15,uVar9);
      param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
      uVar5 = (uint)uVar19;
      if (uVar5 == 0xffffffba) goto LAB_01b8aa50;
      if (0xffffff88 < uVar5) goto LAB_01b8aa74;
      if (uVar5 != 0) {
        uVar12 = param_1[0x36];
        if (uVar12 < 7) {
          uVar12 = 7;
        }
        if (uVar5 < (uVar15 + 1) - (uVar15 >> (uVar12 - 1 & 0xff))) {
          iVar2 = param_1[0x218];
          param_1[0x218] = param_1[0x219];
          param_1[0x219] = iVar2;
          goto LAB_01b8a918;
        }
      }
      goto LAB_01b8aa50;
    }
    uVar5 = param_1[0xbe] - param_1[0xbd];
    bVar18 = 0x17 < uVar5;
    bVar17 = uVar5 == 0x18;
    if (uVar5 < 0x19) {
      bVar18 = 8 < (uint)(param_1[0xc0] - param_1[0xbf]);
      bVar17 = param_1[0xc0] - param_1[0xbf] == 9;
    }
    if (bVar18 && !bVar17) goto LAB_01b8a9e4;
    uVar19 = FUN_01b85678(param_4,uVar15);
    if ((int)uVar19 == 0) goto LAB_01b8a9e4;
    uVar19 = CONCAT44((int)((ulonglong)uVar19 >> 0x20),4);
    *(undefined1 *)((int)puVar16 + 3) = *param_4;
    iVar2 = uVar9 + uVar15 * 8 + 2;
    *puVar16 = (short)iVar2;
    *(char *)(puVar16 + 1) = (char)((uint)iVar2 >> 0x10);
  }
  else {
LAB_01b8aa50:
    uVar19 = FUN_01b85618(puVar16,param_3,param_4,uVar15,uVar9);
    param_2 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
    uVar5 = (uint)uVar19;
    if (0xffffff88 < uVar5) goto LAB_01b8aa74;
  }
LAB_01b8a918:
  if (*(int *)(param_1[0x218] + 0x11dc) == 2) {
    *(undefined4 *)(param_1[0x218] + 0x11dc) = 1;
  }
LAB_01b8a930:
  puVar3 = (undefined2 *)((ulonglong)uVar19 >> 0x20);
  param_1[0xbb] = 0;
  puVar16 = (undefined2 *)((int)puVar16 + (int)uVar19);
  param_3 = param_3 - (int)uVar19;
  local_60 = local_60 - uVar15;
  if (local_60 == 0) {
    if (local_58 < puVar16) {
      param_7 = param_7 & 1;
    }
    else {
      param_7 = 0;
    }
    if (param_7 != 0) {
      *param_1 = 3;
    }
    uVar19 = CONCAT44(puVar3,(int)puVar16 - (int)local_58);
    goto LAB_01b8a978;
  }
  param_4 = puVar10;
  goto LAB_01b8a78c;
}

