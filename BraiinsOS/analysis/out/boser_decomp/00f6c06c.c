// FUN_00f6c06c @ 00f6c06c size=2364 calls_out=29 calls_in=0
// strings: Temperature control | Automatic | Target | Dangerous | internal error: entered unreachable code | serialize_value called before serialize_key

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f6c06c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  int local_954;
  int *local_950;
  int *local_92c;
  int *local_910;
  int *local_90c;
  int *local_908;
  int *local_904;
  int *local_900;
  int *local_8fc;
  int *piStack_8f8;
  undefined4 uStack_8f4;
  undefined1 auStack_8f0 [40];
  int *local_8c8;
  int iStack_8c4;
  double local_8c0;
  int *local_8b8;
  double local_8b0;
  int *local_8a8;
  double local_8a0;
  byte local_898;
  int *local_630;
  int *local_62c;
  int *local_628;
  int *local_624;
  int *local_620;
  int *local_61c;
  int *piStack_618;
  undefined4 uStack_614;
  undefined1 auStack_610 [704];
  char local_350 [704];
  int *local_90;
  int *local_8c;
  int *local_88;
  int *piStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  byte local_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  int *local_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined2 local_44;
  undefined1 local_42;
  int local_40;
  int *local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x171]) {
  case '\0':
    iVar4 = param_2[0x170] + 8;
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = iVar4;
LAB_00f6c108:
    param_2[2] = iVar4;
    *(undefined1 *)(param_2 + 0x34) = 0;
switchD_00f6c0ec_caseD_3:
    piVar13 = param_2 + 1;
    piVar9 = param_2 + 2;
    FUN_00f687b8(&local_630,piVar9,param_3);
    piVar16 = local_61c;
    piVar2 = local_620;
    piVar8 = local_624;
    piVar11 = local_628;
    piVar14 = local_62c;
    piVar7 = local_630;
    if (local_630 != (int *)&DAT_00000003) {
      cVar1 = (char)param_2[0x34];
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = (char)param_2[0x33];
      }
      if (bVar17 && cVar1 == '\x03') {
        FUN_00b99500(param_2 + 4);
      }
      if (piVar7 == (int *)0x2) {
        *piVar9 = (int)piVar14;
        param_2[3] = (int)piVar11;
        param_2[4] = (int)piVar8;
        *(undefined2 *)(param_2 + 0x16f) = 0;
        param_2[0x16e] = (int)piVar9;
        goto LAB_00f6c208;
      }
      piVar9 = (int *)0x2;
      local_70 = piVar14;
      local_6c = piVar11;
      local_68 = piVar8;
      local_64 = piVar2;
      local_60 = (byte)piVar16;
      uStack_5f = (undefined2)((uint)piVar16 >> 8);
      uStack_5d = (undefined1)((uint)piVar16 >> 0x18);
      local_74 = piVar7;
      local_78 = (int *)0x2;
      *(undefined1 *)piVar13 = 1;
LAB_00f6c3d4:
      local_92c = local_64;
      piVar11 = local_68;
      local_950 = local_6c;
      piVar14 = local_70;
      piVar7 = local_74;
      uVar3 = SUB41(piVar16,0);
      FUN_00f68740(param_2);
      if (piVar9 == (int *)0x2) {
        local_42 = uStack_5d;
        uVar10 = 2;
        local_44 = uStack_5f;
      }
      else {
        local_954 = thunk_FUN_01be5118(0x13);
        if (local_954 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x13);
        }
        FUN_01bed4e2(local_954,"Temperature control",0x13);
        puVar5 = (undefined4 *)thunk_FUN_01be5118(0x1c);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        *(undefined1 *)((int)puVar5 + 0x1b) = uStack_5d;
        puVar5[3] = local_950;
        *(undefined2 *)((int)puVar5 + 0x19) = uStack_5f;
        puVar5[5] = local_92c;
        *(undefined1 *)(puVar5 + 6) = uVar3;
        *puVar5 = piVar9;
        puVar5[1] = piVar7;
        puVar5[2] = piVar14;
        puVar5[4] = piVar11;
        local_950 = (int *)FUN_01298504(8,1);
        if (local_950 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,8);
        }
        local_950[1] = 0x4c525443;
        *local_950 = 0x504d4554;
        FUN_0196aa8c(&local_630,1);
        if (local_630 == (int *)&DAT_80000000) {
          piVar7 = local_62c;
LAB_00f6c910:
          FUN_0132b958(1,puVar5,4,0x1c);
          local_630 = piVar7;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_630,&DAT_01cf9524,
                       &DAT_01cf9514);
        }
        local_90 = local_630;
        local_8c = local_62c;
        local_88 = local_628;
        piVar7 = (int *)0x0;
        while (piVar14 = piVar7, piVar13 = local_90, piVar14 != (int *)&DAT_0000001c) {
          piVar8 = (int *)((int)puVar5 + (int)piVar14);
          iVar6 = *piVar8;
          iVar12 = piVar8[2];
          iVar15 = piVar8[4];
          iVar4 = piVar8[6];
          local_900 = (int *)&DAT_80000000;
          local_904 = (int *)0x0;
          local_90c = (int *)0x0;
          local_910 = (int *)0x0;
          piVar7 = (int *)FUN_007025b0(&local_910,&DAT_0056d5c4,4);
          piVar11 = local_900;
          if (piVar7 != (int *)0x0) {
LAB_00f6c954:
            local_40 = CONCAT31(local_40._1_3_,6);
            local_3c = piVar7;
            FUN_0126ee34(&local_910);
LAB_00f6c980:
            FUN_00949b70(&local_90);
            goto LAB_00f6c910;
          }
          if (local_910 == (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
          }
          bVar17 = local_900 == (int *)&DAT_80000000;
          local_900 = (int *)&DAT_80000000;
          if (bVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
          }
          local_78 = piVar11;
          local_74 = local_8fc;
          local_70 = piStack_8f8;
          if ((char)iVar4 == '\0') {
            uVar10 = 9;
            piVar7 = (int *)thunk_FUN_01be5118(9);
            if (piVar7 == (int *)0x0) goto LAB_00f6c96c;
            piVar11 = (int *)&DAT_00000009;
            FUN_01bed4e2(piVar7,"Automatic",9);
          }
          else {
            if ((char)iVar4 == '\x01') {
              uVar10 = 6;
              piVar7 = (int *)thunk_FUN_01be5118(6);
              if (piVar7 == (int *)0x0) {
LAB_00f6c96c:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,uVar10);
              }
              *(undefined2 *)(piVar7 + 1) = 0x6c61;
              iVar4 = 0x756e614d;
              piVar11 = (int *)&DAT_00000006;
            }
            else {
              uVar10 = 8;
              piVar7 = (int *)thunk_FUN_01be5118(8);
              if (piVar7 == (int *)0x0) goto LAB_00f6c96c;
              piVar11 = (int *)&DAT_00000008;
              piVar7[1] = 0x64656c62;
              iVar4 = 0x61736944;
            }
            *piVar7 = iVar4;
          }
          local_630 = (int *)CONCAT31(local_630._1_3_,3);
          local_62c = piVar11;
          local_628 = piVar7;
          local_624 = piVar11;
          FUN_0196b484(local_350,(uint)&local_910 | 4,&local_78,&local_630);
          if (local_350[0] != '\x06') {
            FUN_00db4764(local_350);
          }
          if ((((iVar6 != 0) &&
               (piVar7 = (int *)FUN_014a76e4(((undefined4 *)((int)puVar5 + (int)piVar14))[1],
                                             &local_910,"Target",6,
                                             *(undefined4 *)((int)puVar5 + (int)piVar14)),
               piVar7 != (int *)0x0)) ||
              ((iVar12 != 0 &&
               (piVar7 = (int *)FUN_014a76e4(*(undefined4 *)
                                              ((undefined1 *)((int)puVar5 + (int)piVar14) + 0xc),
                                             &local_910,"Hot",3,piVar8[2]), piVar7 != (int *)0x0))))
             || ((iVar15 != 0 &&
                 (piVar7 = (int *)FUN_014a76e4(*(undefined4 *)
                                                ((undefined1 *)((int)puVar5 + (int)piVar14) + 0x14),
                                               &local_910,"Dangerous",9,piVar8[4]),
                 piVar7 != (int *)0x0)))) goto LAB_00f6c954;
          local_630 = local_910;
          local_62c = local_90c;
          local_628 = local_908;
          local_624 = local_904;
          local_620 = local_900;
          local_61c = local_8fc;
          piStack_618 = piStack_8f8;
          uStack_614 = uStack_8f4;
          FUN_0196ac88(&local_40);
          piVar7 = local_88;
          if ((char)local_40 == '\x06') {
            piVar7 = local_3c;
            goto LAB_00f6c980;
          }
          if (local_88 == local_90) {
            FUN_01969b6c(&local_90);
          }
          piVar11 = local_8c + (int)piVar7 * 6;
          *piVar11 = local_40;
          piVar11[1] = (int)local_3c;
          piVar11[2] = iStack_38;
          piVar11[3] = iStack_34;
          piVar11[4] = iStack_30;
          piVar11[5] = iStack_2c;
          local_88 = (int *)((int)piVar7 + 1);
          local_92c = piVar14;
          piVar7 = piVar14 + 7;
        }
        local_630 = *(int **)((uint)&local_90 | 4);
        local_62c = (int *)((undefined4 *)((uint)&local_90 | 4))[1];
        uVar3 = 4;
        FUN_0132b958(1,puVar5,4,0x1c);
        piVar11 = (int *)&DAT_00000008;
        uVar10 = 0;
        piVar7 = (int *)&DAT_000000c8;
        local_58 = local_630;
        piStack_54 = local_62c;
        piStack_50 = local_628;
        piStack_4c = local_624;
        piVar14 = (int *)&DAT_00000008;
      }
      piVar8 = (int *)param_2[0x170];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar17 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar17);
      *piVar8 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181f8c(param_2[0x170]);
      }
      *param_1 = uVar10;
      param_1[1] = piVar7;
      *(undefined1 *)((int)param_1 + 0x1b) = local_42;
      *(undefined2 *)((int)param_1 + 0x19) = local_44;
      param_1[3] = local_950;
      param_1[5] = local_92c;
      *(undefined1 *)(param_1 + 6) = uVar3;
      param_1[7] = piVar13;
      param_1[2] = piVar14;
      param_1[4] = piVar11;
      param_1[8] = local_58;
      param_1[9] = piStack_54;
      param_1[10] = piStack_50;
      param_1[0xb] = piStack_4c;
      *(undefined1 *)(param_1 + 0xf) = 2;
      param_1[0xc] = 0x13;
      param_1[0xe] = 0x13;
      uVar3 = 1;
      param_1[0xd] = local_954;
      goto LAB_00f6c8b4;
    }
    uVar3 = 3;
LAB_00f6c240:
    *(undefined1 *)(param_2 + 1) = uVar3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c199bc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c199bc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[1]) {
    case '\0':
      iVar4 = *param_2;
      goto LAB_00f6c108;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19a0c);
    case '\x03':
      goto switchD_00f6c0ec_caseD_3;
    case '\x04':
    }
LAB_00f6c208:
    FUN_00f68990(&local_630,param_2 + 6,param_3);
    piVar14 = local_62c;
    piVar7 = local_630;
    if (local_630 == (int *)&SUB_00000004 && local_62c == (int *)0x0) {
      uVar3 = 4;
      goto LAB_00f6c240;
    }
    local_90 = local_628;
    local_8c = local_624;
    local_88 = local_620;
    piStack_84 = local_61c;
    piStack_80 = piStack_618;
    uStack_7c = uStack_614;
    FUN_01bed4e2(local_350,auStack_610,0x2c0);
    if ((char)param_2[0x16f] == '\x03') {
      FUN_00f68940(param_2 + 6);
    }
    if (piVar7 == (int *)&DAT_00000003 && piVar14 == (int *)0x0) {
      puVar5 = (undefined4 *)((uint)&local_78 | 4);
      piVar9 = (int *)0x2;
      *puVar5 = local_90;
      puVar5[1] = local_8c;
      puVar5[2] = local_88;
      puVar5[3] = piStack_84;
      puVar5[4] = piStack_80;
      puVar5[5] = uStack_7c;
      local_78 = (int *)0x2;
      piVar13 = piStack_80;
    }
    else {
      FUN_01bed4e2(auStack_8f0,local_350,0x2c0);
      piVar13 = piStack_80;
      local_908 = local_90;
      local_904 = local_8c;
      local_900 = local_88;
      local_8fc = piStack_84;
      piStack_8f8 = piStack_80;
      uStack_8f4 = uStack_7c;
      local_90c = piVar14;
      local_910 = piVar7;
      local_78 = local_8c8;
      if (local_8c8 == (int *)0x2 && iStack_8c4 == 0) {
        FUN_00a98078((uint)&local_78 | 4,0);
        local_78 = (int *)0x2;
      }
      else {
        local_6c = (int *)(float)local_8b0;
        local_70 = local_8b8;
        local_68 = local_8a8;
        local_60 = local_898;
        local_64 = (int *)(float)local_8a0;
        local_74 = (int *)(float)local_8c0;
      }
      piVar9 = local_78;
      FUN_00e83cdc(&local_910);
    }
    FUN_0084ec48(param_2 + 2);
    piVar16 = (int *)(uint)local_60;
    *(undefined1 *)(param_2 + 1) = 1;
    if (piVar9 != (int *)&DAT_00000003) goto LAB_00f6c3d4;
  }
  uVar3 = 3;
  *param_1 = 3;
LAB_00f6c8b4:
  *(undefined1 *)(param_2 + 0x171) = uVar3;
  return;
}

