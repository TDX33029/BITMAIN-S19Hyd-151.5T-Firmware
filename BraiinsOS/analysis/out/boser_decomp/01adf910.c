// FUN_01adf910 @ 01adf910 size=840 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01adf910(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int extraout_r2;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  uint local_74 [3];
  int local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [3];
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar13 = param_1[0xd];
  piVar15 = param_2 + param_3 * 0x12;
  iVar4 = param_1[0x11];
  iVar5 = *param_1;
  iVar6 = param_1[1];
  iVar10 = param_1[2];
  iVar14 = param_1[0xe];
  iVar12 = param_1[0xf];
  iVar17 = param_1[0x10];
  iVar2 = param_1[3];
  iVar16 = param_1[4];
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = iVar2;
  }
  uVar7 = (uint)(iVar6 != 0);
  do {
    if ((param_2[0xe] == iVar14) &&
       (iVar3 = thunk_FUN_01bed842(param_2[0xd],iVar13,iVar14), iVar3 == 0)) {
      if (iVar12 == -0x80000000 || param_2[0xf] == -0x80000000) {
        if (iVar12 == -0x80000000 && param_2[0xf] == -0x80000000) {
LAB_01adfa08:
          if (*param_2 == 1) {
            if ((iVar5 != 0) && (param_2[3] == iVar2)) {
              local_74[2] = param_2[1];
              local_54 = 0;
              if (local_74[2] != 0) {
                local_54 = iVar2;
              }
              local_68 = param_2[2];
              local_74[0] = (uint)(local_74[2] != 0);
              local_28 = 0;
              local_2c = 0;
              local_3c = 0;
              local_50[1] = 0;
              local_60 = 0;
              local_74[1] = 0;
              local_64 = local_74[0];
              local_5c = local_74[2];
              local_58 = local_68;
              local_50[0] = uVar7;
              local_50[2] = iVar6;
              local_44 = iVar10;
              local_40 = uVar7;
              local_38 = iVar6;
              local_34 = iVar10;
              local_30 = iVar1;
              do {
                while( true ) {
                  uVar19 = FUN_01ad5f64(local_74);
                  piVar8 = (int *)((ulonglong)uVar19 >> 0x20);
                  iVar3 = (int)uVar19;
                  if (iVar3 == 0) goto LAB_01adfc00;
                  uVar19 = FUN_01ad5f64(local_50);
                  piVar9 = (int *)((ulonglong)uVar19 >> 0x20);
                  iVar11 = (int)uVar19;
                  if (iVar11 == 0) goto LAB_01adfc00;
                  if (*(int *)(iVar3 + 8) != *(int *)(iVar11 + 8)) goto LAB_01adf9d0;
                  iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar11 + 4))
                  ;
                  bVar18 = iVar3 != 0;
                  iVar11 = extraout_r2;
                  if (!bVar18) {
                    iVar11 = piVar8[0x10];
                    iVar3 = piVar9[0x10];
                  }
                  if ((bVar18 || iVar11 != iVar3) ||
                     (iVar3 = thunk_FUN_01bed842(piVar8[0xf],piVar9[0xf]), iVar3 != 0))
                  goto LAB_01adf9d0;
                  if (piVar8[8] == -0x80000000 || piVar9[8] == -0x80000000) {
                    if (piVar8[8] != -0x80000000 || piVar9[8] != -0x80000000) goto LAB_01adf9d0;
                  }
                  else if ((piVar8[10] != piVar9[10]) ||
                          (iVar3 = thunk_FUN_01bed842(piVar8[9],piVar9[9]), iVar3 != 0))
                  goto LAB_01adf9d0;
                  if (piVar8[0xb] == -0x80000000 || piVar9[0xb] == -0x80000000) {
                    if (piVar8[0xb] != -0x80000000 || piVar9[0xb] != -0x80000000) goto LAB_01adf9d0;
                  }
                  else {
                    iVar3 = FUN_01adb830(piVar8[0xc],piVar8[0xd],piVar9[0xc],piVar9[0xd]);
                    if (iVar3 == 0) goto LAB_01adf9d0;
                  }
                  if (*piVar8 != 0 && *piVar9 != 0) break;
                  if (*piVar8 != 0 || *piVar9 != 0) goto LAB_01adf9d0;
                }
                iVar3 = FUN_01adfc58(piVar8,piVar9);
              } while (iVar3 != 0);
            }
          }
          else if (iVar5 == 0) {
LAB_01adfc00:
            iVar3 = param_2[4];
            if (iVar16 == 0 || iVar3 == 0) {
              if (iVar16 == 0 && iVar3 == 0) {
                return 1;
              }
            }
            else {
              iVar3 = FUN_01adfc58(param_2 + 4,param_1 + 4);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
        }
      }
      else if ((param_2[0x11] == iVar4) &&
              (iVar3 = thunk_FUN_01bed842(param_2[0x10],iVar17,iVar4), iVar3 == 0))
      goto LAB_01adfa08;
    }
LAB_01adf9d0:
    param_2 = param_2 + 0x12;
    if (param_2 == piVar15) {
      return 0;
    }
  } while( true );
}

