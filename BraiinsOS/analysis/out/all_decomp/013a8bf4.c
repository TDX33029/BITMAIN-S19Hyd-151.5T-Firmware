// FUN_013a8bf4 @ 013a8bf4 size=308 calls_out=3 calls_in=0
// strings: 

void FUN_013a8bf4(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  if (uVar2 <= uVar3) {
    uVar4 = param_3[3];
    if (*param_3 - 1U < 2) {
      if ((uVar2 < uVar4) && (*(char *)(param_1 + (uint)*(byte *)(param_3[2] + uVar2)) != '\0')) {
LAB_013a8c8c:
        if (param_4[1] == 0) {
          local_14 = 0;
          local_18 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_18,&DAT_018943f8,&DAT_018943e8);
        }
        if (*(char *)*param_4 == '\0') {
          iVar1 = param_4[2];
          *(char *)*param_4 = '\x01';
          param_4[2] = iVar1 + 1;
          return;
        }
      }
    }
    else {
      if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar4,&DAT_01894828);
      }
      if (uVar3 != uVar2) {
        iVar1 = 0;
        do {
          if (*(char *)(param_1 + (uint)*(byte *)(param_3[2] + uVar2 + iVar1)) != '\0') {
            if (iVar1 + uVar2 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
            }
            goto LAB_013a8c8c;
          }
          iVar1 = iVar1 + 1;
        } while (uVar3 - uVar2 != iVar1);
      }
    }
  }
  return;
}

