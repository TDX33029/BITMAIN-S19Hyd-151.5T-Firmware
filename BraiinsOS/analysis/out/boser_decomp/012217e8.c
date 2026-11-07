// FUN_012217e8 @ 012217e8 size=392 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_012217e8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  bool bVar12;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    uVar8 = 0;
LAB_01221958:
    return CONCAT44(param_2,uVar8);
  }
  puVar11 = (undefined *)param_3[1];
  uVar8 = (uint)((int *)*param_3 == (int *)0x0);
  piVar6 = (int *)*param_3;
  iVar9 = param_2;
  iVar3 = *param_1;
LAB_01221824:
  iVar10 = iVar3 + 0x2e0;
  *param_1 = iVar10;
  piVar2 = (int *)FUN_01220064(iVar3);
  if (uVar8 == 0) {
    FUN_00f80320(piVar6,puVar11);
  }
  uVar8 = 1;
  *param_3 = (int)piVar2;
  param_3[1] = (int)&DAT_01c2458c;
  if (iVar9 != 0) {
    param_2 = iVar9;
    do {
      if (piVar2[7] == 2) {
LAB_01221904:
        if ((*piVar2 != 1) || (iVar3 = FUN_012209b0(piVar2 + 1), iVar3 == 0)) goto LAB_0122192c;
      }
      else {
        iVar3 = piVar2[8];
        iVar4 = piVar2[9];
        iVar5 = piVar2[10];
        while( true ) {
          if (iVar4 != 0) {
            iVar7 = 0;
            if (iVar4 != iVar5) {
              iVar7 = iVar4 + 0x30;
            }
            piVar2[9] = iVar7;
            if (iVar4 != iVar5) goto LAB_01221920;
          }
          bVar12 = (piVar2[7] & 1U) != 0;
          if (bVar12) {
            piVar2[8] = 0;
          }
          if (!bVar12 || iVar3 == 0) break;
          iVar4 = *(int *)(iVar3 + 4);
          iVar5 = iVar4 + *(int *)(iVar3 + 8) * 0x30;
          iVar3 = 0;
          piVar2[9] = iVar4;
          piVar2[10] = iVar5;
        }
        iVar3 = piVar2[0xb];
        if (iVar3 == 0) {
LAB_012218fc:
          piVar2[7] = 2;
          goto LAB_01221904;
        }
        iVar4 = 0;
        if (iVar3 != piVar2[0xc]) {
          iVar4 = iVar3 + 0x30;
        }
        piVar2[0xb] = iVar4;
        if (iVar3 == piVar2[0xc]) goto LAB_012218fc;
      }
LAB_01221920:
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        param_2 = iVar9;
        goto LAB_01221958;
      }
    } while( true );
  }
  param_2 = 0;
  goto LAB_01221958;
LAB_0122192c:
  uVar8 = 0;
  puVar11 = &DAT_01c2458c;
  piVar6 = piVar2;
  iVar9 = param_2;
  iVar3 = iVar10;
  if (iVar10 == iVar1) goto LAB_01221958;
  goto LAB_01221824;
}

