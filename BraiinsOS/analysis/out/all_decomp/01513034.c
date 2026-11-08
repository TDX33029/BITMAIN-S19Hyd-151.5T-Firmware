// FUN_01513034 @ 01513034 size=104 calls_out=1 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x01513244) */

undefined4 FUN_01513034(uint *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  
  local_1c = 0;
  local_24[0] = 0;
  if ((param_2 & 0xfffffff) == 0) {
    FUN_0156bc34(local_24);
    return 0;
  }
  iVar1 = 4;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0151307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_01513080 + *(int *)(&DAT_01513080 + iVar1 * 4)))();
  return uVar2;
}

