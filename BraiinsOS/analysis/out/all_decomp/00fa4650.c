// FUN_00fa4650 @ 00fa4650 size=308 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_00fa4650(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r5;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  puVar9 = (undefined4 *)param_1[1];
  iVar11 = param_1[2];
  iVar2 = param_1[3];
  iVar3 = param_1[4];
  iVar4 = param_1[5];
  iVar6 = param_1[6];
  puVar14 = (undefined4 *)*param_1;
LAB_00fa468c:
  do {
    puVar13 = puVar14;
    if (puVar13 == puVar9) {
      uVar8 = 0;
LAB_00fa4768:
      return CONCAT44(unaff_r5,uVar8);
    }
    puVar14 = puVar13 + 2;
    *param_1 = puVar14;
    if (iVar11 == iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018807b4);
    }
    cVar1 = *(char *)(iVar11 + 0x39);
    iVar11 = iVar11 + 0x3c;
    param_1[2] = iVar11;
    if (cVar1 != '\0') {
      uVar8 = *puVar13;
      iVar7 = *(int *)(iVar3 + 0x48);
      unaff_r5 = puVar13[1];
      for (iVar12 = *(int *)(iVar3 + 0x4c) * 0x134; iVar12 != 0; iVar12 = iVar12 + -0x134) {
        if ((*(int *)(iVar7 + 0x118) == unaff_r5) &&
           (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x114),uVar8,unaff_r5), iVar5 == 0))
        {
          if ((*(byte *)(iVar7 + 0x11c) & 4) == 0) {
            iVar7 = iVar6 << 3;
            piVar10 = (int *)(iVar4 + 4);
            goto LAB_00fa4730;
          }
          break;
        }
        iVar7 = iVar7 + 0x134;
      }
    }
  } while( true );
LAB_00fa4730:
  if (iVar7 == 0) goto LAB_00fa4768;
  if ((*piVar10 == unaff_r5) &&
     (iVar12 = thunk_FUN_016dd50a(piVar10[-1],uVar8,unaff_r5), iVar12 == 0)) goto LAB_00fa468c;
  iVar7 = iVar7 + -8;
  piVar10 = piVar10 + 2;
  goto LAB_00fa4730;
}

