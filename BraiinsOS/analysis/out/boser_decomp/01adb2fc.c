// FUN_01adb2fc @ 01adb2fc size=568 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01adb2fc(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar15 = param_1[0x16];
  iVar2 = *param_1;
  iVar16 = 0;
  iVar3 = param_1[0x10];
  iVar4 = param_1[0x11];
  iVar5 = param_1[0x12];
  iVar6 = param_1[0x13];
  iVar7 = param_1[0x14];
  iVar8 = param_1[0x15];
  iVar9 = param_1[0x17];
  iVar14 = param_1[0x1a];
  iVar13 = param_1[0x1b];
  iVar12 = param_1[8];
  iVar10 = param_1[0x18];
  do {
    piVar17 = (int *)(param_2 + iVar16);
    if ((piVar17[0x1b] == iVar13) &&
       (iVar11 = thunk_FUN_01bed842(piVar17[0x1a],iVar14,iVar13), iVar11 == 0)) {
      if (iVar15 == -0x80000000 || piVar17[0x16] == -0x80000000) {
        if (iVar15 == -0x80000000 && piVar17[0x16] == -0x80000000) {
LAB_01adb404:
          bVar1 = iVar6 == -0x80000000 && piVar17[0x13] == -0x80000000;
          if (iVar6 == -0x80000000 || piVar17[0x13] == -0x80000000) {
LAB_01adb42c:
            if (bVar1) {
LAB_01adb434:
              if (iVar2 == 0 || *piVar17 == 0) {
                if (iVar2 == 0 && *piVar17 == 0) {
                  return 1;
                }
              }
              else {
                iVar11 = FUN_01adfc58(piVar17,param_1);
                if (iVar11 != 0) {
                  return 1;
                }
              }
            }
          }
          else if ((piVar17[0x15] == iVar8) &&
                  (iVar11 = thunk_FUN_01bed842(piVar17[0x14],iVar7,iVar8), iVar11 == 0)) {
            if (iVar3 == -0x80000000 || piVar17[0x10] == -0x80000000) {
              if (iVar3 == -0x80000000 && piVar17[0x10] == -0x80000000) {
LAB_01adb4a4:
                iVar11 = piVar17[8];
                bVar1 = iVar12 == 0 && iVar11 == 0;
                if (iVar12 == 0 || iVar11 == 0) goto LAB_01adb42c;
                iVar11 = FUN_01adfc58(piVar17 + 8,param_1 + 8);
                if (iVar11 != 0) goto LAB_01adb434;
              }
            }
            else if ((piVar17[0x12] == iVar5) &&
                    (iVar11 = thunk_FUN_01bed842(piVar17[0x11],iVar4,iVar5), iVar11 == 0))
            goto LAB_01adb4a4;
          }
        }
      }
      else if ((piVar17[0x18] == iVar10) &&
              (iVar11 = thunk_FUN_01bed842(piVar17[0x17],iVar9,iVar10), iVar11 == 0))
      goto LAB_01adb404;
    }
    iVar16 = iVar16 + 0x70;
    if (param_3 * 0x70 == iVar16) {
      return 0;
    }
  } while( true );
}

