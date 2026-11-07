// FUN_012b94fc @ 012b94fc size=208 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_012b94fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_r11;
  undefined8 uVar9;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x18);
  while (uVar9 = FUN_012b11f4(param_1), puVar2 = (undefined4 *)uVar9, puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_012bf928((int)((ulonglong)uVar9 >> 0x20),"");
    if (iVar3 != 0) {
      uVar8 = *puVar2;
      unaff_r11 = puVar2[1];
      iVar3 = FUN_012a4878(*(undefined4 *)(iVar6 + 0x48),*(undefined4 *)(iVar6 + 0x4c),uVar8,
                           unaff_r11);
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x11c) & 4) == 0)) {
        iVar3 = iVar5 << 3;
        piVar7 = (int *)(iVar1 + 4);
        while( true ) {
          if (iVar3 == 0) goto LAB_012b95bc;
          if ((*piVar7 == unaff_r11) &&
             (iVar4 = thunk_FUN_01bed842(piVar7[-1],uVar8,unaff_r11), iVar4 == 0)) break;
          iVar3 = iVar3 + -8;
          piVar7 = piVar7 + 2;
        }
      }
    }
  }
  uVar8 = 0;
LAB_012b95bc:
  return CONCAT44(unaff_r11,uVar8);
}

