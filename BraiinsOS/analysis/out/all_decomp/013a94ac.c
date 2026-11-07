// FUN_013a94ac @ 013a94ac size=292 calls_out=4 calls_in=0
// strings: 

void FUN_013a94ac(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  uVar4 = param_3[5];
  if (uVar2 <= uVar4) {
    if (*param_3 - 1U < 2) {
      FUN_013c85b8(&local_1c,param_1,param_3[2],param_3[3],uVar2,uVar4);
    }
    else {
      FUN_013c8468(&local_1c,param_1,param_3[2],param_3[3],uVar2,uVar4);
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
        iVar3 = param_4[2];
        *(char *)*param_4 = '\x01';
        param_4[2] = iVar3 + 1;
      }
    }
  }
  return;
}

