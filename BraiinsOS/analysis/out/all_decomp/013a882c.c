// FUN_013a882c @ 013a882c size=232 calls_out=2 calls_in=0
// strings: 

void FUN_013a882c(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_4[4];
  uVar2 = param_4[5];
  if (uVar1 <= uVar2) {
    uVar3 = param_4[3];
    if (*param_4 - 1U < 2) {
      if ((uVar1 < uVar3) && (*(char *)(param_2 + (uint)*(byte *)(param_4[2] + uVar1)) != '\0')) {
LAB_013a88c8:
        param_1[1] = uVar1;
        param_1[2] = uVar1 + 1;
        param_1[3] = 0;
        *param_1 = 1;
        return;
      }
    }
    else {
      if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar3,&DAT_01894828);
      }
      if (uVar2 != uVar1) {
        iVar4 = 0;
        while (*(char *)(param_2 + (uint)*(byte *)(param_4[2] + uVar1 + iVar4)) == '\0') {
          iVar4 = iVar4 + 1;
          if (uVar2 - uVar1 == iVar4) {
            *param_1 = 0;
            return;
          }
        }
        uVar1 = iVar4 + uVar1;
        if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
        }
        goto LAB_013a88c8;
      }
    }
  }
  *param_1 = 0;
  return;
}

