// FUN_017417fc @ 017417fc size=668 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_017417fc(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  uVar5 = param_2[0x16];
  if (0x3f < uVar5) {
    FUN_0170793c();
    goto LAB_01741a90;
  }
  piVar7 = param_2 + 6;
  uVar3 = uVar5 + 1;
  iVar8 = param_2[5];
  iVar6 = param_2[4];
  *(undefined1 *)((int)piVar7 + uVar5) = 0x80;
  if (uVar3 < 0x39) {
    if (uVar3 != 0x38) {
      iVar4 = 0x38 - uVar3;
      piVar2 = (int *)((int)piVar7 + uVar3);
      goto LAB_01741a78;
    }
  }
  else {
    if (uVar3 != 0x40) {
      FUN_016dd606((int *)((int)piVar7 + uVar3),0,0x40 - uVar3);
    }
    FUN_017094dc(param_2,piVar7,1);
    iVar4 = 0x38;
    piVar2 = piVar7;
LAB_01741a78:
    FUN_016dd606(piVar2,0,iVar4);
  }
  piVar2 = param_2 + 0x14;
  if (((&iStack_2c <= piVar2) || (param_2 + 0x15 <= &iStack_2c)) &&
     (&iStack_28 <= piVar2 || piVar2 <= &iStack_2c)) {
    piVar2 = param_2 + 0x15;
    param_2[0x14] = iVar6;
    if (((&iStack_28 <= piVar2) || (param_2 + 0x16 <= &iStack_28)) &&
       (&local_24 <= piVar2 || piVar2 <= &iStack_28)) {
      param_2[0x15] = iVar8;
      FUN_017094dc(param_2,piVar7,1);
      param_2[0x16] = 0;
      FUN_016dd606(piVar7,0,0x40);
      if (((&iStack_30 <= param_1) || (param_1 + 1 <= &iStack_30)) &&
         (param_1 <= &iStack_30 || &iStack_2c <= param_1)) {
        piVar7 = param_1 + 1;
        *param_1 = *param_2;
        if (((&iStack_34 <= piVar7) || (param_1 + 2 <= &iStack_34)) &&
           (piVar7 <= &iStack_34 || &iStack_30 <= piVar7)) {
          piVar7 = param_1 + 2;
          param_1[1] = param_2[1];
          if (((&iStack_38 <= piVar7) || (param_1 + 3 <= &iStack_38)) &&
             (piVar7 <= &iStack_38 || &iStack_34 <= piVar7)) {
            piVar7 = param_1 + 3;
            param_1[2] = param_2[2];
            if (((&iStack_3c <= piVar7) || (param_1 + 4 <= &iStack_3c)) &&
               (piVar7 <= &iStack_3c || &iStack_38 <= piVar7)) {
              param_1[3] = param_2[3];
              if (local_24 == DAT_018ddaf8) {
                return 1;
              }
LAB_01741a90:
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1741a94);
  (*pcVar1)();
}

