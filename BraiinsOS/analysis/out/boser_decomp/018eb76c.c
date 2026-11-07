// FUN_018eb76c @ 018eb76c size=104 calls_out=1 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x018eb818) */

undefined4 FUN_018eb76c(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c [2];
  undefined4 local_14;
  
  local_14 = 0;
  local_1c[0] = 0;
  if ((param_2 & 0xfffffff) == 0) {
    FUN_0192f740(local_1c);
    return 0;
  }
  iVar2 = 4;
  if (0x80000000 < *param_1) {
    iVar2 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x018eb7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_018eb7b8 + *(int *)(&DAT_018eb7b8 + iVar2 * 4)))(0x22);
  return uVar1;
}

