// FUN_013ab788 @ 013ab788 size=196 calls_out=2 calls_in=0
// strings: 

uint FUN_013ab788(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  uVar1 = 0;
  if (uVar2 <= (uint)param_3[5]) {
    if (*param_3 - 1U < 2) {
      if (uVar2 < (uint)param_3[3]) {
        return (uint)(*(char *)(param_1 + 4) == *(char *)(param_3[2] + uVar2) ||
                     *(char *)(param_1 + 5) == *(char *)(param_3[2] + uVar2));
      }
    }
    else {
      FUN_013ac66c(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar2,param_3[5]);
      uVar1 = local_1c;
      if ((local_1c == 1) && (local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
    }
  }
  return uVar1;
}

