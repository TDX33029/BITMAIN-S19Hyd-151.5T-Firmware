// FUN_01226c60 @ 01226c60 size=824 calls_out=8 calls_in=3
// strings: ASCII label already validated

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01226c60(char *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  char *pcVar10;
  bool bVar11;
  int local_24c;
  undefined4 local_248;
  undefined4 local_244;
  int local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((0xffffff02 < param_2 - 0xfe) && (cVar1 = param_1[param_2 - 1], cVar1 != '.')) {
    uVar6 = 0;
    uVar8 = 0;
    do {
      while ((byte)param_1[uVar8] != 0x2e) {
        if ((&DAT_003a8ae0)[(byte)param_1[uVar8]] != '\x01') {
          return 0;
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == param_2) goto LAB_01226d14;
      }
      if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar8,param_2,&DAT_0188aaa8);
      }
      if (uVar6 - uVar8 < 0xffffffc1) {
        return 0;
      }
      cVar9 = param_1[uVar6];
      bVar11 = cVar9 == '-';
      if (!bVar11) {
        cVar9 = param_1[uVar8 - 1];
      }
      if (bVar11 || cVar9 == '-') {
        return 0;
      }
      uVar6 = uVar8 + 1;
      uVar8 = uVar6;
    } while (uVar6 != param_2);
LAB_01226d14:
    if (param_2 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar6,param_2,param_2,&DAT_0188aa98);
    }
    if (0xffffffc0 < uVar6 - param_2) {
      if (cVar1 != '-') {
        uVar6 = (uint)(byte)param_1[uVar6];
      }
      if (cVar1 != '-' && uVar6 != 0x2d) {
LAB_01226d68:
        do {
          if (param_2 == 0) {
            return 1;
          }
          uVar6 = 0;
          do {
            cVar1 = param_1[uVar6];
            if (cVar1 == '.') {
              pcVar10 = param_1 + uVar6 + 1;
              param_2 = param_2 - (uVar6 + 1);
              goto LAB_01226dac;
            }
            uVar6 = uVar6 + 1;
          } while (param_2 != uVar6);
          uVar6 = param_2;
          pcVar10 = param_1;
LAB_01226dac:
          if (uVar6 < 4) {
LAB_01226d5c:
            param_1 = pcVar10;
            if (cVar1 != '.') {
              return 1;
            }
            goto LAB_01226d68;
          }
          if (param_1[2] == '-') {
            cVar9 = *param_1;
            if (param_1[3] != '-') goto LAB_01226df0;
            cVar2 = '-';
            if (cVar9 == 'x') {
              cVar2 = param_1[1];
            }
            if (cVar9 != 'x' || cVar2 != 'n') {
              return 0;
            }
          }
          else {
            cVar9 = *param_1;
LAB_01226df0:
            if (((cVar9 != 'x') || (param_1[1] != 'n' || param_1[2] != '-')) || (param_1[3] != '-'))
            goto LAB_01226d5c;
          }
          FUN_00fab1e0(&local_220,param_1 + 4,uVar6 - 4);
          uVar5 = local_218;
          uVar4 = local_21c;
          if (local_220 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("ASCII label already validated",0x1d,&local_40,&DAT_0188aae8,&DAT_0188a878)
            ;
          }
          FUN_016dd606(&local_220,0,0x1e0);
          FUN_011ef210(&local_240,&local_220,uVar4,uVar5);
          if (local_240 == 0) {
            if (0x3b < local_44) {
              thunk_FUN_016d3fb4(local_218);
            }
            return 0;
          }
          local_40 = local_240;
          local_3c = uStack_23c;
          uStack_38 = uStack_238;
          local_34 = local_234;
          uStack_30 = uStack_230;
          uStack_2c = uStack_22c;
          uStack_28 = uStack_228;
          FUN_011e1c1c(&local_24c);
          uVar5 = local_244;
          uVar4 = local_248;
          iVar3 = local_24c;
          if (0x3b < local_44) {
            thunk_FUN_016d3fb4(local_218);
          }
          if (iVar3 == -0x80000000) {
            return 0;
          }
          iVar7 = FUN_01226fe4(uVar4,uVar5);
          if (iVar7 == 0) {
            if (iVar3 == 0) {
              return 0;
            }
            thunk_FUN_016d3fb4(uVar4);
            return 0;
          }
          if (iVar3 != 0) {
            thunk_FUN_016d3fb4(uVar4);
          }
          param_1 = pcVar10;
          if (cVar1 != '.') {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}

