// FUN_013a84e8 @ 013a84e8 size=272 calls_out=4 calls_in=0
// strings: 

void FUN_013a84e8(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar3 = param_3[4];
  uVar4 = param_3[5];
  if (uVar3 <= uVar4) {
    if (*param_3 - 1U < 2) {
      FUN_013c8af0(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar3,uVar4);
    }
    else {
      FUN_013c8974(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar3,uVar4);
    }
    bVar1 = false;
    if ((local_1c != 0) && (bVar1 = true, local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
    if (bVar1) {
      if (param_4[1] == 0) {
        local_18 = 0;
        local_1c = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_1c,&DAT_018943f8,&DAT_018943e8);
      }
      if (*(char *)*param_4 == '\0') {
        iVar2 = param_4[2];
        *(char *)*param_4 = '\x01';
        param_4[2] = iVar2 + 1;
      }
    }
  }
  return;
}

