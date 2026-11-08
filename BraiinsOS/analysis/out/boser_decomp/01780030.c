// FUN_01780030 @ 01780030 size=208 calls_out=3 calls_in=7
// strings: 

void FUN_01780030(char *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      if (param_6 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar3,param_6,param_6,&DAT_01d1a770);
      }
      iVar2 = FUN_018e1734(param_3,param_5 + uVar3,param_6 - uVar3);
      uVar3 = iVar2 + uVar3;
LAB_01780074:
      if (*(int *)(param_3 + 0x74) != 0) {
        FUN_0177f8c4(param_1,param_2,param_3,param_4);
        if (*param_1 == '\x04') goto code_r0x017800a0;
        if (*param_1 != '\x05') {
          return;
        }
        goto LAB_017800c8;
      }
    } while (uVar3 != param_6);
  }
  *(uint *)(param_1 + 4) = param_6;
LAB_017800d4:
  cVar1 = '\x04';
LAB_017800d8:
  *param_1 = cVar1;
  return;
code_r0x017800a0:
  if (*(int *)(param_1 + 4) == 0) {
LAB_017800c8:
    if (uVar3 != 0) {
      *(uint *)(param_1 + 4) = uVar3;
      goto LAB_017800d4;
    }
    cVar1 = '\x05';
    goto LAB_017800d8;
  }
  goto LAB_01780074;
}

