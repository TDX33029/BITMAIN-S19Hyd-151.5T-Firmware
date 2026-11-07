// FUN_013a8af0 @ 013a8af0 size=248 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_013a8af0(int param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  if (uVar2 <= uVar3) {
    uVar4 = param_3[3];
    if (*param_3 - 1U < 2) {
      if ((uVar2 < uVar4) && (*(char *)(param_1 + (uint)*(byte *)(param_3[2] + uVar2)) != '\0')) {
LAB_013a8b90:
        if (param_5 != 0) {
          *param_4 = uVar2 + 1;
        }
        if (1 < param_5) {
          param_4[1] = uVar2 + 2;
        }
        return 1;
      }
    }
    else {
      if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar4,&DAT_01894828);
      }
      if (uVar3 != uVar2) {
        iVar1 = 0;
        while (*(char *)(param_1 + (uint)*(byte *)(param_3[2] + uVar2 + iVar1)) == '\0') {
          iVar1 = iVar1 + 1;
          if (uVar3 - uVar2 == iVar1) {
            return 0;
          }
        }
        uVar2 = iVar1 + uVar2;
        if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
        }
        goto LAB_013a8b90;
      }
    }
  }
  return 0;
}

