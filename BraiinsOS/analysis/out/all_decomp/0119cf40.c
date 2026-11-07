// FUN_0119cf40 @ 0119cf40 size=972 calls_out=10 calls_in=1
// strings: additionalItems | additionalItems | additionalItems

void FUN_0119cf40(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined1 *local_c8;
  undefined2 local_c4;
  int *local_b0;
  undefined4 local_ac;
  undefined1 local_90;
  char *local_8c;
  int *local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 local_60;
  int local_58;
  undefined *local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  undefined *local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  iVar12 = *param_3;
  if (iVar12 == 0) {
LAB_0119d040:
    *param_1 = 0;
    return;
  }
  iVar18 = param_3[1];
  do {
    uVar3 = *(ushort *)(iVar12 + 0x192);
    iVar17 = iVar12 + 0x10c;
    uVar15 = 0xffffffff;
    iVar16 = (uint)uVar3 * 0xc;
    do {
      if (iVar16 == 0) {
        uVar15 = (uint)uVar3;
        goto LAB_0119cff0;
      }
      uVar14 = *(uint *)(iVar17 + 8);
      uVar11 = uVar14;
      if (4 < uVar14) {
        uVar11 = 5;
      }
      iVar6 = FUN_016dd50a(&DAT_004146ea,*(undefined4 *)(iVar17 + 4),uVar11);
      if (iVar6 == 0) {
        iVar6 = 5 - uVar14;
      }
      iVar16 = iVar16 + -0xc;
      uVar15 = uVar15 + 1;
      iVar17 = iVar17 + 0xc;
    } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
    if (0 < iVar6 == iVar6 < 0) {
      pcVar13 = (char *)(iVar12 + uVar15 * 0x18);
      cVar2 = *pcVar13;
      if (cVar2 == '\x01') {
        if (pcVar13[1] != '\0') {
          *param_1 = 0;
          return;
        }
        uVar19 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                              "additionalItems",0xf);
        puVar9 = (undefined8 *)thunk_FUN_016d4a50(8);
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *puVar9 = uVar19;
        *param_1 = 1;
        param_1[1] = puVar9;
        param_1[2] = &DAT_01889368;
        return;
      }
      if (cVar2 != '\x04') {
        if (cVar2 == '\x05') {
          *param_1 = 0;
          return;
        }
        uStack_70 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                 "additionalItems",0xf);
        piVar8 = (int *)uStack_70;
        do {
          iVar12 = *piVar8;
          bVar4 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar4);
        *piVar8 = iVar12 + 1;
        if (-1 < iVar12) {
          DataMemoryBarrier(0xb);
          if (DAT_018da8bc != 0) {
            FUN_0120d52c();
          }
          do {
            iVar12 = *DAT_018da8b4;
            bVar4 = (bool)hasExclusiveAccess(DAT_018da8b4);
          } while (!bVar4);
          *DAT_018da8b4 = iVar12 + 1;
          if (-1 < iVar12) {
            local_78 = DAT_018da8b4;
            uStack_74 = DAT_018da8b8;
            local_90 = 6;
            local_c4 = 0x2301;
            local_c8 = &DAT_80000028;
            local_e8 = 1;
            local_8c = param_4;
            local_e4 = uStack_70;
            iVar12 = thunk_FUN_016d4a50(0x80);
            if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x80);
            }
            FUN_016dd1aa(iVar12,&local_e8,0x80);
            *param_1 = 1;
            param_1[1] = 0;
            param_1[2] = iVar12;
            return;
          }
        }
        goto LAB_0119d314;
      }
      FUN_0119d4b4(&local_e8,param_2,"additionalItems",0xf);
      uVar7 = 0;
      iVar12 = *(int *)(pcVar13 + 0xc);
      if (*param_4 == '\x01') {
        if (param_4[1] != '\0') goto LAB_0119d2cc;
        do {
          iVar18 = *local_b0;
          bVar4 = (bool)hasExclusiveAccess(local_b0);
        } while (!bVar4);
        *local_b0 = iVar18 + 1;
        if (iVar18 < 0) {
LAB_0119d314:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x119d314);
          (*pcVar1)();
        }
        puVar10 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar10 = local_b0;
        puVar10[1] = local_ac;
        puVar10[2] = iVar12;
        param_1[1] = puVar10;
        param_1[2] = &DAT_01889388;
      }
      else {
        if (*param_4 != '\x05') goto LAB_0119d2cc;
        uVar5 = FUN_01352d48(local_60,param_4);
        FUN_0125acb4(&local_58,&local_e8,param_4,uVar5);
        if (local_58 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          local_40 = local_58;
          local_38 = local_50;
          iStack_34 = iStack_4c;
          iStack_30 = iStack_48;
          local_3c = local_54;
          local_2c = iVar12;
          piVar8 = (int *)thunk_FUN_016d4a50(0x18);
          if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x18);
          }
          local_54 = &DAT_01889348;
          *piVar8 = local_40;
          piVar8[1] = (int)local_3c;
          piVar8[2] = local_38;
          piVar8[3] = iStack_34;
          piVar8[4] = iStack_30;
          piVar8[5] = local_2c;
        }
        param_1[1] = piVar8;
        param_1[2] = local_54;
      }
      uVar7 = 1;
LAB_0119d2cc:
      *param_1 = uVar7;
      FUN_01161600(&local_e8);
      return;
    }
LAB_0119cff0:
    if (iVar18 == 0) goto LAB_0119d040;
    iVar18 = iVar18 + -1;
    iVar12 = *(int *)(iVar12 + uVar15 * 4 + 0x198);
  } while( true );
}

