// FUN_01a1b2a0 @ 01a1b2a0 size=174 calls_out=3 calls_in=0
// strings: 

void FUN_01a1b2a0(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_r8;
  int unaff_pc;
  bool bVar5;
  undefined1 auStack_c0 [104];
  int *local_58;
  int *local_54;
  undefined1 local_44;
  
  piVar3 = (int *)param_1[1];
  do {
    iVar2 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar2 + 1;
  if (-1 < iVar2) {
    piVar4 = (int *)*param_1;
    do {
      iVar2 = *piVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar5);
    *piVar4 = iVar2 + 1;
    if (-1 < iVar2) {
      FUN_01bed4e2(auStack_c0,param_2,0x48);
      local_44 = 0;
      local_58 = piVar3;
      local_54 = piVar4;
      iVar2 = thunk_FUN_01be5118(0xb0);
      bVar5 = true;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0xb0);
      }
      FUN_01bed4e2(iVar2,auStack_c0,0xb0);
                    /* WARNING: Could not recover jumptable at 0x01a1b012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_r8 + 8))((unaff_pc + -0xe80000) - (uint)!bVar5,&UNK_0030f2fc);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a1b344);
  (*pcVar1)();
}

