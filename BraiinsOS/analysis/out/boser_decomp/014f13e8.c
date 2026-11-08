// FUN_014f13e8 @ 014f13e8 size=208 calls_out=4 calls_in=1
// strings: 

void FUN_014f13e8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1a0;
  int local_19c;
  int iStack_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_78;
  undefined4 local_74;
  
  iVar3 = *param_2;
  iVar2 = param_2[1];
  if (iVar3 == -0x7fffffeb) {
    *param_1 = 3;
    param_1[1] = iVar2;
  }
  else {
    iStack_198 = param_2[2];
    iStack_194 = param_2[3];
    local_1a0 = iVar3;
    local_19c = iVar2;
    FUN_014de810(&local_78,&local_1a0);
    if (local_78 == 2) {
      local_18c = local_74;
      local_190 = 3;
      FUN_014f2098(&local_190);
      iVar1 = 0x15;
      if (iVar3 < 0) {
        iVar1 = iVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x014f1474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_014f1478 + *(int *)(&DAT_014f1478 + iVar1 * 4)))(iVar2);
      return;
    }
    FUN_01bed4e2((uint)&local_190 | 4,&local_78,0x48);
    local_190 = 2;
    FUN_01bed4e2(param_1,&local_190,0x8c);
    FUN_014f1f78(&local_1a0);
  }
  return;
}

